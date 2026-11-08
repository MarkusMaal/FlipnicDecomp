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

// Function: entry_00141b94
// Address: 0x141b94 - 0x141ba8
void entry_00141b94_0x141b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b94_0x141b94");
#endif

    ctx->pc = 0x141b94u;

    // 0x141b94: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x141b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x141b98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141B98u;
    {
        const bool branch_taken_0x141b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b98) {
            ctx->pc = 0x141BA8u;
            return;
        }
    }
    ctx->pc = 0x141BA0u;
    // 0x141ba0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x141BA0u;
    {
        const bool branch_taken_0x141ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BA0u;
        // 0x141ba4: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ba0) {
            ctx->pc = 0x141BC8u;
            return;
        }
    }
    ctx->pc = 0x141BA8u;
}
