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

// Function: entry_00194884
// Address: 0x194884 - 0x194890
void entry_00194884_0x194884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194884_0x194884");
#endif

    ctx->pc = 0x194884u;

    // 0x194884: 0x0  nop
    ctx->pc = 0x194884u;
    // NOP
    // 0x194888: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194888u;
    {
        const bool branch_taken_0x194888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194888) {
            ctx->pc = 0x1948A8u;
            return;
        }
    }
    ctx->pc = 0x194890u;
}
