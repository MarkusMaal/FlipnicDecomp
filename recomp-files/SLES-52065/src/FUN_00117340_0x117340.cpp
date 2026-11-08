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

// Function: FUN_00117340
// Address: 0x117340 - 0x117520
void FUN_00117340_0x117340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117340_0x117340");
#endif

    switch (ctx->pc) {
        case 0x117340u: goto label_117340;
        case 0x117344u: goto label_117344;
        case 0x117348u: goto label_117348;
        case 0x11734cu: goto label_11734c;
        case 0x117350u: goto label_117350;
        case 0x117354u: goto label_117354;
        case 0x117358u: goto label_117358;
        case 0x11735cu: goto label_11735c;
        case 0x117360u: goto label_117360;
        case 0x117364u: goto label_117364;
        case 0x117368u: goto label_117368;
        case 0x11736cu: goto label_11736c;
        case 0x117370u: goto label_117370;
        case 0x117374u: goto label_117374;
        case 0x117378u: goto label_117378;
        case 0x11737cu: goto label_11737c;
        case 0x117380u: goto label_117380;
        case 0x117384u: goto label_117384;
        case 0x117388u: goto label_117388;
        case 0x11738cu: goto label_11738c;
        case 0x117390u: goto label_117390;
        case 0x117394u: goto label_117394;
        case 0x117398u: goto label_117398;
        case 0x11739cu: goto label_11739c;
        case 0x1173a0u: goto label_1173a0;
        case 0x1173a4u: goto label_1173a4;
        case 0x1173a8u: goto label_1173a8;
        case 0x1173acu: goto label_1173ac;
        case 0x1173b0u: goto label_1173b0;
        case 0x1173b4u: goto label_1173b4;
        case 0x1173b8u: goto label_1173b8;
        case 0x1173bcu: goto label_1173bc;
        case 0x1173c0u: goto label_1173c0;
        case 0x1173c4u: goto label_1173c4;
        case 0x1173c8u: goto label_1173c8;
        case 0x1173ccu: goto label_1173cc;
        case 0x1173d0u: goto label_1173d0;
        case 0x1173d4u: goto label_1173d4;
        case 0x1173d8u: goto label_1173d8;
        case 0x1173dcu: goto label_1173dc;
        case 0x1173e0u: goto label_1173e0;
        case 0x1173e4u: goto label_1173e4;
        case 0x1173e8u: goto label_1173e8;
        case 0x1173ecu: goto label_1173ec;
        case 0x1173f0u: goto label_1173f0;
        case 0x1173f4u: goto label_1173f4;
        case 0x1173f8u: goto label_1173f8;
        case 0x1173fcu: goto label_1173fc;
        case 0x117400u: goto label_117400;
        case 0x117404u: goto label_117404;
        case 0x117408u: goto label_117408;
        case 0x11740cu: goto label_11740c;
        case 0x117410u: goto label_117410;
        case 0x117414u: goto label_117414;
        case 0x117418u: goto label_117418;
        case 0x11741cu: goto label_11741c;
        case 0x117420u: goto label_117420;
        case 0x117424u: goto label_117424;
        case 0x117428u: goto label_117428;
        case 0x11742cu: goto label_11742c;
        case 0x117430u: goto label_117430;
        case 0x117434u: goto label_117434;
        case 0x117438u: goto label_117438;
        case 0x11743cu: goto label_11743c;
        case 0x117440u: goto label_117440;
        case 0x117444u: goto label_117444;
        case 0x117448u: goto label_117448;
        case 0x11744cu: goto label_11744c;
        case 0x117450u: goto label_117450;
        case 0x117454u: goto label_117454;
        case 0x117458u: goto label_117458;
        case 0x11745cu: goto label_11745c;
        case 0x117460u: goto label_117460;
        case 0x117464u: goto label_117464;
        case 0x117468u: goto label_117468;
        case 0x11746cu: goto label_11746c;
        case 0x117470u: goto label_117470;
        case 0x117474u: goto label_117474;
        case 0x117478u: goto label_117478;
        case 0x11747cu: goto label_11747c;
        case 0x117480u: goto label_117480;
        case 0x117484u: goto label_117484;
        case 0x117488u: goto label_117488;
        case 0x11748cu: goto label_11748c;
        case 0x117490u: goto label_117490;
        case 0x117494u: goto label_117494;
        case 0x117498u: goto label_117498;
        case 0x11749cu: goto label_11749c;
        case 0x1174a0u: goto label_1174a0;
        case 0x1174a4u: goto label_1174a4;
        case 0x1174a8u: goto label_1174a8;
        case 0x1174acu: goto label_1174ac;
        case 0x1174b0u: goto label_1174b0;
        case 0x1174b4u: goto label_1174b4;
        case 0x1174b8u: goto label_1174b8;
        case 0x1174bcu: goto label_1174bc;
        case 0x1174c0u: goto label_1174c0;
        case 0x1174c4u: goto label_1174c4;
        case 0x1174c8u: goto label_1174c8;
        case 0x1174ccu: goto label_1174cc;
        case 0x1174d0u: goto label_1174d0;
        case 0x1174d4u: goto label_1174d4;
        case 0x1174d8u: goto label_1174d8;
        case 0x1174dcu: goto label_1174dc;
        case 0x1174e0u: goto label_1174e0;
        case 0x1174e4u: goto label_1174e4;
        case 0x1174e8u: goto label_1174e8;
        case 0x1174ecu: goto label_1174ec;
        case 0x1174f0u: goto label_1174f0;
        case 0x1174f4u: goto label_1174f4;
        case 0x1174f8u: goto label_1174f8;
        case 0x1174fcu: goto label_1174fc;
        case 0x117500u: goto label_117500;
        case 0x117504u: goto label_117504;
        case 0x117508u: goto label_117508;
        case 0x11750cu: goto label_11750c;
        case 0x117510u: goto label_117510;
        case 0x117514u: goto label_117514;
        case 0x117518u: goto label_117518;
        case 0x11751cu: goto label_11751c;
        default: break;
    }

    ctx->pc = 0x117340u;

