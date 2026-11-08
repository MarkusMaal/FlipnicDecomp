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

// Function: FUN_001382a0
// Address: 0x1382a0 - 0x1384e4
void FUN_001382a0_0x1382a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001382a0_0x1382a0");
#endif

    switch (ctx->pc) {
        case 0x1382a0u: goto label_1382a0;
        case 0x1382a4u: goto label_1382a4;
        case 0x1382a8u: goto label_1382a8;
        case 0x1382acu: goto label_1382ac;
        case 0x1382b0u: goto label_1382b0;
        case 0x1382b4u: goto label_1382b4;
        case 0x1382b8u: goto label_1382b8;
        case 0x1382bcu: goto label_1382bc;
        case 0x1382c0u: goto label_1382c0;
        case 0x1382c4u: goto label_1382c4;
        case 0x1382c8u: goto label_1382c8;
        case 0x1382ccu: goto label_1382cc;
        case 0x1382d0u: goto label_1382d0;
        case 0x1382d4u: goto label_1382d4;
        case 0x1382d8u: goto label_1382d8;
        case 0x1382dcu: goto label_1382dc;
        case 0x1382e0u: goto label_1382e0;
        case 0x1382e4u: goto label_1382e4;
        case 0x1382e8u: goto label_1382e8;
        case 0x1382ecu: goto label_1382ec;
        case 0x1382f0u: goto label_1382f0;
        case 0x1382f4u: goto label_1382f4;
        case 0x1382f8u: goto label_1382f8;
        case 0x1382fcu: goto label_1382fc;
        case 0x138300u: goto label_138300;
        case 0x138304u: goto label_138304;
        case 0x138308u: goto label_138308;
        case 0x13830cu: goto label_13830c;
        case 0x138310u: goto label_138310;
        case 0x138314u: goto label_138314;
        case 0x138318u: goto label_138318;
        case 0x13831cu: goto label_13831c;
        case 0x138320u: goto label_138320;
        case 0x138324u: goto label_138324;
        case 0x138328u: goto label_138328;
        case 0x13832cu: goto label_13832c;
        case 0x138330u: goto label_138330;
        case 0x138334u: goto label_138334;
        case 0x138338u: goto label_138338;
        case 0x13833cu: goto label_13833c;
        case 0x138340u: goto label_138340;
        case 0x138344u: goto label_138344;
        case 0x138348u: goto label_138348;
        case 0x13834cu: goto label_13834c;
        case 0x138350u: goto label_138350;
        case 0x138354u: goto label_138354;
        case 0x138358u: goto label_138358;
        case 0x13835cu: goto label_13835c;
        case 0x138360u: goto label_138360;
        case 0x138364u: goto label_138364;
        case 0x138368u: goto label_138368;
        case 0x13836cu: goto label_13836c;
        case 0x138370u: goto label_138370;
        case 0x138374u: goto label_138374;
        case 0x138378u: goto label_138378;
        case 0x13837cu: goto label_13837c;
        case 0x138380u: goto label_138380;
        case 0x138384u: goto label_138384;
        case 0x138388u: goto label_138388;
        case 0x13838cu: goto label_13838c;
        case 0x138390u: goto label_138390;
        case 0x138394u: goto label_138394;
        case 0x138398u: goto label_138398;
        case 0x13839cu: goto label_13839c;
        case 0x1383a0u: goto label_1383a0;
        case 0x1383a4u: goto label_1383a4;
        case 0x1383a8u: goto label_1383a8;
        case 0x1383acu: goto label_1383ac;
        case 0x1383b0u: goto label_1383b0;
        case 0x1383b4u: goto label_1383b4;
        case 0x1383b8u: goto label_1383b8;
        case 0x1383bcu: goto label_1383bc;
        case 0x1383c0u: goto label_1383c0;
        case 0x1383c4u: goto label_1383c4;
        case 0x1383c8u: goto label_1383c8;
        case 0x1383ccu: goto label_1383cc;
        case 0x1383d0u: goto label_1383d0;
        case 0x1383d4u: goto label_1383d4;
        case 0x1383d8u: goto label_1383d8;
        case 0x1383dcu: goto label_1383dc;
        case 0x1383e0u: goto label_1383e0;
        case 0x1383e4u: goto label_1383e4;
        case 0x1383e8u: goto label_1383e8;
        case 0x1383ecu: goto label_1383ec;
        case 0x1383f0u: goto label_1383f0;
        case 0x1383f4u: goto label_1383f4;
        case 0x1383f8u: goto label_1383f8;
        case 0x1383fcu: goto label_1383fc;
        case 0x138400u: goto label_138400;
        case 0x138404u: goto label_138404;
        case 0x138408u: goto label_138408;
        case 0x13840cu: goto label_13840c;
        case 0x138410u: goto label_138410;
        case 0x138414u: goto label_138414;
        case 0x138418u: goto label_138418;
        case 0x13841cu: goto label_13841c;
        case 0x138420u: goto label_138420;
        case 0x138424u: goto label_138424;
        case 0x138428u: goto label_138428;
        case 0x13842cu: goto label_13842c;
        case 0x138430u: goto label_138430;
        case 0x138434u: goto label_138434;
        case 0x138438u: goto label_138438;
        case 0x13843cu: goto label_13843c;
        case 0x138440u: goto label_138440;
        case 0x138444u: goto label_138444;
        case 0x138448u: goto label_138448;
        case 0x13844cu: goto label_13844c;
        case 0x138450u: goto label_138450;
        case 0x138454u: goto label_138454;
        case 0x138458u: goto label_138458;
        case 0x13845cu: goto label_13845c;
        case 0x138460u: goto label_138460;
        case 0x138464u: goto label_138464;
        case 0x138468u: goto label_138468;
        case 0x13846cu: goto label_13846c;
        case 0x138470u: goto label_138470;
        case 0x138474u: goto label_138474;
        case 0x138478u: goto label_138478;
        case 0x13847cu: goto label_13847c;
        case 0x138480u: goto label_138480;
        case 0x138484u: goto label_138484;
        case 0x138488u: goto label_138488;
        case 0x13848cu: goto label_13848c;
        case 0x138490u: goto label_138490;
        case 0x138494u: goto label_138494;
        case 0x138498u: goto label_138498;
        case 0x13849cu: goto label_13849c;
        case 0x1384a0u: goto label_1384a0;
        case 0x1384a4u: goto label_1384a4;
        case 0x1384a8u: goto label_1384a8;
        case 0x1384acu: goto label_1384ac;
        case 0x1384b0u: goto label_1384b0;
        case 0x1384b4u: goto label_1384b4;
        case 0x1384b8u: goto label_1384b8;
        case 0x1384bcu: goto label_1384bc;
        case 0x1384c0u: goto label_1384c0;
        case 0x1384c4u: goto label_1384c4;
        case 0x1384c8u: goto label_1384c8;
        case 0x1384ccu: goto label_1384cc;
        case 0x1384d0u: goto label_1384d0;
        case 0x1384d4u: goto label_1384d4;
        case 0x1384d8u: goto label_1384d8;
        case 0x1384dcu: goto label_1384dc;
        case 0x1384e0u: goto label_1384e0;
        default: break;
    }

    ctx->pc = 0x1382a0u;

