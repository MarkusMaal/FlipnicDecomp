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

// Function: entry_001a557c
// Address: 0x1a557c - 0x1a5588
void entry_001a557c_0x1a557c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a557c_0x1a557c");
#endif

    ctx->pc = 0x1a557cu;

    // 0x1a557c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a557cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a5580: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A5580u;
    {
        const bool branch_taken_0x1a5580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5580u;
        // 0x1a5584: 0xae03074c  sw          $v1, 0x74C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5580) {
            ctx->pc = 0x1A55D8u;
            return;
        }
    }
    ctx->pc = 0x1A5588u;
}
