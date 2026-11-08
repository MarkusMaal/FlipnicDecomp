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

// Function: FUN_001d5318
// Address: 0x1d5318 - 0x1d5614
void FUN_001d5318_0x1d5318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5318_0x1d5318");
#endif

    switch (ctx->pc) {
        case 0x1d5318u: goto label_1d5318;
        case 0x1d531cu: goto label_1d531c;
        case 0x1d5320u: goto label_1d5320;
        case 0x1d5324u: goto label_1d5324;
        case 0x1d5328u: goto label_1d5328;
        case 0x1d532cu: goto label_1d532c;
        case 0x1d5330u: goto label_1d5330;
        case 0x1d5334u: goto label_1d5334;
        case 0x1d5338u: goto label_1d5338;
        case 0x1d533cu: goto label_1d533c;
        case 0x1d5340u: goto label_1d5340;
        case 0x1d5344u: goto label_1d5344;
        case 0x1d5348u: goto label_1d5348;
        case 0x1d534cu: goto label_1d534c;
        case 0x1d5350u: goto label_1d5350;
        case 0x1d5354u: goto label_1d5354;
        case 0x1d5358u: goto label_1d5358;
        case 0x1d535cu: goto label_1d535c;
        case 0x1d5360u: goto label_1d5360;
        case 0x1d5364u: goto label_1d5364;
        case 0x1d5368u: goto label_1d5368;
        case 0x1d536cu: goto label_1d536c;
        case 0x1d5370u: goto label_1d5370;
        case 0x1d5374u: goto label_1d5374;
        case 0x1d5378u: goto label_1d5378;
        case 0x1d537cu: goto label_1d537c;
        case 0x1d5380u: goto label_1d5380;
        case 0x1d5384u: goto label_1d5384;
        case 0x1d5388u: goto label_1d5388;
        case 0x1d538cu: goto label_1d538c;
        case 0x1d5390u: goto label_1d5390;
        case 0x1d5394u: goto label_1d5394;
        case 0x1d5398u: goto label_1d5398;
        case 0x1d539cu: goto label_1d539c;
        case 0x1d53a0u: goto label_1d53a0;
        case 0x1d53a4u: goto label_1d53a4;
        case 0x1d53a8u: goto label_1d53a8;
        case 0x1d53acu: goto label_1d53ac;
        case 0x1d53b0u: goto label_1d53b0;
        case 0x1d53b4u: goto label_1d53b4;
        case 0x1d53b8u: goto label_1d53b8;
        case 0x1d53bcu: goto label_1d53bc;
        case 0x1d53c0u: goto label_1d53c0;
        case 0x1d53c4u: goto label_1d53c4;
        case 0x1d53c8u: goto label_1d53c8;
        case 0x1d53ccu: goto label_1d53cc;
        case 0x1d53d0u: goto label_1d53d0;
        case 0x1d53d4u: goto label_1d53d4;
        case 0x1d53d8u: goto label_1d53d8;
        case 0x1d53dcu: goto label_1d53dc;
        case 0x1d53e0u: goto label_1d53e0;
        case 0x1d53e4u: goto label_1d53e4;
        case 0x1d53e8u: goto label_1d53e8;
        case 0x1d53ecu: goto label_1d53ec;
        case 0x1d53f0u: goto label_1d53f0;
        case 0x1d53f4u: goto label_1d53f4;
        case 0x1d53f8u: goto label_1d53f8;
        case 0x1d53fcu: goto label_1d53fc;
        case 0x1d5400u: goto label_1d5400;
        case 0x1d5404u: goto label_1d5404;
        case 0x1d5408u: goto label_1d5408;
        case 0x1d540cu: goto label_1d540c;
        case 0x1d5410u: goto label_1d5410;
        case 0x1d5414u: goto label_1d5414;
        case 0x1d5418u: goto label_1d5418;
        case 0x1d541cu: goto label_1d541c;
        case 0x1d5420u: goto label_1d5420;
        case 0x1d5424u: goto label_1d5424;
        case 0x1d5428u: goto label_1d5428;
        case 0x1d542cu: goto label_1d542c;
        case 0x1d5430u: goto label_1d5430;
        case 0x1d5434u: goto label_1d5434;
        case 0x1d5438u: goto label_1d5438;
        case 0x1d543cu: goto label_1d543c;
        case 0x1d5440u: goto label_1d5440;
        case 0x1d5444u: goto label_1d5444;
        case 0x1d5448u: goto label_1d5448;
        case 0x1d544cu: goto label_1d544c;
        case 0x1d5450u: goto label_1d5450;
        case 0x1d5454u: goto label_1d5454;
        case 0x1d5458u: goto label_1d5458;
        case 0x1d545cu: goto label_1d545c;
        case 0x1d5460u: goto label_1d5460;
        case 0x1d5464u: goto label_1d5464;
        case 0x1d5468u: goto label_1d5468;
        case 0x1d546cu: goto label_1d546c;
        case 0x1d5470u: goto label_1d5470;
        case 0x1d5474u: goto label_1d5474;
        case 0x1d5478u: goto label_1d5478;
        case 0x1d547cu: goto label_1d547c;
        case 0x1d5480u: goto label_1d5480;
        case 0x1d5484u: goto label_1d5484;
        case 0x1d5488u: goto label_1d5488;
        case 0x1d548cu: goto label_1d548c;
        case 0x1d5490u: goto label_1d5490;
        case 0x1d5494u: goto label_1d5494;
        case 0x1d5498u: goto label_1d5498;
        case 0x1d549cu: goto label_1d549c;
        case 0x1d54a0u: goto label_1d54a0;
        case 0x1d54a4u: goto label_1d54a4;
        case 0x1d54a8u: goto label_1d54a8;
        case 0x1d54acu: goto label_1d54ac;
        case 0x1d54b0u: goto label_1d54b0;
        case 0x1d54b4u: goto label_1d54b4;
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54bcu: goto label_1d54bc;
        case 0x1d54c0u: goto label_1d54c0;
        case 0x1d54c4u: goto label_1d54c4;
        case 0x1d54c8u: goto label_1d54c8;
        case 0x1d54ccu: goto label_1d54cc;
        case 0x1d54d0u: goto label_1d54d0;
        case 0x1d54d4u: goto label_1d54d4;
        case 0x1d54d8u: goto label_1d54d8;
        case 0x1d54dcu: goto label_1d54dc;
        case 0x1d54e0u: goto label_1d54e0;
        case 0x1d54e4u: goto label_1d54e4;
        case 0x1d54e8u: goto label_1d54e8;
        case 0x1d54ecu: goto label_1d54ec;
        case 0x1d54f0u: goto label_1d54f0;
        case 0x1d54f4u: goto label_1d54f4;
        case 0x1d54f8u: goto label_1d54f8;
        case 0x1d54fcu: goto label_1d54fc;
        case 0x1d5500u: goto label_1d5500;
        case 0x1d5504u: goto label_1d5504;
        case 0x1d5508u: goto label_1d5508;
        case 0x1d550cu: goto label_1d550c;
        case 0x1d5510u: goto label_1d5510;
        case 0x1d5514u: goto label_1d5514;
        case 0x1d5518u: goto label_1d5518;
        case 0x1d551cu: goto label_1d551c;
        case 0x1d5520u: goto label_1d5520;
        case 0x1d5524u: goto label_1d5524;
        case 0x1d5528u: goto label_1d5528;
        case 0x1d552cu: goto label_1d552c;
        case 0x1d5530u: goto label_1d5530;
        case 0x1d5534u: goto label_1d5534;
        case 0x1d5538u: goto label_1d5538;
        case 0x1d553cu: goto label_1d553c;
        case 0x1d5540u: goto label_1d5540;
        case 0x1d5544u: goto label_1d5544;
        case 0x1d5548u: goto label_1d5548;
        case 0x1d554cu: goto label_1d554c;
        case 0x1d5550u: goto label_1d5550;
        case 0x1d5554u: goto label_1d5554;
        case 0x1d5558u: goto label_1d5558;
        case 0x1d555cu: goto label_1d555c;
        case 0x1d5560u: goto label_1d5560;
        case 0x1d5564u: goto label_1d5564;
        case 0x1d5568u: goto label_1d5568;
        case 0x1d556cu: goto label_1d556c;
        case 0x1d5570u: goto label_1d5570;
        case 0x1d5574u: goto label_1d5574;
        case 0x1d5578u: goto label_1d5578;
        case 0x1d557cu: goto label_1d557c;
        case 0x1d5580u: goto label_1d5580;
        case 0x1d5584u: goto label_1d5584;
        case 0x1d5588u: goto label_1d5588;
        case 0x1d558cu: goto label_1d558c;
        case 0x1d5590u: goto label_1d5590;
        case 0x1d5594u: goto label_1d5594;
        case 0x1d5598u: goto label_1d5598;
        case 0x1d559cu: goto label_1d559c;
        case 0x1d55a0u: goto label_1d55a0;
        case 0x1d55a4u: goto label_1d55a4;
        case 0x1d55a8u: goto label_1d55a8;
        case 0x1d55acu: goto label_1d55ac;
        case 0x1d55b0u: goto label_1d55b0;
        case 0x1d55b4u: goto label_1d55b4;
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55bcu: goto label_1d55bc;
        case 0x1d55c0u: goto label_1d55c0;
        case 0x1d55c4u: goto label_1d55c4;
        case 0x1d55c8u: goto label_1d55c8;
        case 0x1d55ccu: goto label_1d55cc;
        case 0x1d55d0u: goto label_1d55d0;
        case 0x1d55d4u: goto label_1d55d4;
        case 0x1d55d8u: goto label_1d55d8;
        case 0x1d55dcu: goto label_1d55dc;
        case 0x1d55e0u: goto label_1d55e0;
        case 0x1d55e4u: goto label_1d55e4;
        case 0x1d55e8u: goto label_1d55e8;
        case 0x1d55ecu: goto label_1d55ec;
        case 0x1d55f0u: goto label_1d55f0;
        case 0x1d55f4u: goto label_1d55f4;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d55fcu: goto label_1d55fc;
        case 0x1d5600u: goto label_1d5600;
        case 0x1d5604u: goto label_1d5604;
        case 0x1d5608u: goto label_1d5608;
        case 0x1d560cu: goto label_1d560c;
        case 0x1d5610u: goto label_1d5610;
        default: break;
    }

    ctx->pc = 0x1d5318u;

