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

// Function: entry_0011b7f8
// Address: 0x11b7f8 - 0x11b80c
void entry_0011b7f8_0x11b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7f8_0x11b7f8");
#endif

    ctx->pc = 0x11b7f8u;

    // 0x11b7f8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B7F8u;
    {
        const bool branch_taken_0x11b7f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b7f8) {
            ctx->pc = 0x11B80Cu;
            return;
        }
    }
    ctx->pc = 0x11B800u;
    // 0x11b800: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x11b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11b804: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11B804u;
    {
        const bool branch_taken_0x11b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B804u;
        // 0x11b808: 0xaea300fc  sw          $v1, 0xFC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b804) {
            ctx->pc = 0x11B824u;
            return;
        }
    }
    ctx->pc = 0x11B80Cu;
}
