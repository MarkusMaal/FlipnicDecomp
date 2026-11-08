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

// Function: FUN_00125050
// Address: 0x125050 - 0x1252b0
void FUN_00125050_0x125050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125050_0x125050");
#endif

    switch (ctx->pc) {
        case 0x125200u: goto label_125200;
        case 0x12521cu: goto label_12521c;
        case 0x125294u: goto label_125294;
        default: break;
    }

    ctx->pc = 0x125050u;

    // 0x125050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12505c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125060: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x125060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125064: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125068: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12506c: 0x8f828428  lw          $v0, -0x7BD8($gp)
    ctx->pc = 0x12506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x125070: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125074: 0xaf828428  sw          $v0, -0x7BD8($gp)
    ctx->pc = 0x125074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U32(ctx, 2));
    // 0x125078: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x125078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x12507c: 0x8f838428  lw          $v1, -0x7BD8($gp)
    ctx->pc = 0x12507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x125080: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x125080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x125084: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x125084u;
    {
        const bool branch_taken_0x125084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125084u;
        // 0x125088: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125084) {
            ctx->pc = 0x125090u;
            goto label_125090;
        }
    }
    ctx->pc = 0x12508Cu;
    // 0x12508c: 0xaf808428  sw          $zero, -0x7BD8($gp)
    ctx->pc = 0x12508cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U32(ctx, 0));
label_125090:
    // 0x125090: 0x8f828428  lw          $v0, -0x7BD8($gp)
    ctx->pc = 0x125090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x125094: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x125094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
    // 0x125098: 0x8382842c  lb          $v0, -0x7BD4($gp)
    ctx->pc = 0x125098u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935596)));
    // 0x12509c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x12509Cu;
    {
        const bool branch_taken_0x12509c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12509Cu;
        // 0x1250a0: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12509c) {
            ctx->pc = 0x12517Cu;
            goto label_12517c;
        }
    }
    ctx->pc = 0x1250A4u;
    // 0x1250a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1250a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1250a8: 0x90252d31  lbu         $a1, 0x2D31($at)
    ctx->pc = 0x1250a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11569)));
    // 0x1250ac: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x1250acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1250b0: 0xa382842c  sb          $v0, -0x7BD4($gp)
    ctx->pc = 0x1250b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935596), (uint8_t)GPR_U32(ctx, 2));
    // 0x1250b4: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x1250b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1250b8: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x1250b8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1250bc: 0x2407ff0f  addiu       $a3, $zero, -0xF1
    ctx->pc = 0x1250bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x1250c0: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x1250c0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x1250c4: 0x240a8000  addiu       $t2, $zero, -0x8000
    ctx->pc = 0x1250c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1250c8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1250c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1250cc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1250d0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1250d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1250d4: 0x90282d37  lbu         $t0, 0x2D37($at)
    ctx->pc = 0x1250d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11575)));
    // 0x1250d8: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x1250d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1250dc: 0x8b1825  or          $v1, $a0, $t3
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x1250e0: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x1250e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1250e4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1250e8: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1250e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1250ec: 0x90262d35  lbu         $a2, 0x2D35($at)
    ctx->pc = 0x1250ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11573)));
    // 0x1250f0: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1250f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1250f4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1250f8: 0xa0232d31  sb          $v1, 0x2D31($at)
    ctx->pc = 0x1250f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2D31u, _value); } while (0);
    // 0x1250fc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1250fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125100: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125104: 0x942b2d30  lhu         $t3, 0x2D30($at)
    ctx->pc = 0x125104u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x2B2D30u));
    // 0x125108: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12510c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x12510cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x125110: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x125110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x125114: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x125114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x125118: 0x6405000e  daddiu      $a1, $zero, 0xE
    ctx->pc = 0x125118u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x12511c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125120: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x125120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x125124: 0xa0272d37  sb          $a3, 0x2D37($at)
    ctx->pc = 0x125124u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11575), (uint8_t)GPR_U32(ctx, 7));
    // 0x125128: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12512c: 0x2407fff3  addiu       $a3, $zero, -0xD
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x125130: 0x90292d37  lbu         $t1, 0x2D37($at)
    ctx->pc = 0x125130u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x2B2D37u));
    // 0x125134: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125138: 0xa0232d35  sb          $v1, 0x2D35($at)
    ctx->pc = 0x125138u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D35u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2D35u, _value); } while (0);
    // 0x12513c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125140: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x125140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x125144: 0x90262d38  lbu         $a2, 0x2D38($at)
    ctx->pc = 0x125144u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x2B2D38u));
    // 0x125148: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12514c: 0xfc232d48  sd          $v1, 0x2D48($at)
    ctx->pc = 0x12514cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D48u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B2D48u, _value); } while (0);
    // 0x125150: 0x1421825  or          $v1, $t2, $v0
    ctx->pc = 0x125150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x125154: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125158: 0xa4232d30  sh          $v1, 0x2D30($at)
    ctx->pc = 0x125158u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2D30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2B2D30u, _value); } while (0);
    // 0x12515c: 0x1271024  and         $v0, $t1, $a3
    ctx->pc = 0x12515cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x125160: 0x481825  or          $v1, $v0, $t0
    ctx->pc = 0x125160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x125164: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125168: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x125168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x12516c: 0xa0232d37  sb          $v1, 0x2D37($at)
    ctx->pc = 0x12516cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11575), (uint8_t)GPR_U32(ctx, 3));
    // 0x125170: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x125170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x125174: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x125178: 0xa0222d38  sb          $v0, 0x2D38($at)
    ctx->pc = 0x125178u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B2D38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2D38u, _value); } while (0);