label_1382a0:
    // 0x1382a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1382a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1382a4:
    // 0x1382a4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1382a8:
    // 0x1382a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1382a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1382ac:
    // 0x1382ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1382acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1382b0:
    // 0x1382b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1382b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1382b4:
    // 0x1382b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1382b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1382b8:
    // 0x1382b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1382b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1382bc:
    // 0x1382bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1382bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1382c0:
    // 0x1382c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1382c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1382c4:
    // 0x1382c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1382c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1382c8:
    // 0x1382c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1382c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1382cc:
    // 0x1382cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1382ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1382d0:
    // 0x1382d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1382d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1382d4:
    // 0x1382d4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1382d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1382d8:
    // 0x1382d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1382d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1382dc:
    // 0x1382dc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1382dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1382e0:
    // 0x1382e0: 0x8ce70088  lw          $a3, 0x88($a3)
    ctx->pc = 0x1382e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_1382e4:
    // 0x1382e4: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1382e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_1382e8:
    // 0x1382e8: 0xa1060003  sb          $a2, 0x3($t0)
    ctx->pc = 0x1382e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 6));
label_1382ec:
    // 0x1382ec: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x1382ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
label_1382f0:
    // 0x1382f0: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x1382f0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
label_1382f4:
    // 0x1382f4: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1382f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_1382f8:
    // 0x1382f8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x1382f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_1382fc:
    // 0x1382fc: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1382fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_138300:
    // 0x138300: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x138300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_138304:
    // 0x138304: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x138304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_138308:
    // 0x138308: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x138308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_13830c:
    // 0x13830c: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x13830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_138310:
    // 0x138310: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
