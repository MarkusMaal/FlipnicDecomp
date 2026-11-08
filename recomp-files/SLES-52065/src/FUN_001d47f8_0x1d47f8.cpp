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

// Function: FUN_001d47f8
// Address: 0x1d47f8 - 0x1d49c0
void FUN_001d47f8_0x1d47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d47f8_0x1d47f8");
#endif

    switch (ctx->pc) {
        case 0x1d47f8u: goto label_1d47f8;
        case 0x1d47fcu: goto label_1d47fc;
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4804u: goto label_1d4804;
        case 0x1d4808u: goto label_1d4808;
        case 0x1d480cu: goto label_1d480c;
        case 0x1d4810u: goto label_1d4810;
        case 0x1d4814u: goto label_1d4814;
        case 0x1d4818u: goto label_1d4818;
        case 0x1d481cu: goto label_1d481c;
        case 0x1d4820u: goto label_1d4820;
        case 0x1d4824u: goto label_1d4824;
        case 0x1d4828u: goto label_1d4828;
        case 0x1d482cu: goto label_1d482c;
        case 0x1d4830u: goto label_1d4830;
        case 0x1d4834u: goto label_1d4834;
        case 0x1d4838u: goto label_1d4838;
        case 0x1d483cu: goto label_1d483c;
        case 0x1d4840u: goto label_1d4840;
        case 0x1d4844u: goto label_1d4844;
        case 0x1d4848u: goto label_1d4848;
        case 0x1d484cu: goto label_1d484c;
        case 0x1d4850u: goto label_1d4850;
        case 0x1d4854u: goto label_1d4854;
        case 0x1d4858u: goto label_1d4858;
        case 0x1d485cu: goto label_1d485c;
        case 0x1d4860u: goto label_1d4860;
        case 0x1d4864u: goto label_1d4864;
        case 0x1d4868u: goto label_1d4868;
        case 0x1d486cu: goto label_1d486c;
        case 0x1d4870u: goto label_1d4870;
        case 0x1d4874u: goto label_1d4874;
        case 0x1d4878u: goto label_1d4878;
        case 0x1d487cu: goto label_1d487c;
        case 0x1d4880u: goto label_1d4880;
        case 0x1d4884u: goto label_1d4884;
        case 0x1d4888u: goto label_1d4888;
        case 0x1d488cu: goto label_1d488c;
        case 0x1d4890u: goto label_1d4890;
        case 0x1d4894u: goto label_1d4894;
        case 0x1d4898u: goto label_1d4898;
        case 0x1d489cu: goto label_1d489c;
        case 0x1d48a0u: goto label_1d48a0;
        case 0x1d48a4u: goto label_1d48a4;
        case 0x1d48a8u: goto label_1d48a8;
        case 0x1d48acu: goto label_1d48ac;
        case 0x1d48b0u: goto label_1d48b0;
        case 0x1d48b4u: goto label_1d48b4;
        case 0x1d48b8u: goto label_1d48b8;
        case 0x1d48bcu: goto label_1d48bc;
        case 0x1d48c0u: goto label_1d48c0;
        case 0x1d48c4u: goto label_1d48c4;
        case 0x1d48c8u: goto label_1d48c8;
        case 0x1d48ccu: goto label_1d48cc;
        case 0x1d48d0u: goto label_1d48d0;
        case 0x1d48d4u: goto label_1d48d4;
        case 0x1d48d8u: goto label_1d48d8;
        case 0x1d48dcu: goto label_1d48dc;
        case 0x1d48e0u: goto label_1d48e0;
        case 0x1d48e4u: goto label_1d48e4;
        case 0x1d48e8u: goto label_1d48e8;
        case 0x1d48ecu: goto label_1d48ec;
        case 0x1d48f0u: goto label_1d48f0;
        case 0x1d48f4u: goto label_1d48f4;
        case 0x1d48f8u: goto label_1d48f8;
        case 0x1d48fcu: goto label_1d48fc;
        case 0x1d4900u: goto label_1d4900;
        case 0x1d4904u: goto label_1d4904;
        case 0x1d4908u: goto label_1d4908;
        case 0x1d490cu: goto label_1d490c;
        case 0x1d4910u: goto label_1d4910;
        case 0x1d4914u: goto label_1d4914;
        case 0x1d4918u: goto label_1d4918;
        case 0x1d491cu: goto label_1d491c;
        case 0x1d4920u: goto label_1d4920;
        case 0x1d4924u: goto label_1d4924;
        case 0x1d4928u: goto label_1d4928;
        case 0x1d492cu: goto label_1d492c;
        case 0x1d4930u: goto label_1d4930;
        case 0x1d4934u: goto label_1d4934;
        case 0x1d4938u: goto label_1d4938;
        case 0x1d493cu: goto label_1d493c;
        case 0x1d4940u: goto label_1d4940;
        case 0x1d4944u: goto label_1d4944;
        case 0x1d4948u: goto label_1d4948;
        case 0x1d494cu: goto label_1d494c;
        case 0x1d4950u: goto label_1d4950;
        case 0x1d4954u: goto label_1d4954;
        case 0x1d4958u: goto label_1d4958;
        case 0x1d495cu: goto label_1d495c;
        case 0x1d4960u: goto label_1d4960;
        case 0x1d4964u: goto label_1d4964;
        case 0x1d4968u: goto label_1d4968;
        case 0x1d496cu: goto label_1d496c;
        case 0x1d4970u: goto label_1d4970;
        case 0x1d4974u: goto label_1d4974;
        case 0x1d4978u: goto label_1d4978;
        case 0x1d497cu: goto label_1d497c;
        case 0x1d4980u: goto label_1d4980;
        case 0x1d4984u: goto label_1d4984;
        case 0x1d4988u: goto label_1d4988;
        case 0x1d498cu: goto label_1d498c;
        case 0x1d4990u: goto label_1d4990;
        case 0x1d4994u: goto label_1d4994;
        case 0x1d4998u: goto label_1d4998;
        case 0x1d499cu: goto label_1d499c;
        case 0x1d49a0u: goto label_1d49a0;
        case 0x1d49a4u: goto label_1d49a4;
        case 0x1d49a8u: goto label_1d49a8;
        case 0x1d49acu: goto label_1d49ac;
        case 0x1d49b0u: goto label_1d49b0;
        case 0x1d49b4u: goto label_1d49b4;
        case 0x1d49b8u: goto label_1d49b8;
        case 0x1d49bcu: goto label_1d49bc;
        default: break;
    }

    ctx->pc = 0x1d47f8u;

