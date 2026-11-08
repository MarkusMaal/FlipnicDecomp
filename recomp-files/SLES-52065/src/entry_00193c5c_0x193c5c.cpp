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

// Function: entry_00193c5c
// Address: 0x193c5c - 0x193c64
void entry_00193c5c_0x193c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c5c_0x193c5c");
#endif

    ctx->pc = 0x193c5cu;

    // 0x193c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193C5Cu;
    {
        const bool branch_taken_0x193c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C5Cu;
        // 0x193c60: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c5c) {
            ctx->pc = 0x193C68u;
            return;
        }
    }
    ctx->pc = 0x193C64u;
}
