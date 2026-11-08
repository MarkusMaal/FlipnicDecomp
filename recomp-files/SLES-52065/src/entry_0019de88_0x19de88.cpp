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

// Function: entry_0019de88
// Address: 0x19de88 - 0x19de98
void entry_0019de88_0x19de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019de88_0x19de88");
#endif

    ctx->pc = 0x19de88u;

    // 0x19de88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19de88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19de8c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19DE8Cu;
    {
        const bool branch_taken_0x19de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE8Cu;
        // 0x19de90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de8c) {
            ctx->pc = 0x19DF10u;
            return;
        }
    }
    ctx->pc = 0x19DE94u;
    // 0x19de94: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19de94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19de98u;
}
