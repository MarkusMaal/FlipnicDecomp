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

// Function: entry_001e0d4c
// Address: 0x1e0d4c - 0x1e0d70
void entry_001e0d4c_0x1e0d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d4c_0x1e0d4c");
#endif

    ctx->pc = 0x1e0d4cu;

    // 0x1e0d4c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1e0d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D70u;
            return;
        }
    }
    ctx->pc = 0x1E0D58u;
    // 0x1e0d58: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1e0d58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0d5c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1e0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1e0d60: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1e0d64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1e0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1e0d68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D68u;
    {
        const bool branch_taken_0x1e0d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D68u;
        // 0x1e0d6c: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d68) {
            ctx->pc = 0x1E0D7Cu;
            return;
        }
    }
    ctx->pc = 0x1E0D70u;
}
