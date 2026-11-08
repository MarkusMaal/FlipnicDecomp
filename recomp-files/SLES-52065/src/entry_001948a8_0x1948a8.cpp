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

// Function: entry_001948a8
// Address: 0x1948a8 - 0x1948d4
void entry_001948a8_0x1948a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001948a8_0x1948a8");
#endif

    ctx->pc = 0x1948a8u;

    // 0x1948a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1948ac: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1948ACu;
    {
        const bool branch_taken_0x1948ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1948ac) {
            ctx->pc = 0x194908u;
            return;
        }
    }
    ctx->pc = 0x1948B4u;
    // 0x1948b4: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1948B4u;
    {
        const bool branch_taken_0x1948b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1948b4) {
            ctx->pc = 0x1948F0u;
            return;
        }
    }
    ctx->pc = 0x1948BCu;
    // 0x1948bc: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1948BCu;
    {
        const bool branch_taken_0x1948bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1948bc) {
            ctx->pc = 0x1948E8u;
            return;
        }
    }
    ctx->pc = 0x1948C4u;
    // 0x1948c4: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1948C4u;
    {
        const bool branch_taken_0x1948c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1948c4) {
            ctx->pc = 0x1948D4u;
            return;
        }
    }
    ctx->pc = 0x1948CCu;
    // 0x1948cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1948CCu;
    {
        const bool branch_taken_0x1948cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1948cc) {
            ctx->pc = 0x19490Cu;
            return;
        }
    }
    ctx->pc = 0x1948D4u;
}
