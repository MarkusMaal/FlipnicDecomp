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

// Function: entry_0015d02c
// Address: 0x15d02c - 0x15d040
void entry_0015d02c_0x15d02c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d02c_0x15d02c");
#endif

    ctx->pc = 0x15d02cu;

    // 0x15d02c: 0x8e112cd4  lw          $s1, 0x2CD4($s0)
    ctx->pc = 0x15d02cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    // 0x15d030: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15d030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d034: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D034u;
    {
        const bool branch_taken_0x15d034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D034u;
        // 0x15d038: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d034) {
            ctx->pc = 0x15D05Cu;
            return;
        }
    }
    ctx->pc = 0x15D03Cu;
    // 0x15d03c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15d03cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15d040u;
}
