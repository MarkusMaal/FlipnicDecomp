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

// Function: entry_00123030
// Address: 0x123030 - 0x12304c
void entry_00123030_0x123030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123030_0x123030");
#endif

    ctx->pc = 0x123030u;

    // 0x123030: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123034: 0x0  nop
    ctx->pc = 0x123034u;
    // NOP
    // 0x123038: 0x0  nop
    ctx->pc = 0x123038u;
    // NOP
    // 0x12303c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12303Cu;
    {
        const bool branch_taken_0x12303c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12303c) {
            ctx->pc = 0x12302Cu;
            return;
        }
    }
    ctx->pc = 0x123044u;
    // 0x123044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x123044u;
    {
        const bool branch_taken_0x123044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123044u;
        // 0x123048: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123044) {
            ctx->pc = 0x12306Cu;
            return;
        }
    }
    ctx->pc = 0x12304Cu;
}
