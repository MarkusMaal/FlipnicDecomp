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

// Function: FUN_00125700
// Address: 0x125700 - 0x125bd4
void FUN_00125700_0x125700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125700_0x125700");
#endif

    switch (ctx->pc) {
        case 0x1257ecu: goto label_1257ec;
        case 0x125818u: goto label_125818;
        case 0x125a64u: goto label_125a64;
        case 0x125a70u: goto label_125a70;
        default: break;
    }

    ctx->pc = 0x125700u;

    // 0x125700: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x125704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x125704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125708: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x125708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12570c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x12570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x125710: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x125710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x125714: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x125714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x125718: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x125718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12571c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12571cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x125720: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x125720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x125724: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x125724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x125728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12572c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12572cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x125734: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x125734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125738: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x125738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x12573c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x12573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x125740: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125740u;
    {
        const bool branch_taken_0x125740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125740u;
        // 0x125744: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125740) {
            ctx->pc = 0x125754u;
            goto label_125754;
        }
    }
    ctx->pc = 0x125748u;
    // 0x125748: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x125748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x12574c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12574Cu;
    {
        const bool branch_taken_0x12574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12574c) {
            ctx->pc = 0x12575Cu;
            goto label_12575c;
        }
    }
    ctx->pc = 0x125754u;
label_125754:
    // 0x125754: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x125754u;
    {
        const bool branch_taken_0x125754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125754u;
        // 0x125758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125754) {
            ctx->pc = 0x125BA4u;
            goto label_125ba4;
        }
    }
    ctx->pc = 0x12575Cu;
label_12575c:
    // 0x12575c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x12575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x125760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x125760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125764: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125764u;
    {
        const bool branch_taken_0x125764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125764u;
        // 0x125768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125764) {
            ctx->pc = 0x125774u;
            goto label_125774;
        }
    }
    ctx->pc = 0x12576Cu;
    // 0x12576c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x12576Cu;
    {
        const bool branch_taken_0x12576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12576Cu;
        // 0x125770: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12576c) {
            ctx->pc = 0x125BA8u;
            goto label_125ba8;
        }
    }
    ctx->pc = 0x125774u;
label_125774:
    // 0x125774: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x125778: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x125778u;
    {
        const bool branch_taken_0x125778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125778) {
            ctx->pc = 0x12588Cu;
            goto label_12588c;
        }
    }
    ctx->pc = 0x125780u;
    // 0x125780: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x125780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x125784: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x125784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x125788: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x125788u;
    {
        const bool branch_taken_0x125788 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125788u;
        // 0x12578c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125788) {
            ctx->pc = 0x125798u;
            goto label_125798;
        }
    }
    ctx->pc = 0x125790u;
    // 0x125790: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x125790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x125794: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x125794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_125798:
    // 0x125798: 0xde470060  ld          $a3, 0x60($s2)
    ctx->pc = 0x125798u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x12579c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1257a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1257a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1257a4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1257a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1257a8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x1257ac: 0x333b8  dsll        $a2, $v1, 14
    ctx->pc = 0x1257acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 14);
    // 0x1257b0: 0x34453fff  ori         $a1, $v0, 0x3FFF
    ctx->pc = 0x1257b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
    // 0x1257b4: 0x3003003f  andi        $v1, $zero, 0x3F
    ctx->pc = 0x1257b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x1257b8: 0x2402fc0f  addiu       $v0, $zero, -0x3F1
    ctx->pc = 0x1257b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1257bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1257bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1257c0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1257c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1257c4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1257c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1257c8: 0xfe450060  sd          $a1, 0x60($s2)
    ctx->pc = 0x1257c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 5));
    // 0x1257cc: 0x96450062  lhu         $a1, 0x62($s2)
    ctx->pc = 0x1257ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
    // 0x1257d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1257d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1257d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1257d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1257d8: 0xa6420062  sh          $v0, 0x62($s2)
    ctx->pc = 0x1257d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x1257dc: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1257dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1257e0: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1257e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1257e4: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x1257E4u;
    SET_GPR_U32(ctx, 31, 0x1257ECu);
    ctx->pc = 0x1257E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1257E4u;
    // 0x1257e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x1257E4u, 0x1257ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1257ECu;
