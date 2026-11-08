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

// Function: entry_001d8384
// Address: 0x1d8384 - 0x1d8394
void entry_001d8384_0x1d8384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8384_0x1d8384");
#endif

    switch (ctx->pc) {
        case 0x1d838cu: goto label_1d838c;
        default: break;
    }

    ctx->pc = 0x1d8384u;

    // 0x1d8384: 0xc077818  jal         func_1DE060
    ctx->pc = 0x1D8384u;
    SET_GPR_U32(ctx, 31, 0x1D838Cu);
    ctx->pc = 0x1D8388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8384u;
    // 0x1d8388: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE060u, 0x1D8384u, 0x1D838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D838Cu;
label_1d838c:
    // 0x1d838c: 0x603fff6  bgezl       $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D838Cu;
    {
        const bool branch_taken_0x1d838c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d838c) {
            ctx->pc = 0x1D8390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D838Cu;
            // 0x1d8390: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8368u;
            return;
        }
    }
    ctx->pc = 0x1D8394u;
}
