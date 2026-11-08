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

// Function: FUN_00169730
// Address: 0x169730 - 0x169814
void FUN_00169730_0x169730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169730_0x169730");
#endif

    switch (ctx->pc) {
        case 0x169730u: goto label_169730;
        case 0x169734u: goto label_169734;
        case 0x169738u: goto label_169738;
        case 0x16973cu: goto label_16973c;
        case 0x169740u: goto label_169740;
        case 0x169744u: goto label_169744;
        case 0x169748u: goto label_169748;
        case 0x16974cu: goto label_16974c;
        case 0x169750u: goto label_169750;
        case 0x169754u: goto label_169754;
        case 0x169758u: goto label_169758;
        case 0x16975cu: goto label_16975c;
        case 0x169760u: goto label_169760;
        case 0x169764u: goto label_169764;
        case 0x169768u: goto label_169768;
        case 0x16976cu: goto label_16976c;
        case 0x169770u: goto label_169770;
        case 0x169774u: goto label_169774;
        case 0x169778u: goto label_169778;
        case 0x16977cu: goto label_16977c;
        case 0x169780u: goto label_169780;
        case 0x169784u: goto label_169784;
        case 0x169788u: goto label_169788;
        case 0x16978cu: goto label_16978c;
        case 0x169790u: goto label_169790;
        case 0x169794u: goto label_169794;
        case 0x169798u: goto label_169798;
        case 0x16979cu: goto label_16979c;
        case 0x1697a0u: goto label_1697a0;
        case 0x1697a4u: goto label_1697a4;
        case 0x1697a8u: goto label_1697a8;
        case 0x1697acu: goto label_1697ac;
        case 0x1697b0u: goto label_1697b0;
        case 0x1697b4u: goto label_1697b4;
        case 0x1697b8u: goto label_1697b8;
        case 0x1697bcu: goto label_1697bc;
        case 0x1697c0u: goto label_1697c0;
        case 0x1697c4u: goto label_1697c4;
        case 0x1697c8u: goto label_1697c8;
        case 0x1697ccu: goto label_1697cc;
        case 0x1697d0u: goto label_1697d0;
        case 0x1697d4u: goto label_1697d4;
        case 0x1697d8u: goto label_1697d8;
        case 0x1697dcu: goto label_1697dc;
        case 0x1697e0u: goto label_1697e0;
        case 0x1697e4u: goto label_1697e4;
        case 0x1697e8u: goto label_1697e8;
        case 0x1697ecu: goto label_1697ec;
        case 0x1697f0u: goto label_1697f0;
        case 0x1697f4u: goto label_1697f4;
        case 0x1697f8u: goto label_1697f8;
        case 0x1697fcu: goto label_1697fc;
        case 0x169800u: goto label_169800;
        case 0x169804u: goto label_169804;
        case 0x169808u: goto label_169808;
        case 0x16980cu: goto label_16980c;
        case 0x169810u: goto label_169810;
        default: break;
    }

    ctx->pc = 0x169730u;

label_169730:
    // 0x169730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169734:
    // 0x169734: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x169734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_169738:
    // 0x169738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16973c:
    // 0x16973c: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x16973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_169740:
    // 0x169740: 0x14660031  bne         $v1, $a2, . + 4 + (0x31 << 2)
label_169744:
    if (ctx->pc == 0x169744u) {
        ctx->pc = 0x169748u;
        goto label_169748;
    }
    ctx->pc = 0x169740u;
    {
        const bool branch_taken_0x169740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x169740) {
            ctx->pc = 0x169808u;
            goto label_169808;
        }
    }
    ctx->pc = 0x169748u;
label_169748:
    // 0x169748: 0x93878488  lbu         $a3, -0x7B78($gp)
    ctx->pc = 0x169748u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_16974c:
    // 0x16974c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_169750:
    if (ctx->pc == 0x169750u) {
        ctx->pc = 0x169750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16974Cu;
        // 0x169750: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169754u;
        goto label_169754;
    }
    ctx->pc = 0x16974Cu;
    {
        const bool branch_taken_0x16974c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x169750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16974Cu;
        // 0x169750: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16974c) {
            ctx->pc = 0x16975Cu;
            goto label_16975c;
        }
    }
    ctx->pc = 0x169754u;
