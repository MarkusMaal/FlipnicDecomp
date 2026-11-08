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

// Function: entry_00118c58
// Address: 0x118c58 - 0x118c60
void entry_00118c58_0x118c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118c58_0x118c58");
#endif

    ctx->pc = 0x118c58u;

    // 0x118c58: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x118C58u;
    {
        const bool branch_taken_0x118c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C58u;
        // 0x118c5c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c58) {
            ctx->pc = 0x118D20u;
            return;
        }
    }
    ctx->pc = 0x118C60u;
}
