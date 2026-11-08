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

// Function: entry_0017e41c
// Address: 0x17e41c - 0x17e424
void entry_0017e41c_0x17e41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e41c_0x17e41c");
#endif

    ctx->pc = 0x17e41cu;

    // 0x17e41c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17E41Cu;
    {
        const bool branch_taken_0x17e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e41c) {
            ctx->pc = 0x17E494u;
            return;
        }
    }
    ctx->pc = 0x17E424u;
}
