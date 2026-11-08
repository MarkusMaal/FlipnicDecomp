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

// Function: entry_001a4198
// Address: 0x1a4198 - 0x1a41a0
void entry_001a4198_0x1a4198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4198_0x1a4198");
#endif

    ctx->pc = 0x1a4198u;

    // 0x1a4198: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1A4198u;
    {
        const bool branch_taken_0x1a4198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4198u;
        // 0x1a419c: 0xae34067c  sw          $s4, 0x67C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4198) {
            ctx->pc = 0x1A431Cu;
            return;
        }
    }
    ctx->pc = 0x1A41A0u;
}