label_117340:
    // 0x117340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_117344:
    // 0x117344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_117348:
    // 0x117348: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x117348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11734c:
    // 0x11734c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_117350:
    // 0x117350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_117354:
    // 0x117354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_117358:
    // 0x117358: 0x8f838320  lw          $v1, -0x7CE0($gp)
    ctx->pc = 0x117358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935328)));
label_11735c:
    // 0x11735c: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
label_117360:
    if (ctx->pc == 0x117360u) {
        ctx->pc = 0x117360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11735Cu;
        // 0x117360: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117364u;
        goto label_117364;
    }
    ctx->pc = 0x11735Cu;
    {
        const bool branch_taken_0x11735c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11735Cu;
        // 0x117360: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11735c) {
            ctx->pc = 0x117504u;
            goto label_117504;
        }
    }
    ctx->pc = 0x117364u;
label_117364:
    // 0x117364: 0xc07b79a  jal         func_1EDE68
label_117368:
    if (ctx->pc == 0x117368u) {
        ctx->pc = 0x117368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117364u;
        // 0x117368: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11736Cu;
        goto label_11736c;
    }
    ctx->pc = 0x117364u;
    SET_GPR_U32(ctx, 31, 0x11736Cu);
    ctx->pc = 0x117368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117364u;
    // 0x117368: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x117364u, 0x11736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11736Cu;
label_11736c:
    // 0x11736c: 0xc082590  jal         func_209640
label_117370:
    if (ctx->pc == 0x117370u) {
        ctx->pc = 0x117370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11736Cu;
        // 0x117370: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117374u;
        goto label_117374;
    }
    ctx->pc = 0x11736Cu;
    SET_GPR_U32(ctx, 31, 0x117374u);
    ctx->pc = 0x117370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11736Cu;
    // 0x117370: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209640u, 0x11736Cu, 0x117374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117374u;
