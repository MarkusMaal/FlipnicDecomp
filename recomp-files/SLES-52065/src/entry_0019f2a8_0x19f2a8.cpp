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

// Function: entry_0019f2a8
// Address: 0x19f2a8 - 0x19f2c4
void entry_0019f2a8_0x19f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2a8_0x19f2a8");
#endif

    ctx->pc = 0x19f2a8u;

    // 0x19f2a8: 0x8e84067c  lw          $a0, 0x67C($s4)
    ctx->pc = 0x19f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1660)));
    // 0x19f2ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F2ACu;
    {
        const bool branch_taken_0x19f2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2ACu;
        // 0x19f2b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2ac) {
            ctx->pc = 0x19F2C4u;
            return;
        }
    }
    ctx->pc = 0x19F2B4u;
    // 0x19f2b4: 0x8c820320  lw          $v0, 0x320($a0)
    ctx->pc = 0x19f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x19f2b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F2B8u;
    {
        const bool branch_taken_0x19f2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f2b8) {
            ctx->pc = 0x19F2C4u;
            return;
        }
    }
    ctx->pc = 0x19F2C0u;
    // 0x19f2c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f2c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f2c4u;
}
