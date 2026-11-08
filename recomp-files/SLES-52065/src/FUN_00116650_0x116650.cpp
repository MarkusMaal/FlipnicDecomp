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

// Function: FUN_00116650
// Address: 0x116650 - 0x116ba0
void FUN_00116650_0x116650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116650_0x116650");
#endif

    switch (ctx->pc) {
        case 0x116688u: goto label_116688;
        case 0x116824u: goto label_116824;
        case 0x116a30u: goto label_116a30;
        case 0x116a9cu: goto label_116a9c;
        default: break;
    }

    ctx->pc = 0x116650u;

    // 0x116650: 0x8f838010  lw          $v1, -0x7FF0($gp)
    ctx->pc = 0x116650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x116654: 0x28620270  slti        $v0, $v1, 0x270
    ctx->pc = 0x116654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
    // 0x116658: 0x1440013b  bnez        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x116658u;
    {
        const bool branch_taken_0x116658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116658u;
        // 0x11665c: 0x24020271  addiu       $v0, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116658) {
            ctx->pc = 0x116B48u;
            goto label_116b48;
        }
    }
    ctx->pc = 0x116660u;
    // 0x116660: 0x14620069  bne         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x116660u;
    {
        const bool branch_taken_0x116660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x116664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116660u;
        // 0x116664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116660) {
            ctx->pc = 0x116808u;
            goto label_116808;
        }
    }
    ctx->pc = 0x116668u;
    // 0x116668: 0x24091105  addiu       $t1, $zero, 0x1105
    ctx->pc = 0x116668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4357));
    // 0x11666c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11666cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116670: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116674: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116678: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x116678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x11667c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x11667cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x116680: 0x2442cce0  addiu       $v0, $v0, -0x3320
    ctx->pc = 0x116680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954208));
    // 0x116684: 0x34c70dcd  ori         $a3, $a2, 0xDCD
    ctx->pc = 0x116684u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3533);
