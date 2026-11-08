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

// Function: FUN_001a7020
// Address: 0x1a7020 - 0x1a7054
void FUN_001a7020_0x1a7020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7020_0x1a7020");
#endif

    ctx->pc = 0x1a7020u;

    // 0x1a7020: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1a7020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a7024: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x1a7024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7028: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a7028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a702c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A702Cu;
    {
        const bool branch_taken_0x1a702c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a702c) {
            ctx->pc = 0x1A704Cu;
            goto label_1a704c;
        }
    }
    ctx->pc = 0x1A7034u;
    // 0x1a7034: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a7034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a7038: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7038u;
    {
        const bool branch_taken_0x1a7038 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1A703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7038u;
        // 0x1a703c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7038) {
            ctx->pc = 0x1A704Cu;
            goto label_1a704c;
        }
    }
    ctx->pc = 0x1A7040u;
    // 0x1a7040: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a7040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a7044: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1a7044u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1a7048: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a7048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1a704c:
    // 0x1a704c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7054u;
}
