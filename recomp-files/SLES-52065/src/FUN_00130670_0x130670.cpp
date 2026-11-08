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

// Function: FUN_00130670
// Address: 0x130670 - 0x1307b8
void FUN_00130670_0x130670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130670_0x130670");
#endif

    switch (ctx->pc) {
        case 0x130670u: goto label_130670;
        case 0x130674u: goto label_130674;
        case 0x130678u: goto label_130678;
        case 0x13067cu: goto label_13067c;
        case 0x130680u: goto label_130680;
        case 0x130684u: goto label_130684;
        case 0x130688u: goto label_130688;
        case 0x13068cu: goto label_13068c;
        case 0x130690u: goto label_130690;
        case 0x130694u: goto label_130694;
        case 0x130698u: goto label_130698;
        case 0x13069cu: goto label_13069c;
        case 0x1306a0u: goto label_1306a0;
        case 0x1306a4u: goto label_1306a4;
        case 0x1306a8u: goto label_1306a8;
        case 0x1306acu: goto label_1306ac;
        case 0x1306b0u: goto label_1306b0;
        case 0x1306b4u: goto label_1306b4;
        case 0x1306b8u: goto label_1306b8;
        case 0x1306bcu: goto label_1306bc;
        case 0x1306c0u: goto label_1306c0;
        case 0x1306c4u: goto label_1306c4;
        case 0x1306c8u: goto label_1306c8;
        case 0x1306ccu: goto label_1306cc;
        case 0x1306d0u: goto label_1306d0;
        case 0x1306d4u: goto label_1306d4;
        case 0x1306d8u: goto label_1306d8;
        case 0x1306dcu: goto label_1306dc;
        case 0x1306e0u: goto label_1306e0;
        case 0x1306e4u: goto label_1306e4;
        case 0x1306e8u: goto label_1306e8;
        case 0x1306ecu: goto label_1306ec;
        case 0x1306f0u: goto label_1306f0;
        case 0x1306f4u: goto label_1306f4;
        case 0x1306f8u: goto label_1306f8;
        case 0x1306fcu: goto label_1306fc;
        case 0x130700u: goto label_130700;
        case 0x130704u: goto label_130704;
        case 0x130708u: goto label_130708;
        case 0x13070cu: goto label_13070c;
        case 0x130710u: goto label_130710;
        case 0x130714u: goto label_130714;
        case 0x130718u: goto label_130718;
        case 0x13071cu: goto label_13071c;
        case 0x130720u: goto label_130720;
        case 0x130724u: goto label_130724;
        case 0x130728u: goto label_130728;
        case 0x13072cu: goto label_13072c;
        case 0x130730u: goto label_130730;
        case 0x130734u: goto label_130734;
        case 0x130738u: goto label_130738;
        case 0x13073cu: goto label_13073c;
        case 0x130740u: goto label_130740;
        case 0x130744u: goto label_130744;
        case 0x130748u: goto label_130748;
        case 0x13074cu: goto label_13074c;
        case 0x130750u: goto label_130750;
        case 0x130754u: goto label_130754;
        case 0x130758u: goto label_130758;
        case 0x13075cu: goto label_13075c;
        case 0x130760u: goto label_130760;
        case 0x130764u: goto label_130764;
        case 0x130768u: goto label_130768;
        case 0x13076cu: goto label_13076c;
        case 0x130770u: goto label_130770;
        case 0x130774u: goto label_130774;
        case 0x130778u: goto label_130778;
        case 0x13077cu: goto label_13077c;
        case 0x130780u: goto label_130780;
        case 0x130784u: goto label_130784;
        case 0x130788u: goto label_130788;
        case 0x13078cu: goto label_13078c;
        case 0x130790u: goto label_130790;
        case 0x130794u: goto label_130794;
        case 0x130798u: goto label_130798;
        case 0x13079cu: goto label_13079c;
        case 0x1307a0u: goto label_1307a0;
        case 0x1307a4u: goto label_1307a4;
        case 0x1307a8u: goto label_1307a8;
        case 0x1307acu: goto label_1307ac;
        case 0x1307b0u: goto label_1307b0;
        case 0x1307b4u: goto label_1307b4;
        default: break;
    }

    ctx->pc = 0x130670u;

