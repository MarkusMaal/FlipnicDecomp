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

// Function: entry_0014e86c
// Address: 0x14e86c - 0x14e87c
void entry_0014e86c_0x14e86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e86c_0x14e86c");
#endif

    ctx->pc = 0x14e86cu;

    // 0x14e86c: 0x0  nop
    ctx->pc = 0x14e86cu;
    // NOP
    // 0x14e870: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e874: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14E874u;
    {
        const bool branch_taken_0x14e874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e874) {
            ctx->pc = 0x14E84Cu;
            return;
        }
    }
    ctx->pc = 0x14E87Cu;
}
