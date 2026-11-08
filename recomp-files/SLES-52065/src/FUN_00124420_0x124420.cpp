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

// Function: FUN_00124420
// Address: 0x124420 - 0x1247cc
void FUN_00124420_0x124420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124420_0x124420");
#endif

    switch (ctx->pc) {
        case 0x12455cu: goto label_12455c;
        case 0x124564u: goto label_124564;
        case 0x124584u: goto label_124584;
        case 0x1246ccu: goto label_1246cc;
        case 0x1246d8u: goto label_1246d8;
        case 0x124758u: goto label_124758;
        default: break;
    }

    ctx->pc = 0x124420u;

    // 0x124420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x124420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x124424: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x124424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x124428: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x124428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12442c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x124430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x124430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x124434: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x124434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x124438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x124438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12443c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12443cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124444: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x124444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124448: 0x83828420  lb          $v0, -0x7BE0($gp)
    ctx->pc = 0x124448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935584)));
    // 0x12444c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x12444Cu;
    {
        const bool branch_taken_0x12444c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12444Cu;
        // 0x124450: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12444c) {
            ctx->pc = 0x124530u;
            goto label_124530;
        }
    }
    ctx->pc = 0x124454u;
    // 0x124454: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x124458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12445c: 0x90262cf1  lbu         $a2, 0x2CF1($at)
    ctx->pc = 0x12445cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x2B2CF1u));
    // 0x124460: 0x2405ff7f  addiu       $a1, $zero, -0x81
    ctx->pc = 0x124460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x124464: 0xa3828420  sb          $v0, -0x7BE0($gp)
    ctx->pc = 0x124464u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935584), (uint8_t)GPR_U32(ctx, 2));
    // 0x124468: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x124468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x12446c: 0x640b0080  daddiu      $t3, $zero, 0x80
    ctx->pc = 0x12446cu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x124470: 0x2408ff0f  addiu       $t0, $zero, -0xF1
    ctx->pc = 0x124470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x124474: 0x640a0010  daddiu      $t2, $zero, 0x10
    ctx->pc = 0x124474u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x124478: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x124478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x12447c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x12447cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x124480: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x124484: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x124484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x124488: 0x90292cf7  lbu         $t1, 0x2CF7($at)
    ctx->pc = 0x124488u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11511)));
    // 0x12448c: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x124490: 0xab2025  or          $a0, $a1, $t3
    ctx->pc = 0x124490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x124494: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x124494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x124498: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12449c: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x12449cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x1244a0: 0x90272cf5  lbu         $a3, 0x2CF5($at)
    ctx->pc = 0x1244a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11509)));
    // 0x1244a4: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x1244a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x1244a8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1244a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1244ac: 0xa0242cf1  sb          $a0, 0x2CF1($at)
    ctx->pc = 0x1244acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2B2CF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2CF1u, _value); } while (0);
    // 0x1244b0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1244b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1244b4: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x1244b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1244b8: 0x942b2cf0  lhu         $t3, 0x2CF0($at)
    ctx->pc = 0x1244b8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x2B2CF0u));
    // 0x1244bc: 0x44880  sll         $t1, $a0, 2
    ctx->pc = 0x1244bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1244c0: 0xe52024  and         $a0, $a3, $a1
    ctx->pc = 0x1244c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1244c4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1244c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1244c8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1244c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1244cc: 0x6406000e  daddiu      $a2, $zero, 0xE
    ctx->pc = 0x1244ccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
    // 0x1244d0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1244d4: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x1244d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x1244d8: 0xa0282cf7  sb          $t0, 0x2CF7($at)
    ctx->pc = 0x1244d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11511), (uint8_t)GPR_U32(ctx, 8));
    // 0x1244dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1244e0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1244e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1244e4: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x1244e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1244e8: 0x902a2cf7  lbu         $t2, 0x2CF7($at)
    ctx->pc = 0x1244e8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x2B2CF7u));
    // 0x1244ec: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1244ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1244f0: 0x1481024  and         $v0, $t2, $t0
    ctx->pc = 0x1244f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x1244f4: 0xa0242cf5  sb          $a0, 0x2CF5($at)
    ctx->pc = 0x1244f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11509), (uint8_t)GPR_U32(ctx, 4));
    // 0x1244f8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x1244f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x1244fc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x124500: 0x90272cf8  lbu         $a3, 0x2CF8($at)
    ctx->pc = 0x124500u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x2B2CF8u));
    // 0x124504: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x124508: 0xfc242d08  sd          $a0, 0x2D08($at)
    ctx->pc = 0x124508u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2B2D08u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B2D08u, _value); } while (0);
    // 0x12450c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12450cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x124510: 0xa4232cf0  sh          $v1, 0x2CF0($at)
    ctx->pc = 0x124510u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B2CF0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2B2CF0u, _value); } while (0);
    // 0x124514: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x124514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x124518: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12451c: 0xe51024  and         $v0, $a3, $a1
    ctx->pc = 0x12451cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x124520: 0xa0232cf7  sb          $v1, 0x2CF7($at)
    ctx->pc = 0x124520u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 11511), (uint8_t)GPR_U32(ctx, 3));
    // 0x124524: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x124524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x124528: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x124528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12452c: 0xa0222cf8  sb          $v0, 0x2CF8($at)
    ctx->pc = 0x12452cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B2CF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2B2CF8u, _value); } while (0);