label_116688:
    // 0x116688: 0x1275018  mult        $t2, $t1, $a3
    ctx->pc = 0x116688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x11668c: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x11668cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x116690: 0x1254024  and         $t0, $t1, $a1
    ctx->pc = 0x116690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x116694: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x116694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x116698: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x116698u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x11669c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x11669cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1166a0: 0x28680270  slti        $t0, $v1, 0x270
    ctx->pc = 0x1166a0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
    // 0x1166a4: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1166a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1166a8: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1166a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1166ac: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1166acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1166b0: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1166b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1166b4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1166b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1166b8: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x1166b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1166bc: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x1166bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1166c0: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1166c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1166c4: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1166c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1166c8: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x1166c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x1166cc: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1166ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1166d0: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x1166d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1166d4: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1166d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1166d8: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1166d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1166dc: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1166dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1166e0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1166e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1166e4: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x1166e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x1166e8: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x1166e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1166ec: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1166ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1166f0: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1166f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1166f4: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x1166f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x1166f8: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1166f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1166fc: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x1166fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x116700: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x116700u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116704: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x116704u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x116708: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x11670c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x11670cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x116710: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x116710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x116714: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x116714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x116718: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x116718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11671c: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x11671cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x116720: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x116720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    // 0x116724: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x116724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x116728: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x116728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11672c: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116730: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x116730u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x116734: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x116734u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x116738: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x116738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x11673c: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x11673cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    // 0x116740: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x116740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x116744: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x116748: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x116748u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x11674c: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x11674cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x116750: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x116750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x116754: 0x8cc90010  lw          $t1, 0x10($a2)
    ctx->pc = 0x116754u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x116758: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x116758u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11675c: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x11675cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x116760: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x116760u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x116764: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x116764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x116768: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x116768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x11676c: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x11676cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x116770: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x116770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x116774: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x116774u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x116778: 0xacc90014  sw          $t1, 0x14($a2)
    ctx->pc = 0x116778u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 9));
    // 0x11677c: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x11677cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x116780: 0x8cc90014  lw          $t1, 0x14($a2)
    ctx->pc = 0x116780u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x116784: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x116784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116788: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x116788u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x11678c: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x11678cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x116790: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x116790u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x116794: 0xacc90014  sw          $t1, 0x14($a2)
    ctx->pc = 0x116794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 9));
    // 0x116798: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x116798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x11679c: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x11679cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1167a0: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1167a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1167a4: 0xacc90018  sw          $t1, 0x18($a2)
    ctx->pc = 0x1167a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 9));
    // 0x1167a8: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1167a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1167ac: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x1167acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1167b0: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1167b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1167b4: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1167b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1167b8: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1167b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1167bc: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1167bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1167c0: 0xacc90018  sw          $t1, 0x18($a2)
    ctx->pc = 0x1167c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 9));
    // 0x1167c4: 0x1674818  mult        $t1, $t3, $a3
    ctx->pc = 0x1167c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x1167c8: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1167c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1167cc: 0x1454824  and         $t1, $t2, $a1
    ctx->pc = 0x1167ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x1167d0: 0xacc9001c  sw          $t1, 0x1C($a2)
    ctx->pc = 0x1167d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 9));
    // 0x1167d4: 0x1475018  mult        $t2, $t2, $a3
    ctx->pc = 0x1167d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1167d8: 0x8cc9001c  lw          $t1, 0x1C($a2)
    ctx->pc = 0x1167d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1167dc: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x1167dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1167e0: 0x1655024  and         $t2, $t3, $a1
    ctx->pc = 0x1167e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x1167e4: 0xa5402  srl         $t2, $t2, 16
    ctx->pc = 0x1167e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1167e8: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1167e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1167ec: 0xacc9001c  sw          $t1, 0x1C($a2)
    ctx->pc = 0x1167ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 9));
    // 0x1167f0: 0x1673018  mult        $a2, $t3, $a3
    ctx->pc = 0x1167f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1167f4: 0x1500ffa4  bnez        $t0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x1167F4u;
    {
        const bool branch_taken_0x1167f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1167F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167F4u;
        // 0x1167f8: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167f4) {
            ctx->pc = 0x116688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116688;
        }
    }
    ctx->pc = 0x1167FCu;
    // 0x1167fc: 0x24020270  addiu       $v0, $zero, 0x270
    ctx->pc = 0x1167fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x116800: 0xaf828010  sw          $v0, -0x7FF0($gp)
    ctx->pc = 0x116800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 2));
    // 0x116804: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116808:
    // 0x116808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11680c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x116810: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x116810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x116814: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x116814u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x116818: 0x2463cce0  addiu       $v1, $v1, -0x3320
    ctx->pc = 0x116818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954208));
    // 0x11681c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x11681cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x116820: 0x27828018  addiu       $v0, $gp, -0x7FE8
    ctx->pc = 0x116820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
