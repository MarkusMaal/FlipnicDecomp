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

// Function: entry_00170660
// Address: 0x170660 - 0x17066c
void entry_00170660_0x170660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170660_0x170660");
#endif

    ctx->pc = 0x170660u;

    // 0x170660: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x170660u;
    {
        const bool branch_taken_0x170660 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x170660) {
            ctx->pc = 0x17066Cu;
            return;
        }
    }
    ctx->pc = 0x170668u;
    // 0x170668: 0xac800234  sw          $zero, 0x234($a0)
    ctx->pc = 0x170668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
    ctx->pc = 0x17066cu;
}
