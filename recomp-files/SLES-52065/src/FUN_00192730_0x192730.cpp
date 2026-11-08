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

// Function: FUN_00192730
// Address: 0x192730 - 0x1928b4
void FUN_00192730_0x192730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192730_0x192730");
#endif

    switch (ctx->pc) {
        case 0x192760u: goto label_192760;
        case 0x192798u: goto label_192798;
        case 0x1927acu: goto label_1927ac;
        case 0x1927d8u: goto label_1927d8;
        case 0x1927ecu: goto label_1927ec;
        case 0x192820u: goto label_192820;
        case 0x192838u: goto label_192838;
        case 0x192860u: goto label_192860;
        case 0x192898u: goto label_192898;
        default: break;
    }

    ctx->pc = 0x192730u;

    // 0x192730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x192730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x192734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x192738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19273c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x192740: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x192740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192748: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x192748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19274c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192750: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x192750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x192754: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x192754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
    // 0x192758: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192758u;
    {
        const bool branch_taken_0x192758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192758u;
        // 0x19275c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192758) {
            ctx->pc = 0x19277Cu;
            goto label_19277c;
        }
    }
    ctx->pc = 0x192760u;
label_192760:
    // 0x192760: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x192760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192764: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192764u;
    {
        const bool branch_taken_0x192764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192764) {
            ctx->pc = 0x19278Cu;
            goto label_19278c;
        }
    }
    ctx->pc = 0x19276Cu;
    // 0x19276c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19276cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192770: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x192770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x192774: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x192774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x192778: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x192778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_19277c:
    // 0x19277c: 0x0  nop
    ctx->pc = 0x19277cu;
    // NOP
    // 0x192780: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x192780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x192784: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x192784u;
    {
        const bool branch_taken_0x192784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192784u;
        // 0x192788: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192784) {
            ctx->pc = 0x192760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192760;
        }
    }
    ctx->pc = 0x19278Cu;
label_19278c:
    // 0x19278c: 0x0  nop
    ctx->pc = 0x19278cu;
    // NOP
    // 0x192790: 0xc063ec4  jal         func_18FB10
    ctx->pc = 0x192790u;
    SET_GPR_U32(ctx, 31, 0x192798u);
    ctx->pc = 0x192794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192790u;
    // 0x192794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB10u, 0x192790u, 0x192798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192798u;
label_192798:
    // 0x192798: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x192798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x19279c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927a0: 0x2484d6d0  addiu       $a0, $a0, -0x2930
    ctx->pc = 0x1927a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956752));
    // 0x1927a4: 0xc064048  jal         func_190120
    ctx->pc = 0x1927A4u;
    SET_GPR_U32(ctx, 31, 0x1927ACu);
    ctx->pc = 0x1927A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927A4u;
    // 0x1927a8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190120u, 0x1927A4u, 0x1927ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ACu;
label_1927ac:
    // 0x1927ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1927acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927b0: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1927B0u;
    {
        const bool branch_taken_0x1927b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927b0) {
            ctx->pc = 0x192898u;
            goto label_192898;
        }
    }
    ctx->pc = 0x1927B8u;
    // 0x1927b8: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1927b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1927bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1927bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927c0: 0xae220330  sw          $v0, 0x330($s1)
    ctx->pc = 0x1927c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
    // 0x1927c4: 0xae200324  sw          $zero, 0x324($s1)
    ctx->pc = 0x1927c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 0));
    // 0x1927c8: 0xae20033c  sw          $zero, 0x33C($s1)
    ctx->pc = 0x1927c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 0));
    // 0x1927cc: 0xae200340  sw          $zero, 0x340($s1)
    ctx->pc = 0x1927ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 832), GPR_U32(ctx, 0));
    // 0x1927d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1927D0u;
    {
        const bool branch_taken_0x1927d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927D0u;
        // 0x1927d4: 0xae200344  sw          $zero, 0x344($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927d0) {
            ctx->pc = 0x192804u;
            goto label_192804;
        }
    }
    ctx->pc = 0x1927D8u;
