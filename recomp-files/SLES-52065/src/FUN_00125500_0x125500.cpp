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

// Function: FUN_00125500
// Address: 0x125500 - 0x125700
void FUN_00125500_0x125500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125500_0x125500");
#endif

    switch (ctx->pc) {
        case 0x1255ccu: goto label_1255cc;
        case 0x1255f8u: goto label_1255f8;
        default: break;
    }

    ctx->pc = 0x125500u;

    // 0x125500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x125500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x125504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125508: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x125508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12550c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x125510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x125514: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x125514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12551c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125520: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x125520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125524: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x125524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
    // 0x125528: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x125528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x12552c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x12552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x125530: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125530u;
    {
        const bool branch_taken_0x125530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125530u;
        // 0x125534: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125530) {
            ctx->pc = 0x125544u;
            goto label_125544;
        }
    }
    ctx->pc = 0x125538u;
    // 0x125538: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x125538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x12553c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12553Cu;
    {
        const bool branch_taken_0x12553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12553c) {
            ctx->pc = 0x12554Cu;
            goto label_12554c;
        }
    }
    ctx->pc = 0x125544u;
label_125544:
    // 0x125544: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x125544u;
    {
        const bool branch_taken_0x125544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125544u;
        // 0x125548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125544) {
            ctx->pc = 0x1256E4u;
            goto label_1256e4;
        }
    }
    ctx->pc = 0x12554Cu;
label_12554c:
    // 0x12554c: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x12554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x125550: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x125550u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x125554: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x125554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x125558: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x125558u;
    {
        const bool branch_taken_0x125558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125558u;
        // 0x12555c: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125558) {
            ctx->pc = 0x125668u;
            goto label_125668;
        }
    }
    ctx->pc = 0x125560u;
    // 0x125560: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x125560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x125564: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x125564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x125568: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x125568u;
    {
        const bool branch_taken_0x125568 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125568u;
        // 0x12556c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125568) {
            ctx->pc = 0x125578u;
            goto label_125578;
        }
    }
    ctx->pc = 0x125570u;
    // 0x125570: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x125570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x125574: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x125574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_125578:
    // 0x125578: 0xde670060  ld          $a3, 0x60($s3)
    ctx->pc = 0x125578u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x12557c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125580: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125580u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125584: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x125584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x125588: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x125588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x12558c: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x12558cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x125590: 0x34453fff  ori         $a1, $v0, 0x3FFF
    ctx->pc = 0x125590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x125594: 0x3003003f  andi        $v1, $zero, 0x3F
    ctx->pc = 0x125594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x125598: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x125598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x12559c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12559cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1255a0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1255a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1255a4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1255a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1255a8: 0xfe650060  sd          $a1, 0x60($s3)
    ctx->pc = 0x1255a8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 5));
    // 0x1255ac: 0x96650062  lhu         $a1, 0x62($s3)
    ctx->pc = 0x1255acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
    // 0x1255b0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1255b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1255b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1255b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1255b8: 0xa6620062  sh          $v0, 0x62($s3)
    ctx->pc = 0x1255b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x1255bc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1255bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1255c0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1255c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1255c4: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1255C4u;
    SET_GPR_U32(ctx, 31, 0x1255CCu);
    ctx->pc = 0x1255C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1255C4u;
    // 0x1255c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1255C4u, 0x1255CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255CCu;
label_1255cc:
    // 0x1255cc: 0x92650063  lbu         $a1, 0x63($s3)
    ctx->pc = 0x1255ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
    // 0x1255d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1255d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1255d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1255d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1255d8: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1255d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1255dc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1255dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1255e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1255e4: 0xa2620063  sb          $v0, 0x63($s3)
    ctx->pc = 0x1255e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x1255e8: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1255e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1255ec: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1255ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1255f0: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1255F0u;
    SET_GPR_U32(ctx, 31, 0x1255F8u);
    ctx->pc = 0x1255F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1255F0u;
    // 0x1255f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1255F0u, 0x1255F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255F8u;
label_1255f8:
    // 0x1255f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1255f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1255fc: 0xde680060  ld          $t0, 0x60($s3)
    ctx->pc = 0x1255fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x125600: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x125600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x125604: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x125604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x125608: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x125608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x12560c: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x12560cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x125610: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x125610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125614: 0x337b8  dsll        $a2, $v1, 30
    ctx->pc = 0x125614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 30);
    // 0x125618: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12561c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12561cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125620: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x125620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x125624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x125628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12562c: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x12562cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x125630: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x125630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x125634: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x125634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125638: 0xfe660060  sd          $a2, 0x60($s3)
    ctx->pc = 0x125638u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 6));
    // 0x12563c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x12563cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x125640: 0x92660064  lbu         $a2, 0x64($s3)
    ctx->pc = 0x125640u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x125644: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x125648: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x125648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x12564c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x12564cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x125650: 0xa2640064  sb          $a0, 0x64($s3)
    ctx->pc = 0x125650u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 4));
    // 0x125654: 0x92640064  lbu         $a0, 0x64($s3)
    ctx->pc = 0x125654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x125658: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x125658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12565c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125660: 0xa2620064  sb          $v0, 0x64($s3)
    ctx->pc = 0x125660u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x125664: 0xae670084  sw          $a3, 0x84($s3)
    ctx->pc = 0x125664u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 7));
label_125668:
    // 0x125668: 0x96660060  lhu         $a2, 0x60($s3)
    ctx->pc = 0x125668u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x12566c: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x12566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x125670: 0x32253fff  andi        $a1, $s1, 0x3FFF
    ctx->pc = 0x125670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16383);
    // 0x125674: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x125674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x125678: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x125678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12567c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x12567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x125680: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x125680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x125684: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x125684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x125688: 0xa6640060  sh          $a0, 0x60($s3)
    ctx->pc = 0x125688u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x12568c: 0x8e640080  lw          $a0, 0x80($s3)
    ctx->pc = 0x12568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x125690: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x125690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x125694: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x125694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x125698: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x125698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x12569c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1256a0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x1256a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1256a4: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1256a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x1256a8: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x1256a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1256ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1256acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1256b0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1256b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1256b4: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x1256b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x1256b8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1256b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1256bc: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1256bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1256c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1256c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1256c4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1256c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1256c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1256c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1256cc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1256ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1256d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1256d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1256d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1256d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1256d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1256d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1256dc: 0xde620060  ld          $v0, 0x60($s3)
    ctx->pc = 0x1256dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1256e0: 0x0  nop
    ctx->pc = 0x1256e0u;
    // NOP
label_1256e4:
    // 0x1256e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1256e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1256e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1256e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1256ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1256ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1256f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1256f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1256f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1256f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1256f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1256F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1256FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1256F8u;
        // 0x1256fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1256F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125700u;
}
