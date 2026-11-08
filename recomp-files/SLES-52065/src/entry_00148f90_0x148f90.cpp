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

// Function: entry_00148f90
// Address: 0x148f90 - 0x148f98
void entry_00148f90_0x148f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148f90_0x148f90");
#endif

    ctx->pc = 0x148f90u;

    // 0x148f90: 0x1650fff5  bne         $s2, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x148F90u;
    {
        const bool branch_taken_0x148f90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x148f90) {
            ctx->pc = 0x148F68u;
            return;
        }
    }
    ctx->pc = 0x148F98u;
}
