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

// Function: entry_001c27f8
// Address: 0x1c27f8 - 0x1c2800
void entry_001c27f8_0x1c27f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c27f8_0x1c27f8");
#endif

    ctx->pc = 0x1c27f8u;

    // 0x1c27f8: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1C27F8u;
    {
        const bool branch_taken_0x1c27f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27F8u;
        // 0x1c27fc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27f8) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2800u;
}
