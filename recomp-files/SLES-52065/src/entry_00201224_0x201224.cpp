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

// Function: entry_00201224
// Address: 0x201224 - 0x20122c
void entry_00201224_0x201224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201224_0x201224");
#endif

    ctx->pc = 0x201224u;

    // 0x201224: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x201224u;
    {
        const bool branch_taken_0x201224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201224u;
        // 0x201228: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201224) {
            ctx->pc = 0x201130u;
            return;
        }
    }
    ctx->pc = 0x20122Cu;
}
