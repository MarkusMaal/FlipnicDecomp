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

// Function: entry_0015eb44
// Address: 0x15eb44 - 0x15eb58
void entry_0015eb44_0x15eb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb44_0x15eb44");
#endif

    ctx->pc = 0x15eb44u;

    // 0x15eb44: 0x0  nop
    ctx->pc = 0x15eb44u;
    // NOP
    // 0x15eb48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15eb48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15eb4c: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x15eb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x15eb50: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x15EB50u;
    {
        const bool branch_taken_0x15eb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB50u;
        // 0x15eb54: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb50) {
            ctx->pc = 0x15EA84u;
            return;
        }
    }
    ctx->pc = 0x15EB58u;
}
