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

// Function: entry_0014cb98
// Address: 0x14cb98 - 0x14cba0
void entry_0014cb98_0x14cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb98_0x14cb98");
#endif

    ctx->pc = 0x14cb98u;

    // 0x14cb98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB98u;
    {
        const bool branch_taken_0x14cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB98u;
        // 0x14cb9c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb98) {
            ctx->pc = 0x14CBA8u;
            return;
        }
    }
    ctx->pc = 0x14CBA0u;
}
