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

// Function: FUN_001b1220
// Address: 0x1b1220 - 0x1b1550
void FUN_001b1220_0x1b1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1220_0x1b1220");
#endif

    switch (ctx->pc) {
        case 0x1b1220u: goto label_1b1220;
        case 0x1b1224u: goto label_1b1224;
        case 0x1b1228u: goto label_1b1228;
        case 0x1b122cu: goto label_1b122c;
        case 0x1b1230u: goto label_1b1230;
        case 0x1b1234u: goto label_1b1234;
        case 0x1b1238u: goto label_1b1238;
        case 0x1b123cu: goto label_1b123c;
        case 0x1b1240u: goto label_1b1240;
        case 0x1b1244u: goto label_1b1244;
        case 0x1b1248u: goto label_1b1248;
        case 0x1b124cu: goto label_1b124c;
        case 0x1b1250u: goto label_1b1250;
        case 0x1b1254u: goto label_1b1254;
        case 0x1b1258u: goto label_1b1258;
        case 0x1b125cu: goto label_1b125c;
        case 0x1b1260u: goto label_1b1260;
        case 0x1b1264u: goto label_1b1264;
        case 0x1b1268u: goto label_1b1268;
        case 0x1b126cu: goto label_1b126c;
        case 0x1b1270u: goto label_1b1270;
        case 0x1b1274u: goto label_1b1274;
        case 0x1b1278u: goto label_1b1278;
        case 0x1b127cu: goto label_1b127c;
        case 0x1b1280u: goto label_1b1280;
        case 0x1b1284u: goto label_1b1284;
        case 0x1b1288u: goto label_1b1288;
        case 0x1b128cu: goto label_1b128c;
        case 0x1b1290u: goto label_1b1290;
        case 0x1b1294u: goto label_1b1294;
        case 0x1b1298u: goto label_1b1298;
        case 0x1b129cu: goto label_1b129c;
        case 0x1b12a0u: goto label_1b12a0;
        case 0x1b12a4u: goto label_1b12a4;
        case 0x1b12a8u: goto label_1b12a8;
        case 0x1b12acu: goto label_1b12ac;
        case 0x1b12b0u: goto label_1b12b0;
        case 0x1b12b4u: goto label_1b12b4;
        case 0x1b12b8u: goto label_1b12b8;
        case 0x1b12bcu: goto label_1b12bc;
        case 0x1b12c0u: goto label_1b12c0;
        case 0x1b12c4u: goto label_1b12c4;
        case 0x1b12c8u: goto label_1b12c8;
        case 0x1b12ccu: goto label_1b12cc;
        case 0x1b12d0u: goto label_1b12d0;
        case 0x1b12d4u: goto label_1b12d4;
        case 0x1b12d8u: goto label_1b12d8;
        case 0x1b12dcu: goto label_1b12dc;
        case 0x1b12e0u: goto label_1b12e0;
        case 0x1b12e4u: goto label_1b12e4;
        case 0x1b12e8u: goto label_1b12e8;
        case 0x1b12ecu: goto label_1b12ec;
        case 0x1b12f0u: goto label_1b12f0;
        case 0x1b12f4u: goto label_1b12f4;
        case 0x1b12f8u: goto label_1b12f8;
        case 0x1b12fcu: goto label_1b12fc;
        case 0x1b1300u: goto label_1b1300;
        case 0x1b1304u: goto label_1b1304;
        case 0x1b1308u: goto label_1b1308;
        case 0x1b130cu: goto label_1b130c;
        case 0x1b1310u: goto label_1b1310;
        case 0x1b1314u: goto label_1b1314;
        case 0x1b1318u: goto label_1b1318;
        case 0x1b131cu: goto label_1b131c;
        case 0x1b1320u: goto label_1b1320;
        case 0x1b1324u: goto label_1b1324;
        case 0x1b1328u: goto label_1b1328;
        case 0x1b132cu: goto label_1b132c;
        case 0x1b1330u: goto label_1b1330;
        case 0x1b1334u: goto label_1b1334;
        case 0x1b1338u: goto label_1b1338;
        case 0x1b133cu: goto label_1b133c;
        case 0x1b1340u: goto label_1b1340;
        case 0x1b1344u: goto label_1b1344;
        case 0x1b1348u: goto label_1b1348;
        case 0x1b134cu: goto label_1b134c;
        case 0x1b1350u: goto label_1b1350;
        case 0x1b1354u: goto label_1b1354;
        case 0x1b1358u: goto label_1b1358;
        case 0x1b135cu: goto label_1b135c;
        case 0x1b1360u: goto label_1b1360;
        case 0x1b1364u: goto label_1b1364;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b136cu: goto label_1b136c;
        case 0x1b1370u: goto label_1b1370;
        case 0x1b1374u: goto label_1b1374;
        case 0x1b1378u: goto label_1b1378;
        case 0x1b137cu: goto label_1b137c;
        case 0x1b1380u: goto label_1b1380;
        case 0x1b1384u: goto label_1b1384;
        case 0x1b1388u: goto label_1b1388;
        case 0x1b138cu: goto label_1b138c;
        case 0x1b1390u: goto label_1b1390;
        case 0x1b1394u: goto label_1b1394;
        case 0x1b1398u: goto label_1b1398;
        case 0x1b139cu: goto label_1b139c;
        case 0x1b13a0u: goto label_1b13a0;
        case 0x1b13a4u: goto label_1b13a4;
        case 0x1b13a8u: goto label_1b13a8;
        case 0x1b13acu: goto label_1b13ac;
        case 0x1b13b0u: goto label_1b13b0;
        case 0x1b13b4u: goto label_1b13b4;
        case 0x1b13b8u: goto label_1b13b8;
        case 0x1b13bcu: goto label_1b13bc;
        case 0x1b13c0u: goto label_1b13c0;
        case 0x1b13c4u: goto label_1b13c4;
        case 0x1b13c8u: goto label_1b13c8;
        case 0x1b13ccu: goto label_1b13cc;
        case 0x1b13d0u: goto label_1b13d0;
        case 0x1b13d4u: goto label_1b13d4;
        case 0x1b13d8u: goto label_1b13d8;
        case 0x1b13dcu: goto label_1b13dc;
        case 0x1b13e0u: goto label_1b13e0;
        case 0x1b13e4u: goto label_1b13e4;
        case 0x1b13e8u: goto label_1b13e8;
        case 0x1b13ecu: goto label_1b13ec;
        case 0x1b13f0u: goto label_1b13f0;
        case 0x1b13f4u: goto label_1b13f4;
        case 0x1b13f8u: goto label_1b13f8;
        case 0x1b13fcu: goto label_1b13fc;
        case 0x1b1400u: goto label_1b1400;
        case 0x1b1404u: goto label_1b1404;
        case 0x1b1408u: goto label_1b1408;
        case 0x1b140cu: goto label_1b140c;
        case 0x1b1410u: goto label_1b1410;
        case 0x1b1414u: goto label_1b1414;
        case 0x1b1418u: goto label_1b1418;
        case 0x1b141cu: goto label_1b141c;
        case 0x1b1420u: goto label_1b1420;
        case 0x1b1424u: goto label_1b1424;
        case 0x1b1428u: goto label_1b1428;
        case 0x1b142cu: goto label_1b142c;
        case 0x1b1430u: goto label_1b1430;
        case 0x1b1434u: goto label_1b1434;
        case 0x1b1438u: goto label_1b1438;
        case 0x1b143cu: goto label_1b143c;
        case 0x1b1440u: goto label_1b1440;
        case 0x1b1444u: goto label_1b1444;
        case 0x1b1448u: goto label_1b1448;
        case 0x1b144cu: goto label_1b144c;
        case 0x1b1450u: goto label_1b1450;
        case 0x1b1454u: goto label_1b1454;
        case 0x1b1458u: goto label_1b1458;
        case 0x1b145cu: goto label_1b145c;
        case 0x1b1460u: goto label_1b1460;
        case 0x1b1464u: goto label_1b1464;
        case 0x1b1468u: goto label_1b1468;
        case 0x1b146cu: goto label_1b146c;
        case 0x1b1470u: goto label_1b1470;
        case 0x1b1474u: goto label_1b1474;
        case 0x1b1478u: goto label_1b1478;
        case 0x1b147cu: goto label_1b147c;
        case 0x1b1480u: goto label_1b1480;
        case 0x1b1484u: goto label_1b1484;
        case 0x1b1488u: goto label_1b1488;
        case 0x1b148cu: goto label_1b148c;
        case 0x1b1490u: goto label_1b1490;
        case 0x1b1494u: goto label_1b1494;
        case 0x1b1498u: goto label_1b1498;
        case 0x1b149cu: goto label_1b149c;
        case 0x1b14a0u: goto label_1b14a0;
        case 0x1b14a4u: goto label_1b14a4;
        case 0x1b14a8u: goto label_1b14a8;
        case 0x1b14acu: goto label_1b14ac;
        case 0x1b14b0u: goto label_1b14b0;
        case 0x1b14b4u: goto label_1b14b4;
        case 0x1b14b8u: goto label_1b14b8;
        case 0x1b14bcu: goto label_1b14bc;
        case 0x1b14c0u: goto label_1b14c0;
        case 0x1b14c4u: goto label_1b14c4;
        case 0x1b14c8u: goto label_1b14c8;
        case 0x1b14ccu: goto label_1b14cc;
        case 0x1b14d0u: goto label_1b14d0;
        case 0x1b14d4u: goto label_1b14d4;
        case 0x1b14d8u: goto label_1b14d8;
        case 0x1b14dcu: goto label_1b14dc;
        case 0x1b14e0u: goto label_1b14e0;
        case 0x1b14e4u: goto label_1b14e4;
        case 0x1b14e8u: goto label_1b14e8;
        case 0x1b14ecu: goto label_1b14ec;
        case 0x1b14f0u: goto label_1b14f0;
        case 0x1b14f4u: goto label_1b14f4;
        case 0x1b14f8u: goto label_1b14f8;
        case 0x1b14fcu: goto label_1b14fc;
        case 0x1b1500u: goto label_1b1500;
        case 0x1b1504u: goto label_1b1504;
        case 0x1b1508u: goto label_1b1508;
        case 0x1b150cu: goto label_1b150c;
        case 0x1b1510u: goto label_1b1510;
        case 0x1b1514u: goto label_1b1514;
        case 0x1b1518u: goto label_1b1518;
        case 0x1b151cu: goto label_1b151c;
        case 0x1b1520u: goto label_1b1520;
        case 0x1b1524u: goto label_1b1524;
        case 0x1b1528u: goto label_1b1528;
        case 0x1b152cu: goto label_1b152c;
        case 0x1b1530u: goto label_1b1530;
        case 0x1b1534u: goto label_1b1534;
        case 0x1b1538u: goto label_1b1538;
        case 0x1b153cu: goto label_1b153c;
        case 0x1b1540u: goto label_1b1540;
        case 0x1b1544u: goto label_1b1544;
        case 0x1b1548u: goto label_1b1548;
        case 0x1b154cu: goto label_1b154c;
        default: break;
    }

    ctx->pc = 0x1b1220u;