label_1d5318:
    // 0x1d5318: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d5318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d531c:
    // 0x1d531c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1d531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1d5320:
    // 0x1d5320: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1d5320u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1d5324:
    // 0x1d5324: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1d5324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1d5328:
    // 0x1d5328: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d5328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1d532c:
    // 0x1d532c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1d5330:
    // 0x1d5330: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d5330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1d5334:
    // 0x1d5334: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d5334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1d5338:
    // 0x1d5338: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d5338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1d533c:
    // 0x1d533c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1d5340:
    // 0x1d5340: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1d5340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_1d5344:
    // 0x1d5344: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1d5344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1d5348:
    // 0x1d5348: 0xc07d0d8  jal         func_1F4360
label_1d534c:
    if (ctx->pc == 0x1D534Cu) {
        ctx->pc = 0x1D534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5348u;
        // 0x1d534c: 0x3c170037  lui         $s7, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5350u;
        goto label_1d5350;
    }
    ctx->pc = 0x1D5348u;
    SET_GPR_U32(ctx, 31, 0x1D5350u);
    ctx->pc = 0x1D534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5348u;
    // 0x1d534c: 0x3c170037  lui         $s7, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D5348u, 0x1D5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5350u;
label_1d5350:
    // 0x1d5350: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d5350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1d5354:
    // 0x1d5354: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d5354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d5358:
    // 0x1d5358: 0x24820548  addiu       $v0, $a0, 0x548
    ctx->pc = 0x1d5358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1352));
