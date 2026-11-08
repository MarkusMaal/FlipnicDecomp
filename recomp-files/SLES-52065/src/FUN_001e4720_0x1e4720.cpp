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

// Function: FUN_001e4720
// Address: 0x1e4720 - 0x1e4994
void FUN_001e4720_0x1e4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4720_0x1e4720");
#endif

    switch (ctx->pc) {
        case 0x1e4720u: goto label_1e4720;
        case 0x1e4724u: goto label_1e4724;
        case 0x1e4728u: goto label_1e4728;
        case 0x1e472cu: goto label_1e472c;
        case 0x1e4730u: goto label_1e4730;
        case 0x1e4734u: goto label_1e4734;
        case 0x1e4738u: goto label_1e4738;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4740u: goto label_1e4740;
        case 0x1e4744u: goto label_1e4744;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e474cu: goto label_1e474c;
        case 0x1e4750u: goto label_1e4750;
        case 0x1e4754u: goto label_1e4754;
        case 0x1e4758u: goto label_1e4758;
        case 0x1e475cu: goto label_1e475c;
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4764u: goto label_1e4764;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e476cu: goto label_1e476c;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4778u: goto label_1e4778;
        case 0x1e477cu: goto label_1e477c;
        case 0x1e4780u: goto label_1e4780;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e478cu: goto label_1e478c;
        case 0x1e4790u: goto label_1e4790;
        case 0x1e4794u: goto label_1e4794;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e479cu: goto label_1e479c;
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47a4u: goto label_1e47a4;
        case 0x1e47a8u: goto label_1e47a8;
        case 0x1e47acu: goto label_1e47ac;
        case 0x1e47b0u: goto label_1e47b0;
        case 0x1e47b4u: goto label_1e47b4;
        case 0x1e47b8u: goto label_1e47b8;
        case 0x1e47bcu: goto label_1e47bc;
        case 0x1e47c0u: goto label_1e47c0;
        case 0x1e47c4u: goto label_1e47c4;
        case 0x1e47c8u: goto label_1e47c8;
        case 0x1e47ccu: goto label_1e47cc;
        case 0x1e47d0u: goto label_1e47d0;
        case 0x1e47d4u: goto label_1e47d4;
        case 0x1e47d8u: goto label_1e47d8;
        case 0x1e47dcu: goto label_1e47dc;
        case 0x1e47e0u: goto label_1e47e0;
        case 0x1e47e4u: goto label_1e47e4;
        case 0x1e47e8u: goto label_1e47e8;
        case 0x1e47ecu: goto label_1e47ec;
        case 0x1e47f0u: goto label_1e47f0;
        case 0x1e47f4u: goto label_1e47f4;
        case 0x1e47f8u: goto label_1e47f8;
        case 0x1e47fcu: goto label_1e47fc;
        case 0x1e4800u: goto label_1e4800;
        case 0x1e4804u: goto label_1e4804;
        case 0x1e4808u: goto label_1e4808;
        case 0x1e480cu: goto label_1e480c;
        case 0x1e4810u: goto label_1e4810;
        case 0x1e4814u: goto label_1e4814;
        case 0x1e4818u: goto label_1e4818;
        case 0x1e481cu: goto label_1e481c;
        case 0x1e4820u: goto label_1e4820;
        case 0x1e4824u: goto label_1e4824;
        case 0x1e4828u: goto label_1e4828;
        case 0x1e482cu: goto label_1e482c;
        case 0x1e4830u: goto label_1e4830;
        case 0x1e4834u: goto label_1e4834;
        case 0x1e4838u: goto label_1e4838;
        case 0x1e483cu: goto label_1e483c;
        case 0x1e4840u: goto label_1e4840;
        case 0x1e4844u: goto label_1e4844;
        case 0x1e4848u: goto label_1e4848;
        case 0x1e484cu: goto label_1e484c;
        case 0x1e4850u: goto label_1e4850;
        case 0x1e4854u: goto label_1e4854;
        case 0x1e4858u: goto label_1e4858;
        case 0x1e485cu: goto label_1e485c;
        case 0x1e4860u: goto label_1e4860;
        case 0x1e4864u: goto label_1e4864;
        case 0x1e4868u: goto label_1e4868;
        case 0x1e486cu: goto label_1e486c;
        case 0x1e4870u: goto label_1e4870;
        case 0x1e4874u: goto label_1e4874;
        case 0x1e4878u: goto label_1e4878;
        case 0x1e487cu: goto label_1e487c;
        case 0x1e4880u: goto label_1e4880;
        case 0x1e4884u: goto label_1e4884;
        case 0x1e4888u: goto label_1e4888;
        case 0x1e488cu: goto label_1e488c;
        case 0x1e4890u: goto label_1e4890;
        case 0x1e4894u: goto label_1e4894;
        case 0x1e4898u: goto label_1e4898;
        case 0x1e489cu: goto label_1e489c;
        case 0x1e48a0u: goto label_1e48a0;
        case 0x1e48a4u: goto label_1e48a4;
        case 0x1e48a8u: goto label_1e48a8;
        case 0x1e48acu: goto label_1e48ac;
        case 0x1e48b0u: goto label_1e48b0;
        case 0x1e48b4u: goto label_1e48b4;
        case 0x1e48b8u: goto label_1e48b8;
        case 0x1e48bcu: goto label_1e48bc;
        case 0x1e48c0u: goto label_1e48c0;
        case 0x1e48c4u: goto label_1e48c4;
        case 0x1e48c8u: goto label_1e48c8;
        case 0x1e48ccu: goto label_1e48cc;
        case 0x1e48d0u: goto label_1e48d0;
        case 0x1e48d4u: goto label_1e48d4;
        case 0x1e48d8u: goto label_1e48d8;
        case 0x1e48dcu: goto label_1e48dc;
        case 0x1e48e0u: goto label_1e48e0;
        case 0x1e48e4u: goto label_1e48e4;
        case 0x1e48e8u: goto label_1e48e8;
        case 0x1e48ecu: goto label_1e48ec;
        case 0x1e48f0u: goto label_1e48f0;
        case 0x1e48f4u: goto label_1e48f4;
        case 0x1e48f8u: goto label_1e48f8;
        case 0x1e48fcu: goto label_1e48fc;
        case 0x1e4900u: goto label_1e4900;
        case 0x1e4904u: goto label_1e4904;
        case 0x1e4908u: goto label_1e4908;
        case 0x1e490cu: goto label_1e490c;
        case 0x1e4910u: goto label_1e4910;
        case 0x1e4914u: goto label_1e4914;
        case 0x1e4918u: goto label_1e4918;
        case 0x1e491cu: goto label_1e491c;
        case 0x1e4920u: goto label_1e4920;
        case 0x1e4924u: goto label_1e4924;
        case 0x1e4928u: goto label_1e4928;
        case 0x1e492cu: goto label_1e492c;
        case 0x1e4930u: goto label_1e4930;
        case 0x1e4934u: goto label_1e4934;
        case 0x1e4938u: goto label_1e4938;
        case 0x1e493cu: goto label_1e493c;
        case 0x1e4940u: goto label_1e4940;
        case 0x1e4944u: goto label_1e4944;
        case 0x1e4948u: goto label_1e4948;
        case 0x1e494cu: goto label_1e494c;
        case 0x1e4950u: goto label_1e4950;
        case 0x1e4954u: goto label_1e4954;
        case 0x1e4958u: goto label_1e4958;
        case 0x1e495cu: goto label_1e495c;
        case 0x1e4960u: goto label_1e4960;
        case 0x1e4964u: goto label_1e4964;
        case 0x1e4968u: goto label_1e4968;
        case 0x1e496cu: goto label_1e496c;
        case 0x1e4970u: goto label_1e4970;
        case 0x1e4974u: goto label_1e4974;
        case 0x1e4978u: goto label_1e4978;
        case 0x1e497cu: goto label_1e497c;
        case 0x1e4980u: goto label_1e4980;
        case 0x1e4984u: goto label_1e4984;
        case 0x1e4988u: goto label_1e4988;
        case 0x1e498cu: goto label_1e498c;
        case 0x1e4990u: goto label_1e4990;
        default: break;
    }

    ctx->pc = 0x1e4720u;

