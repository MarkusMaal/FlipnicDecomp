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

// Function: entry_0014e084
// Address: 0x14e084 - 0x14e098
void entry_0014e084_0x14e084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e084_0x14e084");
#endif

    ctx->pc = 0x14e084u;

    // 0x14e084: 0x0  nop
    ctx->pc = 0x14e084u;
    // NOP
    // 0x14e088: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e08c: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x14e08cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e090: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14E090u;
    {
        const bool branch_taken_0x14e090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e090) {
            ctx->pc = 0x14E06Cu;
            return;
        }
    }
    ctx->pc = 0x14E098u;
}