label_1b1220:
    // 0x1b1220: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1b1220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1b1224:
    // 0x1b1224: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b1224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b1228:
    // 0x1b1228: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1b1228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1b122c:
    // 0x1b122c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1b122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1b1230:
    // 0x1b1230: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b1230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1b1234:
    // 0x1b1234: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1b1238:
    // 0x1b1238: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b1238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b123c:
    // 0x1b123c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1b1240:
    // 0x1b1240: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b1240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b1244:
    // 0x1b1244: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b1244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b1248:
    // 0x1b1248: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b124c:
    // 0x1b124c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b124cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1250:
    // 0x1b1250: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b1254:
    // 0x1b1254: 0x8c6402f4  lw          $a0, 0x2F4($v1)
    ctx->pc = 0x1b1254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 756)));
label_1b1258:
    // 0x1b1258: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1b1258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1b125c:
    // 0x1b125c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b1260:
    if (ctx->pc == 0x1B1260u) {
        ctx->pc = 0x1B1264u;
        goto label_1b1264;
    }
    ctx->pc = 0x1B125Cu;
    {
        const bool branch_taken_0x1b125c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b125c) {
            ctx->pc = 0x1B1274u;
            goto label_1b1274;
        }
    }
    ctx->pc = 0x1B1264u;
label_1b1264:
    // 0x1b1264: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1b1264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1268:
    // 0x1b1268: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1b1268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1b126c:
    // 0x1b126c: 0x320f809  jalr        $t9
