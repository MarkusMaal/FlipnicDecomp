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

// Function: entry_00127860
// Address: 0x127860 - 0x12786c
void entry_00127860_0x127860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127860_0x127860");
#endif

    ctx->pc = 0x127860u;

    // 0x127860: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x127860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x127864: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x127864u;
    {
        const bool branch_taken_0x127864 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x127864) {
            ctx->pc = 0x127844u;
            return;
        }
    }
    ctx->pc = 0x12786Cu;
}
