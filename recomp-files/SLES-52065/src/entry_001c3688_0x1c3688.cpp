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

// Function: entry_001c3688
// Address: 0x1c3688 - 0x1c3690
void entry_001c3688_0x1c3688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3688_0x1c3688");
#endif

    ctx->pc = 0x1c3688u;

    // 0x1c3688: 0x1000035f  b           . + 4 + (0x35F << 2)
    ctx->pc = 0x1C3688u;
    {
        const bool branch_taken_0x1c3688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3688u;
        // 0x1c368c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3688) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3690u;
}
