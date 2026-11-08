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

// Function: entry_001c56d4
// Address: 0x1c56d4 - 0x1c56e8
void entry_001c56d4_0x1c56d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c56d4_0x1c56d4");
#endif

    ctx->pc = 0x1c56d4u;

    // 0x1c56d4: 0x0  nop
    ctx->pc = 0x1c56d4u;
    // NOP
    // 0x1c56d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c56d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c56dc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1c56dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c56e0: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C56E0u;
    {
        const bool branch_taken_0x1c56e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56E0u;
        // 0x1c56e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56e0) {
            ctx->pc = 0x1C564Cu;
            return;
        }
    }
    ctx->pc = 0x1C56E8u;
}
