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

// Function: entry_001134f0
// Address: 0x1134f0 - 0x11351c
void entry_001134f0_0x1134f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001134f0_0x1134f0");
#endif

    ctx->pc = 0x1134f0u;

    // 0x1134f0: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x1134f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1134f4: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1134f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1134f8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1134F8u;
    {
        const bool branch_taken_0x1134f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134f8) {
            ctx->pc = 0x1134A0u;
            return;
        }
    }
    ctx->pc = 0x113500u;
    // 0x113500: 0x1693003f  bne         $s4, $s3, . + 4 + (0x3F << 2)
    ctx->pc = 0x113500u;
    {
        const bool branch_taken_0x113500 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x113500) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x113508u;
    // 0x113508: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113508u;
    {
        const bool branch_taken_0x113508 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113508u;
        // 0x11350c: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113508) {
            ctx->pc = 0x11351Cu;
            return;
        }
    }
    ctx->pc = 0x113510u;
    // 0x113510: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x113510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113514: 0x0  nop
    ctx->pc = 0x113514u;
    // NOP
    // 0x113518: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x113518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    ctx->pc = 0x11351cu;
}
