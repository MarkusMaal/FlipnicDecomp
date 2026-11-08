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

// Function: entry_00132434
// Address: 0x132434 - 0x13244c
void entry_00132434_0x132434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132434_0x132434");
#endif

    ctx->pc = 0x132434u;

    // 0x132434: 0x0  nop
    ctx->pc = 0x132434u;
    // NOP
    // 0x132438: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x132438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13243c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132440: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x132440u;
    {
        const bool branch_taken_0x132440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132440) {
            ctx->pc = 0x13241Cu;
            return;
        }
    }
    ctx->pc = 0x132448u;
    // 0x132448: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x132448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x13244cu;
}
