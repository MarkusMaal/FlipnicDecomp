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

// Function: entry_0019dfc0
// Address: 0x19dfc0 - 0x19dfd4
void entry_0019dfc0_0x19dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dfc0_0x19dfc0");
#endif

    ctx->pc = 0x19dfc0u;

    // 0x19dfc0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19dfc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfc4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19dfc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfc8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19DFC8u;
    {
        const bool branch_taken_0x19dfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFC8u;
        // 0x19dfcc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfc8) {
            ctx->pc = 0x19E050u;
            return;
        }
    }
    ctx->pc = 0x19DFD0u;
    // 0x19dfd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19dfd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dfd4u;
}
