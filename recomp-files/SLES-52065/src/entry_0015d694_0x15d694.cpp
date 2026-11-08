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

// Function: entry_0015d694
// Address: 0x15d694 - 0x15d6b4
void entry_0015d694_0x15d694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d694_0x15d694");
#endif

    ctx->pc = 0x15d694u;

    // 0x15d694: 0x0  nop
    ctx->pc = 0x15d694u;
    // NOP
    // 0x15d698: 0x8e033dd8  lw          $v1, 0x3DD8($s0)
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
    // 0x15d69c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d69cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15d6a0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15D6A0u;
    {
        const bool branch_taken_0x15d6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d6a0) {
            ctx->pc = 0x15D674u;
            return;
        }
    }
    ctx->pc = 0x15D6A8u;
    // 0x15d6a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D6ACu;
    {
        const bool branch_taken_0x15d6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6ACu;
        // 0x15d6b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6ac) {
            ctx->pc = 0x15D6D4u;
            return;
        }
    }
    ctx->pc = 0x15D6B4u;
}