label_1d535c:
    // 0x1d535c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d535cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1d5360:
    // 0x1d5360: 0x8c820548  lw          $v0, 0x548($a0)
    ctx->pc = 0x1d5360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1352)));
label_1d5364:
    // 0x1d5364: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
label_1d5368:
    // 0x1d5368: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d5368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1d536c:
    // 0x1d536c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d536cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d5370:
    // 0x1d5370: 0x24a40558  addiu       $a0, $a1, 0x558
    ctx->pc = 0x1d5370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1368));
label_1d5374:
    // 0x1d5374: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1d5374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d5378:
    // 0x1d5378: 0x24910058  addiu       $s1, $a0, 0x58
    ctx->pc = 0x1d5378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_1d537c:
    // 0x1d537c: 0x24820260  addiu       $v0, $a0, 0x260
    ctx->pc = 0x1d537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
label_1d5380:
    // 0x1d5380: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x1d5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_1d5384:
    // 0x1d5384: 0x8e250204  lw          $a1, 0x204($s1)
    ctx->pc = 0x1d5384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
label_1d5388:
    // 0x1d5388: 0xaec2054c  sw          $v0, 0x54C($s6)
    ctx->pc = 0x1d5388u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1356), GPR_U32(ctx, 2));
label_1d538c:
    // 0x1d538c: 0x1065005a  beq         $v1, $a1, . + 4 + (0x5A << 2)
