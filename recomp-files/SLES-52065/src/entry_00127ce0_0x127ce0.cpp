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

// Function: entry_00127ce0
// Address: 0x127ce0 - 0x127cf8
void entry_00127ce0_0x127ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127ce0_0x127ce0");
#endif

    ctx->pc = 0x127ce0u;

    // 0x127ce0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x127ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x127ce4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x127ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127ce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127CE8u;
    {
        const bool branch_taken_0x127ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CE8u;
        // 0x127cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ce8) {
            ctx->pc = 0x127CF8u;
            return;
        }
    }
    ctx->pc = 0x127CF0u;
    // 0x127cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x127CF0u;
    {
        const bool branch_taken_0x127cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127cf0) {
            ctx->pc = 0x127D0Cu;
            return;
        }
    }
    ctx->pc = 0x127CF8u;
}
