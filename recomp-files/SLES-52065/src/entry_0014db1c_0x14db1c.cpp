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

// Function: entry_0014db1c
// Address: 0x14db1c - 0x14db28
void entry_0014db1c_0x14db1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db1c_0x14db1c");
#endif

    ctx->pc = 0x14db1cu;

    // 0x14db1c: 0x284082b  sltu        $at, $s4, $a0
    ctx->pc = 0x14db1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14db20: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DB20u;
    {
        const bool branch_taken_0x14db20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db20) {
            ctx->pc = 0x14DB58u;
            return;
        }
    }
    ctx->pc = 0x14DB28u;
}
