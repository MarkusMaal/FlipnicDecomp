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

// Function: FUN_00178810
// Address: 0x178810 - 0x1788a4
void FUN_00178810_0x178810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178810_0x178810");
#endif

    switch (ctx->pc) {
        case 0x178840u: goto label_178840;
        case 0x17884cu: goto label_17884c;
        default: break;
    }

    ctx->pc = 0x178810u;

    // 0x178810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17881c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17881cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178824: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x178824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x178828: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x178828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17882c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x17882cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178830: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x178830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x178834: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x178834u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x178838: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x178838u;
    {
        const bool branch_taken_0x178838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178838u;
        // 0x17883c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178838) {
            ctx->pc = 0x17887Cu;
            goto label_17887c;
        }
    }
    ctx->pc = 0x178840u;
label_178840:
    // 0x178840: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x178840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x178844: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x178844u;
    SET_GPR_U32(ctx, 31, 0x17884Cu);
    ctx->pc = 0x178848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178844u;
    // 0x178848: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x178844u, 0x17884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17884Cu;
label_17884c:
    // 0x17884c: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x178850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178854: 0x0  nop
    ctx->pc = 0x178854u;
    // NOP
    // 0x178858: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x178858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17885c: 0x0  nop
    ctx->pc = 0x17885cu;
    // NOP
    // 0x178860: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x178860u;
    {
        const bool branch_taken_0x178860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x178864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178860u;
        // 0x178864: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178860) {
            ctx->pc = 0x178878u;
            goto label_178878;
        }
    }
    ctx->pc = 0x178868u;
    // 0x178868: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17886c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x17886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178870: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x178870u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x178874: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x178874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_178878:
    // 0x178878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17887c:
    // 0x17887c: 0x0  nop
    ctx->pc = 0x17887cu;
    // NOP
    // 0x178880: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x178880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x178884: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x178884u;
    {
        const bool branch_taken_0x178884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178884u;
        // 0x178888: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178884) {
            ctx->pc = 0x178840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178840;
        }
    }
    ctx->pc = 0x17888Cu;
    // 0x17888c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17888cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17889c: 0x3e00008  jr          $ra
    ctx->pc = 0x17889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1788A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17889Cu;
        // 0x1788a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17889Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1788A4u;
}
