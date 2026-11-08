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

// Function: entry_001fe438
// Address: 0x1fe438 - 0x1fe45c
void entry_001fe438_0x1fe438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe438_0x1fe438");
#endif

    ctx->pc = 0x1fe438u;

label_1fe438:
    // 0x1fe438: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1fe438u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fe43c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1fe43cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fe440: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1fe440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1fe444: 0x0  nop
    ctx->pc = 0x1fe444u;
    // NOP
    // 0x1fe448: 0x0  nop
    ctx->pc = 0x1fe448u;
    // NOP
    // 0x1fe44c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE44Cu;
    {
        const bool branch_taken_0x1fe44c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe44c) {
            ctx->pc = 0x1FE438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe438;
        }
    }
    ctx->pc = 0x1FE454u;
    // 0x1fe454: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE454u;
    {
        const bool branch_taken_0x1fe454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe454) {
            ctx->pc = 0x1FE460u;
            return;
        }
    }
    ctx->pc = 0x1FE45Cu;
}
