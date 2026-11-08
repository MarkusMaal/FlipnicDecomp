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

// Function: entry_00155044
// Address: 0x155044 - 0x15504c
void entry_00155044_0x155044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155044_0x155044");
#endif

    ctx->pc = 0x155044u;

    // 0x155044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155044u;
    {
        const bool branch_taken_0x155044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155044) {
            ctx->pc = 0x155050u;
            return;
        }
    }
    ctx->pc = 0x15504Cu;
}
