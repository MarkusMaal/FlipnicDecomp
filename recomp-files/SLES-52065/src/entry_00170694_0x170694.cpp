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

// Function: entry_00170694
// Address: 0x170694 - 0x1706a0
void entry_00170694_0x170694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170694_0x170694");
#endif

    ctx->pc = 0x170694u;

    // 0x170694: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x170694u;
    {
        const bool branch_taken_0x170694 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x170694) {
            ctx->pc = 0x1706A0u;
            return;
        }
    }
    ctx->pc = 0x17069Cu;
    // 0x17069c: 0xac800238  sw          $zero, 0x238($a0)
    ctx->pc = 0x17069cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 0));
    ctx->pc = 0x1706a0u;
}