label_1e4720:
    // 0x1e4720: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e4724:
    // 0x1e4724: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e4724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e4728:
    // 0x1e4728: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1e4728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1e472c:
    // 0x1e472c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e4730:
    // 0x1e4730: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e4734:
    // 0x1e4734: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e4734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e4738:
    // 0x1e4738: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1e4738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e473c:
    // 0x1e473c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4740:
    // 0x1e4740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4744:
    // 0x1e4744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4748:
    // 0x1e4748: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e4748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e474c:
    // 0x1e474c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4750:
    // 0x1e4750: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e4750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4754:
    // 0x1e4754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4758:
    // 0x1e4758: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e4758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e475c:
    // 0x1e475c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x1e475cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_1e4760:
    // 0x1e4760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4764:
    // 0x1e4764: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4768:
    // 0x1e4768: 0x320f809  jalr        $t9
label_1e476c:
    if (ctx->pc == 0x1E476Cu) {
        ctx->pc = 0x1E476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4768u;
        // 0x1e476c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4770u;
        goto label_1e4770;
    }
    ctx->pc = 0x1E4768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4770u);
        ctx->pc = 0x1E476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4768u;
        // 0x1e476c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4768u, 0x1E4770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4770u;
label_1e4770:
    // 0x1e4770: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4774:
    if (ctx->pc == 0x1E4774u) {
        ctx->pc = 0x1E4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4770u;
        // 0x1e4774: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4778u;
        goto label_1e4778;
    }
    ctx->pc = 0x1E4770u;
    {
        const bool branch_taken_0x1e4770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4770u;
        // 0x1e4774: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4770) {
            ctx->pc = 0x1E47A0u;
            goto label_1e47a0;
        }
    }
    ctx->pc = 0x1E4778u;
