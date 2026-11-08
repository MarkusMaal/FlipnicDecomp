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

// Function: entry_001598b0
// Address: 0x1598b0 - 0x1598e0
void entry_001598b0_0x1598b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001598b0_0x1598b0");
#endif

    switch (ctx->pc) {
        case 0x1598dcu: goto label_1598dc;
        default: break;
    }

    ctx->pc = 0x1598b0u;

    // 0x1598b0: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x1598b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1598b4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1598b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1598b8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1598b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1598bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1598bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1598c0: 0x0  nop
    ctx->pc = 0x1598c0u;
    // NOP
    // 0x1598c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1598c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1598c8: 0x0  nop
    ctx->pc = 0x1598c8u;
    // NOP
    // 0x1598cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1598CCu;
    {
        const bool branch_taken_0x1598cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1598D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1598CCu;
        // 0x1598d0: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598cc) {
            ctx->pc = 0x1598E0u;
            return;
        }
    }
    ctx->pc = 0x1598D4u;
    // 0x1598d4: 0xc042118  jal         func_108460
    ctx->pc = 0x1598D4u;
    SET_GPR_U32(ctx, 31, 0x1598DCu);
    ctx->pc = 0x1598D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1598D4u;
    // 0x1598d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1598D4u, 0x1598DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598DCu;
label_1598dc:
    // 0x1598dc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    ctx->pc = 0x1598e0u;
}
