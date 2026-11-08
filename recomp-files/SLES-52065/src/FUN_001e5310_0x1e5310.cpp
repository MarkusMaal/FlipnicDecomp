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

// Function: FUN_001e5310
// Address: 0x1e5310 - 0x1e5470
void FUN_001e5310_0x1e5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e5310_0x1e5310");
#endif

    switch (ctx->pc) {
        case 0x1e5310u: goto label_1e5310;
        case 0x1e5314u: goto label_1e5314;
        case 0x1e5318u: goto label_1e5318;
        case 0x1e531cu: goto label_1e531c;
        case 0x1e5320u: goto label_1e5320;
        case 0x1e5324u: goto label_1e5324;
        case 0x1e5328u: goto label_1e5328;
        case 0x1e532cu: goto label_1e532c;
        case 0x1e5330u: goto label_1e5330;
        case 0x1e5334u: goto label_1e5334;
        case 0x1e5338u: goto label_1e5338;
        case 0x1e533cu: goto label_1e533c;
        case 0x1e5340u: goto label_1e5340;
        case 0x1e5344u: goto label_1e5344;
        case 0x1e5348u: goto label_1e5348;
        case 0x1e534cu: goto label_1e534c;
        case 0x1e5350u: goto label_1e5350;
        case 0x1e5354u: goto label_1e5354;
        case 0x1e5358u: goto label_1e5358;
        case 0x1e535cu: goto label_1e535c;
        case 0x1e5360u: goto label_1e5360;
        case 0x1e5364u: goto label_1e5364;
        case 0x1e5368u: goto label_1e5368;
        case 0x1e536cu: goto label_1e536c;
        case 0x1e5370u: goto label_1e5370;
        case 0x1e5374u: goto label_1e5374;
        case 0x1e5378u: goto label_1e5378;
        case 0x1e537cu: goto label_1e537c;
        case 0x1e5380u: goto label_1e5380;
        case 0x1e5384u: goto label_1e5384;
        case 0x1e5388u: goto label_1e5388;
        case 0x1e538cu: goto label_1e538c;
        case 0x1e5390u: goto label_1e5390;
        case 0x1e5394u: goto label_1e5394;
        case 0x1e5398u: goto label_1e5398;
        case 0x1e539cu: goto label_1e539c;
        case 0x1e53a0u: goto label_1e53a0;
        case 0x1e53a4u: goto label_1e53a4;
        case 0x1e53a8u: goto label_1e53a8;
        case 0x1e53acu: goto label_1e53ac;
        case 0x1e53b0u: goto label_1e53b0;
        case 0x1e53b4u: goto label_1e53b4;
        case 0x1e53b8u: goto label_1e53b8;
        case 0x1e53bcu: goto label_1e53bc;
        case 0x1e53c0u: goto label_1e53c0;
        case 0x1e53c4u: goto label_1e53c4;
        case 0x1e53c8u: goto label_1e53c8;
        case 0x1e53ccu: goto label_1e53cc;
        case 0x1e53d0u: goto label_1e53d0;
        case 0x1e53d4u: goto label_1e53d4;
        case 0x1e53d8u: goto label_1e53d8;
        case 0x1e53dcu: goto label_1e53dc;
        case 0x1e53e0u: goto label_1e53e0;
        case 0x1e53e4u: goto label_1e53e4;
        case 0x1e53e8u: goto label_1e53e8;
        case 0x1e53ecu: goto label_1e53ec;
        case 0x1e53f0u: goto label_1e53f0;
        case 0x1e53f4u: goto label_1e53f4;
        case 0x1e53f8u: goto label_1e53f8;
        case 0x1e53fcu: goto label_1e53fc;
        case 0x1e5400u: goto label_1e5400;
        case 0x1e5404u: goto label_1e5404;
        case 0x1e5408u: goto label_1e5408;
        case 0x1e540cu: goto label_1e540c;
        case 0x1e5410u: goto label_1e5410;
        case 0x1e5414u: goto label_1e5414;
        case 0x1e5418u: goto label_1e5418;
        case 0x1e541cu: goto label_1e541c;
        case 0x1e5420u: goto label_1e5420;
        case 0x1e5424u: goto label_1e5424;
        case 0x1e5428u: goto label_1e5428;
        case 0x1e542cu: goto label_1e542c;
        case 0x1e5430u: goto label_1e5430;
        case 0x1e5434u: goto label_1e5434;
        case 0x1e5438u: goto label_1e5438;
        case 0x1e543cu: goto label_1e543c;
        case 0x1e5440u: goto label_1e5440;
        case 0x1e5444u: goto label_1e5444;
        case 0x1e5448u: goto label_1e5448;
        case 0x1e544cu: goto label_1e544c;
        case 0x1e5450u: goto label_1e5450;
        case 0x1e5454u: goto label_1e5454;
        case 0x1e5458u: goto label_1e5458;
        case 0x1e545cu: goto label_1e545c;
        case 0x1e5460u: goto label_1e5460;
        case 0x1e5464u: goto label_1e5464;
        case 0x1e5468u: goto label_1e5468;
        case 0x1e546cu: goto label_1e546c;
        default: break;
    }

    ctx->pc = 0x1e5310u;

