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

// Function: FUN_00142730
// Address: 0x142730 - 0x142f80
void FUN_00142730_0x142730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00142730_0x142730");
#endif

    switch (ctx->pc) {
        case 0x1427f4u: goto label_1427f4;
        case 0x142810u: goto label_142810;
        case 0x14281cu: goto label_14281c;
        case 0x142854u: goto label_142854;
        case 0x142894u: goto label_142894;
        case 0x14289cu: goto label_14289c;
        case 0x1428ccu: goto label_1428cc;
        case 0x1428ecu: goto label_1428ec;
        case 0x142910u: goto label_142910;
        case 0x142940u: goto label_142940;
        case 0x142968u: goto label_142968;
        case 0x14298cu: goto label_14298c;
        case 0x1429b0u: goto label_1429b0;
        case 0x1429f4u: goto label_1429f4;
        case 0x142a00u: goto label_142a00;
        case 0x142a44u: goto label_142a44;
        case 0x142a58u: goto label_142a58;
        case 0x142a9cu: goto label_142a9c;
        case 0x142ab4u: goto label_142ab4;
        case 0x142ac0u: goto label_142ac0;
        case 0x142ad0u: goto label_142ad0;
        case 0x142ae8u: goto label_142ae8;
        case 0x142af8u: goto label_142af8;
        case 0x142b28u: goto label_142b28;
        case 0x142b64u: goto label_142b64;
        case 0x142ba0u: goto label_142ba0;
        case 0x142bb4u: goto label_142bb4;
        case 0x142bc8u: goto label_142bc8;
        case 0x142be0u: goto label_142be0;
        case 0x142c00u: goto label_142c00;
        case 0x142c70u: goto label_142c70;
        case 0x142ca4u: goto label_142ca4;
        case 0x142cb0u: goto label_142cb0;
        case 0x142cbcu: goto label_142cbc;
        case 0x142cf8u: goto label_142cf8;
        case 0x142d0cu: goto label_142d0c;
        case 0x142d50u: goto label_142d50;
        case 0x142d68u: goto label_142d68;
        case 0x142d74u: goto label_142d74;
        case 0x142d84u: goto label_142d84;
        case 0x142d9cu: goto label_142d9c;
        case 0x142dacu: goto label_142dac;
        case 0x142de0u: goto label_142de0;
        case 0x142e1cu: goto label_142e1c;
        case 0x142e58u: goto label_142e58;
        case 0x142e6cu: goto label_142e6c;
        case 0x142e80u: goto label_142e80;
        case 0x142e98u: goto label_142e98;
        case 0x142eb8u: goto label_142eb8;
        case 0x142f28u: goto label_142f28;
        default: break;
    }

    ctx->pc = 0x142730u;

    // 0x142730: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x142730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x142734: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x142734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x142738: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x142738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14273c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x142740: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x142740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x142744: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x142744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x142748: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x142748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14274c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x142750: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x142750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x142754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x142754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142758: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x142758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14275c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x142760: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x142760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x142764: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x142764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x142768: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x142768u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14276c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14276Cu;
    {
        const bool branch_taken_0x14276c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x142770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14276Cu;
        // 0x142770: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14276c) {
            ctx->pc = 0x14277Cu;
            goto label_14277c;
        }
    }
    ctx->pc = 0x142774u;
    // 0x142774: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x142774u;
    {
        const bool branch_taken_0x142774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142774u;
        // 0x142778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142774) {
            ctx->pc = 0x142F4Cu;
            goto label_142f4c;
        }
    }
    ctx->pc = 0x14277Cu;
label_14277c:
    // 0x14277c: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x14277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x142780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142780u;
    {
        const bool branch_taken_0x142780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142780u;
        // 0x142784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142780) {
            ctx->pc = 0x142790u;
            goto label_142790;
        }
    }
    ctx->pc = 0x142788u;
    // 0x142788: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x142788u;
    {
        const bool branch_taken_0x142788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142788u;
        // 0x14278c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142788) {
            ctx->pc = 0x142F50u;
            goto label_142f50;
        }
    }
    ctx->pc = 0x142790u;
label_142790:
    // 0x142790: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x142790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x142794: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x142798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14279c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1427a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1427A0u;
    {
        const bool branch_taken_0x1427a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1427A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427A0u;
        // 0x1427a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427a0) {
            ctx->pc = 0x1427B0u;
            goto label_1427b0;
        }
    }
    ctx->pc = 0x1427A8u;
    // 0x1427a8: 0x100001e8  b           . + 4 + (0x1E8 << 2)
    ctx->pc = 0x1427A8u;
    {
        const bool branch_taken_0x1427a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427A8u;
        // 0x1427ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427a8) {
            ctx->pc = 0x142F4Cu;
            goto label_142f4c;
        }
    }
    ctx->pc = 0x1427B0u;