label_116824:
    // 0x116824: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x116824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x116828: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x116828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11682c: 0x8ccc0004  lw          $t4, 0x4($a2)
    ctx->pc = 0x11682cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x116830: 0x288900db  slti        $t1, $a0, 0xDB
    ctx->pc = 0x116830u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)219) ? 1 : 0);
    // 0x116834: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x116834u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x116838: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x116838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x11683c: 0x8ccb0634  lw          $t3, 0x634($a2)
    ctx->pc = 0x11683cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1588)));
    // 0x116840: 0x1876024  and         $t4, $t4, $a3
    ctx->pc = 0x116840u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 7));
    // 0x116844: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116844u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116848: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x11684c: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x11684cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x116850: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x116850u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116854: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116854u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116858: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116858u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11685c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x11685cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116860: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116860u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116864: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116864u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116868: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x116868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x11686c: 0x8ccc0008  lw          $t4, 0x8($a2)
    ctx->pc = 0x11686cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x116870: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x116870u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x116874: 0x8ccb0638  lw          $t3, 0x638($a2)
    ctx->pc = 0x116874u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1592)));
    // 0x116878: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x116878u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x11687c: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x11687cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x116880: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116880u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116884: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116884u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x116888: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x116888u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x11688c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x11688cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116890: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116890u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116894: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116898: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116898u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11689c: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x11689cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1168a0: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x1168a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x1168a4: 0xacca0004  sw          $t2, 0x4($a2)
    ctx->pc = 0x1168a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 10));
    // 0x1168a8: 0x8ccc000c  lw          $t4, 0xC($a2)
    ctx->pc = 0x1168a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1168ac: 0x8cca0008  lw          $t2, 0x8($a2)
    ctx->pc = 0x1168acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1168b0: 0x8ccb063c  lw          $t3, 0x63C($a2)
    ctx->pc = 0x1168b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1596)));
    // 0x1168b4: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x1168b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x1168b8: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x1168b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x1168bc: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x1168bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1168c0: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1168c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x1168c4: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1168c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1168c8: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1168c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1168cc: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x1168ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x1168d0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1168d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1168d4: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x1168d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1168d8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1168d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1168dc: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x1168dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x1168e0: 0xacca0008  sw          $t2, 0x8($a2)
    ctx->pc = 0x1168e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 10));
    // 0x1168e4: 0x8ccc0010  lw          $t4, 0x10($a2)
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1168e8: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x1168e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1168ec: 0x8ccb0640  lw          $t3, 0x640($a2)
    ctx->pc = 0x1168ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1600)));
    // 0x1168f0: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x1168f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x1168f4: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x1168f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x1168f8: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x1168f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1168fc: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1168fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x116900: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x116900u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x116904: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x116904u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116908: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116908u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x11690c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x11690cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116910: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116914: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116914u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116918: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116918u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x11691c: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x11691cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
    // 0x116920: 0x8ccc0014  lw          $t4, 0x14($a2)
    ctx->pc = 0x116920u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x116924: 0x8cca0010  lw          $t2, 0x10($a2)
    ctx->pc = 0x116924u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x116928: 0x8ccb0644  lw          $t3, 0x644($a2)
    ctx->pc = 0x116928u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1604)));
    // 0x11692c: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x11692cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x116930: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x116930u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x116934: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116934u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116938: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116938u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x11693c: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x116940: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x116940u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116944: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116944u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116948: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116948u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11694c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x11694cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116950: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116950u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116954: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116954u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116958: 0xacca0010  sw          $t2, 0x10($a2)
    ctx->pc = 0x116958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 10));
    // 0x11695c: 0x8ccc0018  lw          $t4, 0x18($a2)
    ctx->pc = 0x11695cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x116960: 0x8cca0014  lw          $t2, 0x14($a2)
    ctx->pc = 0x116960u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x116964: 0x8ccb0648  lw          $t3, 0x648($a2)
    ctx->pc = 0x116964u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1608)));
    // 0x116968: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x116968u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x11696c: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x11696cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x116970: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x116970u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x116974: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x116974u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x116978: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x116978u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x11697c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x11697cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x116980: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x116980u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x116984: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x116984u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116988: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11698c: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x11698cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116990: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116990u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116994: 0xacca0014  sw          $t2, 0x14($a2)
    ctx->pc = 0x116994u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 10));
    // 0x116998: 0x8ccc001c  lw          $t4, 0x1C($a2)
    ctx->pc = 0x116998u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x11699c: 0x8cca0018  lw          $t2, 0x18($a2)
    ctx->pc = 0x11699cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1169a0: 0x8ccb064c  lw          $t3, 0x64C($a2)
    ctx->pc = 0x1169a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1612)));
    // 0x1169a4: 0xc607c  dsll32      $t4, $t4, 1
    ctx->pc = 0x1169a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 1));
    // 0x1169a8: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x1169a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x1169ac: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x1169acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1169b0: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1169b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x1169b4: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1169b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1169b8: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1169b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1169bc: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x1169bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x1169c0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1169c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1169c4: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x1169c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1169c8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1169c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1169cc: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x1169ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x1169d0: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x1169d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
    // 0x1169d4: 0x8cca0020  lw          $t2, 0x20($a2)
    ctx->pc = 0x1169d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1169d8: 0x8ccc001c  lw          $t4, 0x1C($a2)
    ctx->pc = 0x1169d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1169dc: 0x8ccb0650  lw          $t3, 0x650($a2)
    ctx->pc = 0x1169dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1616)));
    // 0x1169e0: 0xa507c  dsll32      $t2, $t2, 1
    ctx->pc = 0x1169e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 1));
    // 0x1169e4: 0x1886024  and         $t4, $t4, $t0
    ctx->pc = 0x1169e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 8));
    // 0x1169e8: 0xa507e  dsrl32      $t2, $t2, 1
    ctx->pc = 0x1169e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 1));
    // 0x1169ec: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x1169ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x1169f0: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x1169f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1169f4: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x1169f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1169f8: 0x18b5826  xor         $t3, $t4, $t3
    ctx->pc = 0x1169f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 11));
    // 0x1169fc: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1169fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x116a00: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x116a04: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x116a04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116a08: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x116a08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x116a0c: 0x1520ff85  bnez        $t1, . + 4 + (-0x7B << 2)
    ctx->pc = 0x116A0Cu;
    {
        const bool branch_taken_0x116a0c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A0Cu;
        // 0x116a10: 0xacca001c  sw          $t2, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a0c) {
            ctx->pc = 0x116824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116824;
        }
    }
    ctx->pc = 0x116A14u;
    // 0x116a14: 0x288100e3  slti        $at, $a0, 0xE3
    ctx->pc = 0x116a14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)227) ? 1 : 0);
    // 0x116a18: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x116A18u;
    {
        const bool branch_taken_0x116a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A18u;
        // 0x116a1c: 0x45080  sll         $t2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a18) {
            ctx->pc = 0x116A80u;
            goto label_116a80;
        }
    }
    ctx->pc = 0x116A20u;
    // 0x116a20: 0x3c090023  lui         $t1, 0x23
    ctx->pc = 0x116a20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)35 << 16));
    // 0x116a24: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x116a24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x116a28: 0x2529cce0  addiu       $t1, $t1, -0x3320
    ctx->pc = 0x116a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954208));
    // 0x116a2c: 0x27858018  addiu       $a1, $gp, -0x7FE8
    ctx->pc = 0x116a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
