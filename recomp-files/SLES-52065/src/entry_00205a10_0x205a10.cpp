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

// Function: entry_00205a10
// Address: 0x205a10 - 0x205a38
void entry_00205a10_0x205a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205a10_0x205a10");
#endif

    ctx->pc = 0x205a10u;

    // 0x205a10: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x205a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x205a14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x205a14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x205a18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x205a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x205a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205a20: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x205A20u;
    {
        const bool branch_taken_0x205a20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x205A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A20u;
        // 0x205a24: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a20) {
            ctx->pc = 0x205A38u;
            return;
        }
    }
    ctx->pc = 0x205A28u;
    // 0x205a28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x205a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x205a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x205a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205A30u;
    {
        const bool branch_taken_0x205a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A30u;
        // 0x205a34: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205a30) {
            ctx->pc = 0x205A48u;
            return;
        }
    }
    ctx->pc = 0x205A38u;
}
