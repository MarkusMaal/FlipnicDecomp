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

// Function: entry_001c5de8
// Address: 0x1c5de8 - 0x1c5e08
void entry_001c5de8_0x1c5de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5de8_0x1c5de8");
#endif

    ctx->pc = 0x1c5de8u;

    // 0x1c5de8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5dec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5df0: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x1c5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1c5df4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1c5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1c5df8: 0x1c400031  bgtz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5DF8u;
    {
        const bool branch_taken_0x1c5df8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c5df8) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5E00u;
    // 0x1c5e00: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C5E00u;
    {
        const bool branch_taken_0x1c5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E00u;
        // 0x1c5e04: 0xae400050  sw          $zero, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e00) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5E08u;
}
