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

// Function: entry_001af1e8
// Address: 0x1af1e8 - 0x1af1f4
void entry_001af1e8_0x1af1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af1e8_0x1af1e8");
#endif

    ctx->pc = 0x1af1e8u;

    // 0x1af1e8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1af1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1af1ec: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1AF1ECu;
    {
        const bool branch_taken_0x1af1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1ECu;
        // 0x1af1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1ec) {
            ctx->pc = 0x1AF1B4u;
            return;
        }
    }
    ctx->pc = 0x1AF1F4u;
}