label_116a30:
    // 0x116a30: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x116a30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x116a34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116a38: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x116a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x116a3c: 0x288200e3  slti        $v0, $a0, 0xE3
    ctx->pc = 0x116a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)227) ? 1 : 0);
    // 0x116a40: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x116a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x116a44: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x116a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x116a48: 0x8d660634  lw          $a2, 0x634($t3)
    ctx->pc = 0x116a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1588)));
    // 0x116a4c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x116a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x116a50: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x116a50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x116a54: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x116a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x116a58: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x116a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x116a5c: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x116a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x116a60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x116a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116a64: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x116a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x116a68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116a6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x116a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x116a70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116a74: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x116a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x116a78: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x116A78u;
    {
        const bool branch_taken_0x116a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A78u;
        // 0x116a7c: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a78) {
            ctx->pc = 0x116A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a30;
        }
    }
    ctx->pc = 0x116A80u;
label_116a80:
    // 0x116a80: 0x2881026f  slti        $at, $a0, 0x26F
    ctx->pc = 0x116a80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)623) ? 1 : 0);
    // 0x116a84: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x116A84u;
    {
        const bool branch_taken_0x116a84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A84u;
        // 0x116a88: 0x45080  sll         $t2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a84) {
            ctx->pc = 0x116AECu;
            goto label_116aec;
        }
    }
    ctx->pc = 0x116A8Cu;
    // 0x116a8c: 0x3c090023  lui         $t1, 0x23
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)35 << 16));
    // 0x116a90: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x116a90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x116a94: 0x2529cce0  addiu       $t1, $t1, -0x3320
    ctx->pc = 0x116a94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954208));
    // 0x116a98: 0x27858018  addiu       $a1, $gp, -0x7FE8
    ctx->pc = 0x116a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
