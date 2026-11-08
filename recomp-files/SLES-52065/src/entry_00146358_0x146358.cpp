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

// Function: entry_00146358
// Address: 0x146358 - 0x146360
void entry_00146358_0x146358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146358_0x146358");
#endif

    ctx->pc = 0x146358u;

    // 0x146358: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x146358u;
    {
        const bool branch_taken_0x146358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146358u;
        // 0x14635c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146358) {
            ctx->pc = 0x14644Cu;
            return;
        }
    }
    ctx->pc = 0x146360u;
}