label_138314:
    if (ctx->pc == 0x138314u) {
        ctx->pc = 0x138318u;
        goto label_138318;
    }
    ctx->pc = 0x138310u;
    {
        const bool branch_taken_0x138310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x138310) {
            ctx->pc = 0x13838Cu;
            goto label_13838c;
        }
    }
    ctx->pc = 0x138318u;
label_138318:
    // 0x138318: 0x8ca70068  lw          $a3, 0x68($a1)
    ctx->pc = 0x138318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_13831c:
    // 0x13831c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_138320:
    // 0x138320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138324:
    // 0x138324: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x138324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_138328:
    // 0x138328: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x138328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_13832c:
    // 0x13832c: 0x34640404  ori         $a0, $v1, 0x404
    ctx->pc = 0x13832cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_138330:
    // 0x138330: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x138330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
label_138334:
    // 0x138334: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x138334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138338:
    // 0x138338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13833c:
    // 0x13833c: 0x3463801e  ori         $v1, $v1, 0x801E
    ctx->pc = 0x13833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32798);
label_138340:
    // 0x138340: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_138344:
    // 0x138344: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x138344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_138348:
    // 0x138348: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x138348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_13834c:
    // 0x13834c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13834cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_138350:
    // 0x138350: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x138350u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_138354:
    // 0x138354: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x138354u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_138358:
    // 0x138358: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x138358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_13835c:
    // 0x13835c: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x13835cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
label_138360:
    // 0x138360: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x138360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_138364:
    // 0x138364: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x138364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_138368:
    // 0x138368: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x138368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13836c:
    // 0x13836c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_138370:
    // 0x138370: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x138370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_138374:
    // 0x138374: 0x7ba40090  lq          $a0, 0x90($sp)
    ctx->pc = 0x138374u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_138378:
    // 0x138378: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x138378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13837c:
    // 0x13837c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13837cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_138380:
    // 0x138380: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x138380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_138384:
    // 0x138384: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x138384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_138388:
    // 0x138388: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x138388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_13838c:
    // 0x13838c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x13838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_138390:
    // 0x138390: 0x8c770058  lw          $s7, 0x58($v1)
    ctx->pc = 0x138390u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_138394:
    // 0x138394: 0x8c72005c  lw          $s2, 0x5C($v1)
    ctx->pc = 0x138394u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_138398:
    // 0x138398: 0x257082b  sltu        $at, $s2, $s7
    ctx->pc = 0x138398u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_13839c:
    // 0x13839c: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
label_1383a0:
    if (ctx->pc == 0x1383A0u) {
        ctx->pc = 0x1383A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13839Cu;
        // 0x1383a0: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383A4u;
        goto label_1383a4;
    }
    ctx->pc = 0x13839Cu;
    {
        const bool branch_taken_0x13839c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13839Cu;
        // 0x1383a0: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13839c) {
            ctx->pc = 0x1384B4u;
            goto label_1384b4;
        }
    }
    ctx->pc = 0x1383A4u;
