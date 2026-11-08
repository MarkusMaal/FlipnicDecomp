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

// Function: entry_00193c44
// Address: 0x193c44 - 0x193c4c
void entry_00193c44_0x193c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c44_0x193c44");
#endif

    ctx->pc = 0x193c44u;

    // 0x193c44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193C44u;
    {
        const bool branch_taken_0x193c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C44u;
        // 0x193c48: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c44) {
            ctx->pc = 0x193C68u;
            return;
        }
    }
    ctx->pc = 0x193C4Cu;
}
