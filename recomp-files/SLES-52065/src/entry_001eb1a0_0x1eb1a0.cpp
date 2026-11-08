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

// Function: entry_001eb1a0
// Address: 0x1eb1a0 - 0x1eb1b4
void entry_001eb1a0_0x1eb1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb1a0_0x1eb1a0");
#endif

    ctx->pc = 0x1eb1a0u;

    // 0x1eb1a0: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x1eb1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1eb1a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eb1a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eb1a8: 0x69182b  sltu        $v1, $v1, $t1
    ctx->pc = 0x1eb1a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1eb1ac: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EB1ACu;
    {
        const bool branch_taken_0x1eb1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1ac) {
            ctx->pc = 0x1EB188u;
            return;
        }
    }
    ctx->pc = 0x1EB1B4u;
}
