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

// Function: entry_00150ce0
// Address: 0x150ce0 - 0x150cf0
void entry_00150ce0_0x150ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150ce0_0x150ce0");
#endif

    ctx->pc = 0x150ce0u;

    // 0x150ce0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150CE0u;
    {
        const bool branch_taken_0x150ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ce0) {
            ctx->pc = 0x150CF0u;
            return;
        }
    }
    ctx->pc = 0x150CE8u;
    // 0x150ce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150cec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x150cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x150cf0u;
}
