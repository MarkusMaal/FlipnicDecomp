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

// Function: entry_00194398
// Address: 0x194398 - 0x1943a0
void entry_00194398_0x194398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194398_0x194398");
#endif

    ctx->pc = 0x194398u;

    // 0x194398: 0x10a0067a  beqz        $a1, . + 4 + (0x67A << 2)
    ctx->pc = 0x194398u;
    {
        const bool branch_taken_0x194398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194398) {
            ctx->pc = 0x195D84u;
            return;
        }
    }
    ctx->pc = 0x1943A0u;
}
