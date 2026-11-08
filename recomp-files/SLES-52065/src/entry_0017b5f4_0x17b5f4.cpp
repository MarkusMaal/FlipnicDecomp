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

// Function: entry_0017b5f4
// Address: 0x17b5f4 - 0x17b5fc
void entry_0017b5f4_0x17b5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b5f4_0x17b5f4");
#endif

    ctx->pc = 0x17b5f4u;

    // 0x17b5f4: 0x4a10001  bgez        $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x17B5F4u;
    {
        const bool branch_taken_0x17b5f4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17b5f4) {
            ctx->pc = 0x17B5FCu;
            return;
        }
    }
    ctx->pc = 0x17B5FCu;
}
