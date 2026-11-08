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

// Function: FUN_00174790
// Address: 0x174790 - 0x174c08
void FUN_00174790_0x174790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00174790_0x174790");
#endif

    switch (ctx->pc) {
        case 0x1747c8u: goto label_1747c8;
        case 0x1747f8u: goto label_1747f8;
        case 0x17481cu: goto label_17481c;
        case 0x174834u: goto label_174834;
        case 0x17484cu: goto label_17484c;
        case 0x174860u: goto label_174860;
        case 0x174874u: goto label_174874;
        case 0x174888u: goto label_174888;
        case 0x1748acu: goto label_1748ac;
        case 0x1748b8u: goto label_1748b8;
        case 0x1748ccu: goto label_1748cc;
        case 0x174918u: goto label_174918;
        case 0x174950u: goto label_174950;
        case 0x174974u: goto label_174974;
        case 0x174980u: goto label_174980;
        case 0x174998u: goto label_174998;
        case 0x1749b0u: goto label_1749b0;
        case 0x1749f0u: goto label_1749f0;
        case 0x174a10u: goto label_174a10;
        case 0x174a30u: goto label_174a30;
        case 0x174a50u: goto label_174a50;
        case 0x174a70u: goto label_174a70;
        case 0x174a90u: goto label_174a90;
        case 0x174ab0u: goto label_174ab0;
        case 0x174ad4u: goto label_174ad4;
        case 0x174ae0u: goto label_174ae0;
        case 0x174afcu: goto label_174afc;
        case 0x174b0cu: goto label_174b0c;
        case 0x174b1cu: goto label_174b1c;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b3cu: goto label_174b3c;
        case 0x174b58u: goto label_174b58;
        case 0x174b68u: goto label_174b68;
        case 0x174b78u: goto label_174b78;
        default: break;
    }

    ctx->pc = 0x174790u;

    // 0x174790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x174794: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x174794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x174798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17479c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1747a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1747a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1747a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1747a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1747a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1747a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1747ac: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1747acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1747b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1747b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747b4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1747b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1747b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1747b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1747bc: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x1747bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1747c0: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x1747C0u;
    SET_GPR_U32(ctx, 31, 0x1747C8u);
    ctx->pc = 0x1747C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747C0u;
    // 0x1747c4: 0x24a5f620  addiu       $a1, $a1, -0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1747C0u, 0x1747C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747C8u;
label_1747c8:
    // 0x1747c8: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x1747c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x1747cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1747ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1747d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1747d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1747d8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1747dc: 0x24a5f630  addiu       $a1, $a1, -0x9D0
    ctx->pc = 0x1747dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964784));
    // 0x1747e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1747e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1747e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1747e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747e8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1747e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1747ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1747ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747f0: 0xc045b40  jal         func_116D00
    ctx->pc = 0x1747F0u;
    SET_GPR_U32(ctx, 31, 0x1747F8u);
    ctx->pc = 0x1747F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747F0u;
    // 0x1747f4: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D00u, 0x1747F0u, 0x1747F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747F8u;
label_1747f8:
    // 0x1747f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1747fc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1747FCu;
    {
        const bool branch_taken_0x1747fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1747fc) {
            ctx->pc = 0x174850u;
            goto label_174850;
        }
    }
    ctx->pc = 0x174804u;
    // 0x174804: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x174804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x174808: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17480c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x174810: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x174810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174814: 0xc040128  jal         func_1004A0
    ctx->pc = 0x174814u;
    SET_GPR_U32(ctx, 31, 0x17481Cu);
    ctx->pc = 0x174818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174814u;
    // 0x174818: 0x22940  sll         $a1, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x174814u, 0x17481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17481Cu;
label_17481c:
    // 0x17481c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17481cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x174820: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x174820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x174824: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x174824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x174828: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x174828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17482c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x17482Cu;
    SET_GPR_U32(ctx, 31, 0x174834u);
    ctx->pc = 0x174830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17482Cu;
    // 0x174830: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x17482Cu, 0x174834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174834u;
label_174834:
    // 0x174834: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x174834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x174838: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x174838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17483c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x174840: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x174840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174844: 0xc040128  jal         func_1004A0
    ctx->pc = 0x174844u;
    SET_GPR_U32(ctx, 31, 0x17484Cu);
    ctx->pc = 0x174848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174844u;
    // 0x174848: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x174844u, 0x17484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17484Cu;
label_17484c:
    // 0x17484c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x17484cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_174850:
    // 0x174850: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x174850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x174854: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x174854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x174858: 0xc045b40  jal         func_116D00
    ctx->pc = 0x174858u;
    SET_GPR_U32(ctx, 31, 0x174860u);
    ctx->pc = 0x17485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174858u;
    // 0x17485c: 0x24a5f640  addiu       $a1, $a1, -0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D00u, 0x174858u, 0x174860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174860u;
