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

// Function: entry_001e0d2c
// Address: 0x1e0d2c - 0x1e0d48
void entry_001e0d2c_0x1e0d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d2c_0x1e0d2c");
#endif

    ctx->pc = 0x1e0d2cu;

    // 0x1e0d2c: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1e0d30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e0d34: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D34u;
    {
        const bool branch_taken_0x1e0d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D34u;
        // 0x1e0d38: 0x661021  addu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d34) {
            ctx->pc = 0x1E0D48u;
            return;
        }
    }
    ctx->pc = 0x1E0D3Cu;
    // 0x1e0d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D3Cu;
    {
        const bool branch_taken_0x1e0d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D3Cu;
        // 0x1e0d40: 0xacc20044  sw          $v0, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d3c) {
            ctx->pc = 0x1E0D4Cu;
            return;
        }
    }
    ctx->pc = 0x1E0D44u;
    // 0x1e0d44: 0x0  nop
    ctx->pc = 0x1e0d44u;
    // NOP
    ctx->pc = 0x1e0d48u;
}
