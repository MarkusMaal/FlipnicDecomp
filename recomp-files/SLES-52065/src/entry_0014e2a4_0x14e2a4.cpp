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

// Function: entry_0014e2a4
// Address: 0x14e2a4 - 0x14e2b4
void entry_0014e2a4_0x14e2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e2a4_0x14e2a4");
#endif

    ctx->pc = 0x14e2a4u;

    // 0x14e2a4: 0x0  nop
    ctx->pc = 0x14e2a4u;
    // NOP
    // 0x14e2a8: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x14e2a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e2ac: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x14E2ACu;
    {
        const bool branch_taken_0x14e2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2ACu;
        // 0x14e2b0: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2ac) {
            ctx->pc = 0x14E424u;
            return;
        }
    }
    ctx->pc = 0x14E2B4u;
}
