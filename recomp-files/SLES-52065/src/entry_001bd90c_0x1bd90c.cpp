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

// Function: entry_001bd90c
// Address: 0x1bd90c - 0x1bd920
void entry_001bd90c_0x1bd90c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd90c_0x1bd90c");
#endif

    ctx->pc = 0x1bd90cu;

    // 0x1bd90c: 0x0  nop
    ctx->pc = 0x1bd90cu;
    // NOP
    // 0x1bd910: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1bd914: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1bd918: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BD918u;
    {
        const bool branch_taken_0x1bd918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd918) {
            ctx->pc = 0x1BD8F0u;
            return;
        }
    }
    ctx->pc = 0x1BD920u;
}
