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

// Function: entry_001e5a48
// Address: 0x1e5a48 - 0x1e5a58
void entry_001e5a48_0x1e5a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5a48_0x1e5a48");
#endif

    ctx->pc = 0x1e5a48u;

    // 0x1e5a48: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5A48u;
    {
        const bool branch_taken_0x1e5a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A48u;
        // 0x1e5a4c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a48) {
            ctx->pc = 0x1E5A58u;
            return;
        }
    }
    ctx->pc = 0x1E5A50u;
    // 0x1e5a50: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1E5A50u;
    {
        const bool branch_taken_0x1e5a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A50u;
        // 0x1e5a54: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a50) {
            ctx->pc = 0x1E5B50u;
            return;
        }
    }
    ctx->pc = 0x1E5A58u;
}
