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

// Function: entry_001cf548
// Address: 0x1cf548 - 0x1cf558
void entry_001cf548_0x1cf548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf548_0x1cf548");
#endif

    ctx->pc = 0x1cf548u;

    // 0x1cf548: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf54c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1cf54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cf550: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1CF550u;
    {
        const bool branch_taken_0x1cf550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF550u;
        // 0x1cf554: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf550) {
            ctx->pc = 0x1CF4B0u;
            return;
        }
    }
    ctx->pc = 0x1CF558u;
}
