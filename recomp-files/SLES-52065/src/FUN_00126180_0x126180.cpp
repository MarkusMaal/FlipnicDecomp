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

// Function: FUN_00126180
// Address: 0x126180 - 0x1262b0
void FUN_00126180_0x126180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126180_0x126180");
#endif

    switch (ctx->pc) {
        case 0x1261e4u: goto label_1261e4;
        case 0x1261f4u: goto label_1261f4;
        case 0x126204u: goto label_126204;
        case 0x126214u: goto label_126214;
        case 0x126224u: goto label_126224;
        case 0x126238u: goto label_126238;
        default: break;
    }

    ctx->pc = 0x126180u;

    // 0x126180: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x126180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x126184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x126184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x126188: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x126188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12618c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12618cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126190: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x126190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x126194: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x126194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x126198: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x126198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x12619c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1261a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1261a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1261a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1261a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1261a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1261acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1261b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1261b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1261b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1261b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1261b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1261bc: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x1261bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1261c0: 0x46000542  mul.s       $f21, $f0, $f0
    ctx->pc = 0x1261c0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1261c4: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x1261c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1261c8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1261c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1261cc: 0x0  nop
    ctx->pc = 0x1261ccu;
    // NOP
    // 0x1261d0: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x1261d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1261d4: 0x0  nop
    ctx->pc = 0x1261d4u;
    // NOP
    // 0x1261d8: 0x0  nop
    ctx->pc = 0x1261d8u;
    // NOP
    // 0x1261dc: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1261DCu;
    SET_GPR_U32(ctx, 31, 0x1261E4u);
    ctx->pc = 0x1261E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261DCu;
    // 0x1261e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1261DCu, 0x1261E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261E4u;
label_1261e4:
    // 0x1261e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1261e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1261e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1261e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261ec: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x1261ECu;
    SET_GPR_U32(ctx, 31, 0x1261F4u);
    ctx->pc = 0x1261F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261ECu;
    // 0x1261f0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x1261ECu, 0x1261F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261F4u;
label_1261f4:
    // 0x1261f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1261f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1261f8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1261f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1261fc: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x1261FCu;
    SET_GPR_U32(ctx, 31, 0x126204u);
    ctx->pc = 0x126200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1261FCu;
    // 0x126200: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1261FCu, 0x126204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126204u;
label_126204:
    // 0x126204: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x126208: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x126208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12620c: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x12620Cu;
    SET_GPR_U32(ctx, 31, 0x126214u);
    ctx->pc = 0x126210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12620Cu;
    // 0x126210: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x12620Cu, 0x126214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126214u;
label_126214:
    // 0x126214: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x126214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x126218: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x126218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12621c: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x12621Cu;
    SET_GPR_U32(ctx, 31, 0x126224u);
    ctx->pc = 0x126220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12621Cu;
    // 0x126220: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x12621Cu, 0x126224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126224u;
label_126224:
    // 0x126224: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x126228: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12622c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126230: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x126230u;
    SET_GPR_U32(ctx, 31, 0x126238u);
    ctx->pc = 0x126234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126230u;
    // 0x126234: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x126230u, 0x126238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126238u;
label_126238:
    // 0x126238: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x126238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12623c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x12623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x126240: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x126240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126244: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x126244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x126248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x126248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12624c: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x12624cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x126250: 0x4615001c  madd.s      $f0, $f0, $f21
    ctx->pc = 0x126250u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
    // 0x126254: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x126254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x126258: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x126258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12625c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x12625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126260: 0x4614081a  mula.s      $f1, $f20
    ctx->pc = 0x126260u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x126264: 0x4615001c  madd.s      $f0, $f0, $f21
    ctx->pc = 0x126264u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[21]));
    // 0x126268: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x126268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x12626c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x12626cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x126270: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x126270u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x126274: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x126274u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x126278: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x126278u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
    // 0x12627c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x12627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126280: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x126280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x126284: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x126284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126288: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x126288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x12628c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126290: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x126290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126294: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x126294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x126298: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x126298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12629c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12629cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1262a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1262a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1262a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1262a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1262a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1262A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1262A8u;
        // 0x1262ac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262B0u;
}
