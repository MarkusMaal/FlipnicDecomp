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

// Function: FUN_0016e740
// Address: 0x16e740 - 0x16e838
void FUN_0016e740_0x16e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e740_0x16e740");
#endif

    switch (ctx->pc) {
        case 0x16e78cu: goto label_16e78c;
        case 0x16e7fcu: goto label_16e7fc;
        case 0x16e81cu: goto label_16e81c;
        default: break;
    }

    ctx->pc = 0x16e740u;

    // 0x16e740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16e744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e748: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16e74c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16e750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16e754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16e754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e75c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e760: 0x80700022  lb          $s0, 0x22($v1)
    ctx->pc = 0x16e760u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x16e764: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E764u;
    {
        const bool branch_taken_0x16e764 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E764u;
        // 0x16e768: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e764) {
            ctx->pc = 0x16E774u;
            goto label_16e774;
        }
    }
    ctx->pc = 0x16E76Cu;
    // 0x16e76c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16E76Cu;
    {
        const bool branch_taken_0x16e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E76Cu;
        // 0x16e770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e76c) {
            ctx->pc = 0x16E820u;
            goto label_16e820;
        }
    }
    ctx->pc = 0x16E774u;
label_16e774:
    // 0x16e774: 0xc62101c0  lwc1        $f1, 0x1C0($s1)
    ctx->pc = 0x16e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e778: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x16e77c: 0xc6400200  lwc1        $f0, 0x200($s2)
    ctx->pc = 0x16e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e780: 0x26260300  addiu       $a2, $s1, 0x300
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x16e784: 0xc054d0c  jal         func_153430
    ctx->pc = 0x16E784u;
    SET_GPR_U32(ctx, 31, 0x16E78Cu);
    ctx->pc = 0x16E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E784u;
    // 0x16e788: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153430u, 0x16E784u, 0x16E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E78Cu;
label_16e78c:
    // 0x16e78c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16e78cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e790: 0x0  nop
    ctx->pc = 0x16e790u;
    // NOP
    // 0x16e794: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16e794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e798: 0x0  nop
    ctx->pc = 0x16e798u;
    // NOP
    // 0x16e79c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x16E79Cu;
    {
        const bool branch_taken_0x16e79c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E79Cu;
        // 0x16e7a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e79c) {
            ctx->pc = 0x16E808u;
            goto label_16e808;
        }
    }
    ctx->pc = 0x16E7A4u;
    // 0x16e7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16e7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e7a8: 0x16050015  bne         $s0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E7A8u;
    {
        const bool branch_taken_0x16e7a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x16E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7A8u;
        // 0x16e7ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7a8) {
            ctx->pc = 0x16E800u;
            goto label_16e800;
        }
    }
    ctx->pc = 0x16E7B0u;
    // 0x16e7b0: 0x8e420210  lw          $v0, 0x210($s2)
    ctx->pc = 0x16e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x16e7b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16e7b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e7b8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x16e7b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16e7bc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16e7bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7c0: 0x4bc631aa  vmul.xyz    $vf6, $vf6, $vf6
    ctx->pc = 0x16e7c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7c4: 0x4b063181  vaddy.x     $vf6, $vf6, $vf6y
    ctx->pc = 0x16e7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7c8: 0x4b063182  vaddz.x     $vf6, $vf6, $vf6z
    ctx->pc = 0x16e7c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16e7cc: 0x48223000  qmfc2.ni    $v0, $vf6
    ctx->pc = 0x16e7ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16e7d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16e7d4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x16e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x16e7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e7dc: 0x0  nop
    ctx->pc = 0x16e7dcu;
    // NOP
    // 0x16e7e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16e7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e7e4: 0x0  nop
    ctx->pc = 0x16e7e4u;
    // NOP
    // 0x16e7e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E7E8u;
    {
        const bool branch_taken_0x16e7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e7e8) {
            ctx->pc = 0x16E7FCu;
            goto label_16e7fc;
        }
    }
    ctx->pc = 0x16E7F0u;
    // 0x16e7f0: 0xc64c021c  lwc1        $f12, 0x21C($s2)
    ctx->pc = 0x16e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e7f4: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x16E7F4u;
    SET_GPR_U32(ctx, 31, 0x16E7FCu);
    ctx->pc = 0x16E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7F4u;
    // 0x16e7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587D0u, 0x16E7F4u, 0x16E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E7FCu;
label_16e7fc:
    // 0x16e7fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e800:
    // 0x16e800: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16E800u;
    {
        const bool branch_taken_0x16e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E800u;
        // 0x16e804: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e800) {
            ctx->pc = 0x16E824u;
            goto label_16e824;
        }
    }
    ctx->pc = 0x16E808u;
label_16e808:
    // 0x16e808: 0x16050005  bne         $s0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E808u;
    {
        const bool branch_taken_0x16e808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x16E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E808u;
        // 0x16e80c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e808) {
            ctx->pc = 0x16E820u;
            goto label_16e820;
        }
    }
    ctx->pc = 0x16E810u;
    // 0x16e810: 0xc64c021c  lwc1        $f12, 0x21C($s2)
    ctx->pc = 0x16e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16e814: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x16E814u;
    SET_GPR_U32(ctx, 31, 0x16E81Cu);
    ctx->pc = 0x16E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E814u;
    // 0x16e818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587D0u, 0x16E814u, 0x16E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E81Cu;
label_16e81c:
    // 0x16e81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e820:
    // 0x16e820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16e820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e824:
    // 0x16e824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16e824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e830: 0x3e00008  jr          $ra
    ctx->pc = 0x16E830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E830u;
        // 0x16e834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E838u;
}
