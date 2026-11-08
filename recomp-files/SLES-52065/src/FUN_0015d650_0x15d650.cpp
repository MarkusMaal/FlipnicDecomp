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

// Function: FUN_0015d650
// Address: 0x15d650 - 0x15d700
void FUN_0015d650_0x15d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015d650_0x15d650");
#endif

    switch (ctx->pc) {
        case 0x15d650u: goto label_15d650;
        case 0x15d654u: goto label_15d654;
        case 0x15d658u: goto label_15d658;
        case 0x15d65cu: goto label_15d65c;
        case 0x15d660u: goto label_15d660;
        case 0x15d664u: goto label_15d664;
        case 0x15d668u: goto label_15d668;
        case 0x15d66cu: goto label_15d66c;
        case 0x15d670u: goto label_15d670;
        case 0x15d674u: goto label_15d674;
        case 0x15d678u: goto label_15d678;
        case 0x15d67cu: goto label_15d67c;
        case 0x15d680u: goto label_15d680;
        case 0x15d684u: goto label_15d684;
        case 0x15d688u: goto label_15d688;
        case 0x15d68cu: goto label_15d68c;
        case 0x15d690u: goto label_15d690;
        case 0x15d694u: goto label_15d694;
        case 0x15d698u: goto label_15d698;
        case 0x15d69cu: goto label_15d69c;
        case 0x15d6a0u: goto label_15d6a0;
        case 0x15d6a4u: goto label_15d6a4;
        case 0x15d6a8u: goto label_15d6a8;
        case 0x15d6acu: goto label_15d6ac;
        case 0x15d6b0u: goto label_15d6b0;
        case 0x15d6b4u: goto label_15d6b4;
        case 0x15d6b8u: goto label_15d6b8;
        case 0x15d6bcu: goto label_15d6bc;
        case 0x15d6c0u: goto label_15d6c0;
        case 0x15d6c4u: goto label_15d6c4;
        case 0x15d6c8u: goto label_15d6c8;
        case 0x15d6ccu: goto label_15d6cc;
        case 0x15d6d0u: goto label_15d6d0;
        case 0x15d6d4u: goto label_15d6d4;
        case 0x15d6d8u: goto label_15d6d8;
        case 0x15d6dcu: goto label_15d6dc;
        case 0x15d6e0u: goto label_15d6e0;
        case 0x15d6e4u: goto label_15d6e4;
        case 0x15d6e8u: goto label_15d6e8;
        case 0x15d6ecu: goto label_15d6ec;
        case 0x15d6f0u: goto label_15d6f0;
        case 0x15d6f4u: goto label_15d6f4;
        case 0x15d6f8u: goto label_15d6f8;
        case 0x15d6fcu: goto label_15d6fc;
        default: break;
    }

    ctx->pc = 0x15d650u;

label_15d650:
    // 0x15d650: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15d654:
    // 0x15d654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15d658:
    // 0x15d658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d65c:
    // 0x15d65c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15d660:
    // 0x15d660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15d664:
    // 0x15d664: 0x8c913ddc  lw          $s1, 0x3DDC($a0)
    ctx->pc = 0x15d664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
label_15d668:
    // 0x15d668: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d66c:
    // 0x15d66c: 0x10000009  b           . + 4 + (0x9 << 2)
label_15d670:
    if (ctx->pc == 0x15D670u) {
        ctx->pc = 0x15D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D66Cu;
        // 0x15d670: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D674u;
        goto label_15d674;
    }
    ctx->pc = 0x15D66Cu;
    {
        const bool branch_taken_0x15d66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D66Cu;
        // 0x15d670: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d66c) {
            ctx->pc = 0x15D694u;
            goto label_15d694;
        }
    }
    ctx->pc = 0x15D674u;
label_15d674:
    // 0x15d674: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x15d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_15d678:
    // 0x15d678: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_15d67c:
    // 0x15d67c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d680:
    // 0x15d680: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_15d684:
    // 0x15d684: 0x320f809  jalr        $t9
