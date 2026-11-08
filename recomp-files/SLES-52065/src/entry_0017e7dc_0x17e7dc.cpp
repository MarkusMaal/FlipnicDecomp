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

// Function: entry_0017e7dc
// Address: 0x17e7dc - 0x17e7e4
void entry_0017e7dc_0x17e7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e7dc_0x17e7dc");
#endif

    ctx->pc = 0x17e7dcu;

    // 0x17e7dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E7DCu;
    {
        const bool branch_taken_0x17e7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e7dc) {
            ctx->pc = 0x17E7E8u;
            return;
        }
    }
    ctx->pc = 0x17E7E4u;
}