label_117374:
    // 0x117374: 0xc07d61c  jal         func_1F5870
label_117378:
    if (ctx->pc == 0x117378u) {
        ctx->pc = 0x11737Cu;
        goto label_11737c;
    }
    ctx->pc = 0x117374u;
    SET_GPR_U32(ctx, 31, 0x11737Cu);
    ctx->pc = 0x1F5870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5870u, 0x117374u, 0x11737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11737Cu;
label_11737c:
    // 0x11737c: 0xc082cf4  jal         func_20B3D0
label_117380:
    if (ctx->pc == 0x117380u) {
        ctx->pc = 0x117384u;
        goto label_117384;
    }
    ctx->pc = 0x11737Cu;
    SET_GPR_U32(ctx, 31, 0x117384u);
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11737Cu, 0x117384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117384u;
label_117384:
    // 0x117384: 0xc045f94  jal         func_117E50
label_117388:
    if (ctx->pc == 0x117388u) {
        ctx->pc = 0x11738Cu;
        goto label_11738c;
    }
    ctx->pc = 0x117384u;
    SET_GPR_U32(ctx, 31, 0x11738Cu);
    ctx->pc = 0x117E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117E50u, 0x117384u, 0x11738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11738Cu;
label_11738c:
    // 0x11738c: 0xc05f37c  jal         func_17CDF0
label_117390:
    if (ctx->pc == 0x117390u) {
        ctx->pc = 0x117394u;
        goto label_117394;
    }
    ctx->pc = 0x11738Cu;
    SET_GPR_U32(ctx, 31, 0x117394u);
    ctx->pc = 0x17CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CDF0u, 0x11738Cu, 0x117394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117394u;
label_117394:
    // 0x117394: 0xc07d67a  jal         func_1F59E8
label_117398:
    if (ctx->pc == 0x117398u) {
        ctx->pc = 0x117398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117394u;
        // 0x117398: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11739Cu;
        goto label_11739c;
    }
    ctx->pc = 0x117394u;
    SET_GPR_U32(ctx, 31, 0x11739Cu);
    ctx->pc = 0x117398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117394u;
    // 0x117398: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F59E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F59E8u, 0x117394u, 0x11739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11739Cu;
label_11739c:
    // 0x11739c: 0xc040168  jal         func_1005A0
label_1173a0:
    if (ctx->pc == 0x1173A0u) {
        ctx->pc = 0x1173A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11739Cu;
        // 0x1173a0: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1173A4u;
        goto label_1173a4;
    }
    ctx->pc = 0x11739Cu;
    SET_GPR_U32(ctx, 31, 0x1173A4u);
    ctx->pc = 0x1173A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11739Cu;
    // 0x1173a0: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x11739Cu, 0x1173A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173A4u;
label_1173a4:
    // 0x1173a4: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1173a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
label_1173a8:
    // 0x1173a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1173a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1173ac:
    // 0x1173ac: 0x24a57520  addiu       $a1, $a1, 0x7520
    ctx->pc = 0x1173acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29984));
label_1173b0:
    // 0x1173b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1173b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1173b4:
    // 0x1173b4: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x1173b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1173b8:
    // 0x1173b8: 0xc07a424  jal         func_1E9090
label_1173bc:
    if (ctx->pc == 0x1173BCu) {
        ctx->pc = 0x1173BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173B8u;
        // 0x1173bc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1173C0u;
        goto label_1173c0;
    }
    ctx->pc = 0x1173B8u;
    SET_GPR_U32(ctx, 31, 0x1173C0u);
    ctx->pc = 0x1173BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173B8u;
    // 0x1173bc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9090u, 0x1173B8u, 0x1173C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173C0u;
