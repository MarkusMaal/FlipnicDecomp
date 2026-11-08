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

// Function: entry_001b49f0
// Address: 0x1b49f0 - 0x1b49fc
void entry_001b49f0_0x1b49f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b49f0_0x1b49f0");
#endif

    ctx->pc = 0x1b49f0u;

    // 0x1b49f0: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x1b49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1b49f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B49F4u;
    {
        const bool branch_taken_0x1b49f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49f4) {
            ctx->pc = 0x1B4A18u;
            return;
        }
    }
    ctx->pc = 0x1B49FCu;
}
