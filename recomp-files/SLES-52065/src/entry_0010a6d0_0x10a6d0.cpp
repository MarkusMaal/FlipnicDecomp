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

// Function: entry_0010a6d0
// Address: 0x10a6d0 - 0x10a6d8
void entry_0010a6d0_0x10a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a6d0_0x10a6d0");
#endif

    ctx->pc = 0x10a6d0u;

    // 0x10a6d0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x10A6D0u;
    {
        const bool branch_taken_0x10a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6D0u;
        // 0x10a6d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6d0) {
            ctx->pc = 0x10A910u;
            return;
        }
    }
    ctx->pc = 0x10A6D8u;
}
