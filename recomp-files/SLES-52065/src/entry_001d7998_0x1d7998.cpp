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

// Function: entry_001d7998
// Address: 0x1d7998 - 0x1d79b4
void entry_001d7998_0x1d7998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7998_0x1d7998");
#endif

    switch (ctx->pc) {
        case 0x1d79acu: goto label_1d79ac;
        default: break;
    }

    ctx->pc = 0x1d7998u;

label_1d7998:
    // 0x1d7998: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d7998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d799c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d799cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d79a0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d79a4: 0xc07762e  jal         func_1DD8B8
    ctx->pc = 0x1D79A4u;
    SET_GPR_U32(ctx, 31, 0x1D79ACu);
    ctx->pc = 0x1D79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79A4u;
    // 0x1d79a8: 0x90450002  lbu         $a1, 0x2($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8B8u, 0x1D79A4u, 0x1D79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79ACu;
label_1d79ac:
    // 0x1d79ac: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D79ACu;
    {
        const bool branch_taken_0x1d79ac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79ACu;
        // 0x1d79b0: 0x8e42054c  lw          $v0, 0x54C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79ac) {
            ctx->pc = 0x1D7998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7998;
        }
    }
    ctx->pc = 0x1D79B4u;
}
