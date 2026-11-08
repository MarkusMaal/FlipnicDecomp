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

// Function: entry_00207c64
// Address: 0x207c64 - 0x207c74
void entry_00207c64_0x207c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207c64_0x207c64");
#endif

    ctx->pc = 0x207c64u;

    // 0x207c64: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x207c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x207c68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207C68u;
    {
        const bool branch_taken_0x207c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C68u;
        // 0x207c6c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c68) {
            ctx->pc = 0x207C7Cu;
            return;
        }
    }
    ctx->pc = 0x207C70u;
    // 0x207c70: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    ctx->pc = 0x207c74u;
}
