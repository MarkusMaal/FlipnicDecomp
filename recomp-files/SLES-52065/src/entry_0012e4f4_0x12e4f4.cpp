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

// Function: entry_0012e4f4
// Address: 0x12e4f4 - 0x12e500
void entry_0012e4f4_0x12e4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e4f4_0x12e4f4");
#endif

    ctx->pc = 0x12e4f4u;

    // 0x12e4f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12e4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12E4F8u;
    {
        const bool branch_taken_0x12e4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4F8u;
        // 0x12e4fc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4f8) {
            ctx->pc = 0x12E504u;
            return;
        }
    }
    ctx->pc = 0x12E500u;
}
