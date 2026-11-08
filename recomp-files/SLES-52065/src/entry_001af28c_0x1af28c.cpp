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

// Function: entry_001af28c
// Address: 0x1af28c - 0x1af294
void entry_001af28c_0x1af28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af28c_0x1af28c");
#endif

    ctx->pc = 0x1af28cu;

    // 0x1af28c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1AF28Cu;
    {
        const bool branch_taken_0x1af28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af28c) {
            ctx->pc = 0x1AF3D8u;
            return;
        }
    }
    ctx->pc = 0x1AF294u;
}
