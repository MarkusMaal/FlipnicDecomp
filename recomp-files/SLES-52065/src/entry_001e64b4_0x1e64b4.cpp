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

// Function: entry_001e64b4
// Address: 0x1e64b4 - 0x1e64c4
void entry_001e64b4_0x1e64b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e64b4_0x1e64b4");
#endif

    ctx->pc = 0x1e64b4u;

    // 0x1e64b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E64B4u;
    {
        const bool branch_taken_0x1e64b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64b4) {
            ctx->pc = 0x1E64F8u;
            return;
        }
    }
    ctx->pc = 0x1E64BCu;
    // 0x1e64bc: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1E64BCu;
    {
        const bool branch_taken_0x1e64bc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e64bc) {
            ctx->pc = 0x1E64F8u;
            return;
        }
    }
    ctx->pc = 0x1E64C4u;
}
