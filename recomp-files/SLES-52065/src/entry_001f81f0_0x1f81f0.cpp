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

// Function: entry_001f81f0
// Address: 0x1f81f0 - 0x1f820c
void entry_001f81f0_0x1f81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f81f0_0x1f81f0");
#endif

    ctx->pc = 0x1f81f0u;

label_1f81f0:
    // 0x1f81f0: 0x0  nop
    ctx->pc = 0x1f81f0u;
    // NOP
    // 0x1f81f4: 0x0  nop
    ctx->pc = 0x1f81f4u;
    // NOP
    // 0x1f81f8: 0x0  nop
    ctx->pc = 0x1f81f8u;
    // NOP
    // 0x1f81fc: 0x0  nop
    ctx->pc = 0x1f81fcu;
    // NOP
    // 0x1f8200: 0x0  nop
    ctx->pc = 0x1f8200u;
    // NOP
    // 0x1f8204: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F8204u;
    {
        const bool branch_taken_0x1f8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8204) {
            ctx->pc = 0x1F81F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f81f0;
        }
    }
    ctx->pc = 0x1F820Cu;
}
