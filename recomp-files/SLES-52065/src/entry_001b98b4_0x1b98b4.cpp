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

// Function: entry_001b98b4
// Address: 0x1b98b4 - 0x1b98bc
void entry_001b98b4_0x1b98b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b98b4_0x1b98b4");
#endif

    ctx->pc = 0x1b98b4u;

    // 0x1b98b4: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x1B98B4u;
    {
        const bool branch_taken_0x1b98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B4u;
        // 0x1b98b8: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98b4) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B98BCu;
}
