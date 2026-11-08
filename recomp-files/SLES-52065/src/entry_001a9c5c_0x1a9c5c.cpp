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

// Function: entry_001a9c5c
// Address: 0x1a9c5c - 0x1a9c6c
void entry_001a9c5c_0x1a9c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9c5c_0x1a9c5c");
#endif

    ctx->pc = 0x1a9c5cu;

    // 0x1a9c5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a9c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a9c60: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a9c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a9c64: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1A9C64u;
    {
        const bool branch_taken_0x1a9c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9C64u;
        // 0x1a9c68: 0x26730024  addiu       $s3, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c64) {
            ctx->pc = 0x1A9B44u;
            return;
        }
    }
    ctx->pc = 0x1A9C6Cu;
}
