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

// Function: entry_001e3e04
// Address: 0x1e3e04 - 0x1e3e28
void entry_001e3e04_0x1e3e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3e04_0x1e3e04");
#endif

    ctx->pc = 0x1e3e04u;

    // 0x1e3e04: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1e3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e3e08: 0x2001027  not         $v0, $s0
    ctx->pc = 0x1e3e08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e3e0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e3e10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3e14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3e18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3E18u;
    {
        const bool branch_taken_0x1e3e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E18u;
        // 0x1e3e1c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e18) {
            ctx->pc = 0x1E3E28u;
            return;
        }
    }
    ctx->pc = 0x1E3E20u;
    // 0x1e3e20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e3e24: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1e3e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x1e3e28u;
}