label_174860:
    // 0x174860: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x174860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x174864: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x174864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x174868: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x174868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x17486c: 0xc045b40  jal         func_116D00
    ctx->pc = 0x17486Cu;
    SET_GPR_U32(ctx, 31, 0x174874u);
    ctx->pc = 0x174870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17486Cu;
    // 0x174870: 0x24a5f648  addiu       $a1, $a1, -0x9B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D00u, 0x17486Cu, 0x174874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174874u;
label_174874:
    // 0x174874: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x174874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x174878: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x174878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x17487c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x17487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x174880: 0xc045b40  jal         func_116D00
    ctx->pc = 0x174880u;
    SET_GPR_U32(ctx, 31, 0x174888u);
    ctx->pc = 0x174884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174880u;
    // 0x174884: 0x24a5f658  addiu       $a1, $a1, -0x9A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D00u, 0x174880u, 0x174888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174888u;
label_174888:
    // 0x174888: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x174888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x17488c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x17488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x174890: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174890u;
    {
        const bool branch_taken_0x174890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174890u;
        // 0x174894: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174890) {
            ctx->pc = 0x1748B4u;
            goto label_1748b4;
        }
    }
    ctx->pc = 0x174898u;
    // 0x174898: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x174898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17489c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x17489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1748a0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1748a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1748a4: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1748A4u;
    SET_GPR_U32(ctx, 31, 0x1748ACu);
    ctx->pc = 0x1748A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748A4u;
    // 0x1748a8: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1748A4u, 0x1748ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748ACu;
label_1748ac:
    // 0x1748ac: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1748acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1748b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1748b4:
    // 0x1748b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1748b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1748b8:
    // 0x1748b8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1748b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1748bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1748bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1748c0: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x1748c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x1748c4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1748C4u;
    SET_GPR_U32(ctx, 31, 0x1748CCu);
    ctx->pc = 0x1748C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748C4u;
    // 0x1748c8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1748C4u, 0x1748CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748CCu;
label_1748cc:
    // 0x1748cc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1748ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1748d0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1748d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1748d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1748d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1748dc: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x1748dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1748e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1748e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1748e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1748e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1748e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1748e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1748ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1748ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1748f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1748f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1748f4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1748f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1748f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1748f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1748fc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1748fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x174900: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x174900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174904: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x174904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x174908: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x174908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17490c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x17490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x174910: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174910u;
    SET_GPR_U32(ctx, 31, 0x174918u);
    ctx->pc = 0x174914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174910u;
    // 0x174914: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174910u, 0x174918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174918u;
label_174918:
    // 0x174918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17491c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17491cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x174920: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x174920u;
    {
        const bool branch_taken_0x174920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174920u;
        // 0x174924: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174920) {
            ctx->pc = 0x1748B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1748b8;
        }
    }
    ctx->pc = 0x174928u;
    // 0x174928: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x174928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17492c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x174930: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x174930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x174934: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x174934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x174938: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174938u;
    {
        const bool branch_taken_0x174938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174938u;
        // 0x17493c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174938) {
            ctx->pc = 0x174954u;
            goto label_174954;
        }
    }
    ctx->pc = 0x174940u;
    // 0x174940: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x174940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x174944: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x174944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x174948: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174948u;
    SET_GPR_U32(ctx, 31, 0x174950u);
    ctx->pc = 0x17494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174948u;
    // 0x17494c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174948u, 0x174950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174950u;
label_174950:
    // 0x174950: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x174950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_174954:
    // 0x174954: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x174954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x174958: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174958u;
    {
        const bool branch_taken_0x174958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174958u;
        // 0x17495c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174958) {
            ctx->pc = 0x17497Cu;
            goto label_17497c;
        }
    }
    ctx->pc = 0x174960u;
    // 0x174960: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x174964: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x174964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x174968: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x174968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x17496c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x17496Cu;
    SET_GPR_U32(ctx, 31, 0x174974u);
    ctx->pc = 0x174970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17496Cu;
    // 0x174970: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x17496Cu, 0x174974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174974u;
label_174974:
    // 0x174974: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x174974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x174978: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17497c:
    // 0x17497c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17497cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174980:
    // 0x174980: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x174984: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174988: 0x24421950  addiu       $v0, $v0, 0x1950
    ctx->pc = 0x174988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6480));
    // 0x17498c: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x17498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x174990: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174990u;
    SET_GPR_U32(ctx, 31, 0x174998u);
    ctx->pc = 0x174994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174990u;
    // 0x174994: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174990u, 0x174998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174998u;