label_1e4778:
    // 0x1e4778: 0xc07a704  jal         func_1E9C10
label_1e477c:
    if (ctx->pc == 0x1E477Cu) {
        ctx->pc = 0x1E477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4778u;
        // 0x1e477c: 0x27c40090  addiu       $a0, $fp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4780u;
        goto label_1e4780;
    }
    ctx->pc = 0x1E4778u;
    SET_GPR_U32(ctx, 31, 0x1E4780u);
    ctx->pc = 0x1E477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4778u;
    // 0x1e477c: 0x27c40090  addiu       $a0, $fp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E4778u, 0x1E4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4780u;
label_1e4780:
    // 0x1e4780: 0x0  nop
    ctx->pc = 0x1e4780u;
    // NOP
label_1e4784:
    // 0x1e4784: 0x0  nop
    ctx->pc = 0x1e4784u;
    // NOP
label_1e4788:
    // 0x1e4788: 0x0  nop
    ctx->pc = 0x1e4788u;
    // NOP
label_1e478c:
    // 0x1e478c: 0x0  nop
    ctx->pc = 0x1e478cu;
    // NOP
label_1e4790:
    // 0x1e4790: 0x0  nop
    ctx->pc = 0x1e4790u;
    // NOP
label_1e4794:
    // 0x1e4794: 0x0  nop
    ctx->pc = 0x1e4794u;
    // NOP
label_1e4798:
    // 0x1e4798: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e479c:
    if (ctx->pc == 0x1E479Cu) {
        ctx->pc = 0x1E47A0u;
        goto label_1e47a0;
    }
    ctx->pc = 0x1E4798u;
    {
        const bool branch_taken_0x1e4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4798) {
            ctx->pc = 0x1E4780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4780;
        }
    }
    ctx->pc = 0x1E47A0u;
