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

// Function: entry_001a8d1c
// Address: 0x1a8d1c - 0x1a8d50
void entry_001a8d1c_0x1a8d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8d1c_0x1a8d1c");
#endif

    ctx->pc = 0x1a8d1cu;

    // 0x1a8d1c: 0x0  nop
    ctx->pc = 0x1a8d1cu;
    // NOP
    // 0x1a8d20: 0x2552021  addu        $a0, $s2, $s5
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x1a8d24: 0x8c8206bc  lw          $v0, 0x6BC($a0)
    ctx->pc = 0x1a8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    // 0x1a8d28: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A8D28u;
    {
        const bool branch_taken_0x1a8d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d28) {
            ctx->pc = 0x1A8DB4u;
            return;
        }
    }
    ctx->pc = 0x1A8D30u;
    // 0x1a8d30: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x1a8d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8d38: 0xac8206b4  sw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 2));
    // 0x1a8d3c: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x1a8d40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8D40u;
    {
        const bool branch_taken_0x1a8d40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D40u;
        // 0x1a8d44: 0x249306b4  addiu       $s3, $a0, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d40) {
            ctx->pc = 0x1A8D50u;
            return;
        }
    }
    ctx->pc = 0x1A8D48u;
    // 0x1a8d48: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1a8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1a8d4c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8d50u;
}