label_12517c:
    // 0x12517c: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x12517cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x125180: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x125180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x125184: 0x3c09002b  lui         $t1, 0x2B
    ctx->pc = 0x125184u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)43 << 16));
    // 0x125188: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12518c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x12518cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x125190: 0x25292d30  addiu       $t1, $t1, 0x2D30
    ctx->pc = 0x125190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11568));
    // 0x125194: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x125194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x125198: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x12519c: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x12519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1251a0: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1251a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1251a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1251a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1251a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251ac: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x1251acu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x1251b0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x1251b0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1251b4: 0xad690004  sw          $t1, 0x4($t3)
    ctx->pc = 0x1251b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 9));
    // 0x1251b8: 0xa5680000  sh          $t0, 0x0($t3)
    ctx->pc = 0x1251b8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1251bc: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x1251bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
    // 0x1251c0: 0xad64000c  sw          $a0, 0xC($t3)
    ctx->pc = 0x1251c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 4));
    // 0x1251c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1251c8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1251c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1251cc: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1251ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1251d0: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1251d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x1251d4: 0x96440060  lhu         $a0, 0x60($s2)
    ctx->pc = 0x1251d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1251d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1251d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1251dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1251dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1251e0: 0xa6420060  sh          $v0, 0x60($s2)
    ctx->pc = 0x1251e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x1251e4: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1251e8: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x1251e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1251ec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1251ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1251f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1251f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1251f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1251f8: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x1251F8u;
    SET_GPR_U32(ctx, 31, 0x125200u);
    ctx->pc = 0x1251FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1251F8u;
    // 0x1251fc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x1251F8u, 0x125200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125200u;
label_125200:
    // 0x125200: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x125204: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x125204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x125208: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x125208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12520c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12520cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x125210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x125210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x125214: 0xc048148  jal         func_120520
    ctx->pc = 0x125214u;
    SET_GPR_U32(ctx, 31, 0x12521Cu);
    ctx->pc = 0x125218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125214u;
    // 0x125218: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x125214u, 0x12521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12521Cu;
label_12521c:
    // 0x12521c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x12521cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x125220: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x125220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x125224: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x125224u;
    {
        const bool branch_taken_0x125224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125224u;
        // 0x125228: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125224) {
            ctx->pc = 0x125294u;
            goto label_125294;
        }
    }
    ctx->pc = 0x12522Cu;
    // 0x12522c: 0x32023fff  andi        $v0, $s0, 0x3FFF
    ctx->pc = 0x12522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x125230: 0xde460060  ld          $a2, 0x60($s2)
    ctx->pc = 0x125230u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x125234: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x125234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x125238: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x125238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x12523c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x125240: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x125240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x125244: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x125244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x125248: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x125248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12524c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12524cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x125250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x125250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125254: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125258: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x125258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x12525c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x125260: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x125260u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x125264: 0x8e46009c  lw          $a2, 0x9C($s2)
    ctx->pc = 0x125264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x125268: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x125268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12526c: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x12526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x125270: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x125270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x125274: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x125274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x125278: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x125278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12527c: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x12527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x125280: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x125280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x125284: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x125284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125288: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x125288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12528c: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x12528Cu;
    SET_GPR_U32(ctx, 31, 0x125294u);
    ctx->pc = 0x125290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12528Cu;
    // 0x125290: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x12528Cu, 0x125294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125294u;
label_125294:
    // 0x125294: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x125294u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x125298: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x125298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12529c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12529cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1252a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1252a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1252a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1252a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1252a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1252A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1252ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1252A8u;
        // 0x1252ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1252A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1252B0u;
}
