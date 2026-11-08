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

// Function: entry_00207760
// Address: 0x207760 - 0x207774
void entry_00207760_0x207760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207760_0x207760");
#endif

    ctx->pc = 0x207760u;

    // 0x207760: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x207760u;
    {
        const bool branch_taken_0x207760 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x207764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207760u;
        // 0x207764: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207760) {
            ctx->pc = 0x207788u;
            return;
        }
    }
    ctx->pc = 0x207768u;
    // 0x207768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20776c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20776Cu;
    {
        const bool branch_taken_0x20776c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x20776c) {
            ctx->pc = 0x207770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20776Cu;
            // 0x207770: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207774u;
            return;
        }
    }
    ctx->pc = 0x207774u;
}
