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

// Function: entry_00196c60
// Address: 0x196c60 - 0x196c84
void entry_00196c60_0x196c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196c60_0x196c60");
#endif

    switch (ctx->pc) {
        case 0x196c68u: goto label_196c68;
        default: break;
    }

    ctx->pc = 0x196c60u;

    // 0x196c60: 0xc057ff8  jal         func_15FFE0
    ctx->pc = 0x196C60u;
    SET_GPR_U32(ctx, 31, 0x196C68u);
    ctx->pc = 0x196C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C60u;
    // 0x196c64: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FFE0u, 0x196C60u, 0x196C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C68u;
label_196c68:
    // 0x196c68: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x196c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196c70: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x196c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x196c74: 0x8c652c10  lw          $a1, 0x2C10($v1)
    ctx->pc = 0x196c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
    // 0x196c78: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x196C78u;
    {
        const bool branch_taken_0x196c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C78u;
        // 0x196c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c78) {
            ctx->pc = 0x196D10u;
            return;
        }
    }
    ctx->pc = 0x196C80u;
    // 0x196c80: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    ctx->pc = 0x196c84u;
}
