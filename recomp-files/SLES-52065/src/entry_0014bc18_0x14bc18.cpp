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

// Function: entry_0014bc18
// Address: 0x14bc18 - 0x14bc30
void entry_0014bc18_0x14bc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc18_0x14bc18");
#endif

    ctx->pc = 0x14bc18u;

    // 0x14bc18: 0x8f8280a8  lw          $v0, -0x7F58($gp)
    ctx->pc = 0x14bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934696)));
    // 0x14bc1c: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x14bc1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14bc20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BC20u;
    {
        const bool branch_taken_0x14bc20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC20u;
        // 0x14bc24: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc20) {
            ctx->pc = 0x14BC30u;
            return;
        }
    }
    ctx->pc = 0x14BC28u;
    // 0x14bc28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14BC28u;
    {
        const bool branch_taken_0x14bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC28u;
        // 0x14bc2c: 0x278280a8  addiu       $v0, $gp, -0x7F58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc28) {
            ctx->pc = 0x14BC34u;
            return;
        }
    }
    ctx->pc = 0x14BC30u;
}
