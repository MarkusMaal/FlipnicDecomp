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

// Function: caseD_0
// Address: 0x195220 - 0x195254
void caseD_0_0x195220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x195220");
#endif

    switch (ctx->pc) {
        case 0x195244u: goto label_195244;
        case 0x195250u: goto label_195250;
        default: break;
    }

    ctx->pc = 0x195220u;

    // 0x195220: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x195220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x195224: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x195224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195228: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x195228u;
    {
        const bool branch_taken_0x195228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195228u;
        // 0x19522c: 0x8e150030  lw          $s5, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195228) {
            ctx->pc = 0x19528Cu;
            return;
        }
    }
    ctx->pc = 0x195230u;
    // 0x195230: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x195230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x195234: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195234u;
    {
        const bool branch_taken_0x195234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195234) {
            ctx->pc = 0x195254u;
            return;
        }
    }
    ctx->pc = 0x19523Cu;
    // 0x19523c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x19523Cu;
    SET_GPR_U32(ctx, 31, 0x195244u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x19523Cu, 0x195244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195244u;
label_195244:
    // 0x195244: 0x8f858700  lw          $a1, -0x7900($gp)
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x195248: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x195248u;
    SET_GPR_U32(ctx, 31, 0x195250u);
    ctx->pc = 0x19524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195248u;
    // 0x19524c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x195248u, 0x195250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195250u;
label_195250:
    // 0x195250: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x195250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    ctx->pc = 0x195254u;
}
