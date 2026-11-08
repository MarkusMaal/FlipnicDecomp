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

// Function: entry_001b7ee4
// Address: 0x1b7ee4 - 0x1b7f10
void entry_001b7ee4_0x1b7ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7ee4_0x1b7ee4");
#endif

    switch (ctx->pc) {
        case 0x1b7ef0u: goto label_1b7ef0;
        default: break;
    }

    ctx->pc = 0x1b7ee4u;

    // 0x1b7ee4: 0x0  nop
    ctx->pc = 0x1b7ee4u;
    // NOP
    // 0x1b7ee8: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7EE8u;
    SET_GPR_U32(ctx, 31, 0x1B7EF0u);
    ctx->pc = 0x1B7EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EE8u;
    // 0x1b7eec: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7EE8u, 0x1B7EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7EF0u;
label_1b7ef0:
    // 0x1b7ef0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1b7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b7ef4: 0x1462fff3  bne         $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B7EF4u;
    {
        const bool branch_taken_0x1b7ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7ef4) {
            ctx->pc = 0x1B7EC4u;
            return;
        }
    }
    ctx->pc = 0x1B7EFCu;
    // 0x1b7efc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f08: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F08u;
        // 0x1b7f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F10u;
}
