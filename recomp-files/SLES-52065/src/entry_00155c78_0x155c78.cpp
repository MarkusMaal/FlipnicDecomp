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

// Function: entry_00155c78
// Address: 0x155c78 - 0x155ca4
void entry_00155c78_0x155c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155c78_0x155c78");
#endif

    switch (ctx->pc) {
        case 0x155c80u: goto label_155c80;
        default: break;
    }

    ctx->pc = 0x155c78u;

    // 0x155c78: 0xc055334  jal         func_154CD0
    ctx->pc = 0x155C78u;
    SET_GPR_U32(ctx, 31, 0x155C80u);
    ctx->pc = 0x155C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C78u;
    // 0x155c7c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x155C78u, 0x155C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C80u;
label_155c80:
    // 0x155c80: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x155c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155c84: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x155c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x155c88: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x155c88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x155c8c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x155c8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x155c90: 0x0  nop
    ctx->pc = 0x155c90u;
    // NOP
    // 0x155c94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x155C94u;
    {
        const bool branch_taken_0x155c94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x155C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C94u;
        // 0x155c98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c94) {
            ctx->pc = 0x155CA4u;
            return;
        }
    }
    ctx->pc = 0x155C9Cu;
    // 0x155c9c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x155C9Cu;
    {
        const bool branch_taken_0x155c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155c9c) {
            ctx->pc = 0x1562C0u;
            return;
        }
    }
    ctx->pc = 0x155CA4u;
}