label_1173c0:
    // 0x1173c0: 0xaf828318  sw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1173c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935320), GPR_U32(ctx, 2));
label_1173c4:
    // 0x1173c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1173c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1173c8:
    // 0x1173c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1173c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1173cc:
    // 0x1173cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1173ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1173d0:
    // 0x1173d0: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x1173d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_1173d4:
    // 0x1173d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1173d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1173d8:
    // 0x1173d8: 0x2442d6c0  addiu       $v0, $v0, -0x2940
    ctx->pc = 0x1173d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
label_1173dc:
    // 0x1173dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1173dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1173e0:
    // 0x1173e0: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x1173e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1173e4:
    // 0x1173e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1173e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1173e8:
    // 0x1173e8: 0xc04b018  jal         func_12C060
label_1173ec:
    if (ctx->pc == 0x1173ECu) {
        ctx->pc = 0x1173ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173E8u;
        // 0x1173ec: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1173F0u;
        goto label_1173f0;
    }
    ctx->pc = 0x1173E8u;
    SET_GPR_U32(ctx, 31, 0x1173F0u);
    ctx->pc = 0x1173ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173E8u;
    // 0x1173ec: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C060u, 0x1173E8u, 0x1173F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173F0u;
label_1173f0:
    // 0x1173f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1173f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1173f4:
    // 0x1173f4: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1173f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1173f8:
    // 0x1173f8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1173f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1173fc:
    // 0x1173fc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_117400:
    if (ctx->pc == 0x117400u) {
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173FCu;
        // 0x117400: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117404u;
        goto label_117404;
    }
    ctx->pc = 0x1173FCu;
    {
        const bool branch_taken_0x1173fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1173FCu;
        // 0x117400: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173fc) {
            ctx->pc = 0x1173D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1173d0;
        }
    }
    ctx->pc = 0x117404u;
label_117404:
    // 0x117404: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x117404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_117408:
    // 0x117408: 0xaf808330  sw          $zero, -0x7CD0($gp)
    ctx->pc = 0x117408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935344), GPR_U32(ctx, 0));
label_11740c:
    // 0x11740c: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x11740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
label_117410:
    // 0x117410: 0xaf828328  sw          $v0, -0x7CD8($gp)
    ctx->pc = 0x117410u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935336), GPR_U32(ctx, 2));
label_117414:
    // 0x117414: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x117414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_117418:
    // 0x117418: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x117418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
label_11741c:
    // 0x11741c: 0xaf82832c  sw          $v0, -0x7CD4($gp)
    ctx->pc = 0x11741cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935340), GPR_U32(ctx, 2));
label_117420:
    // 0x117420: 0x8f828328  lw          $v0, -0x7CD8($gp)
    ctx->pc = 0x117420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935336)));
label_117424:
    // 0x117424: 0xc0827aa  jal         func_209EA8
label_117428:
    if (ctx->pc == 0x117428u) {
        ctx->pc = 0x117428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117424u;
        // 0x117428: 0xaf828334  sw          $v0, -0x7CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11742Cu;
        goto label_11742c;
    }
    ctx->pc = 0x117424u;
    SET_GPR_U32(ctx, 31, 0x11742Cu);
    ctx->pc = 0x117428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117424u;
    // 0x117428: 0xaf828334  sw          $v0, -0x7CCC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209EA8u, 0x117424u, 0x11742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11742Cu;
label_11742c:
    // 0x11742c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11742cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117430:
    // 0x117430: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117434:
    // 0x117434: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x117434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_117438:
    // 0x117438: 0xc082742  jal         func_209D08
label_11743c:
    if (ctx->pc == 0x11743Cu) {
        ctx->pc = 0x11743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117438u;
        // 0x11743c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117440u;
        goto label_117440;
    }
    ctx->pc = 0x117438u;
    SET_GPR_U32(ctx, 31, 0x117440u);
    ctx->pc = 0x11743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117438u;
    // 0x11743c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D08u, 0x117438u, 0x117440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117440u;
