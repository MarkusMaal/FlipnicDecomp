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

// Function: entry_00134584
// Address: 0x134584 - 0x134594
void entry_00134584_0x134584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134584_0x134584");
#endif

    ctx->pc = 0x134584u;

    // 0x134584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134584u;
    {
        const bool branch_taken_0x134584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134584) {
            ctx->pc = 0x134594u;
            return;
        }
    }
    ctx->pc = 0x13458Cu;
    // 0x13458c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x13458cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134590: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x134590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x134594u;
}
