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

// Function: entry_0014725c
// Address: 0x14725c - 0x147270
void entry_0014725c_0x14725c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014725c_0x14725c");
#endif

    ctx->pc = 0x14725cu;

    // 0x14725c: 0x2b21023  subu        $v0, $s5, $s2
    ctx->pc = 0x14725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x147260: 0x255082b  sltu        $at, $s2, $s5
    ctx->pc = 0x147260u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x147264: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x147264u;
    {
        const bool branch_taken_0x147264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147264u;
        // 0x147268: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147264) {
            ctx->pc = 0x1472A0u;
            return;
        }
    }
    ctx->pc = 0x14726Cu;
    // 0x14726c: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x14726cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x147270u;
}
