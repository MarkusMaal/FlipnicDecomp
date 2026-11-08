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

// Function: entry_001e6ba0
// Address: 0x1e6ba0 - 0x1e6bb0
void entry_001e6ba0_0x1e6ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6ba0_0x1e6ba0");
#endif

    ctx->pc = 0x1e6ba0u;

    // 0x1e6ba0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x1e6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x1e6ba4: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1e6ba8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6BA8u;
    {
        const bool branch_taken_0x1e6ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BA8u;
        // 0x1e6bac: 0xad690000  sw          $t1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ba8) {
            ctx->pc = 0x1E6BF4u;
            return;
        }
    }
    ctx->pc = 0x1E6BB0u;
}