label_1b1270:
    if (ctx->pc == 0x1B1270u) {
        ctx->pc = 0x1B1274u;
        goto label_1b1274;
    }
    ctx->pc = 0x1B126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B126Cu, 0x1B1274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1274u;
label_1b1274:
    // 0x1b1274: 0x0  nop
    ctx->pc = 0x1b1274u;
    // NOP
label_1b1278:
    // 0x1b1278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b127c:
    // 0x1b127c: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x1b127cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_1b1280:
    // 0x1b1280: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1b1284:
    if (ctx->pc == 0x1B1284u) {
        ctx->pc = 0x1B1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1280u;
        // 0x1b1284: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1288u;
        goto label_1b1288;
    }
    ctx->pc = 0x1B1280u;
    {
        const bool branch_taken_0x1b1280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1280u;
        // 0x1b1284: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1280) {
            ctx->pc = 0x1B1250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1250;
        }
    }
    ctx->pc = 0x1B1288u;
label_1b1288:
    // 0x1b1288: 0x928302ec  lbu         $v1, 0x2EC($s4)
    ctx->pc = 0x1b1288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 748)));
label_1b128c:
    // 0x1b128c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1b1290:
    if (ctx->pc == 0x1B1290u) {
        ctx->pc = 0x1B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B128Cu;
        // 0x1b1290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1294u;
        goto label_1b1294;
    }
    ctx->pc = 0x1B128Cu;
    {
        const bool branch_taken_0x1b128c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B128Cu;
        // 0x1b1290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b128c) {
            ctx->pc = 0x1B12C8u;
            goto label_1b12c8;
        }
    }
    ctx->pc = 0x1B1294u;
label_1b1294:
    // 0x1b1294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1298:
    // 0x1b1298: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1b1298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1b129c:
    // 0x1b129c: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1b129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1b12a0:
    // 0x1b12a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b12a4:
    // 0x1b12a4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b12a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b12a8:
    // 0x1b12a8: 0x320f809  jalr        $t9
label_1b12ac:
    if (ctx->pc == 0x1B12ACu) {
        ctx->pc = 0x1B12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A8u;
        // 0x1b12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12B0u;
        goto label_1b12b0;
    }
    ctx->pc = 0x1B12A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B12B0u);
        ctx->pc = 0x1B12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12A8u;
        // 0x1b12ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B12A8u, 0x1B12B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B12B0u;
label_1b12b0:
    // 0x1b12b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b12b4:
    // 0x1b12b4: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1b12b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1b12b8:
    // 0x1b12b8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1b12bc:
    if (ctx->pc == 0x1B12BCu) {
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B8u;
        // 0x1b12bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C0u;
        goto label_1b12c0;
    }
    ctx->pc = 0x1B12B8u;
    {
        const bool branch_taken_0x1b12b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12B8u;
        // 0x1b12bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12b8) {
            ctx->pc = 0x1B1298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1298;
        }
    }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x1000009a  b           . + 4 + (0x9A << 2)
label_1b12c4:
    if (ctx->pc == 0x1B12C4u) {
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12C8u;
        goto label_1b12c8;
    }
    ctx->pc = 0x1B12C0u;
    {
        const bool branch_taken_0x1b12c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c0) {
            ctx->pc = 0x1B152Cu;
            goto label_1b152c;
        }
    }
    ctx->pc = 0x1B12C8u;
label_1b12c8:
    // 0x1b12c8: 0x8e8402dc  lw          $a0, 0x2DC($s4)
    ctx->pc = 0x1b12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 732)));
