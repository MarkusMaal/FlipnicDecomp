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

// Function: caseD_6
// Address: 0x113378 - 0x113390
void caseD_6_0x113378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x113378");
#endif

    ctx->pc = 0x113378u;

    // 0x113378: 0x8e320038  lw          $s2, 0x38($s1)
    ctx->pc = 0x113378u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11337c: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11337Cu;
    {
        const bool branch_taken_0x11337c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11337c) {
            ctx->pc = 0x113390u;
            return;
        }
    }
    ctx->pc = 0x113384u;
    // 0x113384: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x113384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x113388: 0x0  nop
    ctx->pc = 0x113388u;
    // NOP
    // 0x11338c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x11338cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    ctx->pc = 0x113390u;
}
