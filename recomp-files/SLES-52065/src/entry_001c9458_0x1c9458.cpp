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

// Function: entry_001c9458
// Address: 0x1c9458 - 0x1c9470
void entry_001c9458_0x1c9458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9458_0x1c9458");
#endif

    switch (ctx->pc) {
        case 0x1c9460u: goto label_1c9460;
        default: break;
    }

    ctx->pc = 0x1c9458u;

    // 0x1c9458: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1C9458u;
    SET_GPR_U32(ctx, 31, 0x1C9460u);
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1C9458u, 0x1C9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9460u;
label_1c9460:
    // 0x1c9460: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9464: 0x8c22f8b8  lw          $v0, -0x748($at)
    ctx->pc = 0x1c9464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9468u;
    {
        const bool branch_taken_0x1c9468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9468u;
        // 0x1c946c: 0x2446000a  addiu       $a2, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9468) {
            ctx->pc = 0x1C9474u;
            return;
        }
    }
    ctx->pc = 0x1C9470u;
}
