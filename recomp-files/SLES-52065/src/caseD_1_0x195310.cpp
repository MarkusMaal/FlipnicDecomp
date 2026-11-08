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

// Function: caseD_1
// Address: 0x195310 - 0x195338
void caseD_1_0x195310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x195310");
#endif

    switch (ctx->pc) {
        case 0x195328u: goto label_195328;
        case 0x195334u: goto label_195334;
        default: break;
    }

    ctx->pc = 0x195310u;

    // 0x195310: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x195314: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195314u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195318: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195318u;
    {
        const bool branch_taken_0x195318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195318u;
        // 0x19531c: 0x8e12002c  lw          $s2, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195318) {
            ctx->pc = 0x195338u;
            return;
        }
    }
    ctx->pc = 0x195320u;
    // 0x195320: 0xc047a50  jal         func_11E940
    ctx->pc = 0x195320u;
    SET_GPR_U32(ctx, 31, 0x195328u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x195320u, 0x195328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195328u;
label_195328:
    // 0x195328: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x19532c: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x19532Cu;
    SET_GPR_U32(ctx, 31, 0x195334u);
    ctx->pc = 0x195330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19532Cu;
    // 0x195330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x19532Cu, 0x195334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195334u;
label_195334:
    // 0x195334: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    ctx->pc = 0x195338u;
}
