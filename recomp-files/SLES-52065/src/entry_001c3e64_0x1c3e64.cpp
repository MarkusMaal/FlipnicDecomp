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

// Function: entry_001c3e64
// Address: 0x1c3e64 - 0x1c3e7c
void entry_001c3e64_0x1c3e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3e64_0x1c3e64");
#endif

    ctx->pc = 0x1c3e64u;

    // 0x1c3e64: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x1c3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x1c3e68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3e6c: 0x14620166  bne         $v1, $v0, . + 4 + (0x166 << 2)
    ctx->pc = 0x1C3E6Cu;
    {
        const bool branch_taken_0x1c3e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E6Cu;
        // 0x1c3e70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e6c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3E74u;
    // 0x1c3e74: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1C3E74u;
    {
        const bool branch_taken_0x1c3e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E74u;
        // 0x1c3e78: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e74) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3E7Cu;
}
