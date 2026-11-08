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

// Function: entry_0019f894
// Address: 0x19f894 - 0x19f8b0
void entry_0019f894_0x19f894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f894_0x19f894");
#endif

    ctx->pc = 0x19f894u;

    // 0x19f894: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x19f894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x19f898: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F898u;
    {
        const bool branch_taken_0x19f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F898u;
        // 0x19f89c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f898) {
            ctx->pc = 0x19F8B0u;
            return;
        }
    }
    ctx->pc = 0x19F8A0u;
    // 0x19f8a0: 0x8c420320  lw          $v0, 0x320($v0)
    ctx->pc = 0x19f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x19f8a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F8A4u;
    {
        const bool branch_taken_0x19f8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f8a4) {
            ctx->pc = 0x19F8B0u;
            return;
        }
    }
    ctx->pc = 0x19F8ACu;
    // 0x19f8ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f8acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f8b0u;
}