label_1383a4:
    // 0x1383a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1383a8:
    // 0x1383a8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1383a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1383ac:
    // 0x1383ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1383acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1383b0:
    // 0x1383b0: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x1383b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1383b4:
    // 0x1383b4: 0x3a940  sll         $s5, $v1, 5
    ctx->pc = 0x1383b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1383b8:
    // 0x1383b8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1383b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1383bc:
    // 0x1383bc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1383bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1383c0:
    // 0x1383c0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1383c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1383c4:
    // 0x1383c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1383c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1383c8:
    // 0x1383c8: 0x3c036c02  lui         $v1, 0x6C02
    ctx->pc = 0x1383c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27650 << 16));
label_1383cc:
    // 0x1383cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1383ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1383d0:
    // 0x1383d0: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x1383d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
label_1383d4:
    // 0x1383d4: 0x34638019  ori         $v1, $v1, 0x8019
    ctx->pc = 0x1383d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32793);
label_1383d8:
    // 0x1383d8: 0xf43821  addu        $a3, $a3, $s4
    ctx->pc = 0x1383d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
label_1383dc:
    // 0x1383dc: 0xa1060003  sb          $a2, 0x3($t0)
    ctx->pc = 0x1383dcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 6));
label_1383e0:
    // 0x1383e0: 0xa1000002  sb          $zero, 0x2($t0)
    ctx->pc = 0x1383e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 0));
label_1383e4:
    // 0x1383e4: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x1383e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
label_1383e8:
    // 0x1383e8: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x1383e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
label_1383ec:
    // 0x1383ec: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x1383ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_1383f0:
    // 0x1383f0: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x1383f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_1383f4:
    // 0x1383f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1383f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1383f8:
    // 0x1383f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1383f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1383fc:
    // 0x1383fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1383fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_138400:
    // 0x138400: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x138400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_138404:
    // 0x138404: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x138404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_138408:
    // 0x138408: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x138408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_13840c:
    // 0x13840c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_138410:
    if (ctx->pc == 0x138410u) {
        ctx->pc = 0x138410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13840Cu;
        // 0x138410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138414u;
        goto label_138414;
    }
    ctx->pc = 0x13840Cu;
    {
        const bool branch_taken_0x13840c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x138410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13840Cu;
        // 0x138410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13840c) {
            ctx->pc = 0x13843Cu;
            goto label_13843c;
        }
    }
    ctx->pc = 0x138414u;
label_138414:
    // 0x138414: 0xc0485c0  jal         func_121700
label_138418:
    if (ctx->pc == 0x138418u) {
        ctx->pc = 0x13841Cu;
        goto label_13841c;
    }
    ctx->pc = 0x138414u;
    SET_GPR_U32(ctx, 31, 0x13841Cu);
    ctx->pc = 0x121700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121700u, 0x138414u, 0x13841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13841Cu;
label_13841c:
    // 0x13841c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x13841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_138420:
    // 0x138420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138424:
    // 0x138424: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x138424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_138428:
    // 0x138428: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x138428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13842c:
    // 0x13842c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13842cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_138430:
    // 0x138430: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x138430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_138434:
    // 0x138434: 0x320f809  jalr        $t9
label_138438:
    if (ctx->pc == 0x138438u) {
        ctx->pc = 0x138438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138434u;
        // 0x138438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13843Cu;
        goto label_13843c;
    }
    ctx->pc = 0x138434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13843Cu);
        ctx->pc = 0x138438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138434u;
        // 0x138438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138434u, 0x13843Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13843Cu;
label_13843c:
    // 0x13843c: 0x0  nop
    ctx->pc = 0x13843cu;
    // NOP