label_1e47a0:
    // 0x1e47a0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e47a4:
    // 0x1e47a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e47a8:
    if (ctx->pc == 0x1E47A8u) {
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47ACu;
        goto label_1e47ac;
    }
    ctx->pc = 0x1E47A4u;
    {
        const bool branch_taken_0x1e47a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a4) {
            ctx->pc = 0x1E47C0u;
            goto label_1e47c0;
        }
    }
    ctx->pc = 0x1E47ACu;
label_1e47ac:
    // 0x1e47ac: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1e47b0:
    if (ctx->pc == 0x1E47B0u) {
        ctx->pc = 0x1E47B4u;
        goto label_1e47b4;
    }
    ctx->pc = 0x1E47ACu;
    {
        const bool branch_taken_0x1e47ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e47ac) {
            ctx->pc = 0x1E47D0u;
            goto label_1e47d0;
        }
    }
    ctx->pc = 0x1E47B4u;
label_1e47b4:
    // 0x1e47b4: 0x1e800006  bgtz        $s4, . + 4 + (0x6 << 2)
label_1e47b8:
    if (ctx->pc == 0x1E47B8u) {
        ctx->pc = 0x1E47BCu;
        goto label_1e47bc;
    }
    ctx->pc = 0x1E47B4u;
    {
        const bool branch_taken_0x1e47b4 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x1e47b4) {
            ctx->pc = 0x1E47D0u;
            goto label_1e47d0;
        }
    }
    ctx->pc = 0x1E47BCu;
label_1e47bc:
    // 0x1e47bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e47c0:
    // 0x1e47c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e47c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e47c4:
    // 0x1e47c4: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e47c4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e47c8:
    // 0x1e47c8: 0x10000066  b           . + 4 + (0x66 << 2)
label_1e47cc:
    if (ctx->pc == 0x1E47CCu) {
        ctx->pc = 0x1E47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C8u;
        // 0x1e47cc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47D0u;
        goto label_1e47d0;
    }
    ctx->pc = 0x1E47C8u;
    {
        const bool branch_taken_0x1e47c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C8u;
        // 0x1e47cc: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c8) {
            ctx->pc = 0x1E4964u;
            goto label_1e4964;
        }
    }
    ctx->pc = 0x1E47D0u;
label_1e47d0:
    // 0x1e47d0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1e47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1e47d4:
    // 0x1e47d4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1e47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1e47d8:
    // 0x1e47d8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e47d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e47dc:
    // 0x1e47dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e47e0:
    if (ctx->pc == 0x1E47E0u) {
        ctx->pc = 0x1E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47DCu;
        // 0x1e47e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47E4u;
        goto label_1e47e4;
    }
    ctx->pc = 0x1E47DCu;
    {
        const bool branch_taken_0x1e47dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47DCu;
        // 0x1e47e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47dc) {
            ctx->pc = 0x1E4808u;
            goto label_1e4808;
        }
    }
    ctx->pc = 0x1E47E4u;
label_1e47e4:
    // 0x1e47e4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e47e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e47e8:
    // 0x1e47e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e47e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e47ec:
    // 0x1e47ec: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e47f0:
    // 0x1e47f0: 0x320f809  jalr        $t9
label_1e47f4:
    if (ctx->pc == 0x1E47F4u) {
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47F8u;
        goto label_1e47f8;
    }
    ctx->pc = 0x1E47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E47F8u);
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E47F0u, 0x1E47F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E47F8u;
label_1e47f8:
    // 0x1e47f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e47fc:
    // 0x1e47fc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4800:
    if (ctx->pc == 0x1E4800u) {
        ctx->pc = 0x1E4804u;
        goto label_1e4804;
    }
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E4808u;
            goto label_1e4808;
        }
    }
    ctx->pc = 0x1E4804u;
