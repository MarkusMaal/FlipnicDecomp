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

// Function: entry_00100884
// Address: 0x100884 - 0x10089c
void entry_00100884_0x100884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100884_0x100884");
#endif

    ctx->pc = 0x100884u;

    // 0x100884: 0x0  nop
    ctx->pc = 0x100884u;
    // NOP
    // 0x100888: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x100888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10088c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x10088Cu;
    {
        const bool branch_taken_0x10088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10088Cu;
        // 0x100890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10088c) {
            ctx->pc = 0x100858u;
            return;
        }
    }
    ctx->pc = 0x100894u;
    // 0x100894: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x100894u;
    {
        const bool branch_taken_0x100894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100894) {
            ctx->pc = 0x100938u;
            return;
        }
    }
    ctx->pc = 0x10089Cu;
}