label_1927d8:
    // 0x1927d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1927dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1927dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1927e0: 0x24a5fe10  addiu       $a1, $a1, -0x1F0
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966800));
    // 0x1927e4: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x1927E4u;
    SET_GPR_U32(ctx, 31, 0x1927ECu);
    ctx->pc = 0x1927E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927E4u;
    // 0x1927e8: 0x24440350  addiu       $a0, $v0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x1927E4u, 0x1927ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ECu;
label_1927ec:
    // 0x1927ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1927ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1927f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1927f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1927f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1927f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1927f8: 0xac400450  sw          $zero, 0x450($v0)
    ctx->pc = 0x1927f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1104), GPR_U32(ctx, 0));
    // 0x1927fc: 0xac400510  sw          $zero, 0x510($v0)
    ctx->pc = 0x1927fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1296), GPR_U32(ctx, 0));
    // 0x192800: 0xac4004d0  sw          $zero, 0x4D0($v0)
    ctx->pc = 0x192800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 0));
label_192804:
    // 0x192804: 0x0  nop
    ctx->pc = 0x192804u;
    // NOP
    // 0x192808: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x192808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x19280c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19280Cu;
    {
        const bool branch_taken_0x19280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19280Cu;
        // 0x192810: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19280c) {
            ctx->pc = 0x1927D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1927d8;
        }
    }
    ctx->pc = 0x192814u;
    // 0x192814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x192814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192818: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x192818u;
    SET_GPR_U32(ctx, 31, 0x192820u);
    ctx->pc = 0x19281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192818u;
    // 0x19281c: 0xae320664  sw          $s2, 0x664($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1636), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x192818u, 0x192820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192820u;
label_192820:
    // 0x192820: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x192820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192824: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x192824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x192828: 0x7e220550  sq          $v0, 0x550($s1)
    ctx->pc = 0x192828u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
    // 0x19282c: 0x7823d700  lq          $v1, -0x2900($at)
    ctx->pc = 0x19282cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x36D700u));
    // 0x192830: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x192830u;
    {
        const bool branch_taken_0x192830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192830u;
        // 0x192834: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192830) {
            ctx->pc = 0x19287Cu;
            goto label_19287c;
        }
    }
    ctx->pc = 0x192838u;
label_192838:
    // 0x192838: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19283c: 0x78420560  lq          $v0, 0x560($v0)
    ctx->pc = 0x19283cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1376)));
    // 0x192840: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x192840u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x192844: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192844u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x192848: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x192848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x19284c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x192850: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192850u;
    {
        const bool branch_taken_0x192850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192850u;
        // 0x192854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192850) {
            ctx->pc = 0x192874u;
            goto label_192874;
        }
    }
    ctx->pc = 0x192858u;
    // 0x192858: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x192858u;
    SET_GPR_U32(ctx, 31, 0x192860u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x192858u, 0x192860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192860u;
label_192860:
    // 0x192860: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x192860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192864: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x192864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x192868: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x192868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19286c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19286Cu;
    {
        const bool branch_taken_0x19286c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19286Cu;
        // 0x192870: 0x7c430560  sq          $v1, 0x560($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 1376), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19286c) {
            ctx->pc = 0x19288Cu;
            goto label_19288c;
        }
    }
    ctx->pc = 0x192874u;
label_192874:
    // 0x192874: 0x0  nop
    ctx->pc = 0x192874u;
    // NOP
    // 0x192878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19287c:
    // 0x19287c: 0x0  nop
    ctx->pc = 0x19287cu;
    // NOP
    // 0x192880: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x192884: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x192884u;
    {
        const bool branch_taken_0x192884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192884u;
        // 0x192888: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192884) {
            ctx->pc = 0x192838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192838;
        }
    }
    ctx->pc = 0x19288Cu;
label_19288c:
    // 0x19288c: 0x0  nop
    ctx->pc = 0x19288cu;
    // NOP
    // 0x192890: 0xc063e70  jal         func_18F9C0
    ctx->pc = 0x192890u;
    SET_GPR_U32(ctx, 31, 0x192898u);
    ctx->pc = 0x192894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192890u;
    // 0x192894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F9C0u, 0x192890u, 0x192898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192898u;
label_192898:
    // 0x192898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19289c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19289cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1928a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1928a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1928a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1928a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1928a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1928a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1928ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1928ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1928B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928ACu;
        // 0x1928b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928B4u;
}
