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

// Function: entry_0014decc
// Address: 0x14decc - 0x14dedc
void entry_0014decc_0x14decc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014decc_0x14decc");
#endif

    ctx->pc = 0x14deccu;

    // 0x14decc: 0x0  nop
    ctx->pc = 0x14deccu;
    // NOP
    // 0x14ded0: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14ded0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14ded4: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DED4u;
    {
        const bool branch_taken_0x14ded4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ded4) {
            ctx->pc = 0x14DEACu;
            return;
        }
    }
    ctx->pc = 0x14DEDCu;
}
