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

// Function: FUN_0017d790
// Address: 0x17d790 - 0x17d854
void FUN_0017d790_0x17d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d790_0x17d790");
#endif

    switch (ctx->pc) {
        case 0x17d7ccu: goto label_17d7cc;
        case 0x17d7e8u: goto label_17d7e8;
        case 0x17d7fcu: goto label_17d7fc;
        case 0x17d808u: goto label_17d808;
        case 0x17d820u: goto label_17d820;
        case 0x17d838u: goto label_17d838;
        default: break;
    }

    ctx->pc = 0x17d790u;

    // 0x17d790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17d798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d79c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d7a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17d7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d7a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d7a8: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x17D7A8u;
    {
        const bool branch_taken_0x17d7a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7A8u;
        // 0x17d7ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7a8) {
            ctx->pc = 0x17D838u;
            goto label_17d838;
        }
    }
    ctx->pc = 0x17D7B0u;
    // 0x17d7b0: 0x26441050  addiu       $a0, $s2, 0x1050
    ctx->pc = 0x17d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4176));
    // 0x17d7b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D7B4u;
    {
        const bool branch_taken_0x17d7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7B4u;
        // 0x17d7b8: 0x2642000c  addiu       $v0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7b4) {
            ctx->pc = 0x17D7D0u;
            goto label_17d7d0;
        }
    }
    ctx->pc = 0x17D7BCu;
    // 0x17d7bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D7BCu;
    {
        const bool branch_taken_0x17d7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7BCu;
        // 0x17d7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7bc) {
            ctx->pc = 0x17D7CCu;
            goto label_17d7cc;
        }
    }
    ctx->pc = 0x17D7C4u;
    // 0x17d7c4: 0xc05fccc  jal         func_17F330
    ctx->pc = 0x17D7C4u;
    SET_GPR_U32(ctx, 31, 0x17D7CCu);
    ctx->pc = 0x17F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F330u, 0x17D7C4u, 0x17D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7CCu;
label_17d7cc:
    // 0x17d7cc: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_17d7d0:
    // 0x17d7d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D7D0u;
    {
        const bool branch_taken_0x17d7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d7d0) {
            ctx->pc = 0x17D808u;
            goto label_17d808;
        }
    }
    ctx->pc = 0x17D7D8u;
    // 0x17d7d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D7D8u;
    {
        const bool branch_taken_0x17d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7D8u;
        // 0x17d7dc: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7d8) {
            ctx->pc = 0x17D808u;
            goto label_17d808;
        }
    }
    ctx->pc = 0x17D7E0u;
    // 0x17d7e0: 0xc05f618  jal         func_17D860
    ctx->pc = 0x17D7E0u;
    SET_GPR_U32(ctx, 31, 0x17D7E8u);
    ctx->pc = 0x17D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D7E0u;
    // 0x17d7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D860u, 0x17D7E0u, 0x17D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7E8u;
label_17d7e8:
    // 0x17d7e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d7ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D7ECu;
    {
        const bool branch_taken_0x17d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7ECu;
        // 0x17d7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7ec) {
            ctx->pc = 0x17D808u;
            goto label_17d808;
        }
    }
    ctx->pc = 0x17D7F4u;
    // 0x17d7f4: 0xc05f618  jal         func_17D860
    ctx->pc = 0x17D7F4u;
    SET_GPR_U32(ctx, 31, 0x17D7FCu);
    ctx->pc = 0x17D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D860u, 0x17D7F4u, 0x17D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7FCu;
label_17d7fc:
    // 0x17d7fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d800: 0xc05fce8  jal         func_17F3A0
    ctx->pc = 0x17D800u;
    SET_GPR_U32(ctx, 31, 0x17D808u);
    ctx->pc = 0x17D804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D800u;
    // 0x17d804: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3A0u, 0x17D800u, 0x17D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D808u;
label_17d808:
    // 0x17d808: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D808u;
    {
        const bool branch_taken_0x17d808 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D808u;
        // 0x17d80c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d808) {
            ctx->pc = 0x17D824u;
            goto label_17d824;
        }
    }
    ctx->pc = 0x17D810u;
    // 0x17d810: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D810u;
    {
        const bool branch_taken_0x17d810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D810u;
        // 0x17d814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d810) {
            ctx->pc = 0x17D820u;
            goto label_17d820;
        }
    }
    ctx->pc = 0x17D818u;
    // 0x17d818: 0xc048414  jal         func_121050
    ctx->pc = 0x17D818u;
    SET_GPR_U32(ctx, 31, 0x17D820u);
    ctx->pc = 0x17D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D818u;
    // 0x17d81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x17D818u, 0x17D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D820u;
label_17d820:
    // 0x17d820: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x17d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_17d824:
    // 0x17d824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17d824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17d828: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D828u;
    {
        const bool branch_taken_0x17d828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D828u;
        // 0x17d82c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d828) {
            ctx->pc = 0x17D83Cu;
            goto label_17d83c;
        }
    }
    ctx->pc = 0x17D830u;
    // 0x17d830: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17D830u;
    SET_GPR_U32(ctx, 31, 0x17D838u);
    ctx->pc = 0x17D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D830u;
    // 0x17d834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17D830u, 0x17D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D838u;
label_17d838:
    // 0x17d838: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x17d838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17d83c:
    // 0x17d83c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17d83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d84c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D84Cu;
        // 0x17d850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D854u;
}
