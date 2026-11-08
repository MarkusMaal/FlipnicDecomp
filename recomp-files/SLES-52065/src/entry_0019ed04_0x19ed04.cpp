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

// Function: entry_0019ed04
// Address: 0x19ed04 - 0x19ed1c
void entry_0019ed04_0x19ed04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ed04_0x19ed04");
#endif

    ctx->pc = 0x19ed04u;

    // 0x19ed04: 0x9043282a  lbu         $v1, 0x282A($v0)
    ctx->pc = 0x19ed04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10282)));
    // 0x19ed08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ED08u;
    {
        const bool branch_taken_0x19ed08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ed08) {
            ctx->pc = 0x19ED1Cu;
            return;
        }
    }
    ctx->pc = 0x19ED10u;
    // 0x19ed10: 0x9042282c  lbu         $v0, 0x282C($v0)
    ctx->pc = 0x19ed10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10284)));
    // 0x19ed14: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x19ED14u;
    {
        const bool branch_taken_0x19ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed14) {
            ctx->pc = 0x19EE6Cu;
            return;
        }
    }
    ctx->pc = 0x19ED1Cu;
}