label_1e5310:
    // 0x1e5310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e5310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e5314:
    // 0x1e5314: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e5314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1e5318:
    // 0x1e5318: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e531c:
    // 0x1e531c: 0x2442c120  addiu       $v0, $v0, -0x3EE0
    ctx->pc = 0x1e531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951200));
label_1e5320:
    // 0x1e5320: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e5320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e5324:
    // 0x1e5324: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5328:
    // 0x1e5328: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e5328u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e532c:
    // 0x1e532c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e532cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5330:
    // 0x1e5330: 0xafc4004c  sw          $a0, 0x4C($fp)
    ctx->pc = 0x1e5330u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 4));
label_1e5334:
    // 0x1e5334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e5334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5338:
    // 0x1e5338: 0x8fd1004c  lw          $s1, 0x4C($fp)
    ctx->pc = 0x1e5338u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e533c:
    // 0x1e533c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e533cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5340:
    // 0x1e5340: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e5340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1e5344:
    // 0x1e5344: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e5344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e5348:
    // 0x1e5348: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e5348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1e534c:
    // 0x1e534c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e534cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1e5350:
    // 0x1e5350: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1e5350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1e5354:
    // 0x1e5354: 0xc07a284  jal         func_1E8A10
label_1e5358:
    if (ctx->pc == 0x1E5358u) {
        ctx->pc = 0x1E5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5354u;
        // 0x1e5358: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E535Cu;
        goto label_1e535c;
    }
    ctx->pc = 0x1E5354u;
    SET_GPR_U32(ctx, 31, 0x1E535Cu);
    ctx->pc = 0x1E5358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5354u;
    // 0x1e5358: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8A10u, 0x1E5354u, 0x1E535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E535Cu;
label_1e535c:
    // 0x1e535c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1e535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1e5360:
    // 0x1e5360: 0xc04814c  jal         func_120530
label_1e5364:
    if (ctx->pc == 0x1E5364u) {
        ctx->pc = 0x1E5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5360u;
        // 0x1e5364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5368u;
        goto label_1e5368;
    }
    ctx->pc = 0x1E5360u;
    SET_GPR_U32(ctx, 31, 0x1E5368u);
    ctx->pc = 0x1E5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5360u;
    // 0x1e5364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120530u, 0x1E5360u, 0x1E5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5368u;
label_1e5368:
    // 0x1e5368: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e5368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e536c:
    // 0x1e536c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e536cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
label_1e5370:
    // 0x1e5370: 0x24a5c160  addiu       $a1, $a1, -0x3EA0
    ctx->pc = 0x1e5370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951264));
label_1e5374:
    // 0x1e5374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5378:
    // 0x1e5378: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e5378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1e537c:
    // 0x1e537c: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e5380:
    // 0x1e5380: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x1e5380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
label_1e5384:
    // 0x1e5384: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e5384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e5388:
    // 0x1e5388: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1e5388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1e538c:
    // 0x1e538c: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e5390:
    // 0x1e5390: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x1e5390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 0));
label_1e5394:
    // 0x1e5394: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e5394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e5398:
    // 0x1e5398: 0xa0430052  sb          $v1, 0x52($v0)
    ctx->pc = 0x1e5398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 82), (uint8_t)GPR_U32(ctx, 3));