label_1d47f8:
    // 0x1d47f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d47fc:
    // 0x1d47fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d47fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d4800:
    // 0x1d4800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4804:
    // 0x1d4804: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d4808:
    // 0x1d4808: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d480c:
    // 0x1d480c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d480cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4810:
    // 0x1d4810: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d4810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1d4814:
    // 0x1d4814: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1d4818:
    // 0x1d4818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d481c:
    // 0x1d481c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d4820:
    // 0x1d4820: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d4820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d4824:
    // 0x1d4824: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d4824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4828:
    // 0x1d4828: 0x30538000  andi        $s3, $v0, 0x8000
    ctx->pc = 0x1d4828u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1d482c:
    // 0x1d482c: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x1d482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
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
            goto label_1d4990;
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
            goto label_1d4948;
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
            goto label_1d48c0;
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
            goto label_1d48c0;
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
            goto label_1d48c0;
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
label_1d48c0:
    // 0x1d48c0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_1d48c4:
    if (ctx->pc == 0x1D48C4u) {
        ctx->pc = 0x1D48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C0u;
        // 0x1d48c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48C8u;
        goto label_1d48c8;
    }
    ctx->pc = 0x1D48C0u;
    {
        const bool branch_taken_0x1d48c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48C0u;
        // 0x1d48c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48c0) {
            ctx->pc = 0x1D48F8u;
            goto label_1d48f8;
        }
    }
    ctx->pc = 0x1D48C8u;
label_1d48c8:
    // 0x1d48c8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1d48c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d48cc:
    // 0x1d48cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1d48d0:
    // 0x1d48d0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1d48d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_1d48d4:
    // 0x1d48d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d48d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d48d8:
    // 0x1d48d8: 0xc0750c6  jal         func_1D4318
