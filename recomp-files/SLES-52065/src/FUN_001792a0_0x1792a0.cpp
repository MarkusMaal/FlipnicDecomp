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

// Function: FUN_001792a0
// Address: 0x1792a0 - 0x1793a4
void FUN_001792a0_0x1792a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001792a0_0x1792a0");
#endif

    switch (ctx->pc) {
        case 0x1792d4u: goto label_1792d4;
        case 0x17934cu: goto label_17934c;
        default: break;
    }

    ctx->pc = 0x1792a0u;

    // 0x1792a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1792a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1792a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1792a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1792a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1792a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1792ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1792acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1792b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1792b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1792b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1792b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1792b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1792bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1792c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1792c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1792c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1792c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1792c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1792cc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1792CCu;
    {
        const bool branch_taken_0x1792cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792CCu;
        // 0x1792d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792cc) {
            ctx->pc = 0x17936Cu;
            goto label_17936c;
        }
    }
    ctx->pc = 0x1792D4u;
label_1792d4:
    // 0x1792d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1792d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1792d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1792d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1792dc: 0x0  nop
    ctx->pc = 0x1792dcu;
    // NOP
    // 0x1792e0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1792e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1792e4: 0x0  nop
    ctx->pc = 0x1792e4u;
    // NOP
    // 0x1792e8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1792E8u;
    {
        const bool branch_taken_0x1792e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1792ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1792E8u;
        // 0x1792ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792e8) {
            ctx->pc = 0x17933Cu;
            goto label_17933c;
        }
    }
    ctx->pc = 0x1792F0u;
    // 0x1792f0: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1792f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1792f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1792f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1792f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1792fc: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x1792fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179300: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x179304: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x179304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x179308: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x179308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17930c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x17930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179310: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x179310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179314: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x179318: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x179318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17931c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x179320: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x179320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179324: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x179324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179328: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x179328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17932c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17932cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x179330: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x179330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x179334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179334u;
        // 0x179338: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179334) {
            ctx->pc = 0x17934Cu;
            goto label_17934c;
        }
    }
    ctx->pc = 0x17933Cu;
label_17933c:
    // 0x17933c: 0x0  nop
    ctx->pc = 0x17933cu;
    // NOP
    // 0x179340: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x179340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x179344: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x179344u;
    SET_GPR_U32(ctx, 31, 0x17934Cu);
    ctx->pc = 0x179348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179344u;
    // 0x179348: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x179344u, 0x17934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17934Cu;
label_17934c:
    // 0x17934c: 0x0  nop
    ctx->pc = 0x17934cu;
    // NOP
    // 0x179350: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x179354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179358: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x179358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x17935c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17935cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x179360: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179364: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x179364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x179368: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x179368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_17936c:
    // 0x17936c: 0x0  nop
    ctx->pc = 0x17936cu;
    // NOP
    // 0x179370: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x179370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x179374: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x179374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179378: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x179378u;
    {
        const bool branch_taken_0x179378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179378) {
            ctx->pc = 0x1792D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1792d4;
        }
    }
    ctx->pc = 0x179380u;
    // 0x179380: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x179380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179384: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x179384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179388: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x179388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17938c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17938cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179390: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x179390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179394: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x179394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179398: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17939c: 0x3e00008  jr          $ra
    ctx->pc = 0x17939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17939Cu;
        // 0x1793a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17939Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1793A4u;
}
