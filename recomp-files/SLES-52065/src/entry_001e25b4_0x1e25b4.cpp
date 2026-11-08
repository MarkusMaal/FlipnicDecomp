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

// Function: entry_001e25b4
// Address: 0x1e25b4 - 0x1e25c4
void entry_001e25b4_0x1e25b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e25b4_0x1e25b4");
#endif

    ctx->pc = 0x1e25b4u;

    // 0x1e25b4: 0x0  nop
    ctx->pc = 0x1e25b4u;
    // NOP
    // 0x1e25b8: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e25b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e25bc: 0x1c40ffe5  bgtz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E25BCu;
    {
        const bool branch_taken_0x1e25bc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e25bc) {
            ctx->pc = 0x1E2554u;
            return;
        }
    }
    ctx->pc = 0x1E25C4u;
}