label_130670:
    // 0x130670: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x130670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
label_130674:
    // 0x130674: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_130678:
    // 0x130678: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13067c:
    // 0x13067c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_130680:
    // 0x130680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_130684:
    // 0x130684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x130684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_130688:
    // 0x130688: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x130688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13068c:
    // 0x13068c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x13068cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_130690:
    // 0x130690: 0xc04c0dc  jal         func_130370
label_130694:
    if (ctx->pc == 0x130694u) {
        ctx->pc = 0x130694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130690u;
        // 0x130694: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130698u;
        goto label_130698;
    }
    ctx->pc = 0x130690u;
    SET_GPR_U32(ctx, 31, 0x130698u);
    ctx->pc = 0x130694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130690u;
    // 0x130694: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130370u, 0x130690u, 0x130698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130698u;
label_130698:
    // 0x130698: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x130698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13069c:
    // 0x13069c: 0xc04c0dc  jal         func_130370
label_1306a0:
    if (ctx->pc == 0x1306A0u) {
        ctx->pc = 0x1306A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13069Cu;
        // 0x1306a0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306A4u;
        goto label_1306a4;
    }
    ctx->pc = 0x13069Cu;
    SET_GPR_U32(ctx, 31, 0x1306A4u);
    ctx->pc = 0x1306A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13069Cu;
    // 0x1306a0: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130370u, 0x13069Cu, 0x1306A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306A4u;
label_1306a4:
    // 0x1306a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1306a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1306a8:
    // 0x1306a8: 0x12130035  beq         $s0, $s3, . + 4 + (0x35 << 2)
label_1306ac:
    if (ctx->pc == 0x1306ACu) {
        ctx->pc = 0x1306B0u;
        goto label_1306b0;
    }
    ctx->pc = 0x1306A8u;
    {
        const bool branch_taken_0x1306a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x1306a8) {
            ctx->pc = 0x130780u;
            goto label_130780;
        }
    }
    ctx->pc = 0x1306B0u;
label_1306b0:
    // 0x1306b0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1306b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1306b4:
    // 0x1306b4: 0xc0806b0  jal         func_201AC0
label_1306b8:
    if (ctx->pc == 0x1306B8u) {
        ctx->pc = 0x1306B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306B4u;
        // 0x1306b8: 0x26250128  addiu       $a1, $s1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306BCu;
        goto label_1306bc;
    }
    ctx->pc = 0x1306B4u;
    SET_GPR_U32(ctx, 31, 0x1306BCu);
    ctx->pc = 0x1306B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306B4u;
    // 0x1306b8: 0x26250128  addiu       $a1, $s1, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1306B4u, 0x1306BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306BCu;
label_1306bc:
    // 0x1306bc: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_1306c0:
    if (ctx->pc == 0x1306C0u) {
        ctx->pc = 0x1306C4u;
        goto label_1306c4;
    }
    ctx->pc = 0x1306BCu;
    {
        const bool branch_taken_0x1306bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1306bc) {
            ctx->pc = 0x130774u;
            goto label_130774;
        }
    }
    ctx->pc = 0x1306C4u;
label_1306c4:
    // 0x1306c4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1306c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1306c8:
    // 0x1306c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1306cc:
    // 0x1306cc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1306ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1306d0:
    // 0x1306d0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1306d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1306d4:
    // 0x1306d4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_1306d8:
    if (ctx->pc == 0x1306D8u) {
        ctx->pc = 0x1306DCu;
        goto label_1306dc;
    }
    ctx->pc = 0x1306D4u;
    {
        const bool branch_taken_0x1306d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1306d4) {
            ctx->pc = 0x130750u;
            goto label_130750;
        }
    }
    ctx->pc = 0x1306DCu;
label_1306dc:
    // 0x1306dc: 0xc04c254  jal         func_130950
label_1306e0:
    if (ctx->pc == 0x1306E0u) {
        ctx->pc = 0x1306E4u;
        goto label_1306e4;
    }
    ctx->pc = 0x1306DCu;
    SET_GPR_U32(ctx, 31, 0x1306E4u);
    ctx->pc = 0x130950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130950u, 0x1306DCu, 0x1306E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306E4u;
