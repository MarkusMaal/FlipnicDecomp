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

// Function: entry_002074b0
// Address: 0x2074b0 - 0x2074c4
void entry_002074b0_0x2074b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002074b0_0x2074b0");
#endif

    ctx->pc = 0x2074b0u;

    // 0x2074b0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2074b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2074b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2074b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2074b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2074b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2074bc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2074BCu;
    {
        const bool branch_taken_0x2074bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074BCu;
        // 0x2074c0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074bc) {
            ctx->pc = 0x207690u;
            return;
        }
    }
    ctx->pc = 0x2074C4u;
}
