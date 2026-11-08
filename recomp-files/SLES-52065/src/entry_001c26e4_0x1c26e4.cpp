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

// Function: entry_001c26e4
// Address: 0x1c26e4 - 0x1c26f4
void entry_001c26e4_0x1c26e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c26e4_0x1c26e4");
#endif

    ctx->pc = 0x1c26e4u;

    // 0x1c26e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C26E4u;
    {
        const bool branch_taken_0x1c26e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c26e4) {
            ctx->pc = 0x1C26F4u;
            return;
        }
    }
    ctx->pc = 0x1C26ECu;
    // 0x1c26ec: 0x10000160  b           . + 4 + (0x160 << 2)
    ctx->pc = 0x1C26ECu;
    {
        const bool branch_taken_0x1c26ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26ECu;
        // 0x1c26f0: 0xae250248  sw          $a1, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26ec) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C26F4u;
}
