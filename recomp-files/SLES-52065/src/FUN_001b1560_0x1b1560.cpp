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

// Function: FUN_001b1560
// Address: 0x1b1560 - 0x1b15a4
void FUN_001b1560_0x1b1560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1560_0x1b1560");
#endif

    ctx->pc = 0x1b1560u;

    // 0x1b1560: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x1b1564: 0x3443544f  ori         $v1, $v0, 0x544F
    ctx->pc = 0x1b1564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1b1568: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b1568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b156c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1570: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b1574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1574u;
    {
        const bool branch_taken_0x1b1574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1574) {
            ctx->pc = 0x1B1588u;
            goto label_1b1588;
        }
    }
    ctx->pc = 0x1B157Cu;
    // 0x1b157c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1b157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1b1580: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b1580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b1584: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b1588:
    // 0x1b1588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1588u;
    {
        const bool branch_taken_0x1b1588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1588) {
            ctx->pc = 0x1B159Cu;
            goto label_1b159c;
        }
    }
    ctx->pc = 0x1B1590u;
    // 0x1b1590: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b1594: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b1594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1b1598: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b1598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b159c:
    // 0x1b159c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B159Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B159Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B15A4u;
}