label_1b12cc:
    // 0x1b12cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b12d0:
    // 0x1b12d0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1b12d4:
    if (ctx->pc == 0x1B12D4u) {
        ctx->pc = 0x1B12D8u;
        goto label_1b12d8;
    }
    ctx->pc = 0x1B12D0u;
    {
        const bool branch_taken_0x1b12d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b12d0) {
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12D8u;
label_1b12d8:
    // 0x1b12d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b12dc:
    if (ctx->pc == 0x1B12DCu) {
        ctx->pc = 0x1B12E0u;
        goto label_1b12e0;
    }
    ctx->pc = 0x1B12D8u;
    {
        const bool branch_taken_0x1b12d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12d8) {
            ctx->pc = 0x1B12E8u;
            goto label_1b12e8;
        }
    }
    ctx->pc = 0x1B12E0u;
label_1b12e0:
    // 0x1b12e0: 0x10000091  b           . + 4 + (0x91 << 2)
label_1b12e4:
    if (ctx->pc == 0x1B12E4u) {
        ctx->pc = 0x1B12E8u;
        goto label_1b12e8;
    }
    ctx->pc = 0x1B12E0u;
    {
        const bool branch_taken_0x1b12e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12e0) {
            ctx->pc = 0x1B1528u;
            goto label_1b1528;
        }
    }
    ctx->pc = 0x1B12E8u;
label_1b12e8:
    // 0x1b12e8: 0xc06c154  jal         func_1B0550
label_1b12ec:
    if (ctx->pc == 0x1B12ECu) {
        ctx->pc = 0x1B12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12E8u;
        // 0x1b12ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B12F0u;
        goto label_1b12f0;
    }
    ctx->pc = 0x1B12E8u;
    SET_GPR_U32(ctx, 31, 0x1B12F0u);
    ctx->pc = 0x1B12ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12E8u;
    // 0x1b12ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0550u, 0x1B12E8u, 0x1B12F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12F0u;
label_1b12f0:
    // 0x1b12f0: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1b12f4:
    if (ctx->pc == 0x1B12F4u) {
        ctx->pc = 0x1B12F8u;
        goto label_1b12f8;
    }
    ctx->pc = 0x1B12F0u;
    {
        const bool branch_taken_0x1b12f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12f0) {
            ctx->pc = 0x1B1528u;
            goto label_1b1528;
        }
    }
    ctx->pc = 0x1B12F8u;
label_1b12f8:
    // 0x1b12f8: 0x8e840118  lw          $a0, 0x118($s4)
    ctx->pc = 0x1b12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b12fc:
    // 0x1b12fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b1300:
    if (ctx->pc == 0x1B1300u) {
        ctx->pc = 0x1B1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12FCu;
        // 0x1b1300: 0x8f928714  lw          $s2, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1304u;
        goto label_1b1304;
    }
    ctx->pc = 0x1B12FCu;
    {
        const bool branch_taken_0x1b12fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12FCu;
        // 0x1b1300: 0x8f928714  lw          $s2, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12fc) {
            ctx->pc = 0x1B131Cu;
            goto label_1b131c;
        }
    }
    ctx->pc = 0x1B1304u;
label_1b1304:
    // 0x1b1304: 0xc06c558  jal         func_1B1560
label_1b1308:
    if (ctx->pc == 0x1B1308u) {
        ctx->pc = 0x1B1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1304u;
        // 0x1b1308: 0x8e85011c  lw          $a1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B130Cu;
        goto label_1b130c;
    }
    ctx->pc = 0x1B1304u;
    SET_GPR_U32(ctx, 31, 0x1B130Cu);
    ctx->pc = 0x1B1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1304u;
    // 0x1b1308: 0x8e85011c  lw          $a1, 0x11C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B1304u, 0x1B130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B130Cu;
label_1b130c:
    // 0x1b130c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b1310:
    if (ctx->pc == 0x1B1310u) {
        ctx->pc = 0x1B1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B130Cu;
        // 0x1b1310: 0x26840118  addiu       $a0, $s4, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1314u;
        goto label_1b1314;
    }
    ctx->pc = 0x1B130Cu;
    {
        const bool branch_taken_0x1b130c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B130Cu;
        // 0x1b1310: 0x26840118  addiu       $a0, $s4, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b130c) {
            ctx->pc = 0x1B1320u;
            goto label_1b1320;
        }
    }
    ctx->pc = 0x1B1314u;
label_1b1314:
    // 0x1b1314: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b1318:
    if (ctx->pc == 0x1B1318u) {
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B131Cu;
        goto label_1b131c;
    }
    ctx->pc = 0x1B1314u;
    {
        const bool branch_taken_0x1b1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1314u;
        // 0x1b1318: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1314) {
            ctx->pc = 0x1B1328u;
            goto label_1b1328;
        }
    }
    ctx->pc = 0x1B131Cu;
label_1b131c:
    // 0x1b131c: 0x26840118  addiu       $a0, $s4, 0x118
    ctx->pc = 0x1b131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
label_1b1320:
    // 0x1b1320: 0xc06c554  jal         func_1B1550
label_1b1324:
    if (ctx->pc == 0x1B1324u) {
        ctx->pc = 0x1B1328u;
        goto label_1b1328;
    }
    ctx->pc = 0x1B1320u;
    SET_GPR_U32(ctx, 31, 0x1B1328u);
    ctx->pc = 0x1B1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1550u, 0x1B1320u, 0x1B1328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1328u;
