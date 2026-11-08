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

// Function: entry_001d4830
// Address: 0x1d4830 - 0x1d48c0
void entry_001d4830_0x1d4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4830_0x1d4830");
#endif

    switch (ctx->pc) {
        case 0x1d4874u: goto label_1d4874;
        default: break;
    }

    ctx->pc = 0x1d4830u;

label_1d4830:
    // 0x1d4830: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
label_1d4834:
    // 0x1d4834: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_1d4838:
    if (ctx->pc == 0x1D4838u) {
        ctx->pc = 0x1D4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4834u;
        // 0x1d4838: 0x34040  sll         $t0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D483Cu;
        goto label_1d483c;
    }
    ctx->pc = 0x1D4834u;
    {
        const bool branch_taken_0x1d4834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4834u;
        // 0x1d4838: 0x34040  sll         $t0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4834) {
            ctx->pc = 0x1D4990u;
            return;
        }
    }
    ctx->pc = 0x1D483Cu;
label_1d483c:
    // 0x1d483c: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x1d483cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1d4840:
    // 0x1d4840: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1d4840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1d4844:
    // 0x1d4844: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x1d4844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1d4848:
    // 0x1d4848: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1d4848u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1d484c:
    // 0x1d484c: 0x8ea20540  lw          $v0, 0x540($s5)
    ctx->pc = 0x1d484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1344)));
label_1d4850:
    // 0x1d4850: 0x250300a0  addiu       $v1, $t0, 0xA0
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
label_1d4854:
    // 0x1d4854: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_1d4858:
    // 0x1d4858: 0x2033821  addu        $a3, $s0, $v1
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1d485c:
    // 0x1d485c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1d485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1d4860:
    // 0x1d4860: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d4860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d4864:
    // 0x1d4864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4868:
    // 0x1d4868: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1d4868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d486c:
    // 0x1d486c: 0x40f809  jalr        $v0
label_1d4870:
    if (ctx->pc == 0x1D4870u) {
        ctx->pc = 0x1D4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D486Cu;
        // 0x1d4870: 0x8d0700a4  lw          $a3, 0xA4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4874u;
        goto label_1d4874;
    }
    ctx->pc = 0x1D486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4874u);
        ctx->pc = 0x1D4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D486Cu;
        // 0x1d4870: 0x8d0700a4  lw          $a3, 0xA4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D486Cu, 0x1D4874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4874u;
label_1d4874:
    // 0x1d4874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d4874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4878:
    // 0x1d4878: 0x4600033  bltz        $v1, . + 4 + (0x33 << 2)
label_1d487c:
    if (ctx->pc == 0x1D487Cu) {
        ctx->pc = 0x1D487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4878u;
        // 0x1d487c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4880u;
        goto label_1d4880;
    }
    ctx->pc = 0x1D4878u;
    {
        const bool branch_taken_0x1d4878 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4878u;
        // 0x1d487c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4878) {
            ctx->pc = 0x1D4948u;
            return;
        }
    }
    ctx->pc = 0x1D4880u;
label_1d4880:
    // 0x1d4880: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_1d4884:
    // 0x1d4884: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d4888:
    // 0x1d4888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d488c:
    // 0x1d488c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1d488cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d4890:
    // 0x1d4890: 0xb21821  addu        $v1, $a1, $s2
    ctx->pc = 0x1d4890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1d4894:
    // 0x1d4894: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x1d4894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_1d4898:
    // 0x1d4898: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_1d489c:
    if (ctx->pc == 0x1D489Cu) {
        ctx->pc = 0x1D489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4898u;
        // 0x1d489c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48A0u;
        goto label_1d48a0;
    }
    ctx->pc = 0x1D4898u;
    {
        const bool branch_taken_0x1d4898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4898u;
        // 0x1d489c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4898) {
            ctx->pc = 0x1D48C0u;
            return;
        }
    }
    ctx->pc = 0x1D48A0u;
label_1d48a0:
    // 0x1d48a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d48a4:
    if (ctx->pc == 0x1D48A4u) {
        ctx->pc = 0x1D48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A0u;
        // 0x1d48a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48A8u;
        goto label_1d48a8;
    }
    ctx->pc = 0x1D48A0u;
    {
        const bool branch_taken_0x1d48a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A0u;
        // 0x1d48a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48a0) {
            ctx->pc = 0x1D48C0u;
            return;
        }
    }
    ctx->pc = 0x1D48A8u;
label_1d48a8:
    // 0x1d48a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d48ac:
    if (ctx->pc == 0x1D48ACu) {
        ctx->pc = 0x1D48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A8u;
        // 0x1d48ac: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48B0u;
        goto label_1d48b0;
    }
    ctx->pc = 0x1D48A8u;
    {
        const bool branch_taken_0x1d48a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A8u;
        // 0x1d48ac: 0xb01021  addu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48a8) {
            ctx->pc = 0x1D48C0u;
            return;
        }
    }
    ctx->pc = 0x1D48B0u;
label_1d48b0:
    // 0x1d48b0: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x1d48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
label_1d48b4:
    // 0x1d48b4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d48b8:
    // 0x1d48b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d48bc:
    // 0x1d48bc: 0xae230248  sw          $v1, 0x248($s1)
    ctx->pc = 0x1d48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 3));
    ctx->pc = 0x1d48c0u;
}
