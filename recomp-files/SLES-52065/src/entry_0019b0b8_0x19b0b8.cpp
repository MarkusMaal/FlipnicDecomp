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

// Function: entry_0019b0b8
// Address: 0x19b0b8 - 0x19b0e8
void entry_0019b0b8_0x19b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b0b8_0x19b0b8");
#endif

    ctx->pc = 0x19b0b8u;

    // 0x19b0b8: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x19b0bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19b0c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19b0c4: 0xac400704  sw          $zero, 0x704($v0)
    ctx->pc = 0x19b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1796), GPR_U32(ctx, 0));
    // 0x19b0c8: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x19b0cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19b0d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19b0d4: 0xac520744  sw          $s2, 0x744($v0)
    ctx->pc = 0x19b0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1860), GPR_U32(ctx, 18));
    // 0x19b0d8: 0x8e220700  lw          $v0, 0x700($s1)
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1792)));
    // 0x19b0dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b0e0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19B0E0u;
    {
        const bool branch_taken_0x19b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0E0u;
        // 0x19b0e4: 0xae220700  sw          $v0, 0x700($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0e0) {
            ctx->pc = 0x19B124u;
            return;
        }
    }
    ctx->pc = 0x19B0E8u;
}
