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

// Function: entry_0019485c
// Address: 0x19485c - 0x194884
void entry_0019485c_0x19485c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019485c_0x19485c");
#endif

    ctx->pc = 0x19485cu;

    // 0x19485c: 0x0  nop
    ctx->pc = 0x19485cu;
    // NOP
    // 0x194860: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194864: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x194864u;
    {
        const bool branch_taken_0x194864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x194864) {
            ctx->pc = 0x194884u;
            return;
        }
    }
    ctx->pc = 0x19486Cu;
    // 0x19486c: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19486Cu;
    {
        const bool branch_taken_0x19486c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x19486c) {
            ctx->pc = 0x194884u;
            return;
        }
    }
    ctx->pc = 0x194874u;
    // 0x194874: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x194874u;
    {
        const bool branch_taken_0x194874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x194874) {
            ctx->pc = 0x194884u;
            return;
        }
    }
    ctx->pc = 0x19487Cu;
    // 0x19487c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19487Cu;
    {
        const bool branch_taken_0x19487c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19487c) {
            ctx->pc = 0x194890u;
            return;
        }
    }
    ctx->pc = 0x194884u;
}
