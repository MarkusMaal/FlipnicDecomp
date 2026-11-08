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

// Function: FUN_001c1270
// Address: 0x1c1270 - 0x1c138c
void FUN_001c1270_0x1c1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1270_0x1c1270");
#endif

    switch (ctx->pc) {
        case 0x1c12c4u: goto label_1c12c4;
        case 0x1c12dcu: goto label_1c12dc;
        case 0x1c12ecu: goto label_1c12ec;
        case 0x1c1300u: goto label_1c1300;
        case 0x1c1318u: goto label_1c1318;
        case 0x1c1330u: goto label_1c1330;
        case 0x1c134cu: goto label_1c134c;
        case 0x1c1360u: goto label_1c1360;
        case 0x1c1374u: goto label_1c1374;
        default: break;
    }

    ctx->pc = 0x1c1270u;

    // 0x1c1270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1274: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c127c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1288: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x1c1288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c128c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1c128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1c1290: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1290u;
    {
        const bool branch_taken_0x1c1290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1290u;
        // 0x1c1294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1290) {
            ctx->pc = 0x1C12A0u;
            goto label_1c12a0;
        }
    }
    ctx->pc = 0x1C1298u;
    // 0x1c1298: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C1298u;
    {
        const bool branch_taken_0x1c1298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1298) {
            ctx->pc = 0x1C1308u;
            goto label_1c1308;
        }
    }
    ctx->pc = 0x1C12A0u;
label_1c12a0:
    // 0x1c12a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c12a4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c12a8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1c12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x1c12ac: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1c12acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x1c12b0: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1c12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c12b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x1c12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x1c12b8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x1c12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x1c12bc: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1C12BCu;
    SET_GPR_U32(ctx, 31, 0x1C12C4u);
    ctx->pc = 0x1C12C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12BCu;
    // 0x1c12c0: 0xae20006c  sw          $zero, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1C12BCu, 0x1C12C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12C4u;
label_1c12c4:
    // 0x1c12c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c12c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c12c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c12cc: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C12CCu;
    {
        const bool branch_taken_0x1c12cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12CCu;
        // 0x1c12d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12cc) {
            ctx->pc = 0x1C133Cu;
            goto label_1c133c;
        }
    }
    ctx->pc = 0x1C12D4u;
    // 0x1c12d4: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1C12D4u;
    SET_GPR_U32(ctx, 31, 0x1C12DCu);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1C12D4u, 0x1C12DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12DCu;
label_1c12dc:
    // 0x1c12dc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c12dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c12e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12e4: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1C12E4u;
    SET_GPR_U32(ctx, 31, 0x1C12ECu);
    ctx->pc = 0x1C12E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12E4u;
    // 0x1c12e8: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1C12E4u, 0x1C12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12ECu;
label_1c12ec:
    // 0x1c12ec: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c12ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c12f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c12f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12f4: 0x24a53ec0  addiu       $a1, $a1, 0x3EC0
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16064));
    // 0x1c12f8: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1C12F8u;
    SET_GPR_U32(ctx, 31, 0x1C1300u);
    ctx->pc = 0x1C12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12F8u;
    // 0x1c12fc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1C12F8u, 0x1C1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1300u;
label_1c1300:
    // 0x1c1300: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C1300u;
    {
        const bool branch_taken_0x1c1300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1300) {
            ctx->pc = 0x1C1338u;
            goto label_1c1338;
        }
    }
    ctx->pc = 0x1C1308u;
label_1c1308:
    // 0x1c1308: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1c1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1c130c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c1310: 0xc07309c  jal         func_1CC270
    ctx->pc = 0x1C1310u;
    SET_GPR_U32(ctx, 31, 0x1C1318u);
    ctx->pc = 0x1C1314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1310u;
    // 0x1c1314: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC270u, 0x1C1310u, 0x1C1318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1318u;
label_1c1318:
    // 0x1c1318: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1c1318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c131c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1320: 0x90450084  lbu         $a1, 0x84($v0)
    ctx->pc = 0x1c1320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1c1324: 0x9046008c  lbu         $a2, 0x8C($v0)
    ctx->pc = 0x1c1324u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1c1328: 0xc07154c  jal         func_1C5530
    ctx->pc = 0x1C1328u;
    SET_GPR_U32(ctx, 31, 0x1C1330u);
    ctx->pc = 0x1C132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1328u;
    // 0x1c132c: 0x9044007c  lbu         $a0, 0x7C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5530u, 0x1C1328u, 0x1C1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1330u;
label_1c1330:
    // 0x1c1330: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1334: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1c1334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1338:
    // 0x1c1338: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c1338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c133c:
    // 0x1c133c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c133cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1344: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C1344u;
    SET_GPR_U32(ctx, 31, 0x1C134Cu);
    ctx->pc = 0x1C1348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1344u;
    // 0x1c1348: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C1344u, 0x1C134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C134Cu;
label_1c134c:
    // 0x1c134c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1354: 0x24a546d0  addiu       $a1, $a1, 0x46D0
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18128));
    // 0x1c1358: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C1358u;
    SET_GPR_U32(ctx, 31, 0x1C1360u);
    ctx->pc = 0x1C135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1358u;
    // 0x1c135c: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C1358u, 0x1C1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1360u;
label_1c1360:
    // 0x1c1360: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c1364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1368: 0x24a54940  addiu       $a1, $a1, 0x4940
    ctx->pc = 0x1c1368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18752));
    // 0x1c136c: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C136Cu;
    SET_GPR_U32(ctx, 31, 0x1C1374u);
    ctx->pc = 0x1C1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C136Cu;
    // 0x1c1370: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C136Cu, 0x1C1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1374u;
label_1c1374:
    // 0x1c1374: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c137c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c137cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1384: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1384u;
        // 0x1c1388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C138Cu;
}
