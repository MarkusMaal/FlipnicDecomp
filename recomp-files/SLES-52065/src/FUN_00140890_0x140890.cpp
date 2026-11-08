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

// Function: FUN_00140890
// Address: 0x140890 - 0x1408d0
void FUN_00140890_0x140890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00140890_0x140890");
#endif

    ctx->pc = 0x140890u;

    // 0x140890: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x140890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x140894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140898: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x140898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x14089c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x14089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1408a0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1408a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1408a4: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1408a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1408a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1408a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1408ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1408acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1408b0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1408b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1408b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1408b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1408b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1408bc: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1408BCu;
    {
        const bool branch_taken_0x1408bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1408C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408BCu;
        // 0x1408c0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408bc) {
            ctx->pc = 0x1408C8u;
            goto label_1408c8;
        }
    }
    ctx->pc = 0x1408C4u;
    // 0x1408c4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1408c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1408c8:
    // 0x1408c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1408C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1408C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1408D0u;
}