label_1d48dc:
    if (ctx->pc == 0x1D48DCu) {
        ctx->pc = 0x1D48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48D8u;
        // 0x1d48dc: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48E0u;
        goto label_1d48e0;
    }
    ctx->pc = 0x1D48D8u;
    SET_GPR_U32(ctx, 31, 0x1D48E0u);
    ctx->pc = 0x1D48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48D8u;
    // 0x1d48dc: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4318u, 0x1D48D8u, 0x1D48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48E0u;
label_1d48e0:
    // 0x1d48e0: 0xc0750a2  jal         func_1D4288
label_1d48e4:
    if (ctx->pc == 0x1D48E4u) {
        ctx->pc = 0x1D48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48E0u;
        // 0x1d48e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48E8u;
        goto label_1d48e8;
    }
    ctx->pc = 0x1D48E0u;
    SET_GPR_U32(ctx, 31, 0x1D48E8u);
    ctx->pc = 0x1D48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48E0u;
    // 0x1d48e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4288u, 0x1D48E0u, 0x1D48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48E8u;
label_1d48e8:
    // 0x1d48e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d48e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d48ec:
    // 0x1d48ec: 0xc0750da  jal         func_1D4368
label_1d48f0:
    if (ctx->pc == 0x1D48F0u) {
        ctx->pc = 0x1D48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48ECu;
        // 0x1d48f0: 0x8e2502d0  lw          $a1, 0x2D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48F4u;
        goto label_1d48f4;
    }
    ctx->pc = 0x1D48ECu;
    SET_GPR_U32(ctx, 31, 0x1D48F4u);
    ctx->pc = 0x1D48F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48ECu;
    // 0x1d48f0: 0x8e2502d0  lw          $a1, 0x2D0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4368u, 0x1D48ECu, 0x1D48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48F4u;
label_1d48f4:
    // 0x1d48f4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1d48f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1d48f8:
    // 0x1d48f8: 0xc0751b0  jal         func_1D46C0
label_1d48fc:
    if (ctx->pc == 0x1D48FCu) {
        ctx->pc = 0x1D48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48F8u;
        // 0x1d48fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4900u;
        goto label_1d4900;
    }
    ctx->pc = 0x1D48F8u;
    SET_GPR_U32(ctx, 31, 0x1D4900u);
    ctx->pc = 0x1D48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48F8u;
    // 0x1d48fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46C0u, 0x1D48F8u, 0x1D4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4900u;
label_1d4900:
    // 0x1d4900: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x1d4900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_1d4904:
    // 0x1d4904: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d4908:
    // 0x1d4908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d490c:
    // 0x1d490c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d4910:
    // 0x1d4910: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d4914:
    // 0x1d4914: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x1d4914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
label_1d4918:
    // 0x1d4918: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x1d4918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_1d491c:
    // 0x1d491c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1d491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4920:
    // 0x1d4920: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1d4924:
    // 0x1d4924: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x1d4924u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_1d4928:
    // 0x1d4928: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d4928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d492c:
    // 0x1d492c: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1d492cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1d4930:
    // 0x1d4930: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d4930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1d4934:
    // 0x1d4934: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d4934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1d4938:
    // 0x1d4938: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d493c:
    // 0x1d493c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1d4940:
    if (ctx->pc == 0x1D4940u) {
        ctx->pc = 0x1D4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D493Cu;
        // 0x1d4940: 0xae240228  sw          $a0, 0x228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4944u;
        goto label_1d4944;
    }
    ctx->pc = 0x1D493Cu;
    {
        const bool branch_taken_0x1d493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D493Cu;
        // 0x1d4940: 0xae240228  sw          $a0, 0x228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d493c) {
            ctx->pc = 0x1D4994u;
            goto label_1d4994;
        }
    }
    ctx->pc = 0x1D4944u;
label_1d4944:
    // 0x1d4944: 0x0  nop
    ctx->pc = 0x1d4944u;
    // NOP
label_1d4948:
    // 0x1d4948: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d4948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d494c:
    // 0x1d494c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1d4950:
    if (ctx->pc == 0x1D4950u) {
        ctx->pc = 0x1D4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D494Cu;
        // 0x1d4950: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4954u;
        goto label_1d4954;
    }
    ctx->pc = 0x1D494Cu;
    {
        const bool branch_taken_0x1d494c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D494Cu;
        // 0x1d4950: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d494c) {
            ctx->pc = 0x1D4994u;
            goto label_1d4994;
        }
    }
    ctx->pc = 0x1D4954u;
