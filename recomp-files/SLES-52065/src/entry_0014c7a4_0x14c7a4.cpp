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

// Function: entry_0014c7a4
// Address: 0x14c7a4 - 0x14c7b0
void entry_0014c7a4_0x14c7a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c7a4_0x14c7a4");
#endif

    ctx->pc = 0x14c7a4u;

    // 0x14c7a4: 0x0  nop
    ctx->pc = 0x14c7a4u;
    // NOP
    // 0x14c7a8: 0x1611fff8  bne         $s0, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14C7A8u;
    {
        const bool branch_taken_0x14c7a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x14c7a8) {
            ctx->pc = 0x14C78Cu;
            return;
        }
    }
    ctx->pc = 0x14C7B0u;
}