label_1e4804:
    // 0x1e4804: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x1e4804u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e4808:
    // 0x1e4808: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_1e480c:
    if (ctx->pc == 0x1E480Cu) {
        ctx->pc = 0x1E480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4808u;
        // 0x1e480c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4810u;
        goto label_1e4810;
    }
    ctx->pc = 0x1E4808u;
    {
        const bool branch_taken_0x1e4808 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4808u;
        // 0x1e480c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4808) {
            ctx->pc = 0x1E4820u;
            goto label_1e4820;
        }
    }
    ctx->pc = 0x1E4810u;
label_1e4810:
    // 0x1e4810: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e4810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4814:
    // 0x1e4814: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e4814u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e4818:
    // 0x1e4818: 0x10000052  b           . + 4 + (0x52 << 2)
label_1e481c:
    if (ctx->pc == 0x1E481Cu) {
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4820u;
        goto label_1e4820;
    }
    ctx->pc = 0x1E4818u;
    {
        const bool branch_taken_0x1e4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4818) {
            ctx->pc = 0x1E4964u;
            goto label_1e4964;
        }
    }
    ctx->pc = 0x1E4820u;
label_1e4820:
    // 0x1e4820: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1e4820u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1e4824:
    // 0x1e4824: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4828:
    // 0x1e4828: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1e482c:
    if (ctx->pc == 0x1E482Cu) {
        ctx->pc = 0x1E4830u;
        goto label_1e4830;
    }
    ctx->pc = 0x1E4828u;
    {
        const bool branch_taken_0x1e4828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4828) {
            ctx->pc = 0x1E4838u;
            goto label_1e4838;
        }
    }
    ctx->pc = 0x1E4830u;
label_1e4830:
    // 0x1e4830: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1e4834:
    if (ctx->pc == 0x1E4834u) {
        ctx->pc = 0x1E4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4830u;
        // 0x1e4834: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4838u;
        goto label_1e4838;
    }
    ctx->pc = 0x1E4830u;
    {
        const bool branch_taken_0x1e4830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4830u;
        // 0x1e4834: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4830) {
            ctx->pc = 0x1E4870u;
            goto label_1e4870;
        }
    }
    ctx->pc = 0x1E4838u;
label_1e4838:
    // 0x1e4838: 0x92420050  lbu         $v0, 0x50($s2)
    ctx->pc = 0x1e4838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
label_1e483c:
    // 0x1e483c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e4840:
    if (ctx->pc == 0x1E4840u) {
        ctx->pc = 0x1E4844u;
        goto label_1e4844;
    }
    ctx->pc = 0x1E483Cu;
    {
        const bool branch_taken_0x1e483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e483c) {
            ctx->pc = 0x1E486Cu;
            goto label_1e486c;
        }
    }
    ctx->pc = 0x1E4844u;
label_1e4844:
    // 0x1e4844: 0x6810009  bgez        $s4, . + 4 + (0x9 << 2)
label_1e4848:
    if (ctx->pc == 0x1E4848u) {
        ctx->pc = 0x1E4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4844u;
        // 0x1e4848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E484Cu;
        goto label_1e484c;
    }
    ctx->pc = 0x1E4844u;
    {
        const bool branch_taken_0x1e4844 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4844u;
        // 0x1e4848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4844) {
            ctx->pc = 0x1E486Cu;
            goto label_1e486c;
        }
    }
    ctx->pc = 0x1E484Cu;
label_1e484c:
    // 0x1e484c: 0xc079948  jal         func_1E6520
label_1e4850:
    if (ctx->pc == 0x1E4850u) {
        ctx->pc = 0x1E4854u;
        goto label_1e4854;
    }
    ctx->pc = 0x1E484Cu;
    SET_GPR_U32(ctx, 31, 0x1E4854u);
    ctx->pc = 0x1E6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6520u, 0x1E484Cu, 0x1E4854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4854u;
label_1e4854:
    // 0x1e4854: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e4858:
    if (ctx->pc == 0x1E4858u) {
        ctx->pc = 0x1E4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4854u;
        // 0x1e4858: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E485Cu;
        goto label_1e485c;
    }
    ctx->pc = 0x1E4854u;
    {
        const bool branch_taken_0x1e4854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4854u;
        // 0x1e4858: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4854) {
            ctx->pc = 0x1E486Cu;
            goto label_1e486c;
        }
    }
    ctx->pc = 0x1E485Cu;
