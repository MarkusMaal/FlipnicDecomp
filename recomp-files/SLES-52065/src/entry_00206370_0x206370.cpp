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

// Function: entry_00206370
// Address: 0x206370 - 0x206384
void entry_00206370_0x206370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206370_0x206370");
#endif

    ctx->pc = 0x206370u;

    // 0x206370: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x206370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x206374: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x206374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206378: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206378u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20637c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x20637Cu;
    {
        const bool branch_taken_0x20637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20637Cu;
        // 0x206380: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20637c) {
            ctx->pc = 0x2067B8u;
            return;
        }
    }
    ctx->pc = 0x206384u;
}
