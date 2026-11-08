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

// Function: entry_001de628
// Address: 0x1de628 - 0x1de6d0
void entry_001de628_0x1de628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de628_0x1de628");
#endif

    switch (ctx->pc) {
        case 0x1de684u: goto label_1de684;
        case 0x1de690u: goto label_1de690;
        case 0x1de6a0u: goto label_1de6a0;
        case 0x1de6bcu: goto label_1de6bc;
        case 0x1de6c8u: goto label_1de6c8;
        default: break;
    }

    ctx->pc = 0x1de628u;

    // 0x1de628: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1de628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1de62c: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x1de62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1de630: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1de630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1de634: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1de634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1de638: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1de638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1de63c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1de63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1de640: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1de640u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1de644: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x1de644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1de648: 0x96319b30  lhu         $s1, -0x64D0($s1)
    ctx->pc = 0x1de648u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294941488)));
    // 0x1de64c: 0x3812  mflo        $a3
    ctx->pc = 0x1de64cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1de650: 0x2010  mfhi        $a0
    ctx->pc = 0x1de650u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1de654: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x1de654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1de658: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1de658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1de65c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1de65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1de660: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1de660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1de664: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1de664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1de668: 0x1012  mflo        $v0
    ctx->pc = 0x1de668u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1de66c: 0x2810  mfhi        $a1
    ctx->pc = 0x1de66cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1de670: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1de670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1de674: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1de674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1de678: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1de678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1de67c: 0xc081c20  jal         func_207080
    ctx->pc = 0x1DE67Cu;
    SET_GPR_U32(ctx, 31, 0x1DE684u);
    ctx->pc = 0x1DE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE67Cu;
    // 0x1de680: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1DE67Cu, 0x1DE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE684u;
label_1de684:
    // 0x1de684: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1de684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1de688: 0xc081c20  jal         func_207080
    ctx->pc = 0x1DE688u;
    SET_GPR_U32(ctx, 31, 0x1DE690u);
    ctx->pc = 0x1DE68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE688u;
    // 0x1de68c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1DE688u, 0x1DE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE690u;
label_1de690:
    // 0x1de690: 0x3c050f81  lui         $a1, 0xF81
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3969 << 16));
    // 0x1de694: 0x34a57e01  ori         $a1, $a1, 0x7E01
    ctx->pc = 0x1de694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32257);
    // 0x1de698: 0xc081850  jal         func_206140
    ctx->pc = 0x1DE698u;
    SET_GPR_U32(ctx, 31, 0x1DE6A0u);
    ctx->pc = 0x1DE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE698u;
    // 0x1de69c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206140u, 0x1DE698u, 0x1DE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6A0u;
label_1de6a0:
    // 0x1de6a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1de6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de6a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de6ac: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE6ACu;
    {
        const bool branch_taken_0x1de6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6ACu;
        // 0x1de6b0: 0x28820000  slti        $v0, $a0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6ac) {
            ctx->pc = 0x1DE6D0u;
            return;
        }
    }
    ctx->pc = 0x1DE6B4u;
    // 0x1de6b4: 0xc081c20  jal         func_207080
    ctx->pc = 0x1DE6B4u;
    SET_GPR_U32(ctx, 31, 0x1DE6BCu);
    ctx->pc = 0x1DE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6B4u;
    // 0x1de6b8: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1DE6B4u, 0x1DE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6BCu;
label_1de6bc:
    // 0x1de6bc: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1de6c0: 0xc081850  jal         func_206140
    ctx->pc = 0x1DE6C0u;
    SET_GPR_U32(ctx, 31, 0x1DE6C8u);
    ctx->pc = 0x1DE6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6C0u;
    // 0x1de6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206140u, 0x1DE6C0u, 0x1DE6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6C8u;
label_1de6c8:
    // 0x1de6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6cc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1de6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    ctx->pc = 0x1de6d0u;
}
