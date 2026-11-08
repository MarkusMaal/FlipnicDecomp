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

// Function: entry_0012500c
// Address: 0x12500c - 0x125020
void entry_0012500c_0x12500c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012500c_0x12500c");
#endif

    ctx->pc = 0x12500cu;

    // 0x12500c: 0x0  nop
    ctx->pc = 0x12500cu;
    // NOP
    // 0x125010: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x125010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x125014: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x125018: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x125018u;
    {
        const bool branch_taken_0x125018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125018u;
        // 0x12501c: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125018) {
            ctx->pc = 0x124EA4u;
            return;
        }
    }
    ctx->pc = 0x125020u;
}