label_1d5390:
    if (ctx->pc == 0x1D5390u) {
        ctx->pc = 0x1D5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D538Cu;
        // 0x1d5390: 0xaee40550  sw          $a0, 0x550($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5394u;
        goto label_1d5394;
    }
    ctx->pc = 0x1D538Cu;
    {
        const bool branch_taken_0x1d538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D538Cu;
        // 0x1d5390: 0xaee40550  sw          $a0, 0x550($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 1360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d538c) {
            ctx->pc = 0x1D54F8u;
            goto label_1d54f8;
        }
    }
    ctx->pc = 0x1D5394u;
label_1d5394:
    // 0x1d5394: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1d5398:
    // 0x1d5398: 0x24920060  addiu       $s2, $a0, 0x60
    ctx->pc = 0x1d5398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_1d539c:
    // 0x1d539c: 0x24549f14  addiu       $s4, $v0, -0x60EC
    ctx->pc = 0x1d539cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942484));
label_1d53a0:
    // 0x1d53a0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d53a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d53a4:
    // 0x1d53a4: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1d53a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
label_1d53a8:
    // 0x1d53a8: 0x269efffc  addiu       $fp, $s4, -0x4
    ctx->pc = 0x1d53a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_1d53ac:
    // 0x1d53ac: 0x0  nop
    ctx->pc = 0x1d53acu;
    // NOP
label_1d53b0:
    // 0x1d53b0: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x1d53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1d53b4:
    // 0x1d53b4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1d53b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d53b8:
    // 0x1d53b8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1d53b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d53bc:
    // 0x1d53bc: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1d53bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_1d53c0:
    // 0x1d53c0: 0x2cc200f7  sltiu       $v0, $a2, 0xF7
    ctx->pc = 0x1d53c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)247) ? 1 : 0);
label_1d53c4:
    // 0x1d53c4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1d53c8:
    if (ctx->pc == 0x1D53C8u) {
        ctx->pc = 0x1D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C4u;
        // 0x1d53c8: 0xae230204  sw          $v1, 0x204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D53CCu;
        goto label_1d53cc;
    }
    ctx->pc = 0x1D53C4u;
    {
        const bool branch_taken_0x1d53c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C4u;
        // 0x1d53c8: 0xae230204  sw          $v1, 0x204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c4) {
            ctx->pc = 0x1D5460u;
            goto label_1d5460;
        }
    }
    ctx->pc = 0x1D53CCu;
label_1d53cc:
    // 0x1d53cc: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x1d53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_1d53d0:
    // 0x1d53d0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_1d53d4:
    if (ctx->pc == 0x1D53D4u) {
        ctx->pc = 0x1D53D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53D0u;
        // 0x1d53d4: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D53D8u;
        goto label_1d53d8;
    }
    ctx->pc = 0x1D53D0u;
    {
        const bool branch_taken_0x1d53d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d53d0) {
            ctx->pc = 0x1D53D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53D0u;
            // 0x1d53d4: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53D8u;
            goto label_1d53d8;
        }
    }
    ctx->pc = 0x1D53D8u;
label_1d53d8:
    // 0x1d53d8: 0x26300248  addiu       $s0, $s1, 0x248
    ctx->pc = 0x1d53d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
label_1d53dc:
    // 0x1d53dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d53e0:
    // 0x1d53e0: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x1d53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1d53e4:
    // 0x1d53e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d53e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d53e8:
    // 0x1d53e8: 0xa0460200  sb          $a2, 0x200($v0)
    ctx->pc = 0x1d53e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 512), (uint8_t)GPR_U32(ctx, 6));
label_1d53ec:
    // 0x1d53ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1d53ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1d53f0:
    // 0x1d53f0: 0x92220208  lbu         $v0, 0x208($s1)
    ctx->pc = 0x1d53f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 520)));
label_1d53f4:
    // 0x1d53f4: 0x2c4200f0  sltiu       $v0, $v0, 0xF0
    ctx->pc = 0x1d53f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_1d53f8:
    // 0x1d53f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d53fc:
    if (ctx->pc == 0x1D53FCu) {
        ctx->pc = 0x1D53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53F8u;
        // 0x1d53fc: 0x8ec3054c  lw          $v1, 0x54C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5400u;
        goto label_1d5400;
    }
    ctx->pc = 0x1D53F8u;
    {
        const bool branch_taken_0x1d53f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53F8u;
        // 0x1d53fc: 0x8ec3054c  lw          $v1, 0x54C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53f8) {
            ctx->pc = 0x1D5438u;
            goto label_1d5438;
        }
    }
    ctx->pc = 0x1D5400u;
label_1d5400:
    // 0x1d5400: 0x8ec4054c  lw          $a0, 0x54C($s6)
    ctx->pc = 0x1d5400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1356)));
