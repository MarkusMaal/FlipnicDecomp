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

// Function: entry_001e292c
// Address: 0x1e292c - 0x1e293c
void entry_001e292c_0x1e292c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e292c_0x1e292c");
#endif

    ctx->pc = 0x1e292cu;

    // 0x1e292c: 0x0  nop
    ctx->pc = 0x1e292cu;
    // NOP
    // 0x1e2930: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2930u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2934: 0x1c40ffe5  bgtz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E2934u;
    {
        const bool branch_taken_0x1e2934 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e2934) {
            ctx->pc = 0x1E28CCu;
            return;
        }
    }
    ctx->pc = 0x1E293Cu;
}
