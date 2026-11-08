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

// Function: entry_001d7b60
// Address: 0x1d7b60 - 0x1d7b70
void entry_001d7b60_0x1d7b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7b60_0x1d7b60");
#endif

    ctx->pc = 0x1d7b60u;

    // 0x1d7b60: 0x10a20057  beq         $a1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1D7B60u;
    {
        const bool branch_taken_0x1d7b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B60u;
        // 0x1d7b64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b60) {
            ctx->pc = 0x1D7CC0u;
            return;
        }
    }
    ctx->pc = 0x1D7B68u;
    // 0x1d7b68: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1D7B68u;
    {
        const bool branch_taken_0x1d7b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b68) {
            ctx->pc = 0x1D7CF0u;
            return;
        }
    }
    ctx->pc = 0x1D7B70u;
}
