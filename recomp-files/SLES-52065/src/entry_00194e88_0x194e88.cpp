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

// Function: entry_00194e88
// Address: 0x194e88 - 0x194ea0
void entry_00194e88_0x194e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194e88_0x194e88");
#endif

    ctx->pc = 0x194e88u;

    // 0x194e88: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194e8c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194e90: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x194E90u;
    {
        const bool branch_taken_0x194e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x194E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E90u;
        // 0x194e94: 0x8e030030  lw          $v1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e90) {
            ctx->pc = 0x194EA0u;
            return;
        }
    }
    ctx->pc = 0x194E98u;
    // 0x194e98: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x194E98u;
    {
        const bool branch_taken_0x194e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e98) {
            ctx->pc = 0x194F0Cu;
            return;
        }
    }
    ctx->pc = 0x194EA0u;
}