label_1427b0:
    // 0x1427b0: 0x10c7001c  beq         $a2, $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1427B0u;
    {
        const bool branch_taken_0x1427b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1427b0) {
            ctx->pc = 0x142824u;
            goto label_142824;
        }
    }
    ctx->pc = 0x1427B8u;
    // 0x1427b8: 0x8fc3001c  lw          $v1, 0x1C($fp)
    ctx->pc = 0x1427b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x1427bc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1427BCu;
    {
        const bool branch_taken_0x1427bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427bc) {
            ctx->pc = 0x142824u;
            goto label_142824;
        }
    }
    ctx->pc = 0x1427C4u;
    // 0x1427c4: 0x93c20028  lbu         $v0, 0x28($fp)
    ctx->pc = 0x1427c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1427c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1427c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1427cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1427ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1427d0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1427d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1427d4: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1427D4u;
    {
        const bool branch_taken_0x1427d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1427D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427D4u;
        // 0x1427d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427d4) {
            ctx->pc = 0x1427E4u;
            goto label_1427e4;
        }
    }
    ctx->pc = 0x1427DCu;
    // 0x1427dc: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x1427DCu;
    {
        const bool branch_taken_0x1427dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427DCu;
        // 0x1427e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427dc) {
            ctx->pc = 0x142F4Cu;
            goto label_142f4c;
        }
    }
    ctx->pc = 0x1427E4u;
label_1427e4:
    // 0x1427e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1427E4u;
    {
        const bool branch_taken_0x1427e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1427e4) {
            ctx->pc = 0x1427FCu;
            goto label_1427fc;
        }
    }
    ctx->pc = 0x1427ECu;
    // 0x1427ec: 0xc050d1c  jal         func_143470
    ctx->pc = 0x1427ECu;
    SET_GPR_U32(ctx, 31, 0x1427F4u);
    ctx->pc = 0x143470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143470u, 0x1427ECu, 0x1427F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427F4u;
label_1427f4:
    // 0x1427f4: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1427F4u;
    {
        const bool branch_taken_0x1427f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1427F4u;
        // 0x1427f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1427f4) {
            ctx->pc = 0x142F4Cu;
            goto label_142f4c;
        }
    }
    ctx->pc = 0x1427FCu;
label_1427fc:
    // 0x1427fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1427fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142800: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142800u;
    {
        const bool branch_taken_0x142800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142800) {
            ctx->pc = 0x142824u;
            goto label_142824;
        }
    }
    ctx->pc = 0x142808u;
    // 0x142808: 0xc050d2c  jal         func_1434B0
    ctx->pc = 0x142808u;
    SET_GPR_U32(ctx, 31, 0x142810u);
    ctx->pc = 0x1434B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B0u, 0x142808u, 0x142810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142810u;
label_142810:
    // 0x142810: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x142810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142814: 0xc050d1c  jal         func_143470
    ctx->pc = 0x142814u;
    SET_GPR_U32(ctx, 31, 0x14281Cu);
    ctx->pc = 0x142818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142814u;
    // 0x142818: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143470u, 0x142814u, 0x14281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14281Cu;
label_14281c:
    // 0x14281c: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x14281Cu;
    {
        const bool branch_taken_0x14281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14281Cu;
        // 0x142820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14281c) {
            ctx->pc = 0x142F4Cu;
            goto label_142f4c;
        }
    }
    ctx->pc = 0x142824u;
label_142824:
    // 0x142824: 0x8fc4001c  lw          $a0, 0x1C($fp)
    ctx->pc = 0x142824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x142828: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x142828u;
    {
        const bool branch_taken_0x142828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142828) {
            ctx->pc = 0x142854u;
            goto label_142854;
        }
    }
    ctx->pc = 0x142830u;
    // 0x142830: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x142830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x142834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142838: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14283c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x142840: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x142840u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x142844: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142844u;
    {
        const bool branch_taken_0x142844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142844) {
            ctx->pc = 0x142854u;
            goto label_142854;
        }
    }
    ctx->pc = 0x14284Cu;
    // 0x14284c: 0xc050d2c  jal         func_1434B0
    ctx->pc = 0x14284Cu;
    SET_GPR_U32(ctx, 31, 0x142854u);
    ctx->pc = 0x142850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14284Cu;
    // 0x142850: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B0u, 0x14284Cu, 0x142854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142854u;
label_142854:
    // 0x142854: 0xa3d30028  sb          $s3, 0x28($fp)
    ctx->pc = 0x142854u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 40), (uint8_t)GPR_U32(ctx, 19));
    // 0x142858: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x142858u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x14285c: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x14285cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x142860: 0xa3c0002a  sb          $zero, 0x2A($fp)
    ctx->pc = 0x142860u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x142864: 0x93c20029  lbu         $v0, 0x29($fp)
    ctx->pc = 0x142864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 41)));
    // 0x142868: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x142868u;
    {
        const bool branch_taken_0x142868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142868) {
            ctx->pc = 0x142928u;
            goto label_142928;
        }
    }
    ctx->pc = 0x142870u;
    // 0x142870: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x142870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x142874: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x142874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x142878: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14287c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142880: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x142880u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x142884: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x142884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142888: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x142888u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x14288c: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x14288Cu;
    {
        const bool branch_taken_0x14288c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14288Cu;
        // 0x142890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14288c) {
            ctx->pc = 0x1429BCu;
            goto label_1429bc;
        }
    }
    ctx->pc = 0x142894u;