label_1257ec:
    // 0x1257ec: 0x92450063  lbu         $a1, 0x63($s2)
    ctx->pc = 0x1257ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 99)));
    // 0x1257f0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1257f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1257f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1257f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1257f8: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1257f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1257fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1257fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x125800: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125804: 0xa2420063  sb          $v0, 0x63($s2)
    ctx->pc = 0x125804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x125808: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x125808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x12580c: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x125810: 0xc04927c  jal         func_1249F0
    ctx->pc = 0x125810u;
    SET_GPR_U32(ctx, 31, 0x125818u);
    ctx->pc = 0x125814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125810u;
    // 0x125814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249F0u, 0x125810u, 0x125818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125818u;
label_125818:
    // 0x125818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x125818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12581c: 0xde480060  ld          $t0, 0x60($s2)
    ctx->pc = 0x12581cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x125820: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x125820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x125824: 0x64050004  daddiu      $a1, $zero, 0x4
    ctx->pc = 0x125824u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x125828: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x125828u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12582c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x12582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125830: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x125830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x125834: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x125834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125838: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x125838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12583c: 0x437b8  dsll        $a2, $a0, 30
    ctx->pc = 0x12583cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 30);
    // 0x125840: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x125844: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x125844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x125848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x125848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12584c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12584cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125850: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x125850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x125854: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x125854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x125858: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x125858u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x12585c: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x12585cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125860: 0x92460064  lbu         $a2, 0x64($s2)
    ctx->pc = 0x125860u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x125864: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x125864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x125868: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x125868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x12586c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x12586cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x125870: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x125870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x125874: 0xa2440064  sb          $a0, 0x64($s2)
    ctx->pc = 0x125874u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 4));
    // 0x125878: 0x92440064  lbu         $a0, 0x64($s2)
    ctx->pc = 0x125878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x12587c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x125880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x125880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125884: 0xa2420064  sb          $v0, 0x64($s2)
    ctx->pc = 0x125884u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x125888: 0xae470084  sw          $a3, 0x84($s2)
    ctx->pc = 0x125888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 7));
label_12588c:
    // 0x12588c: 0x83828434  lb          $v0, -0x7BCC($gp)
    ctx->pc = 0x12588cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935604)));
    // 0x125890: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125890u;
    {
        const bool branch_taken_0x125890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125890u;
        // 0x125894: 0x24031a00  addiu       $v1, $zero, 0x1A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125890) {
            ctx->pc = 0x1258A4u;
            goto label_1258a4;
        }
    }
    ctx->pc = 0x125898u;
    // 0x125898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12589c: 0xaf838430  sw          $v1, -0x7BD0($gp)
    ctx->pc = 0x12589cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935600), GPR_U32(ctx, 3));
    // 0x1258a0: 0xa3828434  sb          $v0, -0x7BCC($gp)
    ctx->pc = 0x1258a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935604), (uint8_t)GPR_U32(ctx, 2));