label_1e485c:
    // 0x1e485c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e485cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4860:
    // 0x1e4860: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e4860u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e4864:
    // 0x1e4864: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1e4868:
    if (ctx->pc == 0x1E4868u) {
        ctx->pc = 0x1E4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4864u;
        // 0x1e4868: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E486Cu;
        goto label_1e486c;
    }
    ctx->pc = 0x1E4864u;
    {
        const bool branch_taken_0x1e4864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4864u;
        // 0x1e4868: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4864) {
            ctx->pc = 0x1E4964u;
            goto label_1e4964;
        }
    }
    ctx->pc = 0x1E486Cu;
label_1e486c:
    // 0x1e486c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e4870:
    // 0x1e4870: 0x1202001a  beq         $s0, $v0, . + 4 + (0x1A << 2)
label_1e4874:
    if (ctx->pc == 0x1E4874u) {
        ctx->pc = 0x1E4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4870u;
        // 0x1e4874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4878u;
        goto label_1e4878;
    }
    ctx->pc = 0x1E4870u;
    {
        const bool branch_taken_0x1e4870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4870u;
        // 0x1e4874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4870) {
            ctx->pc = 0x1E48DCu;
            goto label_1e48dc;
        }
    }
    ctx->pc = 0x1E4878u;
label_1e4878:
    // 0x1e4878: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1e487c:
    if (ctx->pc == 0x1E487Cu) {
        ctx->pc = 0x1E4880u;
        goto label_1e4880;
    }
    ctx->pc = 0x1E4878u;
    {
        const bool branch_taken_0x1e4878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4878) {
            ctx->pc = 0x1E489Cu;
            goto label_1e489c;
        }
    }
    ctx->pc = 0x1E4880u;
label_1e4880:
    // 0x1e4880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4884:
    // 0x1e4884: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1e4888:
    if (ctx->pc == 0x1E4888u) {
        ctx->pc = 0x1E488Cu;
        goto label_1e488c;
    }
    ctx->pc = 0x1E4884u;
    {
        const bool branch_taken_0x1e4884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4884) {
            ctx->pc = 0x1E4894u;
            goto label_1e4894;
        }
    }
    ctx->pc = 0x1E488Cu;
label_1e488c:
    // 0x1e488c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e4890:
    if (ctx->pc == 0x1E4890u) {
        ctx->pc = 0x1E4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E488Cu;
        // 0x1e4890: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4894u;
        goto label_1e4894;
    }
    ctx->pc = 0x1E488Cu;
    {
        const bool branch_taken_0x1e488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E488Cu;
        // 0x1e4890: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e488c) {
            ctx->pc = 0x1E48E4u;
            goto label_1e48e4;
        }
    }
    ctx->pc = 0x1E4894u;
label_1e4894:
    // 0x1e4894: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e4898:
    if (ctx->pc == 0x1E4898u) {
        ctx->pc = 0x1E4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4894u;
        // 0x1e4898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E489Cu;
        goto label_1e489c;
    }
    ctx->pc = 0x1E4894u;
    {
        const bool branch_taken_0x1e4894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4894u;
        // 0x1e4898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4894) {
            ctx->pc = 0x1E48F4u;
            goto label_1e48f4;
        }
    }
    ctx->pc = 0x1E489Cu;
label_1e489c:
    // 0x1e489c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1e489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_1e48a0:
    // 0x1e48a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e48a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1e48a4:
    // 0x1e48a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e48a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e48a8:
    // 0x1e48a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1e48ac:
    if (ctx->pc == 0x1E48ACu) {
        ctx->pc = 0x1E48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48A8u;
        // 0x1e48ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48B0u;
        goto label_1e48b0;
    }
    ctx->pc = 0x1E48A8u;
    {
        const bool branch_taken_0x1e48a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48A8u;
        // 0x1e48ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48a8) {
            ctx->pc = 0x1E48F4u;
            goto label_1e48f4;
        }
    }
    ctx->pc = 0x1E48B0u;
