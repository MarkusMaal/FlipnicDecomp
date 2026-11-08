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

// Function: entry_0017e648
// Address: 0x17e648 - 0x17e650
void entry_0017e648_0x17e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e648_0x17e648");
#endif

    ctx->pc = 0x17e648u;

    // 0x17e648: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17E648u;
    {
        const bool branch_taken_0x17e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E648u;
        // 0x17e64c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e648) {
            ctx->pc = 0x17E6E0u;
            return;
        }
    }
    ctx->pc = 0x17E650u;
}
