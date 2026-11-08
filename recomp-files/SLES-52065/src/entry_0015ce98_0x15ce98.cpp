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

// Function: entry_0015ce98
// Address: 0x15ce98 - 0x15cea8
void entry_0015ce98_0x15ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce98_0x15ce98");
#endif

    ctx->pc = 0x15ce98u;

    // 0x15ce98: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15ce98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15ce9c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x15CE9Cu;
    {
        const bool branch_taken_0x15ce9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE9Cu;
        // 0x15cea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce9c) {
            ctx->pc = 0x15CF20u;
            return;
        }
    }
    ctx->pc = 0x15CEA4u;
    // 0x15cea4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15cea4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15cea8u;
}
