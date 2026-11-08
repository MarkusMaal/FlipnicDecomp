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

// Function: entry_0017e54c
// Address: 0x17e54c - 0x17e554
void entry_0017e54c_0x17e54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e54c_0x17e54c");
#endif

    ctx->pc = 0x17e54cu;

    // 0x17e54c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17E54Cu;
    {
        const bool branch_taken_0x17e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e54c) {
            ctx->pc = 0x17E5BCu;
            return;
        }
    }
    ctx->pc = 0x17E554u;
}
