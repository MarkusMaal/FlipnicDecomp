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

// Function: entry_001e26dc
// Address: 0x1e26dc - 0x1e26ec
void entry_001e26dc_0x1e26dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e26dc_0x1e26dc");
#endif

    ctx->pc = 0x1e26dcu;

    // 0x1e26dc: 0x0  nop
    ctx->pc = 0x1e26dcu;
    // NOP
    // 0x1e26e0: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e26e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e26e4: 0x1c40ffe7  bgtz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E26E4u;
    {
        const bool branch_taken_0x1e26e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e26e4) {
            ctx->pc = 0x1E2684u;
            return;
        }
    }
    ctx->pc = 0x1E26ECu;
}
