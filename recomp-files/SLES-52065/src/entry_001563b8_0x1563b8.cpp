#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001563b8
// Address: 0x1563b8 - 0x1563e4
void entry_001563b8_0x1563b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001563b8_0x1563b8");
#endif

    switch (ctx->pc) {
        case 0x1563c0u: goto label_1563c0;
        default: break;
    }

    ctx->pc = 0x1563b8u;

    // 0x1563b8: 0xc055334  jal         func_154CD0
    ctx->pc = 0x1563B8u;
    SET_GPR_U32(ctx, 31, 0x1563C0u);
    ctx->pc = 0x1563BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1563B8u;
    // 0x1563bc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x1563B8u, 0x1563C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1563C0u;
label_1563c0:
    // 0x1563c0: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1563c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1563c4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1563c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1563c8: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1563c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1563cc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1563ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1563d0: 0x0  nop
    ctx->pc = 0x1563d0u;
    // NOP
    // 0x1563d4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1563D4u;
    {
        const bool branch_taken_0x1563d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1563D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563D4u;
        // 0x1563d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563d4) {
            ctx->pc = 0x1563E4u;
            return;
        }
    }
    ctx->pc = 0x1563DCu;
    // 0x1563dc: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x1563DCu;
    {
        const bool branch_taken_0x1563dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1563dc) {
            ctx->pc = 0x1569B8u;
            return;
        }
    }
    ctx->pc = 0x1563E4u;
}
