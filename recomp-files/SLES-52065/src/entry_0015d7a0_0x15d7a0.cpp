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

// Function: entry_0015d7a0
// Address: 0x15d7a0 - 0x15d7bc
void entry_0015d7a0_0x15d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d7a0_0x15d7a0");
#endif

    ctx->pc = 0x15d7a0u;

    // 0x15d7a0: 0x8e033df0  lw          $v1, 0x3DF0($s0)
    ctx->pc = 0x15d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15856)));
    // 0x15d7a4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d7a8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15D7A8u;
    {
        const bool branch_taken_0x15d7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7A8u;
        // 0x15d7ac: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7a8) {
            ctx->pc = 0x15D76Cu;
            return;
        }
    }
    ctx->pc = 0x15D7B0u;
    // 0x15d7b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D7B4u;
    {
        const bool branch_taken_0x15d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7B4u;
        // 0x15d7b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7b4) {
            ctx->pc = 0x15D7E0u;
            return;
        }
    }
    ctx->pc = 0x15D7BCu;
}