label_1b1328:
    // 0x1b1328: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1b1328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1b132c:
    // 0x1b132c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1330:
    // 0x1b1330: 0xc06d100  jal         func_1B4400
label_1b1334:
    if (ctx->pc == 0x1B1334u) {
        ctx->pc = 0x1B1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1330u;
        // 0x1b1334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1338u;
        goto label_1b1338;
    }
    ctx->pc = 0x1B1330u;
    SET_GPR_U32(ctx, 31, 0x1B1338u);
    ctx->pc = 0x1B1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1330u;
    // 0x1b1334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4400u, 0x1B1330u, 0x1B1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1338u;
label_1b1338:
    // 0x1b1338: 0xc06be68  jal         func_1AF9A0
label_1b133c:
    if (ctx->pc == 0x1B133Cu) {
        ctx->pc = 0x1B133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1338u;
        // 0x1b133c: 0x27848334  addiu       $a0, $gp, -0x7CCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1340u;
        goto label_1b1340;
    }
    ctx->pc = 0x1B1338u;
    SET_GPR_U32(ctx, 31, 0x1B1340u);
    ctx->pc = 0x1B133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1338u;
    // 0x1b133c: 0x27848334  addiu       $a0, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x1B1338u, 0x1B1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1340u;
label_1b1340:
    // 0x1b1340: 0x928202f2  lbu         $v0, 0x2F2($s4)
    ctx->pc = 0x1b1340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 754)));
label_1b1344:
    // 0x1b1344: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_1b1348:
    if (ctx->pc == 0x1B1348u) {
        ctx->pc = 0x1B134Cu;
        goto label_1b134c;
    }
    ctx->pc = 0x1B1344u;
    {
        const bool branch_taken_0x1b1344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1344) {
            ctx->pc = 0x1B14D0u;
            goto label_1b14d0;
        }
    }
    ctx->pc = 0x1B134Cu;
label_1b134c:
    // 0x1b134c: 0x8e8602e0  lw          $a2, 0x2E0($s4)
    ctx->pc = 0x1b134cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
label_1b1350:
    // 0x1b1350: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b1350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1b1354:
    // 0x1b1354: 0x8e8702e4  lw          $a3, 0x2E4($s4)
    ctx->pc = 0x1b1354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
label_1b1358:
    // 0x1b1358: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b135c:
    // 0x1b135c: 0x8e8802e8  lw          $t0, 0x2E8($s4)
    ctx->pc = 0x1b135cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 744)));
label_1b1360:
    // 0x1b1360: 0xc061fa8  jal         func_187EA0
label_1b1364:
    if (ctx->pc == 0x1B1364u) {
        ctx->pc = 0x1B1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1360u;
        // 0x1b1364: 0x24a50c40  addiu       $a1, $a1, 0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1368u;
        goto label_1b1368;
    }
    ctx->pc = 0x1B1360u;
    SET_GPR_U32(ctx, 31, 0x1B1368u);
    ctx->pc = 0x1B1364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1360u;
    // 0x1b1364: 0x24a50c40  addiu       $a1, $a1, 0xC40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EA0u, 0x1B1360u, 0x1B1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1368u;
label_1b1368:
    // 0x1b1368: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b136c:
    // 0x1b136c: 0x27b6012c  addiu       $s6, $sp, 0x12C
    ctx->pc = 0x1b136cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_1b1370:
    // 0x1b1370: 0x24117100  addiu       $s1, $zero, 0x7100
    ctx->pc = 0x1b1370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28928));
label_1b1374:
    // 0x1b1374: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x1b1374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b1378:
    // 0x1b1378: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1b1378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_1b137c:
    // 0x1b137c: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x1b137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b1380:
    // 0x1b1380: 0xc04b7b4  jal         func_12DED0
label_1b1384:
    if (ctx->pc == 0x1B1384u) {
        ctx->pc = 0x1B1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1380u;
        // 0x1b1384: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1388u;
        goto label_1b1388;
    }
    ctx->pc = 0x1B1380u;
    SET_GPR_U32(ctx, 31, 0x1B1388u);
    ctx->pc = 0x1B1384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1380u;
    // 0x1b1384: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x1B1380u, 0x1B1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1388u;
label_1b1388:
    // 0x1b1388: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1b138c:
    if (ctx->pc == 0x1B138Cu) {
        ctx->pc = 0x1B138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1388u;
        // 0x1b138c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1390u;
        goto label_1b1390;
    }
    ctx->pc = 0x1B1388u;
    {
        const bool branch_taken_0x1b1388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1388u;
        // 0x1b138c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1388) {
            ctx->pc = 0x1B14B8u;
            goto label_1b14b8;
        }
    }
    ctx->pc = 0x1B1390u;
label_1b1390:
    // 0x1b1390: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1b1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b1394:
    // 0x1b1394: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1b1398:
    // 0x1b1398: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b1398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b139c:
    // 0x1b139c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b13a0:
    // 0x1b13a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b13a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b13a4:
    // 0x1b13a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b13a8:
    // 0x1b13a8: 0xc04b7dc  jal         func_12DF70
label_1b13ac:
    if (ctx->pc == 0x1B13ACu) {
        ctx->pc = 0x1B13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A8u;
        // 0x1b13ac: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B13B0u;
        goto label_1b13b0;
    }
    ctx->pc = 0x1B13A8u;
    SET_GPR_U32(ctx, 31, 0x1B13B0u);
    ctx->pc = 0x1B13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13A8u;
    // 0x1b13ac: 0x623821  addu        $a3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1B13A8u, 0x1B13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13B0u;