label_142894:
    // 0x142894: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x142894u;
    SET_GPR_U32(ctx, 31, 0x14289Cu);
    ctx->pc = 0x142898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142894u;
    // 0x142898: 0x27c40030  addiu       $a0, $fp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x142894u, 0x14289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14289Cu;
label_14289c:
    // 0x14289c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428a0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1428a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1428a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1428a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1428a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1428a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1428ac: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1428acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1428b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1428B4u;
    {
        const bool branch_taken_0x1428b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1428b4) {
            ctx->pc = 0x1428CCu;
            goto label_1428cc;
        }
    }
    ctx->pc = 0x1428BCu;
    // 0x1428bc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1428c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428c4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x1428C4u;
    SET_GPR_U32(ctx, 31, 0x1428CCu);
    ctx->pc = 0x1428C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428C4u;
    // 0x1428c8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x1428C4u, 0x1428CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428CCu;
label_1428cc:
    // 0x1428cc: 0x0  nop
    ctx->pc = 0x1428ccu;
    // NOP
    // 0x1428d0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1428d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1428d4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1428D4u;
    {
        const bool branch_taken_0x1428d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1428d4) {
            ctx->pc = 0x142904u;
            goto label_142904;
        }
    }
    ctx->pc = 0x1428DCu;
    // 0x1428dc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1428dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1428e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1428e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428e4: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x1428E4u;
    SET_GPR_U32(ctx, 31, 0x1428ECu);
    ctx->pc = 0x1428E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428E4u;
    // 0x1428e8: 0xc44c007c  lwc1        $f12, 0x7C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x1428E4u, 0x1428ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428ECu;
label_1428ec:
    // 0x1428ec: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1428ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1428f0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1428f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1428f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1428f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1428f8: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1428fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1428fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142900: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x142900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_142904:
    // 0x142904: 0x0  nop
    ctx->pc = 0x142904u;
    // NOP
    // 0x142908: 0xc050950  jal         func_142540
    ctx->pc = 0x142908u;
    SET_GPR_U32(ctx, 31, 0x142910u);
    ctx->pc = 0x14290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142908u;
    // 0x14290c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142540u, 0x142908u, 0x142910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142910u;
label_142910:
    // 0x142910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142914: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x142914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x142918: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x142918u;
    {
        const bool branch_taken_0x142918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142918) {
            ctx->pc = 0x142894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142894;
        }
    }
    ctx->pc = 0x142920u;
    // 0x142920: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x142920u;
    {
        const bool branch_taken_0x142920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142920) {
            ctx->pc = 0x1429BCu;
            goto label_1429bc;
        }
    }
    ctx->pc = 0x142928u;
label_142928:
    // 0x142928: 0x8fc20034  lw          $v0, 0x34($fp)
    ctx->pc = 0x142928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x14292c: 0x8fd10038  lw          $s1, 0x38($fp)
    ctx->pc = 0x14292cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x142930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142934: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x142938: 0x12340020  beq         $s1, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x142938u;
    {
        const bool branch_taken_0x142938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x142938) {
            ctx->pc = 0x1429BCu;
            goto label_1429bc;
        }
    }
    ctx->pc = 0x142940u;
label_142940:
    // 0x142940: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142944: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x142944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x142948: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142948u;
    {
        const bool branch_taken_0x142948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142948) {
            ctx->pc = 0x142968u;
            goto label_142968;
        }
    }
    ctx->pc = 0x142950u;
    // 0x142950: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x142950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142954: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x142958: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x142958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14295c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142960: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142960u;
    SET_GPR_U32(ctx, 31, 0x142968u);
    ctx->pc = 0x142964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142960u;
    // 0x142964: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142960u, 0x142968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142968u;
label_142968:
    // 0x142968: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x142968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14296c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x14296Cu;
    {
        const bool branch_taken_0x14296c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14296c) {
            ctx->pc = 0x1429A8u;
            goto label_1429a8;
        }
    }
    ctx->pc = 0x142974u;
    // 0x142974: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142978: 0x139140  sll         $s2, $s3, 5
    ctx->pc = 0x142978u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x14297c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x142980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142984: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x142984u;
    SET_GPR_U32(ctx, 31, 0x14298Cu);
    ctx->pc = 0x142988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142984u;
    // 0x142988: 0xc44c007c  lwc1        $f12, 0x7C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x142984u, 0x14298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14298Cu;
label_14298c:
    // 0x14298c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x14298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142990: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x142990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x142994: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x142994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x142998: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14299c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x14299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1429a0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1429a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1429a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1429a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1429a8:
    // 0x1429a8: 0xc050950  jal         func_142540
    ctx->pc = 0x1429A8u;
    SET_GPR_U32(ctx, 31, 0x1429B0u);
    ctx->pc = 0x1429ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429A8u;
    // 0x1429ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142540u, 0x1429A8u, 0x1429B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1429B0u;
