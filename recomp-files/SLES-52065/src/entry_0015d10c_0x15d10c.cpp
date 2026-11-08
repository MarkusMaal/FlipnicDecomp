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

// Function: entry_0015d10c
// Address: 0x15d10c - 0x15d124
void entry_0015d10c_0x15d10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d10c_0x15d10c");
#endif

    ctx->pc = 0x15d10cu;

    // 0x15d10c: 0x0  nop
    ctx->pc = 0x15d10cu;
    // NOP
    // 0x15d110: 0x28a30400  slti        $v1, $a1, 0x400
    ctx->pc = 0x15d110u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15d114: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15D114u;
    {
        const bool branch_taken_0x15d114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D114u;
        // 0x15d118: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d114) {
            ctx->pc = 0x15D100u;
            return;
        }
    }
    ctx->pc = 0x15D11Cu;
    // 0x15d11c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D11Cu;
    {
        const bool branch_taken_0x15d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D11Cu;
        // 0x15d120: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d11c) {
            ctx->pc = 0x15D148u;
            return;
        }
    }
    ctx->pc = 0x15D124u;
}
