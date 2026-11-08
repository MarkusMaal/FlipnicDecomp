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

// Function: FUN_00132c00
// Address: 0x132c00 - 0x132c28
void FUN_00132c00_0x132c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132c00_0x132c00");
#endif

    ctx->pc = 0x132c00u;

    // 0x132c00: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x132c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132c04: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x132c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132c08: 0x11230005  beq         $t1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x132C08u;
    {
        const bool branch_taken_0x132c08 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x132c08) {
            ctx->pc = 0x132C20u;
            goto label_132c20;
        }
    }
    ctx->pc = 0x132C10u;
    // 0x132c10: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x132c10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x132c14: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x132c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x132c18: 0x1503fff7  bne         $t0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x132C18u;
    {
        const bool branch_taken_0x132c18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x132c18) {
            ctx->pc = 0x132BF8u;
            return;
        }
    }
    ctx->pc = 0x132C20u;
label_132c20:
    // 0x132c20: 0x3e00008  jr          $ra
    ctx->pc = 0x132C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C20u;
        // 0x132c24: 0xac890000  sw          $t1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132C28u;
}
