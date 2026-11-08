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

// Function: entry_001e2ad0
// Address: 0x1e2ad0 - 0x1e2ae4
void entry_001e2ad0_0x1e2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2ad0_0x1e2ad0");
#endif

    ctx->pc = 0x1e2ad0u;

    // 0x1e2ad0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1e2ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e2ad4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e2ad4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1e2ad8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e2ad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e2adc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2ADCu;
    {
        const bool branch_taken_0x1e2adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2adc) {
            ctx->pc = 0x1E2B04u;
            return;
        }
    }
    ctx->pc = 0x1E2AE4u;
}
