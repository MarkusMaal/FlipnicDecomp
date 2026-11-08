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

// Function: entry_001be028
// Address: 0x1be028 - 0x1be040
void entry_001be028_0x1be028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be028_0x1be028");
#endif

    ctx->pc = 0x1be028u;

    // 0x1be028: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1be02c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1be030: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x1be030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1be034: 0x124082b  sltu        $at, $t1, $a0
    ctx->pc = 0x1be034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1be038: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE038u;
    {
        const bool branch_taken_0x1be038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be038) {
            ctx->pc = 0x1BE058u;
            return;
        }
    }
    ctx->pc = 0x1BE040u;
}