label_1d5404:
    // 0x1d5404: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d5404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1d5408:
    // 0x1d5408: 0x24469e98  addiu       $a2, $v0, -0x6168
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942360));
label_1d540c:
    // 0x1d540c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1d540cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1d5410:
    // 0x1d5410: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1d5410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1d5414:
    // 0x1d5414: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d5414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d5418:
    // 0x1d5418: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1d5418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1d541c:
    // 0x1d541c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d5420:
    // 0x1d5420: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d5420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5424:
    // 0x1d5424: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_1d5428:
    if (ctx->pc == 0x1D5428u) {
        ctx->pc = 0x1D5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5424u;
        // 0x1d5428: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D542Cu;
        goto label_1d542c;
    }
    ctx->pc = 0x1D5424u;
    {
        const bool branch_taken_0x1d5424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5424) {
            ctx->pc = 0x1D5428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5424u;
            // 0x1d5428: 0x8e220204  lw          $v0, 0x204($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D54ECu;
            goto label_1d54ec;
        }
    }
    ctx->pc = 0x1D542Cu;
label_1d542c:
    // 0x1d542c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1d5430:
    if (ctx->pc == 0x1D5430u) {
        ctx->pc = 0x1D5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D542Cu;
        // 0x1d5430: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5434u;
        goto label_1d5434;
    }
    ctx->pc = 0x1D542Cu;
    {
        const bool branch_taken_0x1d542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D542Cu;
        // 0x1d5430: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d542c) {
            ctx->pc = 0x1D54D8u;
            goto label_1d54d8;
        }
    }
    ctx->pc = 0x1D5434u;
label_1d5434:
    // 0x1d5434: 0x0  nop
    ctx->pc = 0x1d5434u;
    // NOP
label_1d5438:
    // 0x1d5438: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d5438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1d543c:
    // 0x1d543c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1d543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1d5440:
    // 0x1d5440: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d5444:
    // 0x1d5444: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x1d5444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1d5448:
    // 0x1d5448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d544c:
    // 0x1d544c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d544cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5450:
    // 0x1d5450: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_1d5454:
    if (ctx->pc == 0x1D5454u) {
        ctx->pc = 0x1D5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5450u;
        // 0x1d5454: 0x26a69f10  addiu       $a2, $s5, -0x60F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5458u;
        goto label_1d5458;
    }
    ctx->pc = 0x1D5450u;
    {
        const bool branch_taken_0x1d5450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5450u;
        // 0x1d5454: 0x26a69f10  addiu       $a2, $s5, -0x60F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5450) {
            ctx->pc = 0x1D54E8u;
            goto label_1d54e8;
        }
    }
    ctx->pc = 0x1D5458u;
label_1d5458:
    // 0x1d5458: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d545c:
    if (ctx->pc == 0x1D545Cu) {
        ctx->pc = 0x1D545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5458u;
        // 0x1d545c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5460u;
        goto label_1d5460;
    }
    ctx->pc = 0x1D5458u;
    {
        const bool branch_taken_0x1d5458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5458u;
        // 0x1d545c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5458) {
            ctx->pc = 0x1D54D8u;
            goto label_1d54d8;
        }
    }
    ctx->pc = 0x1D5460u;
label_1d5460:
    // 0x1d5460: 0x240200f7  addiu       $v0, $zero, 0xF7
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
label_1d5464:
    // 0x1d5464: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
label_1d5468:
    if (ctx->pc == 0x1D5468u) {
        ctx->pc = 0x1D5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5464u;
        // 0x1d5468: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D546Cu;
        goto label_1d546c;
    }
    ctx->pc = 0x1D5464u;
    {
        const bool branch_taken_0x1d5464 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5464u;
        // 0x1d5468: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5464) {
            ctx->pc = 0x1D5498u;
            goto label_1d5498;
        }
    }
    ctx->pc = 0x1D546Cu;
label_1d546c:
    // 0x1d546c: 0x8ec2054c  lw          $v0, 0x54C($s6)
    ctx->pc = 0x1d546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1356)));
label_1d5470:
    // 0x1d5470: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1d5470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5474:
    // 0x1d5474: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1d5474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1d5478:
    // 0x1d5478: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d547c:
    // 0x1d547c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1d547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1d5480:
    // 0x1d5480: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5484:
    // 0x1d5484: 0x60f809  jalr        $v1
label_1d5488:
    if (ctx->pc == 0x1D5488u) {
        ctx->pc = 0x1D548Cu;
        goto label_1d548c;
    }
    ctx->pc = 0x1D5484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D548Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5484u, 0x1D548Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D548Cu;