label_1e539c:
    // 0x1e539c: 0x8fc5004c  lw          $a1, 0x4C($fp)
    ctx->pc = 0x1e539cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e53a0:
    // 0x1e53a0: 0xc07911c  jal         func_1E4470
label_1e53a4:
    if (ctx->pc == 0x1E53A4u) {
        ctx->pc = 0x1E53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53A0u;
        // 0x1e53a4: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53A8u;
        goto label_1e53a8;
    }
    ctx->pc = 0x1E53A0u;
    SET_GPR_U32(ctx, 31, 0x1E53A8u);
    ctx->pc = 0x1E53A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53A0u;
    // 0x1e53a4: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4470u, 0x1E53A0u, 0x1E53A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53A8u;
label_1e53a8:
    // 0x1e53a8: 0x93828750  lbu         $v0, -0x78B0($gp)
    ctx->pc = 0x1e53a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936400)));
label_1e53ac:
    // 0x1e53ac: 0x27c3007c  addiu       $v1, $fp, 0x7C
    ctx->pc = 0x1e53acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 124));
label_1e53b0:
    // 0x1e53b0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e53b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e53b4:
    // 0x1e53b4: 0x83c5007c  lb          $a1, 0x7C($fp)
    ctx->pc = 0x1e53b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 124)));
label_1e53b8:
    // 0x1e53b8: 0xc0797c0  jal         func_1E5F00
label_1e53bc:
    if (ctx->pc == 0x1E53BCu) {
        ctx->pc = 0x1E53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53B8u;
        // 0x1e53bc: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53C0u;
        goto label_1e53c0;
    }
    ctx->pc = 0x1E53B8u;
    SET_GPR_U32(ctx, 31, 0x1E53C0u);
    ctx->pc = 0x1E53BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53B8u;
    // 0x1e53bc: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F00u, 0x1E53B8u, 0x1E53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53C0u;
label_1e53c0:
    // 0x1e53c0: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x1e53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e53c4:
    // 0x1e53c4: 0x27d00074  addiu       $s0, $fp, 0x74
    ctx->pc = 0x1e53c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 116));
label_1e53c8:
    // 0x1e53c8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1e53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_1e53cc:
    // 0x1e53cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e53ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e53d0:
    // 0x1e53d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e53d4:
    if (ctx->pc == 0x1E53D4u) {
        ctx->pc = 0x1E53D8u;
        goto label_1e53d8;
    }
    ctx->pc = 0x1E53D0u;
    {
        const bool branch_taken_0x1e53d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e53d0) {
            ctx->pc = 0x1E53FCu;
            goto label_1e53fc;
        }
    }
    ctx->pc = 0x1E53D8u;
label_1e53d8:
    // 0x1e53d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e53dc:
    // 0x1e53dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e53e0:
    // 0x1e53e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e53e4:
    if (ctx->pc == 0x1E53E4u) {
        ctx->pc = 0x1E53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53E0u;
        // 0x1e53e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53E8u;
        goto label_1e53e8;
    }
    ctx->pc = 0x1E53E0u;
    {
        const bool branch_taken_0x1e53e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53E0u;
        // 0x1e53e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53e0) {
            ctx->pc = 0x1E53FCu;
            goto label_1e53fc;
        }
    }
    ctx->pc = 0x1E53E8u;
label_1e53e8:
    // 0x1e53e8: 0x8fc40070  lw          $a0, 0x70($fp)
    ctx->pc = 0x1e53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_1e53ec:
    // 0x1e53ec: 0xc0483d8  jal         func_120F60
label_1e53f0:
    if (ctx->pc == 0x1E53F0u) {
        ctx->pc = 0x1E53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53ECu;
        // 0x1e53f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53F4u;
        goto label_1e53f4;
    }
    ctx->pc = 0x1E53ECu;
    SET_GPR_U32(ctx, 31, 0x1E53F4u);
    ctx->pc = 0x1E53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53ECu;
    // 0x1e53f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E53ECu, 0x1E53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53F4u;
label_1e53f4:
    // 0x1e53f4: 0xc0401a4  jal         func_100690
