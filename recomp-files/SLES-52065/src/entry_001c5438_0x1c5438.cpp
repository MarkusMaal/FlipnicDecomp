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

// Function: entry_001c5438
// Address: 0x1c5438 - 0x1c545c
void entry_001c5438_0x1c5438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5438_0x1c5438");
#endif

    ctx->pc = 0x1c5438u;

    // 0x1c5438: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c543c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c5440: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c5440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c5444: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c5448: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5448u;
    {
        const bool branch_taken_0x1c5448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5448) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C5450u;
    // 0x1c5450: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x1c5450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
    // 0x1c5454: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C5454u;
    {
        const bool branch_taken_0x1c5454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5454u;
        // 0x1c5458: 0xae05006c  sw          $a1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5454) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C545Cu;
}
