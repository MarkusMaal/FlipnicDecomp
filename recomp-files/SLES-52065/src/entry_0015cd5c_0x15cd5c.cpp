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

// Function: entry_0015cd5c
// Address: 0x15cd5c - 0x15cd74
void entry_0015cd5c_0x15cd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cd5c_0x15cd5c");
#endif

    ctx->pc = 0x15cd5cu;

    // 0x15cd5c: 0x0  nop
    ctx->pc = 0x15cd5cu;
    // NOP
    // 0x15cd60: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x15cd60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cd64: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x15CD64u;
    {
        const bool branch_taken_0x15cd64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD64u;
        // 0x15cd68: 0x34880  sll         $t1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd64) {
            ctx->pc = 0x15CDACu;
            return;
        }
    }
    ctx->pc = 0x15CD6Cu;
    // 0x15cd6c: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x15cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x15cd70: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x15cd70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x15cd74u;
}
