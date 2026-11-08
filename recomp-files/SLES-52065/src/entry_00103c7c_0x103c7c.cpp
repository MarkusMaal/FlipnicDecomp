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

// Function: entry_00103c7c
// Address: 0x103c7c - 0x103c88
void entry_00103c7c_0x103c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103c7c_0x103c7c");
#endif

    ctx->pc = 0x103c7cu;

    // 0x103c7c: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x103C7Cu;
    {
        const bool branch_taken_0x103c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C7Cu;
        // 0x103c80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c7c) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103C84u;
    // 0x103c84: 0x24040260  addiu       $a0, $zero, 0x260
    ctx->pc = 0x103c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->pc = 0x103c88u;
}
