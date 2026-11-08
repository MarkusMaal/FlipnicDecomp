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

// Function: entry_00145c68
// Address: 0x145c68 - 0x145c74
void entry_00145c68_0x145c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145c68_0x145c68");
#endif

    ctx->pc = 0x145c68u;

    // 0x145c68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x145c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x145c6c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x145C6Cu;
    {
        const bool branch_taken_0x145c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C6Cu;
        // 0x145c70: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c6c) {
            ctx->pc = 0x145CBCu;
            return;
        }
    }
    ctx->pc = 0x145C74u;
}
