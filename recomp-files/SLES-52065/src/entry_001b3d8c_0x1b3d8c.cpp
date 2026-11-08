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

// Function: entry_001b3d8c
// Address: 0x1b3d8c - 0x1b3d98
void entry_001b3d8c_0x1b3d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3d8c_0x1b3d8c");
#endif

    ctx->pc = 0x1b3d8cu;

    // 0x1b3d8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b3d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3d90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B3D90u;
    {
        const bool branch_taken_0x1b3d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3d90) {
            ctx->pc = 0x1B3DE4u;
            return;
        }
    }
    ctx->pc = 0x1B3D98u;
}
