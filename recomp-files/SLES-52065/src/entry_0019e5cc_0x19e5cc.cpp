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

// Function: entry_0019e5cc
// Address: 0x19e5cc - 0x19e5dc
void entry_0019e5cc_0x19e5cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e5cc_0x19e5cc");
#endif

    ctx->pc = 0x19e5ccu;

    // 0x19e5cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x19e5ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5d0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19E5D0u;
    {
        const bool branch_taken_0x19e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5D0u;
        // 0x19e5d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5d0) {
            ctx->pc = 0x19E668u;
            return;
        }
    }
    ctx->pc = 0x19E5D8u;
    // 0x19e5d8: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x19e5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->pc = 0x19e5dcu;
}