label_117440:
    // 0x117440: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x117440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_117444:
    // 0x117444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117448:
    // 0x117448: 0x2484d8c0  addiu       $a0, $a0, -0x2740
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
label_11744c:
    // 0x11744c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x11744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_117450:
    // 0x117450: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_117454:
    // 0x117454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117458:
    // 0x117458: 0xc0827f0  jal         func_209FC0
label_11745c:
    if (ctx->pc == 0x11745Cu) {
        ctx->pc = 0x11745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117458u;
        // 0x11745c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117460u;
        goto label_117460;
    }
    ctx->pc = 0x117458u;
    SET_GPR_U32(ctx, 31, 0x117460u);
    ctx->pc = 0x11745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117458u;
    // 0x11745c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FC0u, 0x117458u, 0x117460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117460u;
label_117460:
    // 0x117460: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x117460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
label_117464:
    // 0x117464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117468:
    // 0x117468: 0x2484d8f0  addiu       $a0, $a0, -0x2710
    ctx->pc = 0x117468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957296));
label_11746c:
    // 0x11746c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x11746cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_117470:
    // 0x117470: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x117470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_117474:
    // 0x117474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117478:
    // 0x117478: 0xc0827f0  jal         func_209FC0
label_11747c:
    if (ctx->pc == 0x11747Cu) {
        ctx->pc = 0x11747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117478u;
        // 0x11747c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117480u;
        goto label_117480;
    }
    ctx->pc = 0x117478u;
    SET_GPR_U32(ctx, 31, 0x117480u);
    ctx->pc = 0x11747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117478u;
    // 0x11747c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FC0u, 0x117478u, 0x117480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117480u;
label_117480:
    // 0x117480: 0xc04bf64  jal         func_12FD90
label_117484:
    if (ctx->pc == 0x117484u) {
        ctx->pc = 0x117488u;
        goto label_117488;
    }
    ctx->pc = 0x117480u;
    SET_GPR_U32(ctx, 31, 0x117488u);
    ctx->pc = 0x12FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD90u, 0x117480u, 0x117488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117488u;
label_117488:
    // 0x117488: 0xc06d058  jal         func_1B4160
label_11748c:
    if (ctx->pc == 0x11748Cu) {
        ctx->pc = 0x117490u;
        goto label_117490;
    }
    ctx->pc = 0x117488u;
    SET_GPR_U32(ctx, 31, 0x117490u);
    ctx->pc = 0x1B4160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4160u, 0x117488u, 0x117490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117490u;
label_117490:
    // 0x117490: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x117490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_117494:
    // 0x117494: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x117494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_117498:
    // 0x117498: 0x24a5e570  addiu       $a1, $a1, -0x1A90
    ctx->pc = 0x117498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960496));
label_11749c:
    // 0x11749c: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x11749cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1174a0:
    // 0x1174a0: 0xc06d05c  jal         func_1B4170
label_1174a4:
    if (ctx->pc == 0x1174A4u) {
        ctx->pc = 0x1174A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174A0u;
        // 0x1174a4: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174A8u;
        goto label_1174a8;
    }
    ctx->pc = 0x1174A0u;
    SET_GPR_U32(ctx, 31, 0x1174A8u);
    ctx->pc = 0x1174A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174A0u;
    // 0x1174a4: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4170u, 0x1174A0u, 0x1174A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174A8u;
label_1174a8:
    // 0x1174a8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1174a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1174ac:
    // 0x1174ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1174acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1174b0:
    // 0x1174b0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1174b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_1174b4:
    // 0x1174b4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1174b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1174b8:
    // 0x1174b8: 0x24a5e578  addiu       $a1, $a1, -0x1A88
    ctx->pc = 0x1174b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960504));
