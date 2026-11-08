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

// Function: entry_001519b4
// Address: 0x1519b4 - 0x1519bc
void entry_001519b4_0x1519b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001519b4_0x1519b4");
#endif

    ctx->pc = 0x1519b4u;

    // 0x1519b4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1519B4u;
    {
        const bool branch_taken_0x1519b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1519b4) {
            ctx->pc = 0x1519D8u;
            return;
        }
    }
    ctx->pc = 0x1519BCu;
}