label_124530:
    // 0x124530: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x124530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x124534: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x124534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x124538: 0x96440060  lhu         $a0, 0x60($s2)
    ctx->pc = 0x124538u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12453c: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x12453cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124544: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x124548: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12454c: 0xa6420060  sh          $v0, 0x60($s2)
    ctx->pc = 0x12454cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x124550: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x124550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x124554: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x124554u;
    SET_GPR_U32(ctx, 31, 0x12455Cu);
    ctx->pc = 0x124558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124554u;
    // 0x124558: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x124554u, 0x12455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12455Cu;
label_12455c:
    // 0x12455c: 0xc048148  jal         func_120520
    ctx->pc = 0x12455Cu;
    SET_GPR_U32(ctx, 31, 0x124564u);
    ctx->pc = 0x124560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12455Cu;
    // 0x124560: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x12455Cu, 0x124564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124564u;
label_124564:
    // 0x124564: 0x8e53008c  lw          $s3, 0x8C($s2)
    ctx->pc = 0x124564u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x124568: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x124568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x12456c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x12456cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x124570: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x124570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124574: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x124574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x124578: 0x1420005e  bnez        $at, . + 4 + (0x5E << 2)
    ctx->pc = 0x124578u;
    {
        const bool branch_taken_0x124578 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124578u;
        // 0x12457c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124578) {
            ctx->pc = 0x1246F4u;
            goto label_1246f4;
        }
    }
    ctx->pc = 0x124580u;
    // 0x124580: 0x24150090  addiu       $s5, $zero, 0x90
    ctx->pc = 0x124580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_124584:
    // 0x124584: 0x2e810007  sltiu       $at, $s4, 0x7
    ctx->pc = 0x124584u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x124588: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x124588u;
    {
        const bool branch_taken_0x124588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124588u;
        // 0x12458c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124588) {
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x124590u;
    // 0x124590: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x124590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x124594: 0x2463eab0  addiu       $v1, $v1, -0x1550
    ctx->pc = 0x124594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961840));
    // 0x124598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12459c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1245a0: 0x400008  jr          $v0
    ctx->pc = 0x1245A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1245A8u: goto label_1245a8;
            case 0x1245C4u: goto label_1245c4;
            case 0x1245F8u: goto label_1245f8;
            case 0x124630u: goto label_124630;
            case 0x12464Cu: goto label_12464c;
            case 0x124680u: goto label_124680;
            case 0x1246B4u: goto label_1246b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1245A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1245A8u;