label_1429b0:
    // 0x1429b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1429b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1429b4: 0x1634ffe2  bne         $s1, $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1429B4u;
    {
        const bool branch_taken_0x1429b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        if (branch_taken_0x1429b4) {
            ctx->pc = 0x142940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142940;
        }
    }
    ctx->pc = 0x1429BCu;
label_1429bc:
    // 0x1429bc: 0x0  nop
    ctx->pc = 0x1429bcu;
    // NOP
    // 0x1429c0: 0x93c20029  lbu         $v0, 0x29($fp)
    ctx->pc = 0x1429c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 41)));
    // 0x1429c4: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1429C4u;
    {
        const bool branch_taken_0x1429c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429C4u;
        // 0x1429c8: 0x27d0003c  addiu       $s0, $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429c4) {
            ctx->pc = 0x142C9Cu;
            goto label_142c9c;
        }
    }
    ctx->pc = 0x1429CCu;
    // 0x1429cc: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x1429ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1429d0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1429d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1429d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1429d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1429d8: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x1429d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x1429dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1429e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1429e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1429e4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1429e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1429e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1429e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1429ec: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1429ECu;
    {
        const bool branch_taken_0x1429ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429ECu;
        // 0x1429f0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429ec) {
            ctx->pc = 0x142C7Cu;
            goto label_142c7c;
        }
    }
    ctx->pc = 0x1429F4u;
label_1429f4:
    // 0x1429f4: 0xc7d40010  lwc1        $f20, 0x10($fp)
    ctx->pc = 0x1429f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1429f8: 0xc049ed0  jal         func_127B40
    ctx->pc = 0x1429F8u;
    SET_GPR_U32(ctx, 31, 0x142A00u);
    ctx->pc = 0x1429FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1429F8u;
    // 0x1429fc: 0x27c4003c  addiu       $a0, $fp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x1429F8u, 0x142A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A00u;
label_142a00:
    // 0x142a00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x142a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142a04: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x142a08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x142a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x142a0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x142a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142a14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x142a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x142a18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142a1c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x142a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x142a20: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x142a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x142a24: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x142A24u;
    {
        const bool branch_taken_0x142a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142a24) {
            ctx->pc = 0x142C70u;
            goto label_142c70;
        }
    }
    ctx->pc = 0x142A2Cu;
    // 0x142a2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142a30: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x142a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142a34: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x142A34u;
    {
        const bool branch_taken_0x142a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142A34u;
        // 0x142a38: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a34) {
            ctx->pc = 0x142AF8u;
            goto label_142af8;
        }
    }
    ctx->pc = 0x142A3Cu;
    // 0x142a3c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x142A3Cu;
    SET_GPR_U32(ctx, 31, 0x142A44u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x142A3Cu, 0x142A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A44u;
label_142a44:
    // 0x142a44: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x142a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142a48: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x142a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142a4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142a50: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142A50u;
    SET_GPR_U32(ctx, 31, 0x142A58u);
    ctx->pc = 0x142A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142A50u;
    // 0x142a54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142A50u, 0x142A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A58u;
label_142a58:
    // 0x142a58: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x142a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142a5c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x142a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x142a60: 0xc7a20204  lwc1        $f2, 0x204($sp)
    ctx->pc = 0x142a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142a64: 0xc7a30208  lwc1        $f3, 0x208($sp)
    ctx->pc = 0x142a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142a6c: 0x0  nop
    ctx->pc = 0x142a6cu;
    // NOP
    // 0x142a70: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x142a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x142a74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x142a74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x142a78: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x142a78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x142a7c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x142a7cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x142a80: 0xe7a201d4  swc1        $f2, 0x1D4($sp)
    ctx->pc = 0x142a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x142a84: 0xe7a301e8  swc1        $f3, 0x1E8($sp)
    ctx->pc = 0x142a84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x142a88: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x142a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x142a8c: 0x0  nop
    ctx->pc = 0x142a8cu;
    // NOP
    // 0x142a90: 0x0  nop
    ctx->pc = 0x142a90u;
    // NOP
    // 0x142a94: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x142A94u;
    SET_GPR_U32(ctx, 31, 0x142A9Cu);
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x142A94u, 0x142A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A9Cu;
label_142a9c:
    // 0x142a9c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142aa0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x142aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142aa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142aa8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142aac: 0xc061ad0  jal         func_186B40
    ctx->pc = 0x142AACu;
    SET_GPR_U32(ctx, 31, 0x142AB4u);
    ctx->pc = 0x142AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AACu;
    // 0x142ab0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186B40u, 0x142AACu, 0x142AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AB4u;
label_142ab4:
    // 0x142ab4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142ab8: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x142AB8u;
    SET_GPR_U32(ctx, 31, 0x142AC0u);
    ctx->pc = 0x142ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AB8u;
    // 0x142abc: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x142AB8u, 0x142AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AC0u;
label_142ac0:
    // 0x142ac0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142ac4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x142ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x142ac8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142AC8u;
    SET_GPR_U32(ctx, 31, 0x142AD0u);
    ctx->pc = 0x142ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AC8u;
    // 0x142acc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142AC8u, 0x142AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AD0u;
label_142ad0:
    // 0x142ad0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142ad4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x142ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142ad8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142ad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142adc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x142adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142ae0: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142AE0u;
    SET_GPR_U32(ctx, 31, 0x142AE8u);
    ctx->pc = 0x142AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AE0u;
    // 0x142ae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142AE0u, 0x142AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AE8u;
label_142ae8:
    // 0x142ae8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142aec: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x142aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x142af0: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x142AF0u;
    SET_GPR_U32(ctx, 31, 0x142AF8u);
    ctx->pc = 0x142AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142AF0u;
    // 0x142af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x142AF0u, 0x142AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142AF8u;
label_142af8:
    // 0x142af8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142afc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x142afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x142b00: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x142B00u;
    {
        const bool branch_taken_0x142b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142b00) {
            ctx->pc = 0x142B74u;
            goto label_142b74;
        }
    }
    ctx->pc = 0x142B08u;
    // 0x142b08: 0x8c770028  lw          $s7, 0x28($v1)
    ctx->pc = 0x142b08u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x142b0c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x142b0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b10: 0x8e540014  lw          $s4, 0x14($s2)
    ctx->pc = 0x142b10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x142b14: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x142b14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b18: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x142b18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x142b1c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x142B1Cu;
    {
        const bool branch_taken_0x142b1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B1Cu;
        // 0x142b20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b1c) {
            ctx->pc = 0x142B74u;
            goto label_142b74;
        }
    }
    ctx->pc = 0x142B24u;
    // 0x142b24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142b28:
    // 0x142b28: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x142B28u;
    {
        const bool branch_taken_0x142b28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x142b28) {
            ctx->pc = 0x142B34u;
            goto label_142b34;
        }
    }
    ctx->pc = 0x142B30u;
    // 0x142b30: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x142b30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_142b34:
    // 0x142b34: 0x0  nop
    ctx->pc = 0x142b34u;
    // NOP
    // 0x142b38: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x142b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x142b3c: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x142b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x142b40: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x142b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x142b44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x142b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x142b48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142b4c: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x142b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x142b50: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x142b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x142b54: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x142b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x142b58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x142b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142b5c: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142B5Cu;
    SET_GPR_U32(ctx, 31, 0x142B64u);
    ctx->pc = 0x142B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B5Cu;
    // 0x142b60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142B5Cu, 0x142B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B64u;
