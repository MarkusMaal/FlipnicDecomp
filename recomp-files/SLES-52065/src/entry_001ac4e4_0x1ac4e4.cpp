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

// Function: entry_001ac4e4
// Address: 0x1ac4e4 - 0x1ac4ec
void entry_001ac4e4_0x1ac4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac4e4_0x1ac4e4");
#endif

    ctx->pc = 0x1ac4e4u;

    // 0x1ac4e4: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x1AC4E4u;
    {
        const bool branch_taken_0x1ac4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4E4u;
        // 0x1ac4e8: 0xa22306da  sb          $v1, 0x6DA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1754), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4e4) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC4ECu;
}
