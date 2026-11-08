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

// Function: entry_00103a64
// Address: 0x103a64 - 0x103a70
void entry_00103a64_0x103a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a64_0x103a64");
#endif

    ctx->pc = 0x103a64u;

    // 0x103a64: 0x100005ec  b           . + 4 + (0x5EC << 2)
    ctx->pc = 0x103A64u;
    {
        const bool branch_taken_0x103a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A64u;
        // 0x103a68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a64) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103A6Cu;
    // 0x103a6c: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x103a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->pc = 0x103a70u;
}
