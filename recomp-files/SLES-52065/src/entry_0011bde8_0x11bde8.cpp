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

// Function: entry_0011bde8
// Address: 0x11bde8 - 0x11bdf8
void entry_0011bde8_0x11bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bde8_0x11bde8");
#endif

    ctx->pc = 0x11bde8u;

    // 0x11bde8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BDE8u;
    {
        const bool branch_taken_0x11bde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bde8) {
            ctx->pc = 0x11BDF8u;
            return;
        }
    }
    ctx->pc = 0x11BDF0u;
    // 0x11bdf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BDF0u;
    {
        const bool branch_taken_0x11bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDF0u;
        // 0x11bdf4: 0xae2400fc  sw          $a0, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf0) {
            ctx->pc = 0x11BDFCu;
            return;
        }
    }
    ctx->pc = 0x11BDF8u;
}
