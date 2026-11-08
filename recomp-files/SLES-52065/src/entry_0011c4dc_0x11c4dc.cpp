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

// Function: entry_0011c4dc
// Address: 0x11c4dc - 0x11c508
void entry_0011c4dc_0x11c4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c4dc_0x11c4dc");
#endif

    ctx->pc = 0x11c4dcu;

label_11c4dc:
    // 0x11c4dc: 0x0  nop
    ctx->pc = 0x11c4dcu;
    // NOP
    // 0x11c4e0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c4e4: 0x8c22b000  lw          $v0, -0x5000($at)
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x11c4e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x11c4ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11c4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11c4f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C4F0u;
    {
        const bool branch_taken_0x11c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c4f0) {
            ctx->pc = 0x11C4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c4dc;
        }
    }
    ctx->pc = 0x11C4F8u;
    // 0x11c4f8: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x11c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x11c4fc: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x11c4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x11c500: 0x1600ffe6  bnez        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11C500u;
    {
        const bool branch_taken_0x11c500 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C500u;
        // 0x11c504: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c500) {
            ctx->pc = 0x11C49Cu;
            return;
        }
    }
    ctx->pc = 0x11C508u;
}
