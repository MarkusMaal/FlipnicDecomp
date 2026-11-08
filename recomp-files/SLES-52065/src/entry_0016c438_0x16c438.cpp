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

// Function: entry_0016c438
// Address: 0x16c438 - 0x16c44c
void entry_0016c438_0x16c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c438_0x16c438");
#endif

    ctx->pc = 0x16c438u;

    // 0x16c438: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x16c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x16c43c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C43Cu;
    {
        const bool branch_taken_0x16c43c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x16c43c) {
            ctx->pc = 0x16C44Cu;
            return;
        }
    }
    ctx->pc = 0x16C444u;
    // 0x16c444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16c444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16c448: 0xae030240  sw          $v1, 0x240($s0)
    ctx->pc = 0x16c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 3));
    ctx->pc = 0x16c44cu;
}