label_1d4954:
    // 0x1d4954: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_1d4958:
    if (ctx->pc == 0x1D4958u) {
        ctx->pc = 0x1D4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4954u;
        // 0x1d4958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D495Cu;
        goto label_1d495c;
    }
    ctx->pc = 0x1D4954u;
    {
        const bool branch_taken_0x1d4954 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4954u;
        // 0x1d4958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4954) {
            ctx->pc = 0x1D4994u;
            goto label_1d4994;
        }
    }
    ctx->pc = 0x1D495Cu;
label_1d495c:
    // 0x1d495c: 0xc0750c6  jal         func_1D4318
label_1d4960:
    if (ctx->pc == 0x1D4960u) {
        ctx->pc = 0x1D4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D495Cu;
        // 0x1d4960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4964u;
        goto label_1d4964;
    }
    ctx->pc = 0x1D495Cu;
    SET_GPR_U32(ctx, 31, 0x1D4964u);
    ctx->pc = 0x1D4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D495Cu;
    // 0x1d4960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4318u, 0x1D495Cu, 0x1D4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4964u;
label_1d4964:
    // 0x1d4964: 0x8e2202cc  lw          $v0, 0x2CC($s1)
    ctx->pc = 0x1d4964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
label_1d4968:
    // 0x1d4968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d496c:
    // 0x1d496c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4970:
    // 0x1d4970: 0xc074fc2  jal         func_1D3F08
label_1d4974:
    if (ctx->pc == 0x1D4974u) {
        ctx->pc = 0x1D4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4970u;
        // 0x1d4974: 0xae2202d0  sw          $v0, 0x2D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4978u;
        goto label_1d4978;
    }
    ctx->pc = 0x1D4970u;
    SET_GPR_U32(ctx, 31, 0x1D4978u);
    ctx->pc = 0x1D4974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4970u;
    // 0x1d4974: 0xae2202d0  sw          $v0, 0x2D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F08u, 0x1D4970u, 0x1D4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4978u;
label_1d4978:
    // 0x1d4978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d497c:
    // 0x1d497c: 0xc0750da  jal         func_1D4368
label_1d4980:
    if (ctx->pc == 0x1D4980u) {
        ctx->pc = 0x1D4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D497Cu;
        // 0x1d4980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4984u;
        goto label_1d4984;
    }
    ctx->pc = 0x1D497Cu;
    SET_GPR_U32(ctx, 31, 0x1D4984u);
    ctx->pc = 0x1D4980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D497Cu;
    // 0x1d4980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4368u, 0x1D497Cu, 0x1D4984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4984u;
label_1d4984:
    // 0x1d4984: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4988:
    // 0x1d4988: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1d498c:
    // 0x1d498c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d498cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1d4990:
    // 0x1d4990: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d4990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4994:
    // 0x1d4994: 0x5280ffa6  beql        $s4, $zero, . + 4 + (-0x5A << 2)
label_1d4998:
    if (ctx->pc == 0x1D4998u) {
        ctx->pc = 0x1D4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4994u;
        // 0x1d4998: 0x8e230228  lw          $v1, 0x228($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D499Cu;
        goto label_1d499c;
    }
    ctx->pc = 0x1D4994u;
    {
        const bool branch_taken_0x1d4994 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4994) {
            ctx->pc = 0x1D4998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4994u;
            // 0x1d4998: 0x8e230228  lw          $v1, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4830;
        }
    }
    ctx->pc = 0x1D499Cu;
label_1d499c:
    // 0x1d499c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d499cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d49a0:
    // 0x1d49a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d49a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d49a4:
    // 0x1d49a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d49a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d49a8:
    // 0x1d49a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d49a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d49ac:
    // 0x1d49ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d49acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d49b0:
    // 0x1d49b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d49b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d49b4:
    // 0x1d49b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d49b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d49b8:
    // 0x1d49b8: 0x3e00008  jr          $ra
label_1d49bc:
    if (ctx->pc == 0x1D49BCu) {
        ctx->pc = 0x1D49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49B8u;
        // 0x1d49bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49C0u;
        goto label_fallthrough_0x1d49b8;
    }
    ctx->pc = 0x1D49B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49B8u;
        // 0x1d49bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D49B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d49b8:
    ctx->pc = 0x1D49C0u;
}
