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

// Function: entry_001f746c
// Address: 0x1f746c - 0x1f7484
void entry_001f746c_0x1f746c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f746c_0x1f746c");
#endif

    ctx->pc = 0x1f746cu;

    // 0x1f746c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1f746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f7470: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7470u;
    {
        const bool branch_taken_0x1f7470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7470u;
        // 0x1f7474: 0x8e82bb10  lw          $v0, -0x44F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7470) {
            ctx->pc = 0x1F7484u;
            return;
        }
    }
    ctx->pc = 0x1F7478u;
    // 0x1f7478: 0x26a213c0  addiu       $v0, $s5, 0x13C0
    ctx->pc = 0x1f7478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5056));
    // 0x1f747c: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x1f747cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7480: 0x8e82bb10  lw          $v0, -0x44F0($s4)
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949648)));
    ctx->pc = 0x1f7484u;
}