label_169754:
    // 0x169754: 0x90262eb5  lbu         $a2, 0x2EB5($at)
    ctx->pc = 0x169754u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11957)));
label_169758:
    // 0x169758: 0x0  nop
    ctx->pc = 0x169758u;
    // NOP
label_16975c:
    // 0x16975c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_169760:
    if (ctx->pc == 0x169760u) {
        ctx->pc = 0x169760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16975Cu;
        // 0x169760: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169764u;
        goto label_169764;
    }
    ctx->pc = 0x16975Cu;
    {
        const bool branch_taken_0x16975c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x169760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16975Cu;
        // 0x169760: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16975c) {
            ctx->pc = 0x16976Cu;
            goto label_16976c;
        }
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0x10000009  b           . + 4 + (0x9 << 2)
label_169768:
    if (ctx->pc == 0x169768u) {
        ctx->pc = 0x169768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169764u;
        // 0x169768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16976Cu;
        goto label_16976c;
    }
    ctx->pc = 0x169764u;
    {
        const bool branch_taken_0x169764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169764u;
        // 0x169768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169764) {
            ctx->pc = 0x16978Cu;
            goto label_16978c;
        }
    }
    ctx->pc = 0x16976Cu;
label_16976c:
    // 0x16976c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_169770:
    // 0x169770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169774:
    // 0x169774: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x169774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_169778:
    // 0x169778: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_16977c:
    if (ctx->pc == 0x16977Cu) {
        ctx->pc = 0x169780u;
        goto label_169780;
    }
    ctx->pc = 0x169778u;
    {
        const bool branch_taken_0x169778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x169778) {
            ctx->pc = 0x169788u;
            goto label_169788;
        }
    }
    ctx->pc = 0x169780u;
label_169780:
    // 0x169780: 0x10000002  b           . + 4 + (0x2 << 2)
label_169784:
    if (ctx->pc == 0x169784u) {
        ctx->pc = 0x169788u;
        goto label_169788;
    }
    ctx->pc = 0x169780u;
    {
        const bool branch_taken_0x169780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169780) {
            ctx->pc = 0x16978Cu;
            goto label_16978c;
        }
    }
    ctx->pc = 0x169788u;
label_169788:
    // 0x169788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16978c:
    // 0x16978c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_169790:
    if (ctx->pc == 0x169790u) {
        ctx->pc = 0x169790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16978Cu;
        // 0x169790: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169794u;
        goto label_169794;
    }
    ctx->pc = 0x16978Cu;
    {
        const bool branch_taken_0x16978c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x169790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16978Cu;
        // 0x169790: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16978c) {
            ctx->pc = 0x1697ACu;
            goto label_1697ac;
        }
    }
    ctx->pc = 0x169794u;
label_169794:
    // 0x169794: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x169794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_169798:
    // 0x169798: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x169798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16979c:
    // 0x16979c: 0x320f809  jalr        $t9
label_1697a0:
    if (ctx->pc == 0x1697A0u) {
        ctx->pc = 0x1697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16979Cu;
        // 0x1697a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697A4u;
        goto label_1697a4;
    }
    ctx->pc = 0x16979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1697A4u);
        ctx->pc = 0x1697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16979Cu;
        // 0x1697a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16979Cu, 0x1697A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1697A4u;
label_1697a4:
    // 0x1697a4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1697a8:
    if (ctx->pc == 0x1697A8u) {
        ctx->pc = 0x1697A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697A4u;
        // 0x1697a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697ACu;
        goto label_1697ac;
    }
    ctx->pc = 0x1697A4u;
    {
        const bool branch_taken_0x1697a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697A4u;
        // 0x1697a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697a4) {
            ctx->pc = 0x16980Cu;
            goto label_16980c;
        }
    }
    ctx->pc = 0x1697ACu;
