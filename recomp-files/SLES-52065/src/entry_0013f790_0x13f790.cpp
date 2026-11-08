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

// Function: entry_0013f790
// Address: 0x13f790 - 0x13f7a0
void entry_0013f790_0x13f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f790_0x13f790");
#endif

    ctx->pc = 0x13f790u;

    // 0x13f790: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F790u;
    {
        const bool branch_taken_0x13f790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f790) {
            ctx->pc = 0x13F7A0u;
            return;
        }
    }
    ctx->pc = 0x13F798u;
    // 0x13f798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f79c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x13f7a0u;
}
