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

// Function: entry_00202ab8
// Address: 0x202ab8 - 0x202ae4
void entry_00202ab8_0x202ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202ab8_0x202ab8");
#endif

    switch (ctx->pc) {
        case 0x202ac4u: goto label_202ac4;
        case 0x202ad4u: goto label_202ad4;
        default: break;
    }

    ctx->pc = 0x202ab8u;

    // 0x202ab8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202abc: 0xc08009a  jal         func_200268
    ctx->pc = 0x202ABCu;
    SET_GPR_U32(ctx, 31, 0x202AC4u);
    ctx->pc = 0x202AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ABCu;
    // 0x202ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x202ABCu, 0x202AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AC4u;
label_202ac4:
    // 0x202ac4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x202ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x202ac8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x202acc: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x202ACCu;
    SET_GPR_U32(ctx, 31, 0x202AD4u);
    ctx->pc = 0x202AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ACCu;
    // 0x202ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x202ACCu, 0x202AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AD4u;
label_202ad4:
    // 0x202ad4: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x202AD4u;
    {
        const bool branch_taken_0x202ad4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x202AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AD4u;
        // 0x202ad8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ad4) {
            ctx->pc = 0x202B34u;
            return;
        }
    }
    ctx->pc = 0x202ADCu;
    // 0x202adc: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x202ADCu;
    {
        const bool branch_taken_0x202adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202adc) {
            ctx->pc = 0x2030B4u;
            return;
        }
    }
    ctx->pc = 0x202AE4u;
}
