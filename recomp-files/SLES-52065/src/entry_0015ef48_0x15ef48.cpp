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

// Function: entry_0015ef48
// Address: 0x15ef48 - 0x15ef5c
void entry_0015ef48_0x15ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ef48_0x15ef48");
#endif

    ctx->pc = 0x15ef48u;

    // 0x15ef48: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x15ef48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15ef4c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15EF4Cu;
    {
        const bool branch_taken_0x15ef4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF4Cu;
        // 0x15ef50: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef4c) {
            ctx->pc = 0x15EF3Cu;
            return;
        }
    }
    ctx->pc = 0x15EF54u;
    // 0x15ef54: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x15EF54u;
    {
        const bool branch_taken_0x15ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF54u;
        // 0x15ef58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef54) {
            ctx->pc = 0x15F0B4u;
            return;
        }
    }
    ctx->pc = 0x15EF5Cu;
}