label_1d548c:
    // 0x1d548c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d5490:
    if (ctx->pc == 0x1D5490u) {
        ctx->pc = 0x1D5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D548Cu;
        // 0x1d5490: 0xae330248  sw          $s3, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5494u;
        goto label_1d5494;
    }
    ctx->pc = 0x1D548Cu;
    {
        const bool branch_taken_0x1d548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D548Cu;
        // 0x1d5490: 0xae330248  sw          $s3, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d548c) {
            ctx->pc = 0x1D54E8u;
            goto label_1d54e8;
        }
    }
    ctx->pc = 0x1D5494u;
label_1d5494:
    // 0x1d5494: 0x0  nop
    ctx->pc = 0x1d5494u;
    // NOP
label_1d5498:
    // 0x1d5498: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_1d549c:
    if (ctx->pc == 0x1D549Cu) {
        ctx->pc = 0x1D549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5498u;
        // 0x1d549c: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D54A0u;
        goto label_1d54a0;
    }
    ctx->pc = 0x1D5498u;
    {
        const bool branch_taken_0x1d5498 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d5498) {
            ctx->pc = 0x1D549Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5498u;
            // 0x1d549c: 0xae200248  sw          $zero, 0x248($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D54A0u;
            goto label_1d54a0;
        }
    }
    ctx->pc = 0x1D54A0u;
label_1d54a0:
    // 0x1d54a0: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x1d54a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_1d54a4:
    // 0x1d54a4: 0x26300248  addiu       $s0, $s1, 0x248
    ctx->pc = 0x1d54a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
label_1d54a8:
    // 0x1d54a8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d54ac:
    // 0x1d54ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d54b0:
    // 0x1d54b0: 0xf41821  addu        $v1, $a3, $s4
    ctx->pc = 0x1d54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_1d54b4:
    // 0x1d54b4: 0x26a89f10  addiu       $t0, $s5, -0x60F0
    ctx->pc = 0x1d54b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942480));
label_1d54b8:
    // 0x1d54b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d54bc:
    // 0x1d54bc: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1d54bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d54c0:
    // 0x1d54c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d54c4:
    // 0x1d54c4: 0xa0a60200  sb          $a2, 0x200($a1)
    ctx->pc = 0x1d54c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 512), (uint8_t)GPR_U32(ctx, 6));
label_1d54c8:
    // 0x1d54c8: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x1d54c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1d54cc:
    // 0x1d54cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1d54d0:
    if (ctx->pc == 0x1D54D0u) {
        ctx->pc = 0x1D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54CCu;
        // 0x1d54d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D54D4u;
        goto label_1d54d4;
    }
    ctx->pc = 0x1D54CCu;
    {
        const bool branch_taken_0x1d54cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54CCu;
        // 0x1d54d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54cc) {
            ctx->pc = 0x1D54E8u;
            goto label_1d54e8;
        }
    }
    ctx->pc = 0x1D54D4u;
label_1d54d4:
    // 0x1d54d4: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1d54d8:
    // 0x1d54d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d54d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d54dc:
    // 0x1d54dc: 0x60f809  jalr        $v1
label_1d54e0:
    if (ctx->pc == 0x1D54E0u) {
        ctx->pc = 0x1D54E4u;
        goto label_1d54e4;
    }
    ctx->pc = 0x1D54DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D54E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D54DCu, 0x1D54E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D54E4u;
label_1d54e4:
    // 0x1d54e4: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1d54e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_1d54e8:
    // 0x1d54e8: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x1d54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
label_1d54ec:
    // 0x1d54ec: 0x8e230200  lw          $v1, 0x200($s1)
    ctx->pc = 0x1d54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_1d54f0:
    // 0x1d54f0: 0x1462ffaf  bne         $v1, $v0, . + 4 + (-0x51 << 2)
label_1d54f4:
    if (ctx->pc == 0x1D54F4u) {
        ctx->pc = 0x1D54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F0u;
        // 0x1d54f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D54F8u;
        goto label_1d54f8;
    }
    ctx->pc = 0x1D54F0u;
    {
        const bool branch_taken_0x1d54f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D54F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D54F0u;
        // 0x1d54f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54f0) {
            ctx->pc = 0x1D53B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53b0;
        }
    }
    ctx->pc = 0x1D54F8u;
