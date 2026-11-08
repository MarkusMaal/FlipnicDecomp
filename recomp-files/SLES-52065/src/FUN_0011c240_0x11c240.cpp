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

// Function: FUN_0011c240
// Address: 0x11c240 - 0x11c38c
void FUN_0011c240_0x11c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c240_0x11c240");
#endif

    switch (ctx->pc) {
        case 0x11c26cu: goto label_11c26c;
        case 0x11c2f0u: goto label_11c2f0;
        case 0x11c378u: goto label_11c378;
        default: break;
    }

    ctx->pc = 0x11c240u;

    // 0x11c240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c244: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x11c244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x11c248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c24c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11c250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11c254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c258: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x11c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x11c25c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x11c25cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11c260: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11c260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11c264: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11C264u;
    SET_GPR_U32(ctx, 31, 0x11C26Cu);
    ctx->pc = 0x11C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C264u;
    // 0x11c268: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11C264u, 0x11C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C26Cu;
label_11c26c:
    // 0x11c26c: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x11c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x11c270: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x11c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x11c274: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11c278: 0x3445fff0  ori         $a1, $v0, 0xFFF0
    ctx->pc = 0x11c278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x11c27c: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x11c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11c280: 0x205082b  sltu        $at, $s0, $a1
    ctx->pc = 0x11c280u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11c284: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x11c284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x11c288: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C288u;
    {
        const bool branch_taken_0x11c288 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C288u;
        // 0x11c28c: 0x3193e  dsrl32      $v1, $v1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c288) {
            ctx->pc = 0x11C294u;
            goto label_11c294;
        }
    }
    ctx->pc = 0x11C290u;
    // 0x11c290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c294:
    // 0x11c294: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x11c294u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x11c298: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x11c298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c29c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x11c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11c2a0: 0x10300a  movz        $a2, $zero, $s0
    ctx->pc = 0x11c2a0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x11c2a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11c2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11c2a8: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x11c2a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11c2ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11c2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11c2b0: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x11c2b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x11c2b4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x11c2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11c2b8: 0x73f38  dsll        $a3, $a3, 28
    ctx->pc = 0x11c2b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 28);
    // 0x11c2bc: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x11c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x11c2c0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x11c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x11c2c4: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x11c2c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11c2c8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x11c2c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11c2cc: 0x53102  srl         $a2, $a1, 4
    ctx->pc = 0x11c2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x11c2d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11c2d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11c2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c2d8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x11c2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11c2dc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x11c2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11c2e0: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x11c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x11c2e4: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11C2E4u;
    {
        const bool branch_taken_0x11c2e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2E4u;
        // 0x11c2e8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2e4) {
            ctx->pc = 0x11C370u;
            goto label_11c370;
        }
    }
    ctx->pc = 0x11C2ECu;
    // 0x11c2ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11c2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11c2f0:
    // 0x11c2f0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11c2f4: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x11c2f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x11c2f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2F8u;
    {
        const bool branch_taken_0x11c2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2F8u;
        // 0x11c2fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f8) {
            ctx->pc = 0x11C308u;
            goto label_11c308;
        }
    }
    ctx->pc = 0x11C300u;
    // 0x11c300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C300u;
    {
        const bool branch_taken_0x11c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c300) {
            ctx->pc = 0x11C30Cu;
            goto label_11c30c;
        }
    }
    ctx->pc = 0x11C308u;
label_11c308:
    // 0x11c308: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x11c308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
label_11c30c:
    // 0x11c30c: 0x0  nop
    ctx->pc = 0x11c30cu;
    // NOP
    // 0x11c310: 0x54480  sll         $t0, $a1, 18
    ctx->pc = 0x11c310u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 18));
    // 0x11c314: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x11c314u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x11c318: 0x684021  addu        $t0, $v1, $t0
    ctx->pc = 0x11c318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x11c31c: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x11c31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x11c320: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x11c320u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11c324: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x11c324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x11c328: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x11c328u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x11c32c: 0x73902  srl         $a3, $a3, 4
    ctx->pc = 0x11c32cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x11c330: 0x8503c  dsll32      $t2, $t0, 0
    ctx->pc = 0x11c330u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11c334: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x11c334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11c338: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x11c338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c340: 0x10480a  movz        $t1, $zero, $s0
    ctx->pc = 0x11c340u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x11c344: 0xc5380a  movz        $a3, $a2, $a1
    ctx->pc = 0x11c344u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x11c348: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11c348u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11c34c: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x11c34cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x11c350: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11c350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c354: 0x93f38  dsll        $a3, $t1, 28
    ctx->pc = 0x11c354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << 28);
    // 0x11c358: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x11c358u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x11c35c: 0x1473825  or          $a3, $t2, $a3
    ctx->pc = 0x11c35cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x11c360: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x11c360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x11c364: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x11c364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x11c368: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11C368u;
    {
        const bool branch_taken_0x11c368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C368u;
        // 0x11c36c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c368) {
            ctx->pc = 0x11C2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c2f0;
        }
    }
    ctx->pc = 0x11C370u;
label_11c370:
    // 0x11c370: 0xc046fe8  jal         func_11BFA0
    ctx->pc = 0x11C370u;
    SET_GPR_U32(ctx, 31, 0x11C378u);
    ctx->pc = 0x11C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C370u;
    // 0x11c374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFA0u, 0x11C370u, 0x11C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C378u;
label_11c378:
    // 0x11c378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c37c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11c37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11c380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c384: 0x3e00008  jr          $ra
    ctx->pc = 0x11C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C384u;
        // 0x11c388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C38Cu;
}
