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

// Function: entry_00187b64
// Address: 0x187b64 - 0x187b70
void entry_00187b64_0x187b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b64_0x187b64");
#endif

    ctx->pc = 0x187b64u;

    // 0x187b64: 0x0  nop
    ctx->pc = 0x187b64u;
    // NOP
    // 0x187b68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x187B68u;
    {
        const bool branch_taken_0x187b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b68) {
            ctx->pc = 0x187BB0u;
            return;
        }
    }
    ctx->pc = 0x187B70u;
}