label_1697ac:
    // 0x1697ac: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1697b0:
    if (ctx->pc == 0x1697B0u) {
        ctx->pc = 0x1697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ACu;
        // 0x1697b0: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697B4u;
        goto label_1697b4;
    }
    ctx->pc = 0x1697ACu;
    {
        const bool branch_taken_0x1697ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ACu;
        // 0x1697b0: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697ac) {
            ctx->pc = 0x1697BCu;
            goto label_1697bc;
        }
    }
    ctx->pc = 0x1697B4u;
label_1697b4:
    // 0x1697b4: 0x90232ebf  lbu         $v1, 0x2EBF($at)
    ctx->pc = 0x1697b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11967)));
label_1697b8:
    // 0x1697b8: 0x0  nop
    ctx->pc = 0x1697b8u;
    // NOP
label_1697bc:
    // 0x1697bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1697c0:
    if (ctx->pc == 0x1697C0u) {
        ctx->pc = 0x1697C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697BCu;
        // 0x1697c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697C4u;
        goto label_1697c4;
    }
    ctx->pc = 0x1697BCu;
    {
        const bool branch_taken_0x1697bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1697C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697BCu;
        // 0x1697c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697bc) {
            ctx->pc = 0x1697CCu;
            goto label_1697cc;
        }
    }
    ctx->pc = 0x1697C4u;
label_1697c4:
    // 0x1697c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1697c8:
    if (ctx->pc == 0x1697C8u) {
        ctx->pc = 0x1697CCu;
        goto label_1697cc;
    }
    ctx->pc = 0x1697C4u;
    {
        const bool branch_taken_0x1697c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697c4) {
            ctx->pc = 0x1697F0u;
            goto label_1697f0;
        }
    }
    ctx->pc = 0x1697CCu;
label_1697cc:
    // 0x1697cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1697ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1697d0:
    // 0x1697d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1697d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1697d4:
    // 0x1697d4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1697d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1697d8:
    // 0x1697d8: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1697dc:
    // 0x1697dc: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_1697e0:
    if (ctx->pc == 0x1697E0u) {
        ctx->pc = 0x1697E4u;
        goto label_1697e4;
    }
    ctx->pc = 0x1697DCu;
    {
        const bool branch_taken_0x1697dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1697dc) {
            ctx->pc = 0x1697ECu;
            goto label_1697ec;
        }
    }
    ctx->pc = 0x1697E4u;
label_1697e4:
    // 0x1697e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1697e8:
    if (ctx->pc == 0x1697E8u) {
        ctx->pc = 0x1697ECu;
        goto label_1697ec;
    }
    ctx->pc = 0x1697E4u;
    {
        const bool branch_taken_0x1697e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697e4) {
            ctx->pc = 0x1697F0u;
            goto label_1697f0;
        }
    }
    ctx->pc = 0x1697ECu;
label_1697ec:
    // 0x1697ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1697ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1697f0:
    // 0x1697f0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1697f4:
    if (ctx->pc == 0x1697F4u) {
        ctx->pc = 0x1697F8u;
        goto label_1697f8;
    }
    ctx->pc = 0x1697F0u;
    {
        const bool branch_taken_0x1697f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697f0) {
            ctx->pc = 0x169808u;
            goto label_169808;
        }
    }
    ctx->pc = 0x1697F8u;
label_1697f8:
    // 0x1697f8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1697f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1697fc:
    // 0x1697fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_169800:
    // 0x169800: 0x320f809  jalr        $t9
label_169804:
    if (ctx->pc == 0x169804u) {
        ctx->pc = 0x169804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169800u;
        // 0x169804: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169808u;
        goto label_169808;
    }
    ctx->pc = 0x169800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169808u);
        ctx->pc = 0x169804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169800u;
        // 0x169804: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169800u, 0x169808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169808u;
label_169808:
    // 0x169808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16980c:
    // 0x16980c: 0x3e00008  jr          $ra
label_169810:
    if (ctx->pc == 0x169810u) {
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16980Cu;
        // 0x169810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169814u;
        goto label_fallthrough_0x16980c;
    }
    ctx->pc = 0x16980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16980Cu;
        // 0x169810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16980c:
    ctx->pc = 0x169814u;
}
