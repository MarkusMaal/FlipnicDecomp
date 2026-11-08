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

// Function: entry_0013c684
// Address: 0x13c684 - 0x13c68c
void entry_0013c684_0x13c684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c684_0x13c684");
#endif

    ctx->pc = 0x13c684u;

    // 0x13c684: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13C684u;
    {
        const bool branch_taken_0x13c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c684) {
            ctx->pc = 0x13C74Cu;
            return;
        }
    }
    ctx->pc = 0x13C68Cu;
}
