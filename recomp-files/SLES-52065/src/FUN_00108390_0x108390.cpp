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

// Function: FUN_00108390
// Address: 0x108390 - 0x108454
void FUN_00108390_0x108390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00108390_0x108390");
#endif

    switch (ctx->pc) {
        case 0x1083c0u: goto label_1083c0;
        case 0x1083ccu: goto label_1083cc;
        case 0x1083d8u: goto label_1083d8;
        case 0x108440u: goto label_108440;
        default: break;
    }

    ctx->pc = 0x108390u;

    // 0x108390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x108390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x108394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x108398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10839c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1083a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1083a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1083a4: 0xc4940200  lwc1        $f20, 0x200($a0)
    ctx->pc = 0x1083a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1083a8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1083a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1083ac: 0x0  nop
    ctx->pc = 0x1083acu;
    // NOP
    // 0x1083b0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1083B0u;
    {
        const bool branch_taken_0x1083b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1083B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083B0u;
        // 0x1083b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083b0) {
            ctx->pc = 0x108434u;
            goto label_108434;
        }
    }
    ctx->pc = 0x1083B8u;
    // 0x1083b8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1083B8u;
    SET_GPR_U32(ctx, 31, 0x1083C0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1083B8u, 0x1083C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083C0u;
label_1083c0:
    // 0x1083c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1083c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1083c4: 0xc04a058  jal         func_128160
    ctx->pc = 0x1083C4u;
    SET_GPR_U32(ctx, 31, 0x1083CCu);
    ctx->pc = 0x1083C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083C4u;
    // 0x1083c8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x1083C4u, 0x1083CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083CCu;
label_1083cc:
    // 0x1083cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1083ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1083d0: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x1083D0u;
    SET_GPR_U32(ctx, 31, 0x1083D8u);
    ctx->pc = 0x1083D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083D0u;
    // 0x1083d4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x1083D0u, 0x1083D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083D8u;
label_1083d8:
    // 0x1083d8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1083d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1083dc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1083dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1083e0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1083e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1083e4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1083e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1083e8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x1083e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1083ec: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x1083ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1083f0: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x1083f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1083f4: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x1083f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1083f8: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x1083f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1083fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1083fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x108400: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x108400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x108404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x108404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x108408: 0x0  nop
    ctx->pc = 0x108408u;
    // NOP
    // 0x10840c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x10840Cu;
    {
        const bool branch_taken_0x10840c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10840c) {
            ctx->pc = 0x10842Cu;
            goto label_10842c;
        }
    }
    ctx->pc = 0x108414u;
    // 0x108414: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x108414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x108418: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x108418u;
    {
        const bool branch_taken_0x108418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x108418) {
            ctx->pc = 0x108440u;
            goto label_108440;
        }
    }
    ctx->pc = 0x108420u;
    // 0x108420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108424: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108424u;
    {
        const bool branch_taken_0x108424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108424u;
        // 0x108428: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108424) {
            ctx->pc = 0x108434u;
            goto label_108434;
        }
    }
    ctx->pc = 0x10842Cu;
label_10842c:
    // 0x10842c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10842Cu;
    {
        const bool branch_taken_0x10842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10842Cu;
        // 0x108430: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10842c) {
            ctx->pc = 0x108440u;
            goto label_108440;
        }
    }
    ctx->pc = 0x108434u;
label_108434:
    // 0x108434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108438: 0xc042118  jal         func_108460
    ctx->pc = 0x108438u;
    SET_GPR_U32(ctx, 31, 0x108440u);
    ctx->pc = 0x10843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108438u;
    // 0x10843c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x108438u, 0x108440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108440u;
label_108440:
    // 0x108440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108444: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x108444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x108448: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x108448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10844c: 0x3e00008  jr          $ra
    ctx->pc = 0x10844Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10844Cu;
        // 0x108450: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10844Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108454u;
}