label_142b64:
    // 0x142b64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142b68: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x142b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x142b6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x142B6Cu;
    {
        const bool branch_taken_0x142b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B6Cu;
        // 0x142b70: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b6c) {
            ctx->pc = 0x142B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142b28;
        }
    }
    ctx->pc = 0x142B74u;
label_142b74:
    // 0x142b74: 0x0  nop
    ctx->pc = 0x142b74u;
    // NOP
    // 0x142b78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142b7c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x142b80: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x142B80u;
    {
        const bool branch_taken_0x142b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142b80) {
            ctx->pc = 0x142C24u;
            goto label_142c24;
        }
    }
    ctx->pc = 0x142B88u;
    // 0x142b88: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142b8c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x142B8Cu;
    {
        const bool branch_taken_0x142b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B8Cu;
        // 0x142b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b8c) {
            ctx->pc = 0x142C24u;
            goto label_142c24;
        }
    }
    ctx->pc = 0x142B94u;
    // 0x142b94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142b98: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142B98u;
    {
        const bool branch_taken_0x142b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B98u;
        // 0x142b9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b98) {
            ctx->pc = 0x142C0Cu;
            goto label_142c0c;
        }
    }
    ctx->pc = 0x142BA0u;
label_142ba0:
    // 0x142ba0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142ba4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142ba8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x142ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142bac: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x142BACu;
    SET_GPR_U32(ctx, 31, 0x142BB4u);
    ctx->pc = 0x142BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BACu;
    // 0x142bb0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x142BACu, 0x142BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BB4u;
label_142bb4:
    // 0x142bb4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142bb8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142bbc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x142bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142bc0: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142BC0u;
    SET_GPR_U32(ctx, 31, 0x142BC8u);
    ctx->pc = 0x142BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BC0u;
    // 0x142bc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142BC0u, 0x142BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BC8u;
label_142bc8:
    // 0x142bc8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142bcc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x142bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142bd0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142bd4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x142bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142bd8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142BD8u;
    SET_GPR_U32(ctx, 31, 0x142BE0u);
    ctx->pc = 0x142BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BD8u;
    // 0x142bdc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142BD8u, 0x142BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BE0u;
label_142be0:
    // 0x142be0: 0x8f838594  lw          $v1, -0x7A6C($gp)
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x142be4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142be8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142bec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142bf8: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142BF8u;
    SET_GPR_U32(ctx, 31, 0x142C00u);
    ctx->pc = 0x142BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BF8u;
    // 0x142bfc: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142BF8u, 0x142C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C00u;
