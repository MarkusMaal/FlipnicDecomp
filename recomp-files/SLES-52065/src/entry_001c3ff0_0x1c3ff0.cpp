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

// Function: entry_001c3ff0
// Address: 0x1c3ff0 - 0x1c4008
void entry_001c3ff0_0x1c3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3ff0_0x1c3ff0");
#endif

    ctx->pc = 0x1c3ff0u;

    // 0x1c3ff0: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c3ff4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3ff8: 0x14620103  bne         $v1, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x1C3FF8u;
    {
        const bool branch_taken_0x1c3ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FF8u;
        // 0x1c3ffc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ff8) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4000u;
    // 0x1c4000: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1C4000u;
    {
        const bool branch_taken_0x1c4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4000u;
        // 0x1c4004: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4000) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4008u;
}
