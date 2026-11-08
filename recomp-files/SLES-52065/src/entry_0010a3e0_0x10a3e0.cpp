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

// Function: entry_0010a3e0
// Address: 0x10a3e0 - 0x10a448
void entry_0010a3e0_0x10a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a3e0_0x10a3e0");
#endif

    switch (ctx->pc) {
        case 0x10a3e8u: goto label_10a3e8;
        case 0x10a3f0u: goto label_10a3f0;
        case 0x10a408u: goto label_10a408;
        case 0x10a420u: goto label_10a420;
        default: break;
    }

    ctx->pc = 0x10a3e0u;

label_10a3e0:
    // 0x10a3e0: 0xc057594  jal         func_15D650
label_10a3e4:
    if (ctx->pc == 0x10A3E4u) {
        ctx->pc = 0x10A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E0u;
        // 0x10a3e4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3E8u;
        goto label_10a3e8;
    }
    ctx->pc = 0x10A3E0u;
    SET_GPR_U32(ctx, 31, 0x10A3E8u);
    ctx->pc = 0x10A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3E0u;
    // 0x10a3e4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D650u, 0x10A3E0u, 0x10A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3E8u;
label_10a3e8:
    // 0x10a3e8: 0xc057548  jal         func_15D520
label_10a3ec:
    if (ctx->pc == 0x10A3ECu) {
        ctx->pc = 0x10A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E8u;
        // 0x10a3ec: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3F0u;
        goto label_10a3f0;
    }
    ctx->pc = 0x10A3E8u;
    SET_GPR_U32(ctx, 31, 0x10A3F0u);
    ctx->pc = 0x10A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3E8u;
    // 0x10a3ec: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x10A3E8u, 0x10A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3F0u;
label_10a3f0:
    // 0x10a3f0: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a3f4:
    // 0x10a3f4: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x10a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_10a3f8:
    // 0x10a3f8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a3fc:
    // 0x10a3fc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10a3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10a400:
    // 0x10a400: 0x320f809  jalr        $t9
label_10a404:
    if (ctx->pc == 0x10A404u) {
        ctx->pc = 0x10A408u;
        goto label_10a408;
    }
    ctx->pc = 0x10A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A408u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A400u, 0x10A408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A408u;
label_10a408:
    // 0x10a408: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x10a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_10a40c:
    // 0x10a40c: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x10a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_10a410:
    // 0x10a410: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10a414:
    // 0x10a414: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x10a414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10a418:
    // 0x10a418: 0x320f809  jalr        $t9
label_10a41c:
    if (ctx->pc == 0x10A41Cu) {
        ctx->pc = 0x10A420u;
        goto label_10a420;
    }
    ctx->pc = 0x10A418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10A420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A418u, 0x10A420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A420u;
label_10a420:
    // 0x10a420: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10a420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10a424:
    // 0x10a424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a428:
    // 0x10a428: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10a428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10a42c:
    // 0x10a42c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10a42cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10a430:
    // 0x10a430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10a430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10a434:
    // 0x10a434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10a434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10a438:
    // 0x10a438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10a438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10a43c:
    // 0x10a43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10a440:
    // 0x10a440: 0x3e00008  jr          $ra
label_10a444:
    if (ctx->pc == 0x10A444u) {
        ctx->pc = 0x10A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A440u;
        // 0x10a444: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A448u;
        goto label_fallthrough_0x10a440;
    }
    ctx->pc = 0x10A440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A440u;
        // 0x10a444: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10a440:
    ctx->pc = 0x10A448u;
}