label_142c00:
    // 0x142c00: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x142c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x142c04: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x142c04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x142c08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_142c0c:
    // 0x142c0c: 0x0  nop
    ctx->pc = 0x142c0cu;
    // NOP
    // 0x142c10: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142c14: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x142c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x142c18: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x142c18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142c1c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x142C1Cu;
    {
        const bool branch_taken_0x142c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142c1c) {
            ctx->pc = 0x142BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142ba0;
        }
    }
    ctx->pc = 0x142C24u;
label_142c24:
    // 0x142c24: 0x0  nop
    ctx->pc = 0x142c24u;
    // NOP
    // 0x142c28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142c2c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x142c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142c30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142C30u;
    {
        const bool branch_taken_0x142c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c30) {
            ctx->pc = 0x142C4Cu;
            goto label_142c4c;
        }
    }
    ctx->pc = 0x142C38u;
    // 0x142c38: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x142c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142c3c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x142c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x142c40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142c44: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142c44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142c48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x142c48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_142c4c:
    // 0x142c4c: 0x0  nop
    ctx->pc = 0x142c4cu;
    // NOP
    // 0x142c50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142c54: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x142c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x142c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142C58u;
    {
        const bool branch_taken_0x142c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c58) {
            ctx->pc = 0x142C70u;
            goto label_142c70;
        }
    }
    ctx->pc = 0x142C60u;
    // 0x142c60: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x142c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x142c64: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x142c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x142c68: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x142C68u;
    SET_GPR_U32(ctx, 31, 0x142C70u);
    ctx->pc = 0x142C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C68u;
    // 0x142c6c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x142C68u, 0x142C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C70u;
label_142c70:
    // 0x142c70: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x142c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x142c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142c78: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x142c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_142c7c:
    // 0x142c7c: 0x0  nop
    ctx->pc = 0x142c7cu;
    // NOP
    // 0x142c80: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x142c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x142c84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x142c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x142c88: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x142c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142c8c: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x142C8Cu;
    {
        const bool branch_taken_0x142c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142c8c) {
            ctx->pc = 0x1429F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1429f4;
        }
    }
    ctx->pc = 0x142C94u;
    // 0x142c94: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x142C94u;
    {
        const bool branch_taken_0x142c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c94) {
            ctx->pc = 0x142F44u;
            goto label_142f44;
        }
    }
    ctx->pc = 0x142C9Cu;
label_142c9c:
    // 0x142c9c: 0xc05077c  jal         func_141DF0
    ctx->pc = 0x142C9Cu;
    SET_GPR_U32(ctx, 31, 0x142CA4u);
    ctx->pc = 0x142CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C9Cu;
    // 0x142ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DF0u, 0x142C9Cu, 0x142CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CA4u;
label_142ca4:
    // 0x142ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ca8: 0xc050778  jal         func_141DE0
    ctx->pc = 0x142CA8u;
    SET_GPR_U32(ctx, 31, 0x142CB0u);
    ctx->pc = 0x142CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CA8u;
    // 0x142cac: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DE0u, 0x142CA8u, 0x142CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CB0u;
label_142cb0:
    // 0x142cb0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142cb4: 0x106200a3  beq         $v1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x142CB4u;
    {
        const bool branch_taken_0x142cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x142CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CB4u;
        // 0x142cb8: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cb4) {
            ctx->pc = 0x142F44u;
            goto label_142f44;
        }
    }
    ctx->pc = 0x142CBCu;
