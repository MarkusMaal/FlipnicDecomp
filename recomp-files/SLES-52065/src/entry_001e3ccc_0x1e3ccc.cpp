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

// Function: entry_001e3ccc
// Address: 0x1e3ccc - 0x1e3cd4
void entry_001e3ccc_0x1e3ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3ccc_0x1e3ccc");
#endif

    ctx->pc = 0x1e3cccu;

    // 0x1e3ccc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E3CCCu;
    {
        const bool branch_taken_0x1e3ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ccc) {
            ctx->pc = 0x1E3D58u;
            return;
        }
    }
    ctx->pc = 0x1E3CD4u;
}