label_174998:
    // 0x174998: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x174998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x17499c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x17499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1749a0: 0x24421990  addiu       $v0, $v0, 0x1990
    ctx->pc = 0x1749a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6544));
    // 0x1749a4: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1749a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1749a8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1749A8u;
    SET_GPR_U32(ctx, 31, 0x1749B0u);
    ctx->pc = 0x1749ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749A8u;
    // 0x1749ac: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1749A8u, 0x1749B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749B0u;
label_1749b0:
    // 0x1749b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1749b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1749b4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1749b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1749b8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1749B8u;
    {
        const bool branch_taken_0x1749b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749B8u;
        // 0x1749bc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749b8) {
            ctx->pc = 0x174980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174980;
        }
    }
    ctx->pc = 0x1749C0u;
    // 0x1749c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1749c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1749c4: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1749c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1749c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1749cc: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1749d0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1749d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1749d4: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1749d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1749D8u;
    {
        const bool branch_taken_0x1749d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749D8u;
        // 0x1749dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749d8) {
            ctx->pc = 0x1749F4u;
            goto label_1749f4;
        }
    }
    ctx->pc = 0x1749E0u;
    // 0x1749e0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1749e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1749e4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1749e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1749e8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1749E8u;
    SET_GPR_U32(ctx, 31, 0x1749F0u);
    ctx->pc = 0x1749ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1749E8u;
    // 0x1749ec: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1749E8u, 0x1749F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749F0u;
label_1749f0:
    // 0x1749f0: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1749f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_1749f4:
    // 0x1749f4: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1749f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1749f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1749F8u;
    {
        const bool branch_taken_0x1749f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749F8u;
        // 0x1749fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749f8) {
            ctx->pc = 0x174A14u;
            goto label_174a14;
        }
    }
    ctx->pc = 0x174A00u;
    // 0x174a00: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x174a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x174a04: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x174a08: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A08u;
    SET_GPR_U32(ctx, 31, 0x174A10u);
    ctx->pc = 0x174A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A08u;
    // 0x174a0c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A08u, 0x174A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A10u;
label_174a10:
    // 0x174a10: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x174a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_174a14:
    // 0x174a14: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x174a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x174a18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A18u;
    {
        const bool branch_taken_0x174a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A18u;
        // 0x174a1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a18) {
            ctx->pc = 0x174A34u;
            goto label_174a34;
        }
    }
    ctx->pc = 0x174A20u;
    // 0x174a20: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x174a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x174a24: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x174a28: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A28u;
    SET_GPR_U32(ctx, 31, 0x174A30u);
    ctx->pc = 0x174A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A28u;
    // 0x174a2c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A28u, 0x174A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A30u;
label_174a30:
    // 0x174a30: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x174a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_174a34:
    // 0x174a34: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x174a38: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A38u;
    {
        const bool branch_taken_0x174a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A38u;
        // 0x174a3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a38) {
            ctx->pc = 0x174A54u;
            goto label_174a54;
        }
    }
    ctx->pc = 0x174A40u;
    // 0x174a40: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x174a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x174a44: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x174a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x174a48: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A48u;
    SET_GPR_U32(ctx, 31, 0x174A50u);
    ctx->pc = 0x174A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A48u;
    // 0x174a4c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A48u, 0x174A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A50u;
label_174a50:
    // 0x174a50: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x174a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_174a54:
    // 0x174a54: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x174a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x174a58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A58u;
    {
        const bool branch_taken_0x174a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A58u;
        // 0x174a5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a58) {
            ctx->pc = 0x174A74u;
            goto label_174a74;
        }
    }
    ctx->pc = 0x174A60u;
    // 0x174a60: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x174a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x174a64: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x174a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x174a68: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A68u;
    SET_GPR_U32(ctx, 31, 0x174A70u);
    ctx->pc = 0x174A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A68u;
    // 0x174a6c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A68u, 0x174A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A70u;
label_174a70:
    // 0x174a70: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x174a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_174a74:
    // 0x174a74: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x174a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x174a78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A78u;
    {
        const bool branch_taken_0x174a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A78u;
        // 0x174a7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a78) {
            ctx->pc = 0x174A94u;
            goto label_174a94;
        }
    }
    ctx->pc = 0x174A80u;
    // 0x174a80: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x174a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x174a84: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x174a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x174a88: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A88u;
    SET_GPR_U32(ctx, 31, 0x174A90u);
    ctx->pc = 0x174A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A88u;
    // 0x174a8c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A88u, 0x174A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A90u;
label_174a90:
    // 0x174a90: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x174a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_174a94:
    // 0x174a94: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x174a98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A98u;
    {
        const bool branch_taken_0x174a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A98u;
        // 0x174a9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a98) {
            ctx->pc = 0x174AB4u;
            goto label_174ab4;
        }
    }
    ctx->pc = 0x174AA0u;
    // 0x174aa0: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x174aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x174aa4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x174aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x174aa8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174AA8u;
    SET_GPR_U32(ctx, 31, 0x174AB0u);
    ctx->pc = 0x174AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AA8u;
    // 0x174aac: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174AA8u, 0x174AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AB0u;