label_1e53f8:
    if (ctx->pc == 0x1E53F8u) {
        ctx->pc = 0x1E53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53F4u;
        // 0x1e53f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E53FCu;
        goto label_1e53fc;
    }
    ctx->pc = 0x1E53F4u;
    SET_GPR_U32(ctx, 31, 0x1E53FCu);
    ctx->pc = 0x1E53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53F4u;
    // 0x1e53f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E53F4u, 0x1E53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53FCu;
label_1e53fc:
    // 0x1e53fc: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e5400:
    // 0x1e5400: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1e5404:
    // 0x1e5404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5408:
    // 0x1e5408: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e5408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e540c:
    // 0x1e540c: 0x320f809  jalr        $t9
label_1e5410:
    if (ctx->pc == 0x1E5410u) {
        ctx->pc = 0x1E5414u;
        goto label_1e5414;
    }
    ctx->pc = 0x1E540Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5414u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E540Cu, 0x1E5414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5414u;
label_1e5414:
    // 0x1e5414: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5418:
    if (ctx->pc == 0x1E5418u) {
        ctx->pc = 0x1E5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5414u;
        // 0x1e5418: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E541Cu;
        goto label_1e541c;
    }
    ctx->pc = 0x1E5414u;
    {
        const bool branch_taken_0x1e5414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5414u;
        // 0x1e5418: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5414) {
            ctx->pc = 0x1E5444u;
            goto label_1e5444;
        }
    }
    ctx->pc = 0x1E541Cu;
label_1e541c:
    // 0x1e541c: 0xc07a704  jal         func_1E9C10
label_1e5420:
    if (ctx->pc == 0x1E5420u) {
        ctx->pc = 0x1E5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E541Cu;
        // 0x1e5420: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5424u;
        goto label_1e5424;
    }
    ctx->pc = 0x1E541Cu;
    SET_GPR_U32(ctx, 31, 0x1E5424u);
    ctx->pc = 0x1E5420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E541Cu;
    // 0x1e5420: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E541Cu, 0x1E5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5424u;
label_1e5424:
    // 0x1e5424: 0x0  nop
    ctx->pc = 0x1e5424u;
    // NOP
label_1e5428:
    // 0x1e5428: 0x0  nop
    ctx->pc = 0x1e5428u;
    // NOP
label_1e542c:
    // 0x1e542c: 0x0  nop
    ctx->pc = 0x1e542cu;
    // NOP
label_1e5430:
    // 0x1e5430: 0x0  nop
    ctx->pc = 0x1e5430u;
    // NOP
label_1e5434:
    // 0x1e5434: 0x0  nop
    ctx->pc = 0x1e5434u;
    // NOP
label_1e5438:
    // 0x1e5438: 0x0  nop
    ctx->pc = 0x1e5438u;
    // NOP
label_1e543c:
    // 0x1e543c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e5440:
    if (ctx->pc == 0x1E5440u) {
        ctx->pc = 0x1E5444u;
        goto label_1e5444;
    }
    ctx->pc = 0x1E543Cu;
    {
        const bool branch_taken_0x1e543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e543c) {
            ctx->pc = 0x1E5424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5424;
        }
    }
    ctx->pc = 0x1E5444u;
label_1e5444:
    // 0x1e5444: 0x0  nop
    ctx->pc = 0x1e5444u;
    // NOP
label_1e5448:
    // 0x1e5448: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e544c:
    // 0x1e544c: 0xa0430051  sb          $v1, 0x51($v0)
    ctx->pc = 0x1e544cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 3));
label_1e5450:
    // 0x1e5450: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e5450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e5454:
    // 0x1e5454: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e5454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e5458:
    // 0x1e5458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e545c:
    // 0x1e545c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e545cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5460:
    // 0x1e5460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5464:
    // 0x1e5464: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e5464u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5468:
    // 0x1e5468: 0x3e00008  jr          $ra
label_1e546c:
    if (ctx->pc == 0x1E546Cu) {
        ctx->pc = 0x1E546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5468u;
        // 0x1e546c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5470u;
        goto label_fallthrough_0x1e5468;
    }
    ctx->pc = 0x1E5468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5468u;
        // 0x1e546c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5468:
    ctx->pc = 0x1E5470u;
}
