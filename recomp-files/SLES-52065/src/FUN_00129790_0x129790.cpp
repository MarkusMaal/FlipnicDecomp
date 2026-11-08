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

// Function: FUN_00129790
// Address: 0x129790 - 0x1298bc
void FUN_00129790_0x129790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00129790_0x129790");
#endif

    switch (ctx->pc) {
        case 0x1297dcu: goto label_1297dc;
        case 0x1297fcu: goto label_1297fc;
        case 0x12980cu: goto label_12980c;
        case 0x129814u: goto label_129814;
        case 0x12981cu: goto label_12981c;
        case 0x129890u: goto label_129890;
        case 0x12989cu: goto label_12989c;
        case 0x1298a8u: goto label_1298a8;
        default: break;
    }

    ctx->pc = 0x129790u;

    // 0x129790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12979c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1297a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1297a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297a4: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x1297a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1297a8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1297A8u;
    {
        const bool branch_taken_0x1297a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1297A8u;
        // 0x1297ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297a8) {
            ctx->pc = 0x129888u;
            goto label_129888;
        }
    }
    ctx->pc = 0x1297B0u;
    // 0x1297b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1297b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1297b4: 0x0  nop
    ctx->pc = 0x1297b4u;
    // NOP
    // 0x1297b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1297b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1297bc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1297bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1297c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1297c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1297c4: 0x0  nop
    ctx->pc = 0x1297c4u;
    // NOP
    // 0x1297c8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1297c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1297cc: 0x0  nop
    ctx->pc = 0x1297ccu;
    // NOP
    // 0x1297d0: 0x0  nop
    ctx->pc = 0x1297d0u;
    // NOP
    // 0x1297d4: 0xc082520  jal         func_209480
    ctx->pc = 0x1297D4u;
    SET_GPR_U32(ctx, 31, 0x1297DCu);
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1297D4u, 0x1297DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1297DCu;
label_1297dc:
    // 0x1297dc: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x1297dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
    // 0x1297e0: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1297e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1297e4: 0x34841eb8  ori         $a0, $a0, 0x1EB8
    ctx->pc = 0x1297e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7864);
    // 0x1297e8: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1297e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1297ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1297ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1297f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1297f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297f4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1297F4u;
    SET_GPR_U32(ctx, 31, 0x1297FCu);
    ctx->pc = 0x1297F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1297F4u;
    // 0x1297f8: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1297F4u, 0x1297FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1297FCu;
label_1297fc:
    // 0x1297fc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x129800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129804: 0xc0820d8  jal         func_208360
    ctx->pc = 0x129804u;
    SET_GPR_U32(ctx, 31, 0x12980Cu);
    ctx->pc = 0x129808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129804u;
    // 0x129808: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x129804u, 0x12980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12980Cu;
label_12980c:
    // 0x12980c: 0xc082222  jal         func_208888
    ctx->pc = 0x12980Cu;
    SET_GPR_U32(ctx, 31, 0x129814u);
    ctx->pc = 0x129810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12980Cu;
    // 0x129810: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x12980Cu, 0x129814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129814u;
label_129814:
    // 0x129814: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x129814u;
    SET_GPR_U32(ctx, 31, 0x12981Cu);
    ctx->pc = 0x129818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129814u;
    // 0x129818: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x129814u, 0x12981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12981Cu;
label_12981c:
    // 0x12981c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x129820: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x129820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x129824: 0xc62200b4  lwc1        $f2, 0xB4($s1)
    ctx->pc = 0x129824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129828: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x129828u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12982c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x12982cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x129830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129834: 0x0  nop
    ctx->pc = 0x129834u;
    // NOP
    // 0x129838: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x129838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12983c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x12983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x129840: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x129840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x129844: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x129844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x129848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12984c: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x12984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129850: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x129850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x129854: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x129854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129858: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x129858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12985c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12985cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x129860: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x129860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x129864: 0xc62000d8  lwc1        $f0, 0xD8($s1)
    ctx->pc = 0x129864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129868: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x129868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12986c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12986cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x129870: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x129874: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x129874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x129878: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x129878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x12987c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x129880: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x129880u;
    {
        const bool branch_taken_0x129880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129880u;
        // 0x129884: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129880) {
            ctx->pc = 0x12989Cu;
            goto label_12989c;
        }
    }
    ctx->pc = 0x129888u;
label_129888:
    // 0x129888: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x129888u;
    SET_GPR_U32(ctx, 31, 0x129890u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x129888u, 0x129890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129890u;
label_129890:
    // 0x129890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129894: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x129894u;
    SET_GPR_U32(ctx, 31, 0x12989Cu);
    ctx->pc = 0x129898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129894u;
    // 0x129898: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x129894u, 0x12989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12989Cu;
label_12989c:
    // 0x12989c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298a0: 0xc0497f0  jal         func_125FC0
    ctx->pc = 0x1298A0u;
    SET_GPR_U32(ctx, 31, 0x1298A8u);
    ctx->pc = 0x1298A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1298A0u;
    // 0x1298a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125FC0u, 0x1298A0u, 0x1298A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1298A8u;
label_1298a8:
    // 0x1298a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1298a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1298ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1298acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1298b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1298b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1298b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1298B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1298B4u;
        // 0x1298b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1298B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1298BCu;
}
