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

// Function: entry_001120f0
// Address: 0x1120f0 - 0x11210c
void entry_001120f0_0x1120f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001120f0_0x1120f0");
#endif

    ctx->pc = 0x1120f0u;

    // 0x1120f0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1120f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1120f4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1120F4u;
    {
        const bool branch_taken_0x1120f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1120f4) {
            ctx->pc = 0x1120ACu;
            return;
        }
    }
    ctx->pc = 0x1120FCu;
    // 0x1120fc: 0x14e6008d  bne         $a3, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x1120FCu;
    {
        const bool branch_taken_0x1120fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x112100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120FCu;
        // 0x112100: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120fc) {
            ctx->pc = 0x112334u;
            return;
        }
    }
    ctx->pc = 0x112104u;
    // 0x112104: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x112104u;
    {
        const bool branch_taken_0x112104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112104u;
        // 0x112108: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112104) {
            ctx->pc = 0x11213Cu;
            return;
        }
    }
    ctx->pc = 0x11210Cu;
}
