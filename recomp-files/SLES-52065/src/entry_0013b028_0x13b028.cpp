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

// Function: entry_0013b028
// Address: 0x13b028 - 0x13b044
void entry_0013b028_0x13b028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b028_0x13b028");
#endif

    ctx->pc = 0x13b028u;

    // 0x13b028: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B028u;
    {
        const bool branch_taken_0x13b028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b028) {
            ctx->pc = 0x13B044u;
            return;
        }
    }
    ctx->pc = 0x13B030u;
    // 0x13b030: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x13b030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x13b034: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x13b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13b038: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x13b038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b03c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13B03Cu;
    {
        const bool branch_taken_0x13b03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b03c) {
            ctx->pc = 0x13B064u;
            return;
        }
    }
    ctx->pc = 0x13B044u;
}
