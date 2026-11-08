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

// Function: entry_001faab0
// Address: 0x1faab0 - 0x1faad4
void entry_001faab0_0x1faab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faab0_0x1faab0");
#endif

    ctx->pc = 0x1faab0u;

label_1faab0:
    // 0x1faab0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1faab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1faab4: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x1faab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x1faab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1faab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1faabc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1faabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1faac0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1faac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1faac4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FAAC4u;
    {
        const bool branch_taken_0x1faac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faac4) {
            ctx->pc = 0x1FAAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1faab0;
        }
    }
    ctx->pc = 0x1FAACCu;
    // 0x1faacc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAACCu;
    {
        const bool branch_taken_0x1faacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAACCu;
        // 0x1faad0: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faacc) {
            ctx->pc = 0x1FAADCu;
            return;
        }
    }
    ctx->pc = 0x1FAAD4u;
}
