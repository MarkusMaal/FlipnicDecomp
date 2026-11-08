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

// Function: entry_001e2b84
// Address: 0x1e2b84 - 0x1e2b94
void entry_001e2b84_0x1e2b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2b84_0x1e2b84");
#endif

    ctx->pc = 0x1e2b84u;

    // 0x1e2b84: 0x0  nop
    ctx->pc = 0x1e2b84u;
    // NOP
    // 0x1e2b88: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2b88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2b8c: 0x1c40ffe7  bgtz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E2B8Cu;
    {
        const bool branch_taken_0x1e2b8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e2b8c) {
            ctx->pc = 0x1E2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1E2B94u;
}
