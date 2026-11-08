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

// Function: FUN_00150440
// Address: 0x150440 - 0x150578
void FUN_00150440_0x150440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150440_0x150440");
#endif

    switch (ctx->pc) {
        case 0x150480u: goto label_150480;
        case 0x1504a8u: goto label_1504a8;
        case 0x150504u: goto label_150504;
        case 0x150510u: goto label_150510;
        case 0x15051cu: goto label_15051c;
        case 0x150544u: goto label_150544;
        case 0x150554u: goto label_150554;
        default: break;
    }

    ctx->pc = 0x150440u;

    // 0x150440: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x150440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x150444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x150444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x150448: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x150448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15044c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x150450: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x150454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x150454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15045c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15045cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150460: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x150460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x150464: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x150464u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150468: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x150468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15046c: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x15046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x150470: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x150470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150474: 0x8c530098  lw          $s3, 0x98($v0)
    ctx->pc = 0x150474u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x150478: 0xc054160  jal         func_150580
    ctx->pc = 0x150478u;
    SET_GPR_U32(ctx, 31, 0x150480u);
    ctx->pc = 0x15047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150478u;
    // 0x15047c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x150478u, 0x150480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150480u;
label_150480:
    // 0x150480: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x150480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x150484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150488: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x150488u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15048c: 0x8c5000a4  lw          $s0, 0xA4($v0)
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x150490: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x150490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x150494: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x150498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15049c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x15049cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1504a0: 0xc054160  jal         func_150580
    ctx->pc = 0x1504A0u;
    SET_GPR_U32(ctx, 31, 0x1504A8u);
    ctx->pc = 0x1504A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504A0u;
    // 0x1504a4: 0x4601155d  msub.s      $f21, $f2, $f1 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x1504A0u, 0x1504A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504A8u;
label_1504a8:
    // 0x1504a8: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x1504a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1504ac: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1504b0: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1504b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x1504b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1504b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1504b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1504b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1504bc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1504bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1504c0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1504c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1504c4: 0x0  nop
    ctx->pc = 0x1504c4u;
    // NOP
    // 0x1504c8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x1504c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1504cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1504ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1504d0: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1504d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1504d4: 0x4615a040  add.s       $f1, $f20, $f21
    ctx->pc = 0x1504d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1504d8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1504d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1504dc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1504dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1504e0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1504e0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x1504e4: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1504e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1504e8: 0x0  nop
    ctx->pc = 0x1504e8u;
    // NOP
    // 0x1504ec: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x1504ecu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x1504f0: 0x46012d02  mul.s       $f20, $f5, $f1
    ctx->pc = 0x1504f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1504f4: 0x0  nop
    ctx->pc = 0x1504f4u;
    // NOP
    // 0x1504f8: 0x0  nop
    ctx->pc = 0x1504f8u;
    // NOP
    // 0x1504fc: 0xc054170  jal         func_1505C0
    ctx->pc = 0x1504FCu;
    SET_GPR_U32(ctx, 31, 0x150504u);
    ctx->pc = 0x150500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504FCu;
    // 0x150500: 0x46002d42  mul.s       $f21, $f5, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1505C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1505C0u, 0x1504FCu, 0x150504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150504u;
label_150504:
    // 0x150504: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x150504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x150508: 0xc054170  jal         func_1505C0
    ctx->pc = 0x150508u;
    SET_GPR_U32(ctx, 31, 0x150510u);
    ctx->pc = 0x15050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150508u;
    // 0x15050c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1505C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1505C0u, 0x150508u, 0x150510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150510u;
label_150510:
    // 0x150510: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x150510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x150514: 0xc054170  jal         func_1505C0
    ctx->pc = 0x150514u;
    SET_GPR_U32(ctx, 31, 0x15051Cu);
    ctx->pc = 0x150518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150514u;
    // 0x150518: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1505C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1505C0u, 0x150514u, 0x15051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15051Cu;
label_15051c:
    // 0x15051c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x150520: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x150520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150524: 0x244273f0  addiu       $v0, $v0, 0x73F0
    ctx->pc = 0x150524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29680));
    // 0x150528: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15052c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x15052cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3673F0u));
    // 0x150530: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x150530u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x150534: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x150534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x150538: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x150538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15053c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x15053Cu;
    SET_GPR_U32(ctx, 31, 0x150544u);
    ctx->pc = 0x150540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15053Cu;
    // 0x150540: 0xe7b50064  swc1        $f21, 0x64($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x15053Cu, 0x150544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150544u;
label_150544:
    // 0x150544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150548: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15054c: 0xc07d452  jal         func_1F5148
    ctx->pc = 0x15054Cu;
    SET_GPR_U32(ctx, 31, 0x150554u);
    ctx->pc = 0x150550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15054Cu;
    // 0x150550: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5148u, 0x15054Cu, 0x150554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150554u;
label_150554:
    // 0x150554: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x150554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150558: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x150558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15055c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15055cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150560: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x150560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150564: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x150564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150568: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15056c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15056cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150570: 0x3e00008  jr          $ra
    ctx->pc = 0x150570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150570u;
        // 0x150574: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150578u;
}