label_1e48b0:
    // 0x1e48b0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e48b4:
    // 0x1e48b4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e48b8:
    // 0x1e48b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e48bc:
    // 0x1e48bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e48c0:
    if (ctx->pc == 0x1E48C0u) {
        ctx->pc = 0x1E48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48BCu;
        // 0x1e48c0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48C4u;
        goto label_1e48c4;
    }
    ctx->pc = 0x1E48BCu;
    {
        const bool branch_taken_0x1e48bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48BCu;
        // 0x1e48c0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48bc) {
            ctx->pc = 0x1E48CCu;
            goto label_1e48cc;
        }
    }
    ctx->pc = 0x1E48C4u;
label_1e48c4:
    // 0x1e48c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e48c8:
    // 0x1e48c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e48cc:
    // 0x1e48cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e48ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e48d0:
    // 0x1e48d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e48d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e48d4:
    // 0x1e48d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e48d8:
    if (ctx->pc == 0x1E48D8u) {
        ctx->pc = 0x1E48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48D4u;
        // 0x1e48d8: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48DCu;
        goto label_1e48dc;
    }
    ctx->pc = 0x1E48D4u;
    {
        const bool branch_taken_0x1e48d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48D4u;
        // 0x1e48d8: 0x222882f  dsubu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48d4) {
            ctx->pc = 0x1E48F4u;
            goto label_1e48f4;
        }
    }
    ctx->pc = 0x1E48DCu;
label_1e48dc:
    // 0x1e48dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e48e0:
    if (ctx->pc == 0x1E48E0u) {
        ctx->pc = 0x1E48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48DCu;
        // 0x1e48e0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48E4u;
        goto label_1e48e4;
    }
    ctx->pc = 0x1E48DCu;
    {
        const bool branch_taken_0x1e48dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48DCu;
        // 0x1e48e0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48dc) {
            ctx->pc = 0x1E48F4u;
            goto label_1e48f4;
        }
    }
    ctx->pc = 0x1E48E4u;
label_1e48e4:
    // 0x1e48e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e48e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e48e8:
    // 0x1e48e8: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e48ec:
    // 0x1e48ec: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e48f0:
    if (ctx->pc == 0x1E48F0u) {
        ctx->pc = 0x1E48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48ECu;
        // 0x1e48f0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48F4u;
        goto label_1e48f4;
    }
    ctx->pc = 0x1E48ECu;
    {
        const bool branch_taken_0x1e48ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48ECu;
        // 0x1e48f0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48ec) {
            ctx->pc = 0x1E4964u;
            goto label_1e4964;
        }
    }
    ctx->pc = 0x1E48F4u;
label_1e48f4:
    // 0x1e48f4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_1e48f8:
    if (ctx->pc == 0x1E48F8u) {
        ctx->pc = 0x1E48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F4u;
        // 0x1e48f8: 0x14203c  dsll32      $a0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48FCu;
        goto label_1e48fc;
    }
    ctx->pc = 0x1E48F4u;
    {
        const bool branch_taken_0x1e48f4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F4u;
        // 0x1e48f8: 0x14203c  dsll32      $a0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48f4) {
            ctx->pc = 0x1E4904u;
            goto label_1e4904;
        }
    }
    ctx->pc = 0x1E48FCu;
label_1e48fc:
    // 0x1e48fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e48fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4900:
    // 0x1e4900: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x1e4900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
label_1e4904:
    // 0x1e4904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4908:
    // 0x1e4908: 0xc081c20  jal         func_207080
label_1e490c:
    if (ctx->pc == 0x1E490Cu) {
        ctx->pc = 0x1E490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4908u;
        // 0x1e490c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4910u;
        goto label_1e4910;
    }
    ctx->pc = 0x1E4908u;
    SET_GPR_U32(ctx, 31, 0x1E4910u);
    ctx->pc = 0x1E490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4908u;
    // 0x1e490c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1E4908u, 0x1E4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4910u;
