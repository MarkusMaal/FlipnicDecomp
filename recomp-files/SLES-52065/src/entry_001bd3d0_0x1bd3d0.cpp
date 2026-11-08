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

// Function: entry_001bd3d0
// Address: 0x1bd3d0 - 0x1bd3d8
void entry_001bd3d0_0x1bd3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3d0_0x1bd3d0");
#endif

    ctx->pc = 0x1bd3d0u;

    // 0x1bd3d0: 0x1650fff5  bne         $s2, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BD3D0u;
    {
        const bool branch_taken_0x1bd3d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x1bd3d0) {
            ctx->pc = 0x1BD3A8u;
            return;
        }
    }
    ctx->pc = 0x1BD3D8u;
}
