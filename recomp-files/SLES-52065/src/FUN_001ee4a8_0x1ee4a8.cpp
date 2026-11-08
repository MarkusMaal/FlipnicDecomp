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

// Function: FUN_001ee4a8
// Address: 0x1ee4a8 - 0x1ee4f4
void FUN_001ee4a8_0x1ee4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee4a8_0x1ee4a8");
#endif

    switch (ctx->pc) {
        case 0x1ee4b8u: goto label_1ee4b8;
        case 0x1ee4c8u: goto label_1ee4c8;
        default: break;
    }

    ctx->pc = 0x1ee4a8u;

    // 0x1ee4a8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1ee4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1ee4ac: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1EE4ACu;
    {
        const bool branch_taken_0x1ee4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4ac) {
            ctx->pc = 0x1EE4ECu;
            goto label_1ee4ec;
        }
    }
    ctx->pc = 0x1EE4B4u;
    // 0x1ee4b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ee4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1ee4b8:
    // 0x1ee4b8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE4B8u;
    {
        const bool branch_taken_0x1ee4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4b8) {
            ctx->pc = 0x1EE4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4B8u;
            // 0x1ee4bc: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4E4u;
            goto label_1ee4e4;
        }
    }
    ctx->pc = 0x1EE4C0u;
    // 0x1ee4c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ee4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ee4c4: 0x0  nop
    ctx->pc = 0x1ee4c4u;
    // NOP
label_1ee4c8:
    // 0x1ee4c8: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE4C8u;
    {
        const bool branch_taken_0x1ee4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ee4c8) {
            ctx->pc = 0x1EE4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4C8u;
            // 0x1ee4cc: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4D8u;
            goto label_1ee4d8;
        }
    }
    ctx->pc = 0x1EE4D0u;
    // 0x1ee4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4D0u;
        // 0x1ee4d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE4D8u;
label_1ee4d8:
    // 0x1ee4d8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EE4D8u;
    {
        const bool branch_taken_0x1ee4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4d8) {
            ctx->pc = 0x1EE4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4D8u;
            // 0x1ee4dc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee4c8;
        }
    }
    ctx->pc = 0x1EE4E0u;
    // 0x1ee4e0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1ee4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1ee4e4:
    // 0x1ee4e4: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EE4E4u;
    {
        const bool branch_taken_0x1ee4e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4e4) {
            ctx->pc = 0x1EE4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4E4u;
            // 0x1ee4e8: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee4b8;
        }
    }
    ctx->pc = 0x1EE4ECu;
label_1ee4ec:
    // 0x1ee4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE4ECu;
        // 0x1ee4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE4F4u;
}
