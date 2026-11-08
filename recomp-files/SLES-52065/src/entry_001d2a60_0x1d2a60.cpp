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

// Function: entry_001d2a60
// Address: 0x1d2a60 - 0x1d2a9c
void entry_001d2a60_0x1d2a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a60_0x1d2a60");
#endif

    switch (ctx->pc) {
        case 0x1d2a74u: goto label_1d2a74;
        case 0x1d2a84u: goto label_1d2a84;
        default: break;
    }

    ctx->pc = 0x1d2a60u;

    // 0x1d2a60: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1d2a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a6c: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A74u);
    ctx->pc = 0x1D2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A6Cu;
    // 0x1d2a70: 0x24c602f0  addiu       $a2, $a2, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2A6Cu, 0x1D2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A74u;
label_1d2a74:
    // 0x1d2a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a7c: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A84u);
    ctx->pc = 0x1D2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A7Cu;
    // 0x1d2a80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2A7Cu, 0x1D2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A84u;
label_1d2a84:
    // 0x1d2a84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a88: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370340u));
    // 0x1d2a8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2a90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a94: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D2A94u;
    {
        const bool branch_taken_0x1d2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A94u;
        // 0x1d2a98: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a94) {
            ctx->pc = 0x1D2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1D2A9Cu;
}