label_1b13b0:
    // 0x1b13b0: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1b13b4:
    // 0x1b13b4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x1b13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1b13b8:
    // 0x1b13b8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1b13b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b13bc:
    // 0x1b13bc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1b13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b13c0:
    // 0x1b13c0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1b13c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b13c4:
    // 0x1b13c4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1b13c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b13c8:
    // 0x1b13c8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1b13c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b13cc:
    // 0x1b13cc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b13ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b13d0:
    // 0x1b13d0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1b13d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b13d4:
    // 0x1b13d4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b13d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1b13d8:
    // 0x1b13d8: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1b13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b13dc:
    // 0x1b13dc: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1b13dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b13e0:
    // 0x1b13e0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1b13e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b13e4:
    // 0x1b13e4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1b13e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b13e8:
    // 0x1b13e8: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1b13e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1b13ec:
    // 0x1b13ec: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1b13ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1b13f0:
    // 0x1b13f0: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1b13f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1b13f4:
    // 0x1b13f4: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1b13f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1b13f8:
    // 0x1b13f8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_1b13fc:
    // 0x1b13fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b1400:
    if (ctx->pc == 0x1B1400u) {
        ctx->pc = 0x1B1404u;
        goto label_1b1404;
    }
    ctx->pc = 0x1B13FCu;
    {
        const bool branch_taken_0x1b13fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13fc) {
            ctx->pc = 0x1B141Cu;
            goto label_1b141c;
        }
    }
    ctx->pc = 0x1B1404u;
label_1b1404:
    // 0x1b1404: 0xc06c558  jal         func_1B1560
label_1b1408:
    if (ctx->pc == 0x1B1408u) {
        ctx->pc = 0x1B1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1404u;
        // 0x1b1408: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B140Cu;
        goto label_1b140c;
    }
    ctx->pc = 0x1B1404u;
    SET_GPR_U32(ctx, 31, 0x1B140Cu);
    ctx->pc = 0x1B1408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1404u;
    // 0x1b1408: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B1404u, 0x1B140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B140Cu;
label_1b140c:
    // 0x1b140c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b1410:
    if (ctx->pc == 0x1B1410u) {
        ctx->pc = 0x1B1414u;
        goto label_1b1414;
    }
    ctx->pc = 0x1B140Cu;
    {
        const bool branch_taken_0x1b140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b140c) {
            ctx->pc = 0x1B141Cu;
            goto label_1b141c;
        }
    }
    ctx->pc = 0x1B1414u;
label_1b1414:
    // 0x1b1414: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b1418:
    if (ctx->pc == 0x1B1418u) {
        ctx->pc = 0x1B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1414u;
        // 0x1b1418: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B141Cu;
        goto label_1b141c;
    }
    ctx->pc = 0x1B1414u;
    {
        const bool branch_taken_0x1b1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1414u;
        // 0x1b1418: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1414) {
            ctx->pc = 0x1B1428u;
            goto label_1b1428;
        }
    }
    ctx->pc = 0x1B141Cu;
label_1b141c:
    // 0x1b141c: 0x0  nop
    ctx->pc = 0x1b141cu;
    // NOP
label_1b1420:
    // 0x1b1420: 0xc06c554  jal         func_1B1550
label_1b1424:
    if (ctx->pc == 0x1B1424u) {
        ctx->pc = 0x1B1424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1420u;
        // 0x1b1424: 0x27a40128  addiu       $a0, $sp, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1428u;
        goto label_1b1428;
    }
    ctx->pc = 0x1B1420u;
    SET_GPR_U32(ctx, 31, 0x1B1428u);
    ctx->pc = 0x1B1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1420u;
    // 0x1b1424: 0x27a40128  addiu       $a0, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1550u, 0x1B1420u, 0x1B1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1428u;
label_1b1428:
    // 0x1b1428: 0x8fb30108  lw          $s3, 0x108($sp)
    ctx->pc = 0x1b1428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1b142c:
    // 0x1b142c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1430:
    // 0x1b1430: 0xc06d130  jal         func_1B44C0
label_1b1434:
    if (ctx->pc == 0x1B1434u) {
        ctx->pc = 0x1B1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1430u;
        // 0x1b1434: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1438u;
        goto label_1b1438;
    }
    ctx->pc = 0x1B1430u;
    SET_GPR_U32(ctx, 31, 0x1B1438u);
    ctx->pc = 0x1B1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1430u;
    // 0x1b1434: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B1430u, 0x1B1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1438u;
label_1b1438:
    // 0x1b1438: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x1b1438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_1b143c:
    // 0x1b143c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b1440:
    if (ctx->pc == 0x1B1440u) {
        ctx->pc = 0x1B1444u;
        goto label_1b1444;
    }
    ctx->pc = 0x1B143Cu;
    {
        const bool branch_taken_0x1b143c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b143c) {
            ctx->pc = 0x1B145Cu;
            goto label_1b145c;
        }
    }
    ctx->pc = 0x1B1444u;
label_1b1444:
    // 0x1b1444: 0xc06c558  jal         func_1B1560
