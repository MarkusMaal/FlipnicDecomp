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

// Function: entry_001977e8
// Address: 0x1977e8 - 0x1977f4
void entry_001977e8_0x1977e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001977e8_0x1977e8");
#endif

    ctx->pc = 0x1977e8u;

    // 0x1977e8: 0x10a00049  beqz        $a1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1977E8u;
    {
        const bool branch_taken_0x1977e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977e8) {
            ctx->pc = 0x197910u;
            return;
        }
    }
    ctx->pc = 0x1977F0u;
    // 0x1977f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1977f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1977f4u;
}