label_1e4910:
    // 0x1e4910: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e4910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e4914:
    // 0x1e4914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e4914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4918:
    // 0x1e4918: 0xc07f74e  jal         func_1FDD38
label_1e491c:
    if (ctx->pc == 0x1E491Cu) {
        ctx->pc = 0x1E491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4918u;
        // 0x1e491c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4920u;
        goto label_1e4920;
    }
    ctx->pc = 0x1E4918u;
    SET_GPR_U32(ctx, 31, 0x1E4920u);
    ctx->pc = 0x1E491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4918u;
    // 0x1e491c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E4918u, 0x1E4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4920u;
label_1e4920:
    // 0x1e4920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e4924:
    if (ctx->pc == 0x1E4924u) {
        ctx->pc = 0x1E4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4920u;
        // 0x1e4924: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4928u;
        goto label_1e4928;
    }
    ctx->pc = 0x1E4920u;
    {
        const bool branch_taken_0x1e4920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4920u;
        // 0x1e4924: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4920) {
            ctx->pc = 0x1E4938u;
            goto label_1e4938;
        }
    }
    ctx->pc = 0x1E4928u;
label_1e4928:
    // 0x1e4928: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e4928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e492c:
    // 0x1e492c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e492cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1e4930:
    // 0x1e4930: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e4934:
    if (ctx->pc == 0x1E4934u) {
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4938u;
        goto label_1e4938;
    }
    ctx->pc = 0x1E4930u;
    {
        const bool branch_taken_0x1e4930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4930) {
            ctx->pc = 0x1E4964u;
            goto label_1e4964;
        }
    }
    ctx->pc = 0x1E4938u;
label_1e4938:
    // 0x1e4938: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1e4938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1e493c:
    // 0x1e493c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e493cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1e4940:
    // 0x1e4940: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1e4940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1e4944:
    // 0x1e4944: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1e4944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1e4948:
    // 0x1e4948: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1e4948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1e494c:
    // 0x1e494c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1e494cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_1e4950:
    // 0x1e4950: 0xa2400050  sb          $zero, 0x50($s2)
    ctx->pc = 0x1e4950u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 80), (uint8_t)GPR_U32(ctx, 0));
label_1e4954:
    // 0x1e4954: 0xc07f88a  jal         func_1FE228
label_1e4958:
    if (ctx->pc == 0x1E4958u) {
        ctx->pc = 0x1E4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4954u;
        // 0x1e4958: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E495Cu;
        goto label_1e495c;
    }
    ctx->pc = 0x1E4954u;
    SET_GPR_U32(ctx, 31, 0x1E495Cu);
    ctx->pc = 0x1E4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4954u;
    // 0x1e4958: 0x8e440024  lw          $a0, 0x24($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1E4954u, 0x1E495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E495Cu;
label_1e495c:
    // 0x1e495c: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1e495cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_1e4960:
    // 0x1e4960: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e4960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1e4964:
    // 0x1e4964: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e4964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e4968:
    // 0x1e4968: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e496c:
    // 0x1e496c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1e496cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4970:
    // 0x1e4970: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e4970u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4974:
    // 0x1e4974: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4978:
    // 0x1e4978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e497c:
    // 0x1e497c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e497cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4980:
    // 0x1e4980: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4984:
    // 0x1e4984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4988:
    // 0x1e4988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e498c:
    // 0x1e498c: 0x3e00008  jr          $ra
label_1e4990:
    if (ctx->pc == 0x1E4990u) {
        ctx->pc = 0x1E4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E498Cu;
        // 0x1e4990: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4994u;
        goto label_fallthrough_0x1e498c;
    }
    ctx->pc = 0x1E498Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E498Cu;
        // 0x1e4990: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E498Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e498c:
    ctx->pc = 0x1E4994u;
}
