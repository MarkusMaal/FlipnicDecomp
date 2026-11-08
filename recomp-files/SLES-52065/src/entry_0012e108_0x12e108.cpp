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

// Function: entry_0012e108
// Address: 0x12e108 - 0x12e120
void entry_0012e108_0x12e108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e108_0x12e108");
#endif

    ctx->pc = 0x12e108u;

    // 0x12e108: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x12e108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12e10c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x12e10cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e110: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x12E110u;
    {
        const bool branch_taken_0x12e110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e110) {
            ctx->pc = 0x12E0D8u;
            return;
        }
    }
    ctx->pc = 0x12E118u;
    // 0x12e118: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12E118u;
    {
        const bool branch_taken_0x12e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e118) {
            ctx->pc = 0x12E168u;
            return;
        }
    }
    ctx->pc = 0x12E120u;
}