label_1258a4:
    // 0x1258a4: 0x8f858430  lw          $a1, -0x7BD0($gp)
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935600)));
    // 0x1258a8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1258a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1258ac: 0x96460060  lhu         $a2, 0x60($s2)
    ctx->pc = 0x1258acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1258b0: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x1258b4: 0x346d0003  ori         $t5, $v1, 0x3
    ctx->pc = 0x1258b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1258b8: 0xe203c  dsll32      $a0, $t6, 0
    ctx->pc = 0x1258b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1258bc: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x1258bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1258c0: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1258c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1258c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1258c8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1258cc: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1258ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1258d0: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1258d4: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x1258d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1258d8: 0x240bffc0  addiu       $t3, $zero, -0x40
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1258dc: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x1258dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1258e0: 0x640a0004  daddiu      $t2, $zero, 0x4
    ctx->pc = 0x1258e0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1258e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1258e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1258e8: 0x3009003f  andi        $t1, $zero, 0x3F
    ctx->pc = 0x1258e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x1258ec: 0xa6440060  sh          $a0, 0x60($s2)
    ctx->pc = 0x1258ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x1258f0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1258f4: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x1258f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1258f8: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1258fc: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x1258fcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x125900: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x125904: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125908: 0xa2930003  sb          $s3, 0x3($s4)
    ctx->pc = 0x125908u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x12590c: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x12590cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125910: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x125910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x125914: 0xa68f0000  sh          $t7, 0x0($s4)
    ctx->pc = 0x125914u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x125918: 0xae8e0008  sw          $t6, 0x8($s4)
    ctx->pc = 0x125918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 14));
    // 0x12591c: 0xae8d000c  sw          $t5, 0xC($s4)
    ctx->pc = 0x12591cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 13));
    // 0x125920: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125924: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x125928: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x125928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x12592c: 0xffa300a0  sd          $v1, 0xA0($sp)
    ctx->pc = 0x12592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 3));
    // 0x125930: 0xffac00a8  sd          $t4, 0xA8($sp)
    ctx->pc = 0x125930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 12));
    // 0x125934: 0x7bac00a0  lq          $t4, 0xA0($sp)
    ctx->pc = 0x125934u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125938: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12593c: 0x7c6c0000  sq          $t4, 0x0($v1)
    ctx->pc = 0x12593cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 12));
    // 0x125940: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125944: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x125944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x125948: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x125948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12594c: 0x8f8d8430  lw          $t5, -0x7BD0($gp)
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935600)));
    // 0x125950: 0x97ae00d4  lhu         $t6, 0xD4($sp)
    ctx->pc = 0x125950u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x125954: 0x93ac00d6  lbu         $t4, 0xD6($sp)
    ctx->pc = 0x125954u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 214)));
    // 0x125958: 0x93a300d7  lbu         $v1, 0xD7($sp)
    ctx->pc = 0x125958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 215)));
    // 0x12595c: 0x31ad3fff  andi        $t5, $t5, 0x3FFF
    ctx->pc = 0x12595cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16383);
    // 0x125960: 0x1c21024  and         $v0, $t6, $v0
    ctx->pc = 0x125960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
    // 0x125964: 0x4d6825  or          $t5, $v0, $t5
    ctx->pc = 0x125964u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x125968: 0x18b1024  and         $v0, $t4, $t3
    ctx->pc = 0x125968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x12596c: 0xa7ad00d4  sh          $t5, 0xD4($sp)
    ctx->pc = 0x12596cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 13));
    // 0x125970: 0x4a5025  or          $t2, $v0, $t2
    ctx->pc = 0x125970u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x125974: 0x6b1024  and         $v0, $v1, $t3
    ctx->pc = 0x125974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x125978: 0xa3aa00d6  sb          $t2, 0xD6($sp)
    ctx->pc = 0x125978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 214), (uint8_t)GPR_U32(ctx, 10));
    // 0x12597c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x12597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x125980: 0xa3a200d7  sb          $v0, 0xD7($sp)
    ctx->pc = 0x125980u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 215), (uint8_t)GPR_U32(ctx, 2));
    // 0x125984: 0xdfa300d0  ld          $v1, 0xD0($sp)
    ctx->pc = 0x125984u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x125988: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12598c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x12598cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x125990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125994: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x125994u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x125998: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12599c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1259a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1259a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1259a4: 0x97a300dc  lhu         $v1, 0xDC($sp)
    ctx->pc = 0x1259a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1259a8: 0x97a200d8  lhu         $v0, 0xD8($sp)
    ctx->pc = 0x1259a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1259ac: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1259acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1259b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1259b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1259b4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1259b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1259b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1259b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1259bc: 0xa7a300dc  sh          $v1, 0xDC($sp)
    ctx->pc = 0x1259bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 3));
    // 0x1259c0: 0xa7a200d8  sh          $v0, 0xD8($sp)
    ctx->pc = 0x1259c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x1259c4: 0xdfa300d8  ld          $v1, 0xD8($sp)
    ctx->pc = 0x1259c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1259c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1259c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1259cc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1259ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1259d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1259d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1259d4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1259d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1259d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1259dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1259e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1259e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1259e4: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x1259e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1259e8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1259ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1259ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1259f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1259f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1259f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1259f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1259f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1259f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1259fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1259fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125a00: 0x16240003  bne         $s1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125A00u;
    {
        const bool branch_taken_0x125a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x125A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A00u;
        // 0x125a04: 0x8c4800dc  lw          $t0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a00) {
            ctx->pc = 0x125A10u;
            goto label_125a10;
        }
    }
    ctx->pc = 0x125A08u;
    // 0x125a08: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x125a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x125a0c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x125a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_125a10:
    // 0x125a10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x125a10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a14: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x125a14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a18: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x125a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x125a1c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x125a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x125a20: 0x3c090800  lui         $t1, 0x800
    ctx->pc = 0x125a20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2048 << 16));
    // 0x125a24: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x125a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x125a28: 0x344e0040  ori         $t6, $v0, 0x40
    ctx->pc = 0x125a28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x125a2c: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x125a2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x125a30: 0x34098040  ori         $t1, $zero, 0x8040
    ctx->pc = 0x125a30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x125a34: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x125a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x125a38: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x125a3c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x125a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125a40: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x125a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x125a44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125a48: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x125a4c: 0x2415f800  addiu       $s5, $zero, -0x800
    ctx->pc = 0x125a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x125a50: 0x24190051  addiu       $t9, $zero, 0x51
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x125a54: 0x30180003  andi        $t8, $zero, 0x3
    ctx->pc = 0x125a54u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x125a58: 0x2417fffc  addiu       $s7, $zero, -0x4
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x125a5c: 0x241e0053  addiu       $fp, $zero, 0x53
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x125a60: 0x12b7825  or          $t7, $t1, $t3
    ctx->pc = 0x125a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
