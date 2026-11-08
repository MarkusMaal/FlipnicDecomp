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

// Function: entry_0019b07c
// Address: 0x19b07c - 0x19b088
void entry_0019b07c_0x19b07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b07c_0x19b07c");
#endif

    ctx->pc = 0x19b07cu;

    // 0x19b07c: 0x0  nop
    ctx->pc = 0x19b07cu;
    // NOP
    // 0x19b080: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x19B080u;
    {
        const bool branch_taken_0x19b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B080u;
        // 0x19b084: 0xae320678  sw          $s2, 0x678($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b080) {
            ctx->pc = 0x19B124u;
            return;
        }
    }
    ctx->pc = 0x19B088u;
}
