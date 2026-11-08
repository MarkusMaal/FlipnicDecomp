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

// Function: entry_0012e8b4
// Address: 0x12e8b4 - 0x12e8c0
void entry_0012e8b4_0x12e8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e8b4_0x12e8b4");
#endif

    ctx->pc = 0x12e8b4u;

    // 0x12e8b4: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x12e8b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12e8b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E8B8u;
    {
        const bool branch_taken_0x12e8b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e8b8) {
            ctx->pc = 0x12E8E0u;
            return;
        }
    }
    ctx->pc = 0x12E8C0u;
}
