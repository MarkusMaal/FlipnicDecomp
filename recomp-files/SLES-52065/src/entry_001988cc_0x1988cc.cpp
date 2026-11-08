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

// Function: entry_001988cc
// Address: 0x1988cc - 0x1988d8
void entry_001988cc_0x1988cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001988cc_0x1988cc");
#endif

    ctx->pc = 0x1988ccu;

    // 0x1988cc: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1988CCu;
    {
        const bool branch_taken_0x1988cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1988D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988CCu;
        // 0x1988d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1988cc) {
            ctx->pc = 0x198B20u;
            return;
        }
    }
    ctx->pc = 0x1988D4u;
    // 0x1988d4: 0x2b08821  addu        $s1, $s5, $s0
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    ctx->pc = 0x1988d8u;
}