label_116a9c:
    // 0x116a9c: 0x12a5821  addu        $t3, $t1, $t2
    ctx->pc = 0x116a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x116aa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116aa4: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x116aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x116aa8: 0x2882026f  slti        $v0, $a0, 0x26F
    ctx->pc = 0x116aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)623) ? 1 : 0);
    // 0x116aac: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x116aacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x116ab0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x116ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x116ab4: 0x8d66fc74  lw          $a2, -0x38C($t3)
    ctx->pc = 0x116ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294966388)));
    // 0x116ab8: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x116ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x116abc: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x116abcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x116ac0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x116ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x116ac4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x116ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x116ac8: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x116ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x116acc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x116accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116ad0: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x116ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x116ad4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116ad8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x116adc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x116adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116ae0: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x116ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x116ae4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x116AE4u;
    {
        const bool branch_taken_0x116ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE4u;
        // 0x116ae8: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ae4) {
            ctx->pc = 0x116A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116a9c;
        }
    }
    ctx->pc = 0x116AECu;
label_116aec:
    // 0x116aec: 0x0  nop
    ctx->pc = 0x116aecu;
    // NOP
    // 0x116af0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116af4: 0x8c26d69c  lw          $a2, -0x2964($at)
    ctx->pc = 0x116af4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x22D69Cu));
    // 0x116af8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x116af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x116afc: 0x27828018  addiu       $v0, $gp, -0x7FE8
    ctx->pc = 0x116afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934552));
    // 0x116b00: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116b04: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x116b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x116b08: 0x8c23cce0  lw          $v1, -0x3320($at)
    ctx->pc = 0x116b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954208)));
    // 0x116b0c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x116b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x116b10: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116b14: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x116b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x116b18: 0x8c24d310  lw          $a0, -0x2CF0($at)
    ctx->pc = 0x116b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955792)));
    // 0x116b1c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x116b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x116b20: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x116b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x116b24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x116b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116b28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x116b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116b30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x116b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116b34: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x116b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x116b38: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x116b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x116b3c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x116b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x116b40: 0xaf808010  sw          $zero, -0x7FF0($gp)
    ctx->pc = 0x116b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 0));
    // 0x116b44: 0xac22d69c  sw          $v0, -0x2964($at)
    ctx->pc = 0x116b44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956700), GPR_U32(ctx, 2));
label_116b48:
    // 0x116b48: 0x8f858010  lw          $a1, -0x7FF0($gp)
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x116b4c: 0x3c029d2c  lui         $v0, 0x9D2C
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40236 << 16));
    // 0x116b50: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x116b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x116b54: 0x34445680  ori         $a0, $v0, 0x5680
    ctx->pc = 0x116b54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22144);
    // 0x116b58: 0x24c6cce0  addiu       $a2, $a2, -0x3320
    ctx->pc = 0x116b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954208));
    // 0x116b5c: 0x3c03efc6  lui         $v1, 0xEFC6
    ctx->pc = 0x116b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61382 << 16));
    // 0x116b60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x116b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x116b64: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x116b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x116b68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116b6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x116b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116b70: 0xaf858010  sw          $a1, -0x7FF0($gp)
    ctx->pc = 0x116b70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934544), GPR_U32(ctx, 5));
    // 0x116b74: 0x22ac2  srl         $a1, $v0, 11
    ctx->pc = 0x116b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x116b78: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x116b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x116b7c: 0x229c0  sll         $a1, $v0, 7
    ctx->pc = 0x116b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x116b80: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x116b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x116b84: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x116b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x116b88: 0x223c0  sll         $a0, $v0, 15
    ctx->pc = 0x116b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x116b8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x116b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x116b90: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x116b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x116b94: 0x21c82  srl         $v1, $v0, 18
    ctx->pc = 0x116b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 18));
    // 0x116b98: 0x3e00008  jr          $ra
    ctx->pc = 0x116B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B98u;
        // 0x116b9c: 0x431026  xor         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116BA0u;
}
