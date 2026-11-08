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

// Function: entry_001e2870
// Address: 0x1e2870 - 0x1e2884
void entry_001e2870_0x1e2870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2870_0x1e2870");
#endif

    ctx->pc = 0x1e2870u;

    // 0x1e2870: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1e2870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e2874: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e2874u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1e2878: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e2878u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e287c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E287Cu;
    {
        const bool branch_taken_0x1e287c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e287c) {
            ctx->pc = 0x1E28A4u;
            return;
        }
    }
    ctx->pc = 0x1E2884u;
}
