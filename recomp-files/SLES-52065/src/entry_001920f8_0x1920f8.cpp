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

// Function: entry_001920f8
// Address: 0x1920f8 - 0x192100
void entry_001920f8_0x1920f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001920f8_0x1920f8");
#endif

    ctx->pc = 0x1920f8u;

    // 0x1920f8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1920F8u;
    {
        const bool branch_taken_0x1920f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1920FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1920F8u;
        // 0x1920fc: 0xac4004d0  sw          $zero, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1920f8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x192100u;
}