label_1306e4:
    // 0x1306e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1306e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1306e8:
    // 0x1306e8: 0xc080702  jal         func_201C08
label_1306ec:
    if (ctx->pc == 0x1306ECu) {
        ctx->pc = 0x1306ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306E8u;
        // 0x1306ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306F0u;
        goto label_1306f0;
    }
    ctx->pc = 0x1306E8u;
    SET_GPR_U32(ctx, 31, 0x1306F0u);
    ctx->pc = 0x1306ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306E8u;
    // 0x1306ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1306E8u, 0x1306F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306F0u;
label_1306f0:
    // 0x1306f0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1306f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1306f4:
    // 0x1306f4: 0xc080664  jal         func_201990
label_1306f8:
    if (ctx->pc == 0x1306F8u) {
        ctx->pc = 0x1306F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306F4u;
        // 0x1306f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1306FCu;
        goto label_1306fc;
    }
    ctx->pc = 0x1306F4u;
    SET_GPR_U32(ctx, 31, 0x1306FCu);
    ctx->pc = 0x1306F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306F4u;
    // 0x1306f8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1306F4u, 0x1306FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306FCu;
label_1306fc:
    // 0x1306fc: 0xc080d98  jal         func_203660
label_130700:
    if (ctx->pc == 0x130700u) {
        ctx->pc = 0x130700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306FCu;
        // 0x130700: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130704u;
        goto label_130704;
    }
    ctx->pc = 0x1306FCu;
    SET_GPR_U32(ctx, 31, 0x130704u);
    ctx->pc = 0x130700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306FCu;
    // 0x130700: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x1306FCu, 0x130704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130704u;
label_130704:
    // 0x130704: 0xc047a3c  jal         func_11E8F0
label_130708:
    if (ctx->pc == 0x130708u) {
        ctx->pc = 0x13070Cu;
        goto label_13070c;
    }
    ctx->pc = 0x130704u;
    SET_GPR_U32(ctx, 31, 0x13070Cu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x130704u, 0x13070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13070Cu;
label_13070c:
    // 0x13070c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13070cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130710:
    // 0x130710: 0xc046c14  jal         func_11B050
label_130714:
    if (ctx->pc == 0x130714u) {
        ctx->pc = 0x130714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130710u;
        // 0x130714: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130718u;
        goto label_130718;
    }
    ctx->pc = 0x130710u;
    SET_GPR_U32(ctx, 31, 0x130718u);
    ctx->pc = 0x130714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130710u;
    // 0x130714: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x130710u, 0x130718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130718u;
label_130718:
    // 0x130718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13071c:
    // 0x13071c: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x13071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_130720:
    // 0x130720: 0x27a6045c  addiu       $a2, $sp, 0x45C
    ctx->pc = 0x130720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1116));
label_130724:
    // 0x130724: 0xc04c430  jal         func_1310C0
label_130728:
    if (ctx->pc == 0x130728u) {
        ctx->pc = 0x130728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130724u;
        // 0x130728: 0xafb0045c  sw          $s0, 0x45C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13072Cu;
        goto label_13072c;
    }
    ctx->pc = 0x130724u;
    SET_GPR_U32(ctx, 31, 0x13072Cu);
    ctx->pc = 0x130728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130724u;
    // 0x130728: 0xafb0045c  sw          $s0, 0x45C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310C0u, 0x130724u, 0x13072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13072Cu;
label_13072c:
    // 0x13072c: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_130730:
    if (ctx->pc == 0x130730u) {
        ctx->pc = 0x130734u;
        goto label_130734;
    }
    ctx->pc = 0x13072Cu;
    {
        const bool branch_taken_0x13072c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13072c) {
            ctx->pc = 0x13079Cu;
            goto label_13079c;
        }
    }
    ctx->pc = 0x130734u;
label_130734:
    // 0x130734: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_130738:
    // 0x130738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13073c:
    // 0x13073c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13073cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_130740:
    // 0x130740: 0x320f809  jalr        $t9
label_130744:
    if (ctx->pc == 0x130744u) {
        ctx->pc = 0x130744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130740u;
        // 0x130744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130748u;
        goto label_130748;
    }
    ctx->pc = 0x130740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x130748u);
        ctx->pc = 0x130744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130740u;
        // 0x130744: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130740u, 0x130748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x130748u;
