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

// Function: entry_001e940c
// Address: 0x1e940c - 0x1e941c
void entry_001e940c_0x1e940c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e940c_0x1e940c");
#endif

    ctx->pc = 0x1e940cu;

    // 0x1e940c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E940Cu;
    {
        const bool branch_taken_0x1e940c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e940c) {
            ctx->pc = 0x1E941Cu;
            return;
        }
    }
    ctx->pc = 0x1E9414u;
    // 0x1e9414: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9414u;
    {
        const bool branch_taken_0x1e9414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9414u;
        // 0x1e9418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9414) {
            ctx->pc = 0x1E943Cu;
            return;
        }
    }
    ctx->pc = 0x1E941Cu;
}
