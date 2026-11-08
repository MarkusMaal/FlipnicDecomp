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

// Function: entry_00201a84
// Address: 0x201a84 - 0x201abc
void entry_00201a84_0x201a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201a84_0x201a84");
#endif

    switch (ctx->pc) {
        case 0x201aa8u: goto label_201aa8;
        default: break;
    }

    ctx->pc = 0x201a84u;

label_201a84:
    // 0x201a84: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x201a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201a88: 0x0  nop
    ctx->pc = 0x201a88u;
    // NOP
    // 0x201a8c: 0x0  nop
    ctx->pc = 0x201a8cu;
    // NOP
    // 0x201a90: 0x0  nop
    ctx->pc = 0x201a90u;
    // NOP
    // 0x201a94: 0x0  nop
    ctx->pc = 0x201a94u;
    // NOP
    // 0x201a98: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x201A98u;
    {
        const bool branch_taken_0x201a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201a98) {
            ctx->pc = 0x201A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201A98u;
            // 0x201a9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201a84;
        }
    }
    ctx->pc = 0x201AA0u;
    // 0x201aa0: 0xc080702  jal         func_201C08
    ctx->pc = 0x201AA0u;
    SET_GPR_U32(ctx, 31, 0x201AA8u);
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x201AA0u, 0x201AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201AA8u;
label_201aa8:
    // 0x201aa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201aac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x201aacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x201AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AB4u;
        // 0x201ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201ABCu;
}
