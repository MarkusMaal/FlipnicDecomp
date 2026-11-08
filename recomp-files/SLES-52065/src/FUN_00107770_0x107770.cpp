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

// Function: FUN_00107770
// Address: 0x107770 - 0x107a60
void FUN_00107770_0x107770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00107770_0x107770");
#endif

    switch (ctx->pc) {
        case 0x1077b0u: goto label_1077b0;
        case 0x1077b8u: goto label_1077b8;
        case 0x1077c4u: goto label_1077c4;
        case 0x1077ccu: goto label_1077cc;
        case 0x1077d8u: goto label_1077d8;
        case 0x1077e0u: goto label_1077e0;
        case 0x1077ecu: goto label_1077ec;
        case 0x107808u: goto label_107808;
        case 0x107828u: goto label_107828;
        case 0x10789cu: goto label_10789c;
        case 0x1078d4u: goto label_1078d4;
        case 0x1079d4u: goto label_1079d4;
        default: break;
    }

    ctx->pc = 0x107770u;

    // 0x107770: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x107770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x107774: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x107774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x107778: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x107778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10777c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x107780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x107780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x107784: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x107784u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x107788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10778c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x10778cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x107790: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x107790u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x107794: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x107794u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x107798: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x107798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x10779c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1077a0: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x1077a0u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x1077a4: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x1077a4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x1077a8: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x1077A8u;
    SET_GPR_U32(ctx, 31, 0x1077B0u);
    ctx->pc = 0x1077ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077A8u;
    // 0x1077ac: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x1077A8u, 0x1077B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077B0u;
label_1077b0:
    // 0x1077b0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1077B0u;
    SET_GPR_U32(ctx, 31, 0x1077B8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1077B0u, 0x1077B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077B8u;
label_1077b8:
    // 0x1077b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1077b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077bc: 0xc04a058  jal         func_128160
    ctx->pc = 0x1077BCu;
    SET_GPR_U32(ctx, 31, 0x1077C4u);
    ctx->pc = 0x1077C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077BCu;
    // 0x1077c0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x1077BCu, 0x1077C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077C4u;
label_1077c4:
    // 0x1077c4: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1077C4u;
    SET_GPR_U32(ctx, 31, 0x1077CCu);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1077C4u, 0x1077CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077CCu;
label_1077cc:
    // 0x1077cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1077ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077d0: 0xc04a060  jal         func_128180
    ctx->pc = 0x1077D0u;
    SET_GPR_U32(ctx, 31, 0x1077D8u);
    ctx->pc = 0x1077D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077D0u;
    // 0x1077d4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128180u, 0x1077D0u, 0x1077D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077D8u;
label_1077d8:
    // 0x1077d8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1077D8u;
    SET_GPR_U32(ctx, 31, 0x1077E0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1077D8u, 0x1077E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077E0u;
label_1077e0:
    // 0x1077e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1077e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1077e4: 0xc04a068  jal         func_1281A0
    ctx->pc = 0x1077E4u;
    SET_GPR_U32(ctx, 31, 0x1077ECu);
    ctx->pc = 0x1077E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077E4u;
    // 0x1077e8: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281A0u, 0x1077E4u, 0x1077ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077ECu;
label_1077ec:
    // 0x1077ec: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x1077ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1077f0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1077f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1077f4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1077f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1077f8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1077f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1077fc: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x1077fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x107800: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x107800u;
    SET_GPR_U32(ctx, 31, 0x107808u);
    ctx->pc = 0x107804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107800u;
    // 0x107804: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x107800u, 0x107808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107808u;
label_107808:
    // 0x107808: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x107808u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10780c: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x10780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107810: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x107810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107814: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x107814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107818: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x107818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10781c: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x10781cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x107820: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x107820u;
    SET_GPR_U32(ctx, 31, 0x107828u);
    ctx->pc = 0x107824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107820u;
    // 0x107824: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x107820u, 0x107828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107828u;
label_107828:
    // 0x107828: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x107828u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x10782c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10782cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107830: 0x0  nop
    ctx->pc = 0x107830u;
    // NOP
    // 0x107834: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x107834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107838: 0x0  nop
    ctx->pc = 0x107838u;
    // NOP
    // 0x10783c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x10783Cu;
    {
        const bool branch_taken_0x10783c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10783Cu;
        // 0x107840: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10783c) {
            ctx->pc = 0x107854u;
            goto label_107854;
        }
    }
    ctx->pc = 0x107844u;
    // 0x107844: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x107844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x107848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x107848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10784c: 0x0  nop
    ctx->pc = 0x10784cu;
    // NOP
    // 0x107850: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x107850u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_107854:
    // 0x107854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x107854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107858: 0x0  nop
    ctx->pc = 0x107858u;
    // NOP
    // 0x10785c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x10785cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107860: 0x0  nop
    ctx->pc = 0x107860u;
    // NOP
    // 0x107864: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x107864u;
    {
        const bool branch_taken_0x107864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107864u;
        // 0x107868: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107864) {
            ctx->pc = 0x107884u;
            goto label_107884;
        }
    }
    ctx->pc = 0x10786Cu;
    // 0x10786c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x10786cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x107870: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x107870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x107874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x107874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107878: 0x0  nop
    ctx->pc = 0x107878u;
    // NOP
    // 0x10787c: 0x46150540  add.s       $f21, $f0, $f21
    ctx->pc = 0x10787cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x107880: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x107880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_107884:
    // 0x107884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x107884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x107888: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x107888u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x10788c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10788cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107890: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x107890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x107894: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x107894u;
    SET_GPR_U32(ctx, 31, 0x10789Cu);
    ctx->pc = 0x107898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107894u;
    // 0x107898: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x107894u, 0x10789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10789Cu;