label_1d54f8:
    // 0x1d54f8: 0x26f00550  addiu       $s0, $s7, 0x550
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1360));
label_1d54fc:
    // 0x1d54fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5500:
    // 0x1d5500: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1d5504:
    // 0x1d5504: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1d5508:
    if (ctx->pc == 0x1D5508u) {
        ctx->pc = 0x1D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5504u;
        // 0x1d5508: 0x8ee30550  lw          $v1, 0x550($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D550Cu;
        goto label_1d550c;
    }
    ctx->pc = 0x1D5504u;
    {
        const bool branch_taken_0x1d5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5504) {
            ctx->pc = 0x1D5508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5504u;
            // 0x1d5508: 0x8ee30550  lw          $v1, 0x550($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5530u;
            goto label_1d5530;
        }
    }
    ctx->pc = 0x1D550Cu;
label_1d550c:
    // 0x1d550c: 0xc07726c  jal         func_1DC9B0
label_1d5510:
    if (ctx->pc == 0x1D5510u) {
        ctx->pc = 0x1D5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D550Cu;
        // 0x1d5510: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5514u;
        goto label_1d5514;
    }
    ctx->pc = 0x1D550Cu;
    SET_GPR_U32(ctx, 31, 0x1D5514u);
    ctx->pc = 0x1D5510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D550Cu;
    // 0x1d5510: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC9B0u, 0x1D550Cu, 0x1D5514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5514u;
label_1d5514:
    // 0x1d5514: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d5518:
    if (ctx->pc == 0x1D5518u) {
        ctx->pc = 0x1D5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5514u;
        // 0x1d5518: 0x8ee30550  lw          $v1, 0x550($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D551Cu;
        goto label_1d551c;
    }
    ctx->pc = 0x1D5514u;
    {
        const bool branch_taken_0x1d5514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5514u;
        // 0x1d5518: 0x8ee30550  lw          $v1, 0x550($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5514) {
            ctx->pc = 0x1D5530u;
            goto label_1d5530;
        }
    }
    ctx->pc = 0x1D551Cu;
label_1d551c:
    // 0x1d551c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5520:
    // 0x1d5520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5524:
    // 0x1d5524: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d5524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1d5528:
    // 0x1d5528: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1d5528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_1d552c:
    // 0x1d552c: 0x8ee30550  lw          $v1, 0x550($s7)
    ctx->pc = 0x1d552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
label_1d5530:
    // 0x1d5530: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1d5530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d5534:
    // 0x1d5534: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_1d5538:
    if (ctx->pc == 0x1D5538u) {
        ctx->pc = 0x1D5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5534u;
        // 0x1d5538: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D553Cu;
        goto label_1d553c;
    }
    ctx->pc = 0x1D5534u;
    {
        const bool branch_taken_0x1d5534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5534) {
            ctx->pc = 0x1D5538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5534u;
            // 0x1d5538: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D558Cu;
            goto label_1d558c;
        }
    }
    ctx->pc = 0x1D553Cu;
label_1d553c:
    // 0x1d553c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1d553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1d5540:
    // 0x1d5540: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1d5540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1d5544:
    // 0x1d5544: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1d5544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d5548:
    // 0x1d5548: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
label_1d554c:
    if (ctx->pc == 0x1D554Cu) {
        ctx->pc = 0x1D554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5548u;
        // 0x1d554c: 0xac65002c  sw          $a1, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5550u;
        goto label_1d5550;
    }
    ctx->pc = 0x1D5548u;
    {
        const bool branch_taken_0x1d5548 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5548u;
        // 0x1d554c: 0xac65002c  sw          $a1, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5548) {
            ctx->pc = 0x1D5560u;
            goto label_1d5560;
        }
    }
    ctx->pc = 0x1D5550u;
label_1d5550:
    // 0x1d5550: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d5554:
    // 0x1d5554: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d5554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5558:
    // 0x1d5558: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d555c:
    if (ctx->pc == 0x1D555Cu) {
        ctx->pc = 0x1D555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5558u;
        // 0x1d555c: 0x8ee20550  lw          $v0, 0x550($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5560u;
        goto label_1d5560;
    }
    ctx->pc = 0x1D5558u;
    {
        const bool branch_taken_0x1d5558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5558u;
        // 0x1d555c: 0x8ee20550  lw          $v0, 0x550($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5558) {
            ctx->pc = 0x1D557Cu;
            goto label_1d557c;
        }
    }
    ctx->pc = 0x1D5560u;
label_1d5560:
    // 0x1d5560: 0x483000a  bgezl       $a0, . + 4 + (0xA << 2)
label_1d5564:
    if (ctx->pc == 0x1D5564u) {
        ctx->pc = 0x1D5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5560u;
        // 0x1d5564: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5568u;
        goto label_1d5568;
    }
    ctx->pc = 0x1D5560u;
    {
        const bool branch_taken_0x1d5560 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1d5560) {
            ctx->pc = 0x1D5564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5560u;
            // 0x1d5564: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D558Cu;
            goto label_1d558c;
        }
    }
    ctx->pc = 0x1D5568u;
