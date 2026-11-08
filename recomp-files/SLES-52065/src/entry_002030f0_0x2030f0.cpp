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

// Function: entry_002030f0
// Address: 0x2030f0 - 0x2030f8
void entry_002030f0_0x2030f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002030f0_0x2030f0");
#endif

    ctx->pc = 0x2030f0u;

    // 0x2030f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2030F0u;
    {
        const bool branch_taken_0x2030f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2030f0) {
            ctx->pc = 0x2030F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2030F0u;
            // 0x2030f4: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030F8u;
            return;
        }
    }
    ctx->pc = 0x2030F8u;
}
