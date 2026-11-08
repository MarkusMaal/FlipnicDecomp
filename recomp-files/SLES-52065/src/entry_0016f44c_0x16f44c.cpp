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

// Function: entry_0016f44c
// Address: 0x16f44c - 0x16f45c
void entry_0016f44c_0x16f44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f44c_0x16f44c");
#endif

    ctx->pc = 0x16f44cu;

    // 0x16f44c: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x16f450: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x16f450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16f454: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16F454u;
    {
        const bool branch_taken_0x16f454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F454u;
        // 0x16f458: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f454) {
            ctx->pc = 0x16F434u;
            return;
        }
    }
    ctx->pc = 0x16F45Cu;
}
