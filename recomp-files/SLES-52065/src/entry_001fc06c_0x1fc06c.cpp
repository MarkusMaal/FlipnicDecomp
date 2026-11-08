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

// Function: entry_001fc06c
// Address: 0x1fc06c - 0x1fc088
void entry_001fc06c_0x1fc06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc06c_0x1fc06c");
#endif

    ctx->pc = 0x1fc06cu;

    // 0x1fc06c: 0xa812  mflo        $s5
    ctx->pc = 0x1fc06cu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1fc070: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1fc070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc074: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FC074u;
    {
        const bool branch_taken_0x1fc074 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC074u;
        // 0x1fc078: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc074) {
            ctx->pc = 0x1FC120u;
            return;
        }
    }
    ctx->pc = 0x1FC07Cu;
    // 0x1fc07c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1fc07cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc080: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fc080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc084: 0x0  nop
    ctx->pc = 0x1fc084u;
    // NOP
    ctx->pc = 0x1fc088u;
}
