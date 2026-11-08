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

// Function: entry_00191990
// Address: 0x191990 - 0x191998
void entry_00191990_0x191990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191990_0x191990");
#endif

    ctx->pc = 0x191990u;

    // 0x191990: 0x10000264  b           . + 4 + (0x264 << 2)
    ctx->pc = 0x191990u;
    {
        const bool branch_taken_0x191990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191990u;
        // 0x191994: 0xac4504d0  sw          $a1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191990) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191998u;
}