label_1b1448:
    if (ctx->pc == 0x1B1448u) {
        ctx->pc = 0x1B1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1444u;
        // 0x1b1448: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B144Cu;
        goto label_1b144c;
    }
    ctx->pc = 0x1B1444u;
    SET_GPR_U32(ctx, 31, 0x1B144Cu);
    ctx->pc = 0x1B1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1444u;
    // 0x1b1448: 0x8ec50000  lw          $a1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B1444u, 0x1B144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B144Cu;
label_1b144c:
    // 0x1b144c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b1450:
    if (ctx->pc == 0x1B1450u) {
        ctx->pc = 0x1B1454u;
        goto label_1b1454;
    }
    ctx->pc = 0x1B144Cu;
    {
        const bool branch_taken_0x1b144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b144c) {
            ctx->pc = 0x1B145Cu;
            goto label_1b145c;
        }
    }
    ctx->pc = 0x1B1454u;
label_1b1454:
    // 0x1b1454: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b1458:
    if (ctx->pc == 0x1B1458u) {
        ctx->pc = 0x1B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1454u;
        // 0x1b1458: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B145Cu;
        goto label_1b145c;
    }
    ctx->pc = 0x1B1454u;
    {
        const bool branch_taken_0x1b1454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1454u;
        // 0x1b1458: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1454) {
            ctx->pc = 0x1B1468u;
            goto label_1b1468;
        }
    }
    ctx->pc = 0x1B145Cu;
label_1b145c:
    // 0x1b145c: 0x0  nop
    ctx->pc = 0x1b145cu;
    // NOP
label_1b1460:
    // 0x1b1460: 0xc06c554  jal         func_1B1550
label_1b1464:
    if (ctx->pc == 0x1B1464u) {
        ctx->pc = 0x1B1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1460u;
        // 0x1b1464: 0x27a40128  addiu       $a0, $sp, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1468u;
        goto label_1b1468;
    }
    ctx->pc = 0x1B1460u;
    SET_GPR_U32(ctx, 31, 0x1B1468u);
    ctx->pc = 0x1B1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1460u;
    // 0x1b1464: 0x27a40128  addiu       $a0, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1550u, 0x1B1460u, 0x1B1468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1468u;
label_1b1468:
    // 0x1b1468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b146c:
    // 0x1b146c: 0xc06d14c  jal         func_1B4530
label_1b1470:
    if (ctx->pc == 0x1B1470u) {
        ctx->pc = 0x1B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B146Cu;
        // 0x1b1470: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1474u;
        goto label_1b1474;
    }
    ctx->pc = 0x1B146Cu;
    SET_GPR_U32(ctx, 31, 0x1B1474u);
    ctx->pc = 0x1B1470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B146Cu;
    // 0x1b1470: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B146Cu, 0x1B1474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1474u;
label_1b1474:
    // 0x1b1474: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x1b1474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1b1478:
    // 0x1b1478: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1b147c:
    // 0x1b147c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1b147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
label_1b1480:
    // 0x1b1480: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b1480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b1484:
    // 0x1b1484: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1b1488:
    // 0x1b1488: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b1488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b148c:
    // 0x1b148c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b1490:
    // 0x1b1490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b1490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1494:
    // 0x1b1494: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b1494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_1b1498:
    // 0x1b1498: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b1498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
label_1b149c:
    // 0x1b149c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b149cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1b14a0:
    // 0x1b14a0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b14a4:
    // 0x1b14a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b14a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b14a8:
    // 0x1b14a8: 0xc06be8c  jal         func_1AFA30
label_1b14ac:
    if (ctx->pc == 0x1B14ACu) {
        ctx->pc = 0x1B14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14A8u;
        // 0x1b14ac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14B0u;
        goto label_1b14b0;
    }
    ctx->pc = 0x1B14A8u;
    SET_GPR_U32(ctx, 31, 0x1B14B0u);
    ctx->pc = 0x1B14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14A8u;
    // 0x1b14ac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B14A8u, 0x1B14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14B0u;
label_1b14b0:
    // 0x1b14b0: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1b14b4:
    // 0x1b14b4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b14b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1b14b8:
    // 0x1b14b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b14b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b14bc:
    // 0x1b14bc: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_1b14c0:
    if (ctx->pc == 0x1B14C0u) {
        ctx->pc = 0x1B14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14BCu;
        // 0x1b14c0: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14C4u;
        goto label_1b14c4;
    }
    ctx->pc = 0x1B14BCu;
    {
        const bool branch_taken_0x1b14bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B14C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14BCu;
        // 0x1b14c0: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14bc) {
            ctx->pc = 0x1B1394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1394;
        }
    }
    ctx->pc = 0x1B14C4u;
label_1b14c4:
    // 0x1b14c4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b14c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b14c8:
    // 0x1b14c8: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_1b14cc:
    if (ctx->pc == 0x1B14CCu) {
        ctx->pc = 0x1B14D0u;
        goto label_1b14d0;
    }
    ctx->pc = 0x1B14C8u;
    {
        const bool branch_taken_0x1b14c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b14c8) {
            ctx->pc = 0x1B1390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1390;
        }
    }
    ctx->pc = 0x1B14D0u;
label_1b14d0:
    // 0x1b14d0: 0xa28002f1  sb          $zero, 0x2F1($s4)
    ctx->pc = 0x1b14d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 753), (uint8_t)GPR_U32(ctx, 0));
label_1b14d4:
    // 0x1b14d4: 0x8e4728e8  lw          $a3, 0x28E8($s2)
    ctx->pc = 0x1b14d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10472)));
