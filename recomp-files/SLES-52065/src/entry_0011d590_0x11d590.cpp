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

// Function: entry_0011d590
// Address: 0x11d590 - 0x11d59c
void entry_0011d590_0x11d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d590_0x11d590");
#endif

    ctx->pc = 0x11d590u;

    // 0x11d590: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x11d590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d594: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x11D594u;
    {
        const bool branch_taken_0x11d594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D594u;
        // 0x11d598: 0x8e940038  lw          $s4, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d594) {
            ctx->pc = 0x11D4DCu;
            return;
        }
    }
    ctx->pc = 0x11D59Cu;
}
