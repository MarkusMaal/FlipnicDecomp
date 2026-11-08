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

// Function: entry_0015fe9c
// Address: 0x15fe9c - 0x15feb4
void entry_0015fe9c_0x15fe9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fe9c_0x15fe9c");
#endif

    ctx->pc = 0x15fe9cu;

    // 0x15fe9c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15fea0: 0x84630228  lh          $v1, 0x228($v1)
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x15fea4: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FEA4u;
    {
        const bool branch_taken_0x15fea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15fea4) {
            ctx->pc = 0x15FEB4u;
            return;
        }
    }
    ctx->pc = 0x15FEACu;
    // 0x15feac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FEACu;
    {
        const bool branch_taken_0x15feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15feac) {
            ctx->pc = 0x15FEC8u;
            return;
        }
    }
    ctx->pc = 0x15FEB4u;
}
