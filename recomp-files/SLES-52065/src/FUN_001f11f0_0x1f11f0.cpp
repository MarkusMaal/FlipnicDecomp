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

// Function: FUN_001f11f0
// Address: 0x1f11f0 - 0x1f1348
void FUN_001f11f0_0x1f11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f11f0_0x1f11f0");
#endif

    switch (ctx->pc) {
        case 0x1f1218u: goto label_1f1218;
        case 0x1f1224u: goto label_1f1224;
        case 0x1f123cu: goto label_1f123c;
        case 0x1f1260u: goto label_1f1260;
        case 0x1f1288u: goto label_1f1288;
        case 0x1f12d4u: goto label_1f12d4;
        case 0x1f12e4u: goto label_1f12e4;
        case 0x1f12ecu: goto label_1f12ec;
        case 0x1f1300u: goto label_1f1300;
        case 0x1f1310u: goto label_1f1310;
        case 0x1f1320u: goto label_1f1320;
        case 0x1f1328u: goto label_1f1328;
        default: break;
    }

    ctx->pc = 0x1f11f0u;

    // 0x1f11f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f11f4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f11f8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f11f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f11fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f11fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1200: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f1200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f1204: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f1204u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f1208: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f120c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f120cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f1210: 0xc07bbe0  jal         func_1EEF80
    ctx->pc = 0x1F1210u;
    SET_GPR_U32(ctx, 31, 0x1F1218u);
    ctx->pc = 0x1F1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1210u;
    // 0x1f1214: 0x2672e200  addiu       $s2, $s3, -0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF80u, 0x1F1210u, 0x1F1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1218u;
label_1f1218:
    // 0x1f1218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f121c: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F121Cu;
    SET_GPR_U32(ctx, 31, 0x1F1224u);
    ctx->pc = 0x1F1220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F121Cu;
    // 0x1f1220: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F121Cu, 0x1F1224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1224u;
label_1f1224:
    // 0x1f1224: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1228: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f1228u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f122c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F122Cu;
    {
        const bool branch_taken_0x1f122c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f122c) {
            ctx->pc = 0x1F1244u;
            goto label_1f1244;
        }
    }
    ctx->pc = 0x1F1234u;
    // 0x1f1234: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1234u;
    SET_GPR_U32(ctx, 31, 0x1F123Cu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1234u, 0x1F123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F123Cu;
label_1f123c:
    // 0x1f123c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1F123Cu;
    {
        const bool branch_taken_0x1f123c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F123Cu;
        // 0x1f1240: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f123c) {
            ctx->pc = 0x1F132Cu;
            goto label_1f132c;
        }
    }
    ctx->pc = 0x1F1244u;
label_1f1244:
    // 0x1f1244: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1244u;
    {
        const bool branch_taken_0x1f1244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1244) {
            ctx->pc = 0x1F1258u;
            goto label_1f1258;
        }
    }
    ctx->pc = 0x1F124Cu;
    // 0x1f124c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1250: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1250u;
    {
        const bool branch_taken_0x1f1250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1250) {
            ctx->pc = 0x1F1254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1250u;
            // 0x1f1254: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1268u;
            goto label_1f1268;
        }
    }
    ctx->pc = 0x1F1258u;
label_1f1258:
    // 0x1f1258: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1258u;
    SET_GPR_U32(ctx, 31, 0x1F1260u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1258u, 0x1F1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1260u;
label_1f1260:
    // 0x1f1260: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F1260u;
    {
        const bool branch_taken_0x1f1260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1260u;
        // 0x1f1264: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1260) {
            ctx->pc = 0x1F132Cu;
            goto label_1f132c;
        }
    }
    ctx->pc = 0x1F1268u;
label_1f1268:
    // 0x1f1268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f126c: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1f126cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1f1270: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1274: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1f1274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1f1278: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1f1278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1f127c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f127cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1280: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1280u;
    SET_GPR_U32(ctx, 31, 0x1F1288u);
    ctx->pc = 0x1F1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1280u;
    // 0x1f1284: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1280u, 0x1F1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1288u;
label_1f1288:
    // 0x1f1288: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f128c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1290: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f1294: 0xae71e200  sw          $s1, -0x1E00($s3)
    ctx->pc = 0x1f1294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294959616), GPR_U32(ctx, 17));
    // 0x1f1298: 0x2450ee40  addiu       $s0, $v0, -0x11C0
    ctx->pc = 0x1f1298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1f129c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f129cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f12a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f12a4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1f12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1f12a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f12ac: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1f12acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1f12b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f12b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12b4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f12b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f12b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f12bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f12bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12c0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f12c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f12c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f12c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f12c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f12c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f12cc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F12CCu;
    SET_GPR_U32(ctx, 31, 0x1F12D4u);
    ctx->pc = 0x1F12D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12CCu;
    // 0x1f12d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F12CCu, 0x1F12D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12D4u;
label_1f12d4:
    // 0x1f12d4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F12D4u;
    {
        const bool branch_taken_0x1f12d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12D4u;
        // 0x1f12d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12d4) {
            ctx->pc = 0x1F12F4u;
            goto label_1f12f4;
        }
    }
    ctx->pc = 0x1F12DCu;
    // 0x1f12dc: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F12DCu;
    SET_GPR_U32(ctx, 31, 0x1F12E4u);
    ctx->pc = 0x1F12E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12DCu;
    // 0x1f12e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F12DCu, 0x1F12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12E4u;
label_1f12e4:
    // 0x1f12e4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F12E4u;
    SET_GPR_U32(ctx, 31, 0x1F12ECu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F12E4u, 0x1F12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F12ECu;
label_1f12ec:
    // 0x1f12ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F12ECu;
    {
        const bool branch_taken_0x1f12ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F12F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F12ECu;
        // 0x1f12f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f12ec) {
            ctx->pc = 0x1F132Cu;
            goto label_1f132c;
        }
    }
    ctx->pc = 0x1F12F4u;
label_1f12f4:
    // 0x1f12f4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f12f8: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F12F8u;
    SET_GPR_U32(ctx, 31, 0x1F1300u);
    ctx->pc = 0x1F12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F12F8u;
    // 0x1f12fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F12F8u, 0x1F1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1300u;
label_1f1300:
    // 0x1f1300: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F1318u;
            goto label_1f1318;
        }
    }
    ctx->pc = 0x1F1308u;
    // 0x1f1308: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1308u;
    SET_GPR_U32(ctx, 31, 0x1F1310u);
    ctx->pc = 0x1F130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1308u;
    // 0x1f130c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1308u, 0x1F1310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1310u;
label_1f1310:
    // 0x1f1310: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1310u;
    {
        const bool branch_taken_0x1f1310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1310u;
        // 0x1f1314: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1310) {
            ctx->pc = 0x1F132Cu;
            goto label_1f132c;
        }
    }
    ctx->pc = 0x1F1318u;
label_1f1318:
    // 0x1f1318: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1318u;
    SET_GPR_U32(ctx, 31, 0x1F1320u);
    ctx->pc = 0x1F131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1318u;
    // 0x1f131c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1318u, 0x1F1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1320u;
label_1f1320:
    // 0x1f1320: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1320u;
    SET_GPR_U32(ctx, 31, 0x1F1328u);
    ctx->pc = 0x1F1324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1320u;
    // 0x1f1324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1320u, 0x1F1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1328u;
label_1f1328:
    // 0x1f1328: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f132c:
    // 0x1f132c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f132cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1330: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f1330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1334: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f1334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1338: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f1338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f133c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f133cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1340: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1340u;
        // 0x1f1344: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1348u;
}
