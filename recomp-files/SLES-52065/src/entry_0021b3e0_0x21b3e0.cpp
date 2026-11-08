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

// Function: entry_0021b3e0
// Address: 0x21b3e0 - 0x21b3f0
void entry_0021b3e0_0x21b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b3e0_0x21b3e0");
#endif

    ctx->pc = 0x21b3e0u;

    // 0x21b3e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21b3e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21b3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b3e8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x21B3E8u;
    {
        const bool branch_taken_0x21b3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3E8u;
        // 0x21b3ec: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3e8) {
            ctx->pc = 0x21B360u;
            return;
        }
    }
    ctx->pc = 0x21B3F0u;
}
