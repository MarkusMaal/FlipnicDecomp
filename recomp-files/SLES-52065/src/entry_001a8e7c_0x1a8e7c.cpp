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

// Function: entry_001a8e7c
// Address: 0x1a8e7c - 0x1a8eb0
void entry_001a8e7c_0x1a8e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e7c_0x1a8e7c");
#endif

    ctx->pc = 0x1a8e7cu;

    // 0x1a8e7c: 0x0  nop
    ctx->pc = 0x1a8e7cu;
    // NOP
    // 0x1a8e80: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1a8e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a8e84: 0x8c8206bc  lw          $v0, 0x6BC($a0)
    ctx->pc = 0x1a8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1724)));
    // 0x1a8e88: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A8E88u;
    {
        const bool branch_taken_0x1a8e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e88) {
            ctx->pc = 0x1A8F14u;
            return;
        }
    }
    ctx->pc = 0x1A8E90u;
    // 0x1a8e90: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x1a8e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8e98: 0xac8206b4  sw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 2));
    // 0x1a8e9c: 0x8c8206b4  lw          $v0, 0x6B4($a0)
    ctx->pc = 0x1a8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x1a8ea0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8EA0u;
    {
        const bool branch_taken_0x1a8ea0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8EA0u;
        // 0x1a8ea4: 0x249306b4  addiu       $s3, $a0, 0x6B4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ea0) {
            ctx->pc = 0x1A8EB0u;
            return;
        }
    }
    ctx->pc = 0x1A8EA8u;
    // 0x1a8ea8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1a8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1a8eac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1a8eb0u;
}