label_1d5568:
    // 0x1d5568: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d5568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d556c:
    // 0x1d556c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1d556cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1d5570:
    // 0x1d5570: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1d5574:
    if (ctx->pc == 0x1D5574u) {
        ctx->pc = 0x1D5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5570u;
        // 0x1d5574: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5578u;
        goto label_1d5578;
    }
    ctx->pc = 0x1D5570u;
    {
        const bool branch_taken_0x1d5570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5570u;
        // 0x1d5574: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5570) {
            ctx->pc = 0x1D558Cu;
            goto label_1d558c;
        }
    }
    ctx->pc = 0x1D5578u;
label_1d5578:
    // 0x1d5578: 0x8ee20550  lw          $v0, 0x550($s7)
    ctx->pc = 0x1d5578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1360)));
label_1d557c:
    // 0x1d557c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1d557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1d5580:
    // 0x1d5580: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1d5580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_1d5584:
    // 0x1d5584: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1d5584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_1d5588:
    // 0x1d5588: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1d558c:
    // 0x1d558c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1d5590:
    // 0x1d5590: 0x24630548  addiu       $v1, $v1, 0x548
    ctx->pc = 0x1d5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1352));
label_1d5594:
    // 0x1d5594: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d5594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5598:
    // 0x1d5598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d559c:
    // 0x1d559c: 0x24a50548  addiu       $a1, $a1, 0x548
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
label_1d55a0:
    // 0x1d55a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d55a4:
    // 0x1d55a4: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x1d55a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1d55a8:
    // 0x1d55a8: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
label_1d55ac:
    if (ctx->pc == 0x1D55ACu) {
        ctx->pc = 0x1D55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55A8u;
        // 0x1d55ac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55B0u;
        goto label_1d55b0;
    }
    ctx->pc = 0x1D55A8u;
    {
        const bool branch_taken_0x1d55a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D55ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55A8u;
        // 0x1d55ac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55a8) {
            ctx->pc = 0x1D5360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5360;
        }
    }
    ctx->pc = 0x1D55B0u;
label_1d55b0:
    // 0x1d55b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d55b4:
    // 0x1d55b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d55b8:
    if (ctx->pc == 0x1D55B8u) {
        ctx->pc = 0x1D55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55B4u;
        // 0x1d55b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55BCu;
        goto label_1d55bc;
    }
    ctx->pc = 0x1D55B4u;
    {
        const bool branch_taken_0x1d55b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55B4u;
        // 0x1d55b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55b4) {
            ctx->pc = 0x1D55E8u;
            goto label_1d55e8;
        }
    }
    ctx->pc = 0x1D55BCu;
label_1d55bc:
    // 0x1d55bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d55bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d55c0:
    // 0x1d55c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d55c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d55c4:
    // 0x1d55c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d55c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d55c8:
    // 0x1d55c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d55c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d55cc:
    // 0x1d55cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d55ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d55d0:
    // 0x1d55d0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d55d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d55d4:
    // 0x1d55d4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d55d8:
    // 0x1d55d8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d55d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d55dc:
    // 0x1d55dc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d55dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1d55e0:
    // 0x1d55e0: 0x807d0ea  j           func_1F43A8
label_1d55e4:
    if (ctx->pc == 0x1D55E4u) {
        ctx->pc = 0x1D55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55E0u;
        // 0x1d55e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D55E8u;
        goto label_1d55e8;
    }
    ctx->pc = 0x1D55E0u;
    ctx->pc = 0x1D55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55E0u;
    // 0x1d55e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D55E8u;
label_1d55e8:
    // 0x1d55e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d55e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d55ec:
    // 0x1d55ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d55ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d55f0:
    // 0x1d55f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d55f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d55f4:
    // 0x1d55f4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d55f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d55f8:
    // 0x1d55f8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d55f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d55fc:
    // 0x1d55fc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d55fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d5600:
    // 0x1d5600: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d5600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d5604:
    // 0x1d5604: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d5604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d5608:
    // 0x1d5608: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d5608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1d560c:
    // 0x1d560c: 0x3e00008  jr          $ra
label_1d5610:
    if (ctx->pc == 0x1D5610u) {
        ctx->pc = 0x1D5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D560Cu;
        // 0x1d5610: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5614u;
        goto label_fallthrough_0x1d560c;
    }
    ctx->pc = 0x1D560Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D560Cu;
        // 0x1d5610: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D560Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d560c:
    ctx->pc = 0x1D5614u;
}