label_142cbc:
    // 0x142cbc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x142cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142cc0: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x142cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x142cc4: 0x8c51fffc  lw          $s1, -0x4($v0)
    ctx->pc = 0x142cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x142cc8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x142cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x142ccc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x142cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x142cd0: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x142cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142cd4: 0x92420018  lbu         $v0, 0x18($s2)
    ctx->pc = 0x142cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x142cd8: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x142CD8u;
    {
        const bool branch_taken_0x142cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CD8u;
        // 0x142cdc: 0xc7d40010  lwc1        $f20, 0x10($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cd8) {
            ctx->pc = 0x142F28u;
            goto label_142f28;
        }
    }
    ctx->pc = 0x142CE0u;
    // 0x142ce0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142ce4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x142ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142ce8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x142CE8u;
    {
        const bool branch_taken_0x142ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CE8u;
        // 0x142cec: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ce8) {
            ctx->pc = 0x142DACu;
            goto label_142dac;
        }
    }
    ctx->pc = 0x142CF0u;
    // 0x142cf0: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x142CF0u;
    SET_GPR_U32(ctx, 31, 0x142CF8u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x142CF0u, 0x142CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CF8u;
label_142cf8:
    // 0x142cf8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x142cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142cfc: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x142cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142d00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142d04: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142D04u;
    SET_GPR_U32(ctx, 31, 0x142D0Cu);
    ctx->pc = 0x142D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D04u;
    // 0x142d08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142D04u, 0x142D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D0Cu;
label_142d0c:
    // 0x142d0c: 0xc7a10310  lwc1        $f1, 0x310($sp)
    ctx->pc = 0x142d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x142d10: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x142d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x142d14: 0xc7a20314  lwc1        $f2, 0x314($sp)
    ctx->pc = 0x142d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x142d18: 0xc7a30318  lwc1        $f3, 0x318($sp)
    ctx->pc = 0x142d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142d20: 0x0  nop
    ctx->pc = 0x142d20u;
    // NOP
    // 0x142d24: 0xe7a102d0  swc1        $f1, 0x2D0($sp)
    ctx->pc = 0x142d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x142d28: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x142d28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x142d2c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x142d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x142d30: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x142d30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x142d34: 0xe7a202e4  swc1        $f2, 0x2E4($sp)
    ctx->pc = 0x142d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
    // 0x142d38: 0xe7a302f8  swc1        $f3, 0x2F8($sp)
    ctx->pc = 0x142d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x142d3c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x142d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x142d40: 0x0  nop
    ctx->pc = 0x142d40u;
    // NOP
    // 0x142d44: 0x0  nop
    ctx->pc = 0x142d44u;
    // NOP
    // 0x142d48: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x142D48u;
    SET_GPR_U32(ctx, 31, 0x142D50u);
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x142D48u, 0x142D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D50u;
label_142d50:
    // 0x142d50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142d54: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x142d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142d58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142d58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142d5c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x142d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142d60: 0xc061ad0  jal         func_186B40
    ctx->pc = 0x142D60u;
    SET_GPR_U32(ctx, 31, 0x142D68u);
    ctx->pc = 0x142D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D60u;
    // 0x142d64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186B40u, 0x142D60u, 0x142D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D68u;
label_142d68:
    // 0x142d68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142d6c: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x142D6Cu;
    SET_GPR_U32(ctx, 31, 0x142D74u);
    ctx->pc = 0x142D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D6Cu;
    // 0x142d70: 0x27a50310  addiu       $a1, $sp, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x142D6Cu, 0x142D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D74u;
label_142d74:
    // 0x142d74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142d78: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x142d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x142d7c: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142D7Cu;
    SET_GPR_U32(ctx, 31, 0x142D84u);
    ctx->pc = 0x142D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D7Cu;
    // 0x142d80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142D7Cu, 0x142D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D84u;
label_142d84:
    // 0x142d84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x142d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x142d88: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x142d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142d8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142d8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142d90: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x142d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142d94: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142D94u;
    SET_GPR_U32(ctx, 31, 0x142D9Cu);
    ctx->pc = 0x142D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D94u;
    // 0x142d98: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142D94u, 0x142D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D9Cu;
label_142d9c:
    // 0x142d9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142da0: 0x27a60310  addiu       $a2, $sp, 0x310
    ctx->pc = 0x142da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x142da4: 0xc07d382  jal         func_1F4E08
    ctx->pc = 0x142DA4u;
    SET_GPR_U32(ctx, 31, 0x142DACu);
    ctx->pc = 0x142DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DA4u;
    // 0x142da8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E08u, 0x142DA4u, 0x142DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DACu;
label_142dac:
    // 0x142dac: 0x0  nop
    ctx->pc = 0x142dacu;
    // NOP
    // 0x142db0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x142db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142db4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x142db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x142db8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x142DB8u;
    {
        const bool branch_taken_0x142db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142db8) {
            ctx->pc = 0x142E2Cu;
            goto label_142e2c;
        }
    }
    ctx->pc = 0x142DC0u;
    // 0x142dc0: 0x8c770028  lw          $s7, 0x28($v1)
    ctx->pc = 0x142dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x142dc4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x142dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dc8: 0x8e540014  lw          $s4, 0x14($s2)
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x142dcc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x142dccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dd0: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x142dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x142dd4: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x142DD4u;
    {
        const bool branch_taken_0x142dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DD4u;
        // 0x142dd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142dd4) {
            ctx->pc = 0x142E2Cu;
            goto label_142e2c;
        }
    }
    ctx->pc = 0x142DDCu;
    // 0x142ddc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_142de0:
    // 0x142de0: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x142DE0u;
    {
        const bool branch_taken_0x142de0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x142de0) {
            ctx->pc = 0x142DECu;
            goto label_142dec;
        }
    }
    ctx->pc = 0x142DE8u;
    // 0x142de8: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x142de8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_142dec:
    // 0x142dec: 0x0  nop
    ctx->pc = 0x142decu;
    // NOP
    // 0x142df0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x142df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x142df4: 0x2d01021  addu        $v0, $s6, $s0
    ctx->pc = 0x142df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x142df8: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x142df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x142dfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x142dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x142e00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142e04: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x142e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x142e08: 0x2832821  addu        $a1, $s4, $v1
    ctx->pc = 0x142e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x142e0c: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x142e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x142e10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x142e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142e14: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x142E14u;
    SET_GPR_U32(ctx, 31, 0x142E1Cu);
    ctx->pc = 0x142E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E14u;
    // 0x142e18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x142E14u, 0x142E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E1Cu;
