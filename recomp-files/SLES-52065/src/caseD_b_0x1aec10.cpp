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

// Function: caseD_b
// Address: 0x1aec10 - 0x1aec30
void caseD_b_0x1aec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1aec10");
#endif

    ctx->pc = 0x1aec10u;

    // 0x1aec10: 0xa28006b8  sb          $zero, 0x6B8($s4)
    ctx->pc = 0x1aec10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1720), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aec14: 0xa28006b9  sb          $zero, 0x6B9($s4)
    ctx->pc = 0x1aec14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aec18: 0x8e8207e0  lw          $v0, 0x7E0($s4)
    ctx->pc = 0x1aec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2016)));
    // 0x1aec1c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1aec1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aec20: 0x8e8206cc  lw          $v0, 0x6CC($s4)
    ctx->pc = 0x1aec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1740)));
    // 0x1aec24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AEC24u;
    {
        const bool branch_taken_0x1aec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aec24) {
            ctx->pc = 0x1AEC30u;
            return;
        }
    }
    ctx->pc = 0x1AEC2Cu;
    // 0x1aec2c: 0xac400320  sw          $zero, 0x320($v0)
    ctx->pc = 0x1aec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 0));
    ctx->pc = 0x1aec30u;
}
