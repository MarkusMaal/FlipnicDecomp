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

// Function: entry_001c4128
// Address: 0x1c4128 - 0x1c4130
void entry_001c4128_0x1c4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4128_0x1c4128");
#endif

    ctx->pc = 0x1c4128u;

    // 0x1c4128: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1C4128u;
    {
        const bool branch_taken_0x1c4128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4128u;
        // 0x1c412c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4128) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C4130u;
}
