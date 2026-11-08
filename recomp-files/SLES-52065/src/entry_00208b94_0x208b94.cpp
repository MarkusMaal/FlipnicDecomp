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

// Function: entry_00208b94
// Address: 0x208b94 - 0x208ba0
void entry_00208b94_0x208b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208b94_0x208b94");
#endif

    ctx->pc = 0x208b94u;

    // 0x208b94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x208B94u;
    {
        const bool branch_taken_0x208b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208b94) {
            ctx->pc = 0x208BE8u;
            return;
        }
    }
    ctx->pc = 0x208B9Cu;
    // 0x208b9c: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    ctx->pc = 0x208ba0u;
}