label_174ab0:
    // 0x174ab0: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x174ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_174ab4:
    // 0x174ab4: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x174ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x174ab8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174AB8u;
    {
        const bool branch_taken_0x174ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AB8u;
        // 0x174abc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ab8) {
            ctx->pc = 0x174ADCu;
            goto label_174adc;
        }
    }
    ctx->pc = 0x174AC0u;
    // 0x174ac0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174ac4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x174ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    // 0x174ac8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x174ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x174acc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174ACCu;
    SET_GPR_U32(ctx, 31, 0x174AD4u);
    ctx->pc = 0x174AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174ACCu;
    // 0x174ad0: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174ACCu, 0x174AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AD4u;
label_174ad4:
    // 0x174ad4: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x174ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x174ad8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x174ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174adc:
    // 0x174adc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174ae0:
    // 0x174ae0: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x174ae4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174ae8: 0x244219d0  addiu       $v0, $v0, 0x19D0
    ctx->pc = 0x174ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6608));
    // 0x174aec: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x174aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x174af0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174af4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174AF4u;
    SET_GPR_U32(ctx, 31, 0x174AFCu);
    ctx->pc = 0x174AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174AF4u;
    // 0x174af8: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174AF4u, 0x174AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AFCu;
label_174afc:
    // 0x174afc: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x174afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x174b00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b04: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B04u;
    SET_GPR_U32(ctx, 31, 0x174B0Cu);
    ctx->pc = 0x174B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B04u;
    // 0x174b08: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B04u, 0x174B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B0Cu;
label_174b0c:
    // 0x174b0c: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x174b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x174b10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b14: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B14u;
    SET_GPR_U32(ctx, 31, 0x174B1Cu);
    ctx->pc = 0x174B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B14u;
    // 0x174b18: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B14u, 0x174B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B1Cu;
label_174b1c:
    // 0x174b1c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x174b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x174b20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b24: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B24u;
    SET_GPR_U32(ctx, 31, 0x174B2Cu);
    ctx->pc = 0x174B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B24u;
    // 0x174b28: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B24u, 0x174B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B2Cu;
label_174b2c:
    // 0x174b2c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x174b30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b34: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B34u;
    SET_GPR_U32(ctx, 31, 0x174B3Cu);
    ctx->pc = 0x174B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B34u;
    // 0x174b38: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B34u, 0x174B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B3Cu;
label_174b3c:
    // 0x174b3c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x174b40: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x174b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x174b44: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x174b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x174b48: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x174b4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x174b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b50: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B50u;
    SET_GPR_U32(ctx, 31, 0x174B58u);
    ctx->pc = 0x174B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B50u;
    // 0x174b54: 0x722021  addu        $a0, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B50u, 0x174B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B58u;
label_174b58:
    // 0x174b58: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x174b5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x174b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b60: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B60u;
    SET_GPR_U32(ctx, 31, 0x174B68u);
    ctx->pc = 0x174B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B60u;
    // 0x174b64: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B60u, 0x174B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B68u;
label_174b68:
    // 0x174b68: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x174b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x174b6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x174b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174b70: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174B70u;
    SET_GPR_U32(ctx, 31, 0x174B78u);
    ctx->pc = 0x174B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174B70u;
    // 0x174b74: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174B70u, 0x174B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B78u;
label_174b78:
    // 0x174b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x174b7c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x174b7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x174b80: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x174B80u;
    {
        const bool branch_taken_0x174b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B80u;
        // 0x174b84: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b80) {
            ctx->pc = 0x174AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174ae0;
        }
    }
    ctx->pc = 0x174B88u;
    // 0x174b88: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174b8c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x174b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x174b90: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x174b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x174b94: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174b98: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x174b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x174b9c: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x174b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x174ba0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174ba4: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x174ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x174ba8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x174ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x174bac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bb0: 0x24630140  addiu       $v1, $v1, 0x140
    ctx->pc = 0x174bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x174bb4: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x174bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x174bb8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bbc: 0x246301c0  addiu       $v1, $v1, 0x1C0
    ctx->pc = 0x174bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x174bc0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x174bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x174bc4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bc8: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x174bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x174bcc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x174bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x174bd0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174bd4: 0x24630240  addiu       $v1, $v1, 0x240
    ctx->pc = 0x174bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
    // 0x174bd8: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x174bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x174bdc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x174bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x174be0: 0x24630280  addiu       $v1, $v1, 0x280
    ctx->pc = 0x174be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x174be4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x174be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x174be8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x174be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174bec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174becu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174bf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174bf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c00: 0x3e00008  jr          $ra
    ctx->pc = 0x174C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C00u;
        // 0x174c04: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C08u;
}
