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

// Function: entry_0015b7f4
// Address: 0x15b7f4 - 0x15b7fc
void entry_0015b7f4_0x15b7f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b7f4_0x15b7f4");
#endif

    ctx->pc = 0x15b7f4u;

    // 0x15b7f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B7F4u;
    {
        const bool branch_taken_0x15b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7F4u;
        // 0x15b7f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7f4) {
            ctx->pc = 0x15B804u;
            return;
        }
    }
    ctx->pc = 0x15B7FCu;
}