label_130748:
    // 0x130748: 0x10000015  b           . + 4 + (0x15 << 2)
label_13074c:
    if (ctx->pc == 0x13074Cu) {
        ctx->pc = 0x13074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130748u;
        // 0x13074c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130750u;
        goto label_130750;
    }
    ctx->pc = 0x130748u;
    {
        const bool branch_taken_0x130748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130748u;
        // 0x13074c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130748) {
            ctx->pc = 0x1307A0u;
            goto label_1307a0;
        }
    }
    ctx->pc = 0x130750u;
label_130750:
    // 0x130750: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_130754:
    if (ctx->pc == 0x130754u) {
        ctx->pc = 0x130758u;
        goto label_130758;
    }
    ctx->pc = 0x130750u;
    {
        const bool branch_taken_0x130750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x130750) {
            ctx->pc = 0x13079Cu;
            goto label_13079c;
        }
    }
    ctx->pc = 0x130758u;
label_130758:
    // 0x130758: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x130758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13075c:
    // 0x13075c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130760:
    // 0x130760: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x130760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_130764:
    // 0x130764: 0x320f809  jalr        $t9
label_130768:
    if (ctx->pc == 0x130768u) {
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13076Cu;
        goto label_13076c;
    }
    ctx->pc = 0x130764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13076Cu);
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130764u, 0x13076Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13076Cu;
label_13076c:
    // 0x13076c: 0x1000000b  b           . + 4 + (0xB << 2)
label_130770:
    if (ctx->pc == 0x130770u) {
        ctx->pc = 0x130774u;
        goto label_130774;
    }
    ctx->pc = 0x13076Cu;
    {
        const bool branch_taken_0x13076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13076c) {
            ctx->pc = 0x13079Cu;
            goto label_13079c;
        }
    }
    ctx->pc = 0x130774u;
label_130774:
    // 0x130774: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_130778:
    // 0x130778: 0x1613ffce  bne         $s0, $s3, . + 4 + (-0x32 << 2)
label_13077c:
    if (ctx->pc == 0x13077Cu) {
        ctx->pc = 0x13077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130778u;
        // 0x13077c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x130780u;
        goto label_130780;
    }
    ctx->pc = 0x130778u;
    {
        const bool branch_taken_0x130778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x13077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130778u;
        // 0x13077c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130778) {
            ctx->pc = 0x1306B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1306b4;
        }
    }
    ctx->pc = 0x130780u;
label_130780:
    // 0x130780: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_130784:
    if (ctx->pc == 0x130784u) {
        ctx->pc = 0x130788u;
        goto label_130788;
    }
    ctx->pc = 0x130780u;
    {
        const bool branch_taken_0x130780 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x130780) {
            ctx->pc = 0x13079Cu;
            goto label_13079c;
        }
    }
    ctx->pc = 0x130788u;
label_130788:
    // 0x130788: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x130788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13078c:
    // 0x13078c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130790:
    // 0x130790: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x130790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_130794:
    // 0x130794: 0x320f809  jalr        $t9
label_130798:
    if (ctx->pc == 0x130798u) {
        ctx->pc = 0x130798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130794u;
        // 0x130798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13079Cu;
        goto label_13079c;
    }
    ctx->pc = 0x130794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13079Cu);
        ctx->pc = 0x130798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130794u;
        // 0x130798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130794u, 0x13079Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13079Cu;
label_13079c:
    // 0x13079c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13079cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1307a0:
    // 0x1307a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1307a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1307a4:
    // 0x1307a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1307a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1307a8:
    // 0x1307a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1307a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1307ac:
    // 0x1307ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1307acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1307b0:
    // 0x1307b0: 0x3e00008  jr          $ra
label_1307b4:
    if (ctx->pc == 0x1307B4u) {
        ctx->pc = 0x1307B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307B0u;
        // 0x1307b4: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1307B8u;
        goto label_fallthrough_0x1307b0;
    }
    ctx->pc = 0x1307B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1307B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307B0u;
        // 0x1307b4: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1307B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1307b0:
    ctx->pc = 0x1307B8u;
}