label_1245a8:
    // 0x1245a8: 0x96440070  lhu         $a0, 0x70($s2)
    ctx->pc = 0x1245a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1245ac: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1245acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1245b0: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1245b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1245b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1245b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1245b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1245b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1245bc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1245BCu;
    {
        const bool branch_taken_0x1245bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245BCu;
        // 0x1245c0: 0xa6420070  sh          $v0, 0x70($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245bc) {
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x1245C4u;
label_1245c4:
    // 0x1245c4: 0x0  nop
    ctx->pc = 0x1245c4u;
    // NOP
    // 0x1245c8: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1245c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1245cc: 0xde450070  ld          $a1, 0x70($s2)
    ctx->pc = 0x1245ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1245d0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1245d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1245d4: 0x32538  dsll        $a0, $v1, 20
    ctx->pc = 0x1245d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 20);
    // 0x1245d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1245d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1245dc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1245dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1245e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1245e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1245e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1245e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1245e8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1245e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1245ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1245ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1245f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1245F0u;
    {
        const bool branch_taken_0x1245f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245F0u;
        // 0x1245f4: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245f0) {
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x1245F8u;
label_1245f8:
    // 0x1245f8: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x1245f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x1245fc: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x1245fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x124600: 0xde450070  ld          $a1, 0x70($s2)
    ctx->pc = 0x124600u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x124604: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x124604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x124608: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x124608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x12460c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12460cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124610: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x124610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x124614: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x124614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x124618: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12461c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124620: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x124620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x124624: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124628: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x124628u;
    {
        const bool branch_taken_0x124628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124628u;
        // 0x12462c: 0xfe420070  sd          $v0, 0x70($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124628) {
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x124630u;
label_124630:
    // 0x124630: 0x96440078  lhu         $a0, 0x78($s2)
    ctx->pc = 0x124630u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124634: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x124638: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x124638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x12463c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x124640: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124644: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x124644u;
    {
        const bool branch_taken_0x124644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124644u;
        // 0x124648: 0xa6420078  sh          $v0, 0x78($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 120), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124644) {
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x12464Cu;
label_12464c:
    // 0x12464c: 0x0  nop
    ctx->pc = 0x12464cu;
    // NOP
    // 0x124650: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x124650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124654: 0xde450078  ld          $a1, 0x78($s2)
    ctx->pc = 0x124654u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124658: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x124658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x12465c: 0x32538  dsll        $a0, $v1, 20
    ctx->pc = 0x12465cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 20);
    // 0x124660: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x124660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124664: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x124664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x124668: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12466c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124670: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x124670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x124674: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124678: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x124678u;
    {
        const bool branch_taken_0x124678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124678u;
        // 0x12467c: 0xfe420078  sd          $v0, 0x78($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124678) {
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x124680u;
label_124680:
    // 0x124680: 0x32033fff  andi        $v1, $s0, 0x3FFF
    ctx->pc = 0x124680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124684: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x124684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x124688: 0xde450078  ld          $a1, 0x78($s2)
    ctx->pc = 0x124688u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12468c: 0x3223c  dsll32      $a0, $v1, 8
    ctx->pc = 0x12468cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 8));
    // 0x124690: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x124690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x124694: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x124694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124698: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x124698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12469c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12469cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1246a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1246a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1246a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1246a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1246a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1246a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1246ac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1246acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1246b0: 0xfe420078  sd          $v0, 0x78($s2)
    ctx->pc = 0x1246b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
label_1246b4:
    // 0x1246b4: 0x0  nop
    ctx->pc = 0x1246b4u;
    // NOP
    // 0x1246b8: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1246b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1246bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1246bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1246c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246c4: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x1246C4u;
    SET_GPR_U32(ctx, 31, 0x1246CCu);
    ctx->pc = 0x1246C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246C4u;
    // 0x1246c8: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x1246C4u, 0x1246CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246CCu;
label_1246cc:
    // 0x1246cc: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x1246ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1246d0: 0xc048148  jal         func_120520
    ctx->pc = 0x1246D0u;
    SET_GPR_U32(ctx, 31, 0x1246D8u);
    ctx->pc = 0x1246D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246D0u;
    // 0x1246d4: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1246D0u, 0x1246D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246D8u;
label_1246d8:
    // 0x1246d8: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x1246dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1246dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1246e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1246e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1246e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1246e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1246e8: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x1246e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1246ec: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1246ECu;
    {
        const bool branch_taken_0x1246ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1246F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246ECu;
        // 0x1246f0: 0x26b50090  addiu       $s5, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246ec) {
            ctx->pc = 0x124584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124584;
        }
    }
    ctx->pc = 0x1246F4u;
label_1246f4:
    // 0x1246f4: 0x0  nop
    ctx->pc = 0x1246f4u;
    // NOP
    // 0x1246f8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1246fc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1246FCu;
    {
        const bool branch_taken_0x1246fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246FCu;
        // 0x124700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246fc) {
            ctx->pc = 0x12475Cu;
            goto label_12475c;
        }
    }
    ctx->pc = 0x124704u;
    // 0x124704: 0x32023fff  andi        $v0, $s0, 0x3FFF
    ctx->pc = 0x124704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x124708: 0xde460060  ld          $a2, 0x60($s2)
    ctx->pc = 0x124708u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12470c: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x12470cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x124710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124714: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x124714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x124718: 0x3443001f  ori         $v1, $v0, 0x1F
    ctx->pc = 0x124718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x12471c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x124720: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x124724: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x124724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x124728: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x124728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12472c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x124730: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x124730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x124734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124738: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x124738u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x12473c: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x12473cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x124740: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x124740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x124744: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x124744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x124748: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x124748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x12474c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x12474cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124750: 0xc047e88  jal         func_11FA20
    ctx->pc = 0x124750u;
    SET_GPR_U32(ctx, 31, 0x124758u);
    ctx->pc = 0x124754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124750u;
    // 0x124754: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FA20u, 0x124750u, 0x124758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124758u;
label_124758:
    // 0x124758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12475c:
    // 0x12475c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x12475cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x124760: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x124760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x124764: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x124764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x124768: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x124768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12476c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x124770: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0
    ctx->pc = 0x124770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
    // 0x124774: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124778: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x124778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12477c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x12477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x124780: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x124780u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x124784: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x124784u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124788: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x124788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x12478c: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x12478cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x124790: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x124790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x124794: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x124794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x124798: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x124798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12479c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1247a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1247a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1247a4: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x1247a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1247a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1247a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1247ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1247acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1247b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1247b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1247b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1247b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1247b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1247b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1247bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1247bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1247c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1247c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1247c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1247C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1247C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247C4u;
        // 0x1247c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1247C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1247CCu;
}
