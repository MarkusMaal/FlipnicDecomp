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

// Function: entry_0019ddcc
// Address: 0x19ddcc - 0x19dddc
void entry_0019ddcc_0x19ddcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ddcc_0x19ddcc");
#endif

    ctx->pc = 0x19ddccu;

    // 0x19ddcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19ddccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ddd0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19DDD0u;
    {
        const bool branch_taken_0x19ddd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDD0u;
        // 0x19ddd4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddd0) {
            ctx->pc = 0x19DE60u;
            return;
        }
    }
    ctx->pc = 0x19DDD8u;
    // 0x19ddd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19ddd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dddcu;
}
