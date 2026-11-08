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

// Function: entry_001a71e4
// Address: 0x1a71e4 - 0x1a7204
void entry_001a71e4_0x1a71e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a71e4_0x1a71e4");
#endif

    ctx->pc = 0x1a71e4u;

    // 0x1a71e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A71E4u;
    {
        const bool branch_taken_0x1a71e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a71e4) {
            ctx->pc = 0x1A7210u;
            return;
        }
    }
    ctx->pc = 0x1A71ECu;
    // 0x1a71ec: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x1a71ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1a71f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a71f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A71F4u;
    {
        const bool branch_taken_0x1a71f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a71f4) {
            ctx->pc = 0x1A7204u;
            return;
        }
    }
    ctx->pc = 0x1A71FCu;
    // 0x1a71fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A71FCu;
    {
        const bool branch_taken_0x1a71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a71fc) {
            ctx->pc = 0x1A7208u;
            return;
        }
    }
    ctx->pc = 0x1A7204u;
}