label_10789c:
    // 0x10789c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x10789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1078a0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1078a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x1078a4: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1078a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1078a8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1078a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1078ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1078b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1078b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1078b4: 0x0  nop
    ctx->pc = 0x1078b4u;
    // NOP
    // 0x1078b8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1078b8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1078bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1078bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1078c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1078c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1078c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1078c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1078c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1078c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1078cc: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1078CCu;
    SET_GPR_U32(ctx, 31, 0x1078D4u);
    ctx->pc = 0x1078D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078CCu;
    // 0x1078d0: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1078CCu, 0x1078D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078D4u;
label_1078d4:
    // 0x1078d4: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x1078d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1078d8: 0x3c02427c  lui         $v0, 0x427C
    ctx->pc = 0x1078d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17020 << 16));
    // 0x1078dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1078dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1078e0: 0x0  nop
    ctx->pc = 0x1078e0u;
    // NOP
    // 0x1078e4: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1078e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1078e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1078e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1078ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1078ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1078f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1078f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1078f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1078f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1078f8: 0x0  nop
    ctx->pc = 0x1078f8u;
    // NOP
    // 0x1078fc: 0x2861ffc1  slti        $at, $v1, -0x3F
    ctx->pc = 0x1078fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967233) ? 1 : 0);
    // 0x107900: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x107900u;
    {
        const bool branch_taken_0x107900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x107904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107900u;
        // 0x107904: 0x28610040  slti        $at, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107900) {
            ctx->pc = 0x107910u;
            goto label_107910;
        }
    }
    ctx->pc = 0x107908u;
    // 0x107908: 0x2403ffc1  addiu       $v1, $zero, -0x3F
    ctx->pc = 0x107908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967233));
    // 0x10790c: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x10790cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_107910:
    // 0x107910: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x107910u;
    {
        const bool branch_taken_0x107910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x107910) {
            ctx->pc = 0x10791Cu;
            goto label_10791c;
        }
    }
    ctx->pc = 0x107918u;
    // 0x107918: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x107918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_10791c:
    // 0x10791c: 0x938286d8  lbu         $v0, -0x7928($gp)
    ctx->pc = 0x10791cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936280)));
    // 0x107920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107920u;
    {
        const bool branch_taken_0x107920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107920u;
        // 0x107924: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107920) {
            ctx->pc = 0x107930u;
            goto label_107930;
        }
    }
    ctx->pc = 0x107928u;
    // 0x107928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107928u;
    {
        const bool branch_taken_0x107928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107928u;
        // 0x10792c: 0x431823  subu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107928) {
            ctx->pc = 0x107934u;
            goto label_107934;
        }
    }
    ctx->pc = 0x107930u;