label_125a64:
    // 0x125a64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x125a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x125a68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a6c: 0x319207ff  andi        $s2, $t4, 0x7FF
    ctx->pc = 0x125a6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2047);
label_125a70:
    // 0x125a70: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125a74: 0x317607ff  andi        $s6, $t3, 0x7FF
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x125a78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x125a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x125a7c: 0x292d0010  slti        $t5, $t1, 0x10
    ctx->pc = 0x125a7cu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x125a80: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x125a84: 0xa2270003  sb          $a3, 0x3($s1)
    ctx->pc = 0x125a84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x125a88: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x125a88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125a8c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x125a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x125a90: 0xa6260000  sh          $a2, 0x0($s1)
    ctx->pc = 0x125a90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x125a94: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x125a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x125a98: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x125a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x125a9c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125aa0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125aa4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125aa8: 0x97b400e4  lhu         $s4, 0xE4($sp)
    ctx->pc = 0x125aa8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x125aac: 0x97b300e6  lhu         $s3, 0xE6($sp)
    ctx->pc = 0x125aacu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 230)));
    // 0x125ab0: 0xffa300b0  sd          $v1, 0xB0($sp)
    ctx->pc = 0x125ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 3));
    // 0x125ab4: 0xffa200b8  sd          $v0, 0xB8($sp)
    ctx->pc = 0x125ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 2));
    // 0x125ab8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x125ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x125abc: 0x295a024  and         $s4, $s4, $s5
    ctx->pc = 0x125abcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 21));
    // 0x125ac0: 0x2759824  and         $s3, $s3, $s5
    ctx->pc = 0x125ac0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
    // 0x125ac4: 0x296a025  or          $s4, $s4, $s6
    ctx->pc = 0x125ac4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 22));
    // 0x125ac8: 0x2729825  or          $s3, $s3, $s2
    ctx->pc = 0x125ac8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 18));
    // 0x125acc: 0xa7b400e4  sh          $s4, 0xE4($sp)
    ctx->pc = 0x125accu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 228), (uint16_t)GPR_U32(ctx, 20));
    // 0x125ad0: 0xa7b300e6  sh          $s3, 0xE6($sp)
    ctx->pc = 0x125ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 230), (uint16_t)GPR_U32(ctx, 19));
    // 0x125ad4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x125ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125ad8: 0x7e710000  sq          $s1, 0x0($s3)
    ctx->pc = 0x125ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 17));
    // 0x125adc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125adcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125ae0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125ae4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125ae8: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x125ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x125aec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125aecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125af0: 0xfe330000  sd          $s3, 0x0($s1)
    ctx->pc = 0x125af0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 19));
    // 0x125af4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125af4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125af8: 0xfe390008  sd          $t9, 0x8($s1)
    ctx->pc = 0x125af8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 25));
    // 0x125afc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125afcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b00: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b04: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125b08: 0x93b100e8  lbu         $s1, 0xE8($sp)
    ctx->pc = 0x125b08u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x125b0c: 0x2378824  and         $s1, $s1, $s7
    ctx->pc = 0x125b0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 23));
    // 0x125b10: 0x2388825  or          $s1, $s1, $t8
    ctx->pc = 0x125b10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 24));
    // 0x125b14: 0xa3b100e8  sb          $s1, 0xE8($sp)
    ctx->pc = 0x125b14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 232), (uint8_t)GPR_U32(ctx, 17));
    // 0x125b18: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x125b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x125b1c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b20: 0xfe330000  sd          $s3, 0x0($s1)
    ctx->pc = 0x125b20u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 19));
    // 0x125b24: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b28: 0xfe3e0008  sd          $fp, 0x8($s1)
    ctx->pc = 0x125b28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 30));
    // 0x125b2c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b30: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b34: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125b38: 0xffaf00c0  sd          $t7, 0xC0($sp)
    ctx->pc = 0x125b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 15));
    // 0x125b3c: 0xffa000c8  sd          $zero, 0xC8($sp)
    ctx->pc = 0x125b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 0));
    // 0x125b40: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x125b40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x125b44: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b48: 0x7e330000  sq          $s3, 0x0($s1)
    ctx->pc = 0x125b48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 19));
    // 0x125b4c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b50: 0x24130030  addiu       $s3, $zero, 0x30
    ctx->pc = 0x125b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x125b54: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b58: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x125b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x125b5c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b60: 0xa2330003  sb          $s3, 0x3($s1)
    ctx->pc = 0x125b60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x125b64: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x125b64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125b68: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x125b68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x125b6c: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x125b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 8));
    // 0x125b70: 0xa6330000  sh          $s3, 0x0($s1)
    ctx->pc = 0x125b70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x125b74: 0x25080400  addiu       $t0, $t0, 0x400
    ctx->pc = 0x125b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x125b78: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x125b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x125b7c: 0xae2e000c  sw          $t6, 0xC($s1)
    ctx->pc = 0x125b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 14));
    // 0x125b80: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x125b80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125b84: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x125b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x125b88: 0x15a0ffb9  bnez        $t5, . + 4 + (-0x47 << 2)
    ctx->pc = 0x125B88u;
    {
        const bool branch_taken_0x125b88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B88u;
        // 0x125b8c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b88) {
            ctx->pc = 0x125A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125a70;
        }
    }
    ctx->pc = 0x125B90u;
    // 0x125b90: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x125b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x125b94: 0x29490010  slti        $t1, $t2, 0x10
    ctx->pc = 0x125b94u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x125b98: 0x1520ffb2  bnez        $t1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x125B98u;
    {
        const bool branch_taken_0x125b98 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x125B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125B98u;
        // 0x125b9c: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b98) {
            ctx->pc = 0x125A64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125a64;
        }
    }
    ctx->pc = 0x125BA0u;
    // 0x125ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125ba4:
    // 0x125ba4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x125ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_125ba8:
    // 0x125ba8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x125ba8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125bac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x125bacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125bb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x125bb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x125bb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x125bb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125bb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x125bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x125bbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x125bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125bc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x125bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125bc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x125bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x125BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125BCCu;
        // 0x125bd0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125BD4u;
}