label_1174bc:
    // 0x1174bc: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x1174bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1174c0:
    // 0x1174c0: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1174c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1174c4:
    // 0x1174c4: 0xaf838350  sw          $v1, -0x7CB0($gp)
    ctx->pc = 0x1174c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935376), GPR_U32(ctx, 3));
label_1174c8:
    // 0x1174c8: 0xc06d05c  jal         func_1B4170
label_1174cc:
    if (ctx->pc == 0x1174CCu) {
        ctx->pc = 0x1174CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174C8u;
        // 0x1174cc: 0xaf828354  sw          $v0, -0x7CAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174D0u;
        goto label_1174d0;
    }
    ctx->pc = 0x1174C8u;
    SET_GPR_U32(ctx, 31, 0x1174D0u);
    ctx->pc = 0x1174CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174C8u;
    // 0x1174cc: 0xaf828354  sw          $v0, -0x7CAC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4170u, 0x1174C8u, 0x1174D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174D0u;
label_1174d0:
    // 0x1174d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1174d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1174d4:
    // 0x1174d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1174d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1174d8:
    // 0x1174d8: 0xaf828320  sw          $v0, -0x7CE0($gp)
    ctx->pc = 0x1174d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935328), GPR_U32(ctx, 2));
label_1174dc:
    // 0x1174dc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1174dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1174e0:
    // 0x1174e0: 0xaf838358  sw          $v1, -0x7CA8($gp)
    ctx->pc = 0x1174e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935384), GPR_U32(ctx, 3));
label_1174e4:
    // 0x1174e4: 0xc045e58  jal         func_117960
label_1174e8:
    if (ctx->pc == 0x1174E8u) {
        ctx->pc = 0x1174E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174E4u;
        // 0x1174e8: 0xaf82835c  sw          $v0, -0x7CA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174ECu;
        goto label_1174ec;
    }
    ctx->pc = 0x1174E4u;
    SET_GPR_U32(ctx, 31, 0x1174ECu);
    ctx->pc = 0x1174E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174E4u;
    // 0x1174e8: 0xaf82835c  sw          $v0, -0x7CA4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x1174E4u, 0x1174ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1174ECu;
label_1174ec:
    // 0x1174ec: 0x8e79000c  lw          $t9, 0xC($s3)
    ctx->pc = 0x1174ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1174f0:
    // 0x1174f0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1174f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1174f4:
    // 0x1174f4: 0x320f809  jalr        $t9
label_1174f8:
    if (ctx->pc == 0x1174F8u) {
        ctx->pc = 0x1174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174F4u;
        // 0x1174f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1174FCu;
        goto label_1174fc;
    }
    ctx->pc = 0x1174F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1174FCu);
        ctx->pc = 0x1174F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174F4u;
        // 0x1174f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1174F4u, 0x1174FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1174FCu;
label_1174fc:
    // 0x1174fc: 0xc07e048  jal         func_1F8120
label_117500:
    if (ctx->pc == 0x117500u) {
        ctx->pc = 0x117500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1174FCu;
        // 0x117500: 0xaf808348  sw          $zero, -0x7CB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117504u;
        goto label_117504;
    }
    ctx->pc = 0x1174FCu;
    SET_GPR_U32(ctx, 31, 0x117504u);
    ctx->pc = 0x117500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1174FCu;
    // 0x117500: 0xaf808348  sw          $zero, -0x7CB8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935368), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8120u, 0x1174FCu, 0x117504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117504u;
label_117504:
    // 0x117504: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_117508:
    // 0x117508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x117508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11750c:
    // 0x11750c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11750cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_117510:
    // 0x117510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_117514:
    // 0x117514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_117518:
    // 0x117518: 0x3e00008  jr          $ra
label_11751c:
    if (ctx->pc == 0x11751Cu) {
        ctx->pc = 0x11751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117518u;
        // 0x11751c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117520u;
        goto label_fallthrough_0x117518;
    }
    ctx->pc = 0x117518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117518u;
        // 0x11751c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x117518:
    ctx->pc = 0x117520u;
}