label_142e1c:
    // 0x142e1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142e20: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x142e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x142e24: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x142E24u;
    {
        const bool branch_taken_0x142e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E24u;
        // 0x142e28: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e24) {
            ctx->pc = 0x142DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142de0;
        }
    }
    ctx->pc = 0x142E2Cu;
label_142e2c:
    // 0x142e2c: 0x0  nop
    ctx->pc = 0x142e2cu;
    // NOP
    // 0x142e30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142e34: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x142e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x142e38: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x142E38u;
    {
        const bool branch_taken_0x142e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142e38) {
            ctx->pc = 0x142EDCu;
            goto label_142edc;
        }
    }
    ctx->pc = 0x142E40u;
    // 0x142e40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142e44: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x142E44u;
    {
        const bool branch_taken_0x142e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E44u;
        // 0x142e48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e44) {
            ctx->pc = 0x142EDCu;
            goto label_142edc;
        }
    }
    ctx->pc = 0x142E4Cu;
    // 0x142e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x142e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e50: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x142E50u;
    {
        const bool branch_taken_0x142e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E50u;
        // 0x142e54: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e50) {
            ctx->pc = 0x142EC4u;
            goto label_142ec4;
        }
    }
    ctx->pc = 0x142E58u;
label_142e58:
    // 0x142e58: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142e5c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142e60: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x142e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142e64: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x142E64u;
    SET_GPR_U32(ctx, 31, 0x142E6Cu);
    ctx->pc = 0x142E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E64u;
    // 0x142e68: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x142E64u, 0x142E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E6Cu;
label_142e6c:
    // 0x142e6c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142e70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142e74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x142e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142e78: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142E78u;
    SET_GPR_U32(ctx, 31, 0x142E80u);
    ctx->pc = 0x142E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E78u;
    // 0x142e7c: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142E78u, 0x142E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E80u;
label_142e80:
    // 0x142e80: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142e84: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x142e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x142e88: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142e8c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x142e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142e90: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142E90u;
    SET_GPR_U32(ctx, 31, 0x142E98u);
    ctx->pc = 0x142E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E90u;
    // 0x142e94: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142E90u, 0x142E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E98u;
label_142e98:
    // 0x142e98: 0x8f838594  lw          $v1, -0x7A6C($gp)
    ctx->pc = 0x142e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x142e9c: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x142e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x142ea0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142eb0: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142EB0u;
    SET_GPR_U32(ctx, 31, 0x142EB8u);
    ctx->pc = 0x142EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EB0u;
    // 0x142eb4: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142EB0u, 0x142EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EB8u;
label_142eb8:
    // 0x142eb8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x142eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x142ebc: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x142ec0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_142ec4:
    // 0x142ec4: 0x0  nop
    ctx->pc = 0x142ec4u;
    // NOP
    // 0x142ec8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142ecc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x142eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x142ed0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x142ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142ed4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x142ED4u;
    {
        const bool branch_taken_0x142ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142ed4) {
            ctx->pc = 0x142E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142e58;
        }
    }
    ctx->pc = 0x142EDCu;
label_142edc:
    // 0x142edc: 0x0  nop
    ctx->pc = 0x142edcu;
    // NOP
    // 0x142ee0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142ee4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x142ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142ee8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142EE8u;
    {
        const bool branch_taken_0x142ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ee8) {
            ctx->pc = 0x142F04u;
            goto label_142f04;
        }
    }
    ctx->pc = 0x142EF0u;
    // 0x142ef0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x142ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142ef4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x142ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x142ef8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142efc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142f00: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x142f00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_142f04:
    // 0x142f04: 0x0  nop
    ctx->pc = 0x142f04u;
    // NOP
    // 0x142f08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142f0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x142f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x142f10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142F10u;
    {
        const bool branch_taken_0x142f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f10) {
            ctx->pc = 0x142F28u;
            goto label_142f28;
        }
    }
    ctx->pc = 0x142F18u;
    // 0x142f18: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x142f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x142f1c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x142f20: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x142F20u;
    SET_GPR_U32(ctx, 31, 0x142F28u);
    ctx->pc = 0x142F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F20u;
    // 0x142f24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x142F20u, 0x142F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F28u;
label_142f28:
    // 0x142f28: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142f2c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x142f30: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x142f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x142f34: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x142f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142f38: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x142f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x142f3c: 0x1462ff5f  bne         $v1, $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x142F3Cu;
    {
        const bool branch_taken_0x142f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142f3c) {
            ctx->pc = 0x142CBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142cbc;
        }
    }
    ctx->pc = 0x142F44u;
label_142f44:
    // 0x142f44: 0x0  nop
    ctx->pc = 0x142f44u;
    // NOP
    // 0x142f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_142f4c:
    // 0x142f4c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x142f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_142f50:
    // 0x142f50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x142f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142f54: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x142f54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x142f58: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x142f58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x142f5c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x142f5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x142f60: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x142f60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x142f64: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x142f64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142f68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x142f68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142f6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x142f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142f70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x142f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142f74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142f78: 0x3e00008  jr          $ra
    ctx->pc = 0x142F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F78u;
        // 0x142f7c: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142F80u;
}
