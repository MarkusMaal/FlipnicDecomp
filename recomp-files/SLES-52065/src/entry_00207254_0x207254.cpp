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

// Function: entry_00207254
// Address: 0x207254 - 0x207268
void entry_00207254_0x207254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207254_0x207254");
#endif

    ctx->pc = 0x207254u;

    // 0x207254: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x207254u;
    {
        const bool branch_taken_0x207254 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x207258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207254u;
        // 0x207258: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207254) {
            ctx->pc = 0x207280u;
            return;
        }
    }
    ctx->pc = 0x20725Cu;
    // 0x20725c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207260: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207260u;
    {
        const bool branch_taken_0x207260 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x207260) {
            ctx->pc = 0x207264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207260u;
            // 0x207264: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207268u;
            return;
        }
    }
    ctx->pc = 0x207268u;
}
