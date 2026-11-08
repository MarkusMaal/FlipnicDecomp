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

// Function: entry_0013b534
// Address: 0x13b534 - 0x13b54c
void entry_0013b534_0x13b534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b534_0x13b534");
#endif

    ctx->pc = 0x13b534u;

    // 0x13b534: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x13b534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x13b538: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x13b538u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x13b53c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B53Cu;
    {
        const bool branch_taken_0x13b53c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b53c) {
            ctx->pc = 0x13B54Cu;
            return;
        }
    }
    ctx->pc = 0x13B544u;
    // 0x13b544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13B544u;
    {
        const bool branch_taken_0x13b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B544u;
        // 0x13b548: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b544) {
            ctx->pc = 0x13B554u;
            return;
        }
    }
    ctx->pc = 0x13B54Cu;
}
