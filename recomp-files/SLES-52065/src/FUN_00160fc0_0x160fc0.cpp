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

// Function: FUN_00160fc0
// Address: 0x160fc0 - 0x16100c
void FUN_00160fc0_0x160fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160fc0_0x160fc0");
#endif

    ctx->pc = 0x160fc0u;

    // 0x160fc0: 0x14c0000b  bnez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x160FC0u;
    {
        const bool branch_taken_0x160fc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x160fc0) {
            ctx->pc = 0x160FF0u;
            goto label_160ff0;
        }
    }
    ctx->pc = 0x160FC8u;
    // 0x160fc8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x160fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x160fcc: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160FCCu;
    {
        const bool branch_taken_0x160fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x160fcc) {
            ctx->pc = 0x160FE8u;
            goto label_160fe8;
        }
    }
    ctx->pc = 0x160FD4u;
    // 0x160fd4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x160fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x160fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160fdc: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x160fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x160fe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x160FE0u;
    {
        const bool branch_taken_0x160fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FE0u;
        // 0x160fe4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fe0) {
            ctx->pc = 0x161004u;
            goto label_161004;
        }
    }
    ctx->pc = 0x160FE8u;
label_160fe8:
    // 0x160fe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160FE8u;
    {
        const bool branch_taken_0x160fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FE8u;
        // 0x160fec: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fe8) {
            ctx->pc = 0x161004u;
            goto label_161004;
        }
    }
    ctx->pc = 0x160FF0u;
label_160ff0:
    // 0x160ff0: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x160ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ff8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x160ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x160ffc: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x160ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x161000: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x161000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_161004:
    // 0x161004: 0x3e00008  jr          $ra
    ctx->pc = 0x161004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16100Cu;
}
