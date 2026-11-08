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

// Function: entry_001c5a64
// Address: 0x1c5a64 - 0x1c5a78
void entry_001c5a64_0x1c5a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5a64_0x1c5a64");
#endif

    ctx->pc = 0x1c5a64u;

    // 0x1c5a64: 0x0  nop
    ctx->pc = 0x1c5a64u;
    // NOP
    // 0x1c5a68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c5a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c5a6c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1c5a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1c5a70: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C5A70u;
    {
        const bool branch_taken_0x1c5a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A70u;
        // 0x1c5a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a70) {
            ctx->pc = 0x1C59ACu;
            return;
        }
    }
    ctx->pc = 0x1C5A78u;
}
