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

// Function: entry_001804dc
// Address: 0x1804dc - 0x180840
void entry_001804dc_0x1804dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001804dc_0x1804dc");
#endif

    switch (ctx->pc) {
        case 0x180838u: goto label_180838;
        default: break;
    }

    ctx->pc = 0x1804dcu;

    // 0x1804dc: 0x83838674  lb          $v1, -0x798C($gp)
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936180)));
    // 0x1804e0: 0x146000d7  bnez        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1804E0u;
    {
        const bool branch_taken_0x1804e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804E0u;
        // 0x1804e4: 0x8cb00074  lw          $s0, 0x74($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804e0) {
            ctx->pc = 0x180840u;
            return;
        }
    }
    ctx->pc = 0x1804E8u;
    // 0x1804e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1804e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1804ec: 0x30060001  andi        $a2, $zero, 0x1
    ctx->pc = 0x1804ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1804f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1804f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1804f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1804f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1804f8: 0xfc208818  sd          $zero, -0x77E8($at)
    ctx->pc = 0x1804f8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936600), GPR_U64(ctx, 0));
    // 0x1804fc: 0x34028006  ori         $v0, $zero, 0x8006
    ctx->pc = 0x1804fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x180500: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x180500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x180504: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180508: 0xfc2387e0  sd          $v1, -0x7820($at)
    ctx->pc = 0x180508u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3687E0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3687E0u, _value); } while (0);
    // 0x18050c: 0x30160003  andi        $s6, $zero, 0x3
    ctx->pc = 0x18050cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x180510: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x180510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x180514: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180518: 0xfc2287e8  sd          $v0, -0x7818($at)
    ctx->pc = 0x180518u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3687E8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3687E8u, _value); } while (0);
    // 0x18051c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x18051cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x180520: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180524: 0x30020007  andi        $v0, $zero, 0x7
    ctx->pc = 0x180524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
    // 0x180528: 0x902d87f0  lbu         $t5, -0x7810($at)
    ctx->pc = 0x180528u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x3687F0u));
    // 0x18052c: 0x26040  sll         $t4, $v0, 1
    ctx->pc = 0x18052cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x180530: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x180530u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x180534: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x180534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x180538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18053c: 0x163900  sll         $a3, $s6, 4
    ctx->pc = 0x18053cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x180540: 0x240bfff1  addiu       $t3, $zero, -0xF
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x180544: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x180544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x180548: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x180548u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x18054c: 0x6a1c0  sll         $s4, $a2, 7
    ctx->pc = 0x18054cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x180550: 0x640e0002  daddiu      $t6, $zero, 0x2
    ctx->pc = 0x180550u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x180554: 0x2418fffb  addiu       $t8, $zero, -0x5
    ctx->pc = 0x180554u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x180558: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18055c: 0x6c880  sll         $t9, $a2, 2
    ctx->pc = 0x18055cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x180560: 0x902a87f1  lbu         $t2, -0x780F($at)
    ctx->pc = 0x180560u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936561)));
    // 0x180564: 0x641e0008  daddiu      $fp, $zero, 0x8
    ctx->pc = 0x180564u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x180568: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18056c: 0xfc228828  sd          $v0, -0x77D8($at)
    ctx->pc = 0x18056cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368828u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368828u, _value); } while (0);
    // 0x180570: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180574: 0x1a81024  and         $v0, $t5, $t0
    ctx->pc = 0x180574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 8));
    // 0x180578: 0x903387f2  lbu         $s3, -0x780E($at)
    ctx->pc = 0x180578u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936562)));
    // 0x18057c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x180580: 0x240dfff9  addiu       $t5, $zero, -0x7
    ctx->pc = 0x180580u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x180584: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180588: 0x2689824  and         $s3, $s3, $t0
    ctx->pc = 0x180588u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 8));
    // 0x18058c: 0xa02287f0  sb          $v0, -0x7810($at)
    ctx->pc = 0x18058cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936560), (uint8_t)GPR_U32(ctx, 2));
    // 0x180590: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180594: 0x1431024  and         $v0, $t2, $v1
    ctx->pc = 0x180594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x180598: 0x902f87f0  lbu         $t7, -0x7810($at)
    ctx->pc = 0x180598u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936560)));
    // 0x18059c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1805a0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805a4: 0x1eb5824  and         $t3, $t7, $t3
    ctx->pc = 0x1805a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x1805a8: 0xa02287f1  sb          $v0, -0x780F($at)
    ctx->pc = 0x1805a8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936561), (uint8_t)GPR_U32(ctx, 2));
    // 0x1805ac: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1805acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x1805b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805b4: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x1805b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1805b8: 0x902a87f1  lbu         $t2, -0x780F($at)
    ctx->pc = 0x1805b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936561)));
    // 0x1805bc: 0x262b825  or          $s7, $s3, $v0
    ctx->pc = 0x1805bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1805c0: 0x2413ff7f  addiu       $s3, $zero, -0x81
    ctx->pc = 0x1805c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1805c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805c8: 0x90358810  lbu         $s5, -0x77F0($at)
    ctx->pc = 0x1805c8u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)FAST_READ8(0x368810u));
    // 0x1805cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805d0: 0xa03787f2  sb          $s7, -0x780E($at)
    ctx->pc = 0x1805d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x3687F2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3687F2u, _value); } while (0);
    // 0x1805d4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805d8: 0x2417fff8  addiu       $s7, $zero, -0x8
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1805dc: 0x902f87f2  lbu         $t7, -0x780E($at)
    ctx->pc = 0x1805dcu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x3687F2u));
    // 0x1805e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805e4: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x1805e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1805e8: 0xa02b87f0  sb          $t3, -0x7810($at)
    ctx->pc = 0x1805e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936560), (uint8_t)GPR_U32(ctx, 11));
    // 0x1805ec: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1805ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1805f0: 0x1445824  and         $t3, $t2, $a0
    ctx->pc = 0x1805f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x1805f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1805f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1805f8: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x1805f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x1805fc: 0x2b35024  and         $t2, $s5, $s3
    ctx->pc = 0x1805fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 21) & GPR_U64(ctx, 19));
    // 0x180600: 0xa02b87f1  sb          $t3, -0x780F($at)
    ctx->pc = 0x180600u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936561), (uint8_t)GPR_U32(ctx, 11));
    // 0x180604: 0x1545025  or          $t2, $t2, $s4
    ctx->pc = 0x180604u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 20));
    // 0x180608: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18060c: 0x65840  sll         $t3, $a2, 1
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x180610: 0xa02a8810  sb          $t2, -0x77F0($at)
    ctx->pc = 0x180610u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936592), (uint8_t)GPR_U32(ctx, 10));
    // 0x180614: 0x6a940  sll         $s5, $a2, 5
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x180618: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18061c: 0x240afffd  addiu       $t2, $zero, -0x3
    ctx->pc = 0x18061cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x180620: 0x902c8810  lbu         $t4, -0x77F0($at)
    ctx->pc = 0x180620u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x368810u));
    // 0x180624: 0x2414ffdf  addiu       $s4, $zero, -0x21
    ctx->pc = 0x180624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x180628: 0x640e0010  daddiu      $t6, $zero, 0x10
    ctx->pc = 0x180628u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x18062c: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x18062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x180630: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180634: 0x1842024  and         $a0, $t4, $a0
    ctx->pc = 0x180634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
    // 0x180638: 0x902f8811  lbu         $t7, -0x77EF($at)
    ctx->pc = 0x180638u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936593)));
    // 0x18063c: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x18063cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x180640: 0x640c0006  daddiu      $t4, $zero, 0x6
    ctx->pc = 0x180640u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x180644: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180648: 0x1ea2024  and         $a0, $t7, $t2
    ctx->pc = 0x180648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 10));
    // 0x18064c: 0xa02d87f2  sb          $t5, -0x780E($at)
    ctx->pc = 0x18064cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936562), (uint8_t)GPR_U32(ctx, 13));
    // 0x180650: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x180650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x180654: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180658: 0x240dffef  addiu       $t5, $zero, -0x11
    ctx->pc = 0x180658u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18065c: 0xa0258810  sb          $a1, -0x77F0($at)
    ctx->pc = 0x18065cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368810u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368810u, _value); } while (0);
    // 0x180660: 0x240afff3  addiu       $t2, $zero, -0xD
    ctx->pc = 0x180660u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x180664: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180668: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x180668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18066c: 0xa0248811  sb          $a0, -0x77EF($at)
    ctx->pc = 0x18066cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368811u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368811u, _value); } while (0);
    // 0x180670: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180674: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x180674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x180678: 0x902b8810  lbu         $t3, -0x77F0($at)
    ctx->pc = 0x180678u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x368810u));
    // 0x18067c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180680: 0xa0258820  sb          $a1, -0x77E0($at)
    ctx->pc = 0x180680u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368820u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368820u, _value); } while (0);
    // 0x180684: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180688: 0xac248824  sw          $a0, -0x77DC($at)
    ctx->pc = 0x180688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368824u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x368824u, _value); } while (0);
    // 0x18068c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18068cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180690: 0x1742024  and         $a0, $t3, $s4
    ctx->pc = 0x180690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 20));
    // 0x180694: 0xa0258821  sb          $a1, -0x77DF($at)
    ctx->pc = 0x180694u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936609), (uint8_t)GPR_U32(ctx, 5));
    // 0x180698: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x180698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x18069c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806a0: 0xa0258822  sb          $a1, -0x77DE($at)
    ctx->pc = 0x1806a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368822u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368822u, _value); } while (0);
    // 0x1806a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806a8: 0xa0258823  sb          $a1, -0x77DD($at)
    ctx->pc = 0x1806a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368823u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368823u, _value); } while (0);
    // 0x1806ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806b0: 0xa0258804  sb          $a1, -0x77FC($at)
    ctx->pc = 0x1806b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368804u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368804u, _value); } while (0);
    // 0x1806b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806b8: 0x90338811  lbu         $s3, -0x77EF($at)
    ctx->pc = 0x1806b8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x368811u));
    // 0x1806bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806c0: 0x2789824  and         $s3, $s3, $t8
    ctx->pc = 0x1806c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 24));
    // 0x1806c4: 0xa0248810  sb          $a0, -0x77F0($at)
    ctx->pc = 0x1806c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936592), (uint8_t)GPR_U32(ctx, 4));
    // 0x1806c8: 0x2799825  or          $s3, $s3, $t9
    ctx->pc = 0x1806c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 25));
    // 0x1806cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806d0: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1806d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1806d4: 0x902f8810  lbu         $t7, -0x77F0($at)
    ctx->pc = 0x1806d4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x368810u));
    // 0x1806d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806dc: 0x1ed6824  and         $t5, $t7, $t5
    ctx->pc = 0x1806dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x1806e0: 0x902b8800  lbu         $t3, -0x7800($at)
    ctx->pc = 0x1806e0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936576)));
    // 0x1806e4: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1806e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1806e8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806ec: 0x1665824  and         $t3, $t3, $a2
    ctx->pc = 0x1806ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x1806f0: 0x90258830  lbu         $a1, -0x77D0($at)
    ctx->pc = 0x1806f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936624)));
    // 0x1806f4: 0x1765825  or          $t3, $t3, $s6
    ctx->pc = 0x1806f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 22));
    // 0x1806f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1806fc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1806fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x180700: 0xfc2487f8  sd          $a0, -0x7808($at)
    ctx->pc = 0x180700u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294936568), GPR_U64(ctx, 4));
    // 0x180704: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x180704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x180708: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18070c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180710: 0xfc248808  sd          $a0, -0x77F8($at)
    ctx->pc = 0x180710u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368808u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368808u, _value); } while (0);
    // 0x180714: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180718: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18071c: 0x90248840  lbu         $a0, -0x77C0($at)
    ctx->pc = 0x18071cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x368840u));
    // 0x180720: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180724: 0x942024  and         $a0, $a0, $s4
    ctx->pc = 0x180724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
    // 0x180728: 0xa0338811  sb          $s3, -0x77EF($at)
    ctx->pc = 0x180728u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936593), (uint8_t)GPR_U32(ctx, 19));
    // 0x18072c: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x18072cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x180730: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180734: 0xa02d8810  sb          $t5, -0x77F0($at)
    ctx->pc = 0x180734u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x368810u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368810u, _value); } while (0);
    // 0x180738: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18073c: 0xa02b8800  sb          $t3, -0x7800($at)
    ctx->pc = 0x18073cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x368800u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368800u, _value); } while (0);
    // 0x180740: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180744: 0xa0268830  sb          $a2, -0x77D0($at)
    ctx->pc = 0x180744u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x368830u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368830u, _value); } while (0);
    // 0x180748: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18074c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x180750: 0xfc258838  sd          $a1, -0x77C8($at)
    ctx->pc = 0x180750u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x368838u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368838u, _value); } while (0);
    // 0x180754: 0x24c687d0  addiu       $a2, $a2, -0x7830
    ctx->pc = 0x180754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936528));
    // 0x180758: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18075c: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x18075cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x180760: 0xa0248840  sb          $a0, -0x77C0($at)
    ctx->pc = 0x180760u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368840u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368840u, _value); } while (0);
    // 0x180764: 0x24a50a90  addiu       $a1, $a1, 0xA90
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2704));
    // 0x180768: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18076c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180770: 0xfc248848  sd          $a0, -0x77B8($at)
    ctx->pc = 0x180770u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x368848u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x368848u, _value); } while (0);
    // 0x180774: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180778: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x180778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x18077c: 0x90338811  lbu         $s3, -0x77EF($at)
    ctx->pc = 0x18077cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)FAST_READ8(0x368811u));
    // 0x180780: 0x248487e0  addiu       $a0, $a0, -0x7820
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936544));
    // 0x180784: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180788: 0x2684024  and         $t0, $s3, $t0
    ctx->pc = 0x180788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & GPR_U64(ctx, 8));
    // 0x18078c: 0x902f8810  lbu         $t7, -0x77F0($at)
    ctx->pc = 0x18078cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936592)));
    // 0x180790: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x180790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x180794: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180798: 0x1f71024  and         $v0, $t7, $s7
    ctx->pc = 0x180798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 23));
    // 0x18079c: 0x902e8800  lbu         $t6, -0x7800($at)
    ctx->pc = 0x18079cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294936576)));
    // 0x1807a0: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x1807a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x1807a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807a8: 0x902d8830  lbu         $t5, -0x77D0($at)
    ctx->pc = 0x1807a8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)FAST_READ8(0x368830u));
    // 0x1807ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807b0: 0x942b8840  lhu         $t3, -0x77C0($at)
    ctx->pc = 0x1807b0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x368840u));
    // 0x1807b4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807b8: 0xa0288811  sb          $t0, -0x77EF($at)
    ctx->pc = 0x1807b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368811u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368811u, _value); } while (0);
    // 0x1807bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807c0: 0x1aa4024  and         $t0, $t5, $t2
    ctx->pc = 0x1807c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x1807c4: 0xa0228810  sb          $v0, -0x77F0($at)
    ctx->pc = 0x1807c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1807c8: 0x1ca1024  and         $v0, $t6, $t2
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 10));
    // 0x1807cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807d0: 0x5e6025  or          $t4, $v0, $fp
    ctx->pc = 0x1807d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x1807d4: 0x64020004  daddiu      $v0, $zero, 0x4
    ctx->pc = 0x1807d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1807d8: 0xa02c8800  sb          $t4, -0x7800($at)
    ctx->pc = 0x1807d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936576), (uint8_t)GPR_U32(ctx, 12));
    // 0x1807dc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1807dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1807e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807e4: 0x2402fe3f  addiu       $v0, $zero, -0x1C1
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x1807e8: 0xa0288830  sb          $t0, -0x77D0($at)
    ctx->pc = 0x1807e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x368830u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368830u, _value); } while (0);
    // 0x1807ec: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x1807ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1807f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1807f4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1807f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1807f8: 0xa4228840  sh          $v0, -0x77C0($at)
    ctx->pc = 0x1807f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368840u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x368840u, _value); } while (0);
    // 0x1807fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180800: 0x90228800  lbu         $v0, -0x7800($at)
    ctx->pc = 0x180800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x368800u));
    // 0x180804: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x180808: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18080c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18080cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x180810: 0xa0228800  sb          $v0, -0x7800($at)
    ctx->pc = 0x180810u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x368800u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368800u, _value); } while (0);
    // 0x180814: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180818: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x18081c: 0x90238800  lbu         $v1, -0x7800($at)
    ctx->pc = 0x18081cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x368800u));
    // 0x180820: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x180820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x180824: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x180828: 0x64020040  daddiu      $v0, $zero, 0x40
    ctx->pc = 0x180828u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x18082c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180830: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x180830u;
    SET_GPR_U32(ctx, 31, 0x180838u);
    ctx->pc = 0x180834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180830u;
    // 0x180834: 0xa0228800  sb          $v0, -0x7800($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294936576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x180830u, 0x180838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180838u;
label_180838:
    // 0x180838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18083c: 0xa3838674  sb          $v1, -0x798C($gp)
    ctx->pc = 0x18083cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936180), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x180840u;
}
