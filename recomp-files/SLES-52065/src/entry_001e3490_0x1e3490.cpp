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

// Function: entry_001e3490
// Address: 0x1e3490 - 0x1e349c
void entry_001e3490_0x1e3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3490_0x1e3490");
#endif

    ctx->pc = 0x1e3490u;

    // 0x1e3490: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3490u;
    {
        const bool branch_taken_0x1e3490 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3490) {
            ctx->pc = 0x1E349Cu;
            return;
        }
    }
    ctx->pc = 0x1E3498u;
    // 0x1e3498: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e349cu;
}
