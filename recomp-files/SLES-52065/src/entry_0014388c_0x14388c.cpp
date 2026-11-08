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

// Function: entry_0014388c
// Address: 0x14388c - 0x1438a4
void entry_0014388c_0x14388c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014388c_0x14388c");
#endif

    ctx->pc = 0x14388cu;

    // 0x14388c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x14388cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x143890: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x143890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x143894: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x143894u;
    {
        const bool branch_taken_0x143894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143894) {
            ctx->pc = 0x1438A4u;
            return;
        }
    }
    ctx->pc = 0x14389Cu;
    // 0x14389c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14389Cu;
    {
        const bool branch_taken_0x14389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14389Cu;
        // 0x1438a0: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14389c) {
            ctx->pc = 0x1438ACu;
            return;
        }
    }
    ctx->pc = 0x1438A4u;
}
