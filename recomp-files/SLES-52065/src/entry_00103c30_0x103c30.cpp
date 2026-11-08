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

// Function: entry_00103c30
// Address: 0x103c30 - 0x103c3c
void entry_00103c30_0x103c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103c30_0x103c30");
#endif

    ctx->pc = 0x103c30u;

    // 0x103c30: 0x10000579  b           . + 4 + (0x579 << 2)
    ctx->pc = 0x103C30u;
    {
        const bool branch_taken_0x103c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C30u;
        // 0x103c34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103c30) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x103C38u;
    // 0x103c38: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x103c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    ctx->pc = 0x103c3cu;
}
