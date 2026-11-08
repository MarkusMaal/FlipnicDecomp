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

// Function: entry_001fa518
// Address: 0x1fa518 - 0x1fa52c
void entry_001fa518_0x1fa518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa518_0x1fa518");
#endif

    ctx->pc = 0x1fa518u;

    // 0x1fa518: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FA518u;
    {
        const bool branch_taken_0x1fa518 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA518u;
        // 0x1fa51c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa518) {
            ctx->pc = 0x1FA4F8u;
            return;
        }
    }
    ctx->pc = 0x1FA520u;
    // 0x1fa520: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA520u;
    {
        const bool branch_taken_0x1fa520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA520u;
        // 0x1fa524: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa520) {
            ctx->pc = 0x1FA52Cu;
            return;
        }
    }
    ctx->pc = 0x1FA528u;
    // 0x1fa528: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fa528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1fa52cu;
}
