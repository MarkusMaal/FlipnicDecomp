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

// Function: entry_0015e8e4
// Address: 0x15e8e4 - 0x15e8f8
void entry_0015e8e4_0x15e8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e8e4_0x15e8e4");
#endif

    ctx->pc = 0x15e8e4u;

    // 0x15e8e4: 0x0  nop
    ctx->pc = 0x15e8e4u;
    // NOP
    // 0x15e8e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15e8ec: 0x291182a  slt         $v1, $s4, $s1
    ctx->pc = 0x15e8ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15e8f0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x15E8F0u;
    {
        const bool branch_taken_0x15e8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8F0u;
        // 0x15e8f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e8f0) {
            ctx->pc = 0x15E898u;
            return;
        }
    }
    ctx->pc = 0x15E8F8u;
}
