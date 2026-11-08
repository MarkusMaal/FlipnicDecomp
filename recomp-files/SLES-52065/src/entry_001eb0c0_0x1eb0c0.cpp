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

// Function: entry_001eb0c0
// Address: 0x1eb0c0 - 0x1eb0d4
void entry_001eb0c0_0x1eb0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb0c0_0x1eb0c0");
#endif

    ctx->pc = 0x1eb0c0u;

    // 0x1eb0c0: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb0c4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1eb0c8: 0x166582b  sltu        $t3, $t3, $a2
    ctx->pc = 0x1eb0c8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1eb0cc: 0x1560fff6  bnez        $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EB0CCu;
    {
        const bool branch_taken_0x1eb0cc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0cc) {
            ctx->pc = 0x1EB0A8u;
            return;
        }
    }
    ctx->pc = 0x1EB0D4u;
}
