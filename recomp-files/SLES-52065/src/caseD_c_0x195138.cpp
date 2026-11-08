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

// Function: caseD_c
// Address: 0x195138 - 0x19517c
void caseD_c_0x195138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x195138");
#endif

    switch (ctx->pc) {
        case 0x195158u: goto label_195158;
        case 0x195174u: goto label_195174;
        default: break;
    }

    ctx->pc = 0x195138u;

    // 0x195138: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x195138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x19513c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x19513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x195140: 0x8e120038  lw          $s2, 0x38($s0)
    ctx->pc = 0x195140u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x195144: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x195144u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x195148: 0x8e150030  lw          $s5, 0x30($s0)
    ctx->pc = 0x195148u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19514c: 0x8e16002c  lw          $s6, 0x2C($s0)
    ctx->pc = 0x19514cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x195150: 0xc057040  jal         func_15C100
    ctx->pc = 0x195150u;
    SET_GPR_U32(ctx, 31, 0x195158u);
    ctx->pc = 0x195154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195150u;
    // 0x195154: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x195150u, 0x195158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195158u;
label_195158:
    // 0x195158: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x195158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19515c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19515cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195160: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x195160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195164: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x195164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x195168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19516c: 0xc064d84  jal         func_193610
    ctx->pc = 0x19516Cu;
    SET_GPR_U32(ctx, 31, 0x195174u);
    ctx->pc = 0x195170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19516Cu;
    // 0x195170: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x19516Cu, 0x195174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195174u;
label_195174:
    // 0x195174: 0x100002ff  b           . + 4 + (0x2FF << 2)
    ctx->pc = 0x195174u;
    {
        const bool branch_taken_0x195174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195174u;
        // 0x195178: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195174) {
            ctx->pc = 0x195D74u;
            return;
        }
    }
    ctx->pc = 0x19517Cu;
}