label_1b14d8:
    // 0x1b14d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b14d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b14dc:
    // 0x1b14dc: 0x34058500  ori         $a1, $zero, 0x8500
    ctx->pc = 0x1b14dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
label_1b14e0:
    // 0x1b14e0: 0x24067340  addiu       $a2, $zero, 0x7340
    ctx->pc = 0x1b14e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29504));
label_1b14e4:
    // 0x1b14e4: 0xc06bfc4  jal         func_1AFF10
label_1b14e8:
    if (ctx->pc == 0x1B14E8u) {
        ctx->pc = 0x1B14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E4u;
        // 0x1b14e8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B14ECu;
        goto label_1b14ec;
    }
    ctx->pc = 0x1B14E4u;
    SET_GPR_U32(ctx, 31, 0x1B14ECu);
    ctx->pc = 0x1B14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14E4u;
    // 0x1b14e8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF10u, 0x1B14E4u, 0x1B14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14ECu;
label_1b14ec:
    // 0x1b14ec: 0x8e840118  lw          $a0, 0x118($s4)
    ctx->pc = 0x1b14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b14f0:
    // 0x1b14f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1b14f4:
    if (ctx->pc == 0x1B14F4u) {
        ctx->pc = 0x1B14F8u;
        goto label_1b14f8;
    }
    ctx->pc = 0x1B14F0u;
    {
        const bool branch_taken_0x1b14f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b14f0) {
            ctx->pc = 0x1B1510u;
            goto label_1b1510;
        }
    }
    ctx->pc = 0x1B14F8u;
label_1b14f8:
    // 0x1b14f8: 0xc06c558  jal         func_1B1560
label_1b14fc:
    if (ctx->pc == 0x1B14FCu) {
        ctx->pc = 0x1B14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14F8u;
        // 0x1b14fc: 0x8e85011c  lw          $a1, 0x11C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1500u;
        goto label_1b1500;
    }
    ctx->pc = 0x1B14F8u;
    SET_GPR_U32(ctx, 31, 0x1B1500u);
    ctx->pc = 0x1B14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14F8u;
    // 0x1b14fc: 0x8e85011c  lw          $a1, 0x11C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x1B14F8u, 0x1B1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1500u;
label_1b1500:
    // 0x1b1500: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b1504:
    if (ctx->pc == 0x1B1504u) {
        ctx->pc = 0x1B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1500u;
        // 0x1b1504: 0x26840118  addiu       $a0, $s4, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1508u;
        goto label_1b1508;
    }
    ctx->pc = 0x1B1500u;
    {
        const bool branch_taken_0x1b1500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1500u;
        // 0x1b1504: 0x26840118  addiu       $a0, $s4, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1500) {
            ctx->pc = 0x1B1514u;
            goto label_1b1514;
        }
    }
    ctx->pc = 0x1B1508u;
label_1b1508:
    // 0x1b1508: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b150c:
    if (ctx->pc == 0x1B150Cu) {
        ctx->pc = 0x1B150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1508u;
        // 0x1b150c: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1510u;
        goto label_1b1510;
    }
    ctx->pc = 0x1B1508u;
    {
        const bool branch_taken_0x1b1508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1508u;
        // 0x1b150c: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1508) {
            ctx->pc = 0x1B151Cu;
            goto label_1b151c;
        }
    }
    ctx->pc = 0x1B1510u;
label_1b1510:
    // 0x1b1510: 0x26840118  addiu       $a0, $s4, 0x118
    ctx->pc = 0x1b1510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 280));
label_1b1514:
    // 0x1b1514: 0xc06c554  jal         func_1B1550
label_1b1518:
    if (ctx->pc == 0x1B1518u) {
        ctx->pc = 0x1B151Cu;
        goto label_1b151c;
    }
    ctx->pc = 0x1B1514u;
    SET_GPR_U32(ctx, 31, 0x1B151Cu);
    ctx->pc = 0x1B1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1550u, 0x1B1514u, 0x1B151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B151Cu;
label_1b151c:
    // 0x1b151c: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1b151cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1b1520:
    // 0x1b1520: 0xc06d118  jal         func_1B4460
label_1b1524:
    if (ctx->pc == 0x1B1524u) {
        ctx->pc = 0x1B1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1520u;
        // 0x1b1524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1528u;
        goto label_1b1528;
    }
    ctx->pc = 0x1B1520u;
    SET_GPR_U32(ctx, 31, 0x1B1528u);
    ctx->pc = 0x1B1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1520u;
    // 0x1b1524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4460u, 0x1B1520u, 0x1B1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1528u;
label_1b1528:
    // 0x1b1528: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b1528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b152c:
    // 0x1b152c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b152cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1530:
    // 0x1b1530: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1b1530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1534:
    // 0x1b1534: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1b1534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1538:
    // 0x1b1538: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b1538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b153c:
    // 0x1b153c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b153cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1540:
    // 0x1b1540: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b1540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1544:
    // 0x1b1544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1548:
    // 0x1b1548: 0x3e00008  jr          $ra
label_1b154c:
    if (ctx->pc == 0x1B154Cu) {
        ctx->pc = 0x1B154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1548u;
        // 0x1b154c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1550u;
        goto label_fallthrough_0x1b1548;
    }
    ctx->pc = 0x1B1548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1548u;
        // 0x1b154c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b1548:
    ctx->pc = 0x1B1550u;
}
