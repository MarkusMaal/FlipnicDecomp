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

// Function: entry_001adb28
// Address: 0x1adb28 - 0x1adb44
void entry_001adb28_0x1adb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adb28_0x1adb28");
#endif

    ctx->pc = 0x1adb28u;

    // 0x1adb28: 0x8e250690  lw          $a1, 0x690($s1)
    ctx->pc = 0x1adb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1adb2c: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1adb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1adb30: 0x8e2307f0  lw          $v1, 0x7F0($s1)
    ctx->pc = 0x1adb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2032)));
    // 0x1adb34: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1adb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x1adb38: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1adb38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1adb3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADB3Cu;
    {
        const bool branch_taken_0x1adb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB3Cu;
        // 0x1adb40: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb3c) {
            ctx->pc = 0x1ADB4Cu;
            return;
        }
    }
    ctx->pc = 0x1ADB44u;
}