label_138440:
    // 0x138440: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x138440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_138444:
    // 0x138444: 0x8f938594  lw          $s3, -0x7A6C($gp)
    ctx->pc = 0x138444u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
label_138448:
    // 0x138448: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x138448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
label_13844c:
    // 0x13844c: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x13844cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_138450:
    // 0x138450: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x138450u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_138454:
    // 0x138454: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_138458:
    if (ctx->pc == 0x138458u) {
        ctx->pc = 0x138458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138454u;
        // 0x138458: 0x95b021  addu        $s6, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13845Cu;
        goto label_13845c;
    }
    ctx->pc = 0x138454u;
    {
        const bool branch_taken_0x138454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138454u;
        // 0x138458: 0x95b021  addu        $s6, $a0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138454) {
            ctx->pc = 0x138468u;
            goto label_138468;
        }
    }
    ctx->pc = 0x13845Cu;
label_13845c:
    // 0x13845c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13845cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_138460:
    // 0x138460: 0xc04e948  jal         func_13A520
label_138464:
    if (ctx->pc == 0x138464u) {
        ctx->pc = 0x138464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138460u;
        // 0x138464: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138468u;
        goto label_138468;
    }
    ctx->pc = 0x138460u;
    SET_GPR_U32(ctx, 31, 0x138468u);
    ctx->pc = 0x138464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138460u;
    // 0x138464: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A520u, 0x138460u, 0x138468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138468u;
label_138468:
    // 0x138468: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_13846c:
    // 0x13846c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x13846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_138470:
    // 0x138470: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x138470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_138474:
    // 0x138474: 0x8c650080  lw          $a1, 0x80($v1)
    ctx->pc = 0x138474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_138478:
    // 0x138478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x138478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13847c:
    // 0x13847c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x13847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_138480:
    // 0x138480: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x138480u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_138484:
    // 0x138484: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x138484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
label_138488:
    // 0x138488: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x138488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
label_13848c:
    // 0x13848c: 0x257182b  sltu        $v1, $s2, $s7
    ctx->pc = 0x13848cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_138490:
    // 0x138490: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x138490u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
label_138494:
    // 0x138494: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x138494u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_138498:
    // 0x138498: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x138498u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
label_13849c:
    // 0x13849c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13849cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1384a0:
    // 0x1384a0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1384a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1384a4:
    // 0x1384a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1384a8:
    // 0x1384a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1384a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1384ac:
    // 0x1384ac: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_1384b0:
    if (ctx->pc == 0x1384B0u) {
        ctx->pc = 0x1384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384ACu;
        // 0x1384b0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384B4u;
        goto label_1384b4;
    }
    ctx->pc = 0x1384ACu;
    {
        const bool branch_taken_0x1384ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384ACu;
        // 0x1384b0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384ac) {
            ctx->pc = 0x1383B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1383b8;
        }
    }
    ctx->pc = 0x1384B4u;
label_1384b4:
    // 0x1384b4: 0x0  nop
    ctx->pc = 0x1384b4u;
    // NOP
label_1384b8:
    // 0x1384b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1384b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1384bc:
    // 0x1384bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1384bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1384c0:
    // 0x1384c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1384c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1384c4:
    // 0x1384c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1384c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1384c8:
    // 0x1384c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1384c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1384cc:
    // 0x1384cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1384ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1384d0:
    // 0x1384d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1384d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1384d4:
    // 0x1384d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1384d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1384d8:
    // 0x1384d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1384d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1384dc:
    // 0x1384dc: 0x3e00008  jr          $ra
label_1384e0:
    if (ctx->pc == 0x1384E0u) {
        ctx->pc = 0x1384E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384DCu;
        // 0x1384e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384E4u;
        goto label_fallthrough_0x1384dc;
    }
    ctx->pc = 0x1384DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1384E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384DCu;
        // 0x1384e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1384DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1384dc:
    ctx->pc = 0x1384E4u;
}