label_107930:
    // 0x107930: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x107930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_107934:
    // 0x107934: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x107934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107938: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x107938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10793c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10793cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107940: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x107940u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107944: 0x4bc4296c  vsub.xyz    $vf5, $vf5, $vf4
    ctx->pc = 0x107944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x107948: 0x4bc5292a  vmul.xyz    $vf4, $vf5, $vf5
    ctx->pc = 0x107948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10794c: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x10794cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x107950: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x107950u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x107954: 0x4b0521e8  vadd.x      $vf7, $vf4, $vf5
    ctx->pc = 0x107954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x107958: 0x4b073168  vadd.x      $vf5, $vf6, $vf7
    ctx->pc = 0x107958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10795c: 0x4a0503bd  .word       0x4A0503BD                   # vsqrt       $Q, $vf5x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x10795cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x107960: 0x4a0003bf  vwaitq
    ctx->pc = 0x107960u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x107964: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x107964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x107968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x107968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10796c: 0x0  nop
    ctx->pc = 0x10796cu;
    // NOP
    // 0x107970: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x107970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107974: 0x0  nop
    ctx->pc = 0x107974u;
    // NOP
    // 0x107978: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x107978u;
    {
        const bool branch_taken_0x107978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107978u;
        // 0x10797c: 0x2411007f  addiu       $s1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107978) {
            ctx->pc = 0x107988u;
            goto label_107988;
        }
    }
    ctx->pc = 0x107980u;
    // 0x107980: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x107980u;
    {
        const bool branch_taken_0x107980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107980u;
        // 0x107984: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107980) {
            ctx->pc = 0x1079CCu;
            goto label_1079cc;
        }
    }
    ctx->pc = 0x107988u;
label_107988:
    // 0x107988: 0x4616c601  sub.s       $f24, $f24, $f22
    ctx->pc = 0x107988u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x10798c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x10798cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x107990: 0x46180036  c.le.s      $f0, $f24
    ctx->pc = 0x107990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107994: 0x0  nop
    ctx->pc = 0x107994u;
    // NOP
    // 0x107998: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x107998u;
    {
        const bool branch_taken_0x107998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107998u;
        // 0x10799c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107998) {
            ctx->pc = 0x1079C8u;
            goto label_1079c8;
        }
    }
    ctx->pc = 0x1079A0u;
    // 0x1079a0: 0x0  nop
    ctx->pc = 0x1079a0u;
    // NOP
    // 0x1079a4: 0x0  nop
    ctx->pc = 0x1079a4u;
    // NOP
    // 0x1079a8: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x1079a8u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[24]); }
    // 0x1079ac: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1079acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1079b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1079b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1079b4: 0x0  nop
    ctx->pc = 0x1079b4u;
    // NOP
    // 0x1079b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1079b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1079bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1079bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1079c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1079c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1079c4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1079c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1079c8:
    // 0x1079c8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1079c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1079cc:
    // 0x1079cc: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1079CCu;
    SET_GPR_U32(ctx, 31, 0x1079D4u);
    ctx->pc = 0x1079D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079CCu;
    // 0x1079d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1079CCu, 0x1079D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1079D4u;
label_1079d4:
    // 0x1079d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1079d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1079d8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1079d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1079dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1079dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1079e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1079e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1079e4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1079e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1079e8: 0x0  nop
    ctx->pc = 0x1079e8u;
    // NOP
    // 0x1079ec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1079ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1079f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1079f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1079f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1079f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1079f8: 0x0  nop
    ctx->pc = 0x1079f8u;
    // NOP
    // 0x1079fc: 0x46020103  div.s       $f4, $f0, $f2
    ctx->pc = 0x1079fcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x107a00: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x107a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x107a04: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x107a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x107a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a0c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x107a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x107a10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x107a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x107a14: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x107a14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x107a18: 0x0  nop
    ctx->pc = 0x107a18u;
    // NOP
    // 0x107a1c: 0x46041042  mul.s       $f1, $f2, $f4
    ctx->pc = 0x107a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x107a20: 0x46011900  add.s       $f4, $f3, $f1
    ctx->pc = 0x107a20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x107a24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x107a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x107a28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x107a28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x107a2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x107a2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x107a30: 0x0  nop
    ctx->pc = 0x107a30u;
    // NOP
    // 0x107a34: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x107a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x107a38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x107a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107a3c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x107a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x107a40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x107a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107a44: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x107a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x107a48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x107a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107a4c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x107a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x107a50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x107a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107a54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x107a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107a58: 0x3e00008  jr          $ra
    ctx->pc = 0x107A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A58u;
        // 0x107a5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107A60u;
}
