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

// Function: entry_00150974
// Address: 0x150974 - 0x15098c
void entry_00150974_0x150974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150974_0x150974");
#endif

    ctx->pc = 0x150974u;

    // 0x150974: 0x0  nop
    ctx->pc = 0x150974u;
    // NOP
    // 0x150978: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15097c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150980: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x150980u;
    {
        const bool branch_taken_0x150980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x150980) {
            ctx->pc = 0x15095Cu;
            return;
        }
    }
    ctx->pc = 0x150988u;
    // 0x150988: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x150988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x15098cu;
}