label_15d688:
    if (ctx->pc == 0x15D688u) {
        ctx->pc = 0x15D68Cu;
        goto label_15d68c;
    }
    ctx->pc = 0x15D684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D68Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D684u, 0x15D68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D68Cu;
label_15d68c:
    // 0x15d68c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d68cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15d690:
    // 0x15d690: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d694:
    // 0x15d694: 0x0  nop
    ctx->pc = 0x15d694u;
    // NOP
label_15d698:
    // 0x15d698: 0x8e033dd8  lw          $v1, 0x3DD8($s0)
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15832)));
label_15d69c:
    // 0x15d69c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d69cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d6a0:
    // 0x15d6a0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_15d6a4:
    if (ctx->pc == 0x15D6A4u) {
        ctx->pc = 0x15D6A8u;
        goto label_15d6a8;
    }
    ctx->pc = 0x15D6A0u;
    {
        const bool branch_taken_0x15d6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d6a0) {
            ctx->pc = 0x15D674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d674;
        }
    }
    ctx->pc = 0x15D6A8u;
label_15d6a8:
    // 0x15d6a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15d6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d6ac:
    // 0x15d6ac: 0x10000009  b           . + 4 + (0x9 << 2)
label_15d6b0:
    if (ctx->pc == 0x15D6B0u) {
        ctx->pc = 0x15D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6ACu;
        // 0x15d6b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D6B4u;
        goto label_15d6b4;
    }
    ctx->pc = 0x15D6ACu;
    {
        const bool branch_taken_0x15d6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6ACu;
        // 0x15d6b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6ac) {
            ctx->pc = 0x15D6D4u;
            goto label_15d6d4;
        }
    }
    ctx->pc = 0x15D6B4u;
label_15d6b4:
    // 0x15d6b4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_15d6b8:
    // 0x15d6b8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x15d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_15d6bc:
    // 0x15d6bc: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15d6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15d6c0:
    // 0x15d6c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x15d6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_15d6c4:
    // 0x15d6c4: 0x320f809  jalr        $t9
label_15d6c8:
    if (ctx->pc == 0x15D6C8u) {
        ctx->pc = 0x15D6CCu;
        goto label_15d6cc;
    }
    ctx->pc = 0x15D6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15D6CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D6C4u, 0x15D6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D6CCu;
label_15d6cc:
    // 0x15d6cc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x15d6ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_15d6d0:
    // 0x15d6d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15d6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15d6d4:
    // 0x15d6d4: 0x0  nop
    ctx->pc = 0x15d6d4u;
    // NOP
label_15d6d8:
    // 0x15d6d8: 0x8e032cd4  lw          $v1, 0x2CD4($s0)
    ctx->pc = 0x15d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
label_15d6dc:
    // 0x15d6dc: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15d6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15d6e0:
    // 0x15d6e0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_15d6e4:
    if (ctx->pc == 0x15D6E4u) {
        ctx->pc = 0x15D6E8u;
        goto label_15d6e8;
    }
    ctx->pc = 0x15D6E0u;
    {
        const bool branch_taken_0x15d6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d6e0) {
            ctx->pc = 0x15D6B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d6b4;
        }
    }
    ctx->pc = 0x15D6E8u;
label_15d6e8:
    // 0x15d6e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15d6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d6ec:
    // 0x15d6ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d6f0:
    // 0x15d6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d6f4:
    // 0x15d6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15d6f8:
    // 0x15d6f8: 0x3e00008  jr          $ra
label_15d6fc:
    if (ctx->pc == 0x15D6FCu) {
        ctx->pc = 0x15D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6F8u;
        // 0x15d6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D700u;
        goto label_fallthrough_0x15d6f8;
    }
    ctx->pc = 0x15D6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6F8u;
        // 0x15d6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d6f8:
    ctx->pc = 0x15D700u;
}
