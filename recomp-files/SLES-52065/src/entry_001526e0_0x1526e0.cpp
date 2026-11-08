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

// Function: entry_001526e0
// Address: 0x1526e0 - 0x1527fc
void entry_001526e0_0x1526e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001526e0_0x1526e0");
#endif

    ctx->pc = 0x1526e0u;

    // 0x1526e0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1526e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1526e4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1526e4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526e8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1526e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1526ec: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1526ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1526f0: 0x91c3000e  lbu         $v1, 0xE($t6)
    ctx->pc = 0x1526f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 14)));
    // 0x1526f4: 0x106a0049  beq         $v1, $t2, . + 4 + (0x49 << 2)
    ctx->pc = 0x1526F4u;
    {
        const bool branch_taken_0x1526f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x1526F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526F4u;
        // 0x1526f8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526f4) {
            ctx->pc = 0x15281Cu;
            return;
        }
    }
    ctx->pc = 0x1526FCu;
    // 0x1526fc: 0x10690047  beq         $v1, $t1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1526FCu;
    {
        const bool branch_taken_0x1526fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x1526fc) {
            ctx->pc = 0x15281Cu;
            return;
        }
    }
    ctx->pc = 0x152704u;
    // 0x152704: 0x10680045  beq         $v1, $t0, . + 4 + (0x45 << 2)
    ctx->pc = 0x152704u;
    {
        const bool branch_taken_0x152704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x152704) {
            ctx->pc = 0x15281Cu;
            return;
        }
    }
    ctx->pc = 0x15270Cu;
    // 0x15270c: 0xd9e40000  lqc2        $vf4, 0x0($t7)
    ctx->pc = 0x15270cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x152710: 0xd9c50000  lqc2        $vf5, 0x0($t6)
    ctx->pc = 0x152710u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x152714: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x152714u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152718: 0xfb060000  sqc2        $vf6, 0x0($t8)
    ctx->pc = 0x152718u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15271c: 0xd9840000  lqc2        $vf4, 0x0($t4)
    ctx->pc = 0x15271cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x152720: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x152720u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152724: 0xf9a60000  sqc2        $vf6, 0x0($t5)
    ctx->pc = 0x152724u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152728: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x152728u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15272c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15272cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x152730: 0xf9660000  sqc2        $vf6, 0x0($t3)
    ctx->pc = 0x152730u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x152734: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x152734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x152738: 0xc7a60028  lwc1        $f6, 0x28($sp)
    ctx->pc = 0x152738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15273c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x15273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152740: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x152740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x152744: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x152744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152748: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x152748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15274c: 0x4606381a  mula.s      $f7, $f6
    ctx->pc = 0x15274cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x152750: 0x4605021d  msub.s      $f8, $f0, $f5
    ctx->pc = 0x152750u;
    ctx->f[8] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[5]));
    // 0x152754: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x152754u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x152758: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x152758u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x15275c: 0x46080183  div.s       $f6, $f0, $f8
    ctx->pc = 0x15275cu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x152760: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x152760u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x152764: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x152764u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[2]));
    // 0x152768: 0x4601381c  madd.s      $f0, $f7, $f1
    ctx->pc = 0x152768u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x15276c: 0x46080143  div.s       $f5, $f0, $f8
    ctx->pc = 0x15276cu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x152770: 0x0  nop
    ctx->pc = 0x152770u;
    // NOP
    // 0x152774: 0x0  nop
    ctx->pc = 0x152774u;
    // NOP
    // 0x152778: 0x46062036  c.le.s      $f4, $f6
    ctx->pc = 0x152778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15277c: 0x0  nop
    ctx->pc = 0x15277cu;
    // NOP
    // 0x152780: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x152780u;
    {
        const bool branch_taken_0x152780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152780) {
            ctx->pc = 0x1527FCu;
            return;
        }
    }
    ctx->pc = 0x152788u;
    // 0x152788: 0x46033036  c.le.s      $f6, $f3
    ctx->pc = 0x152788u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15278c: 0x0  nop
    ctx->pc = 0x15278cu;
    // NOP
    // 0x152790: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x152790u;
    {
        const bool branch_taken_0x152790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152790) {
            ctx->pc = 0x1527FCu;
            return;
        }
    }
    ctx->pc = 0x152798u;
    // 0x152798: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x152798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15279c: 0x0  nop
    ctx->pc = 0x15279cu;
    // NOP
    // 0x1527a0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1527A0u;
    {
        const bool branch_taken_0x1527a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1527a0) {
            ctx->pc = 0x1527FCu;
            return;
        }
    }
    ctx->pc = 0x1527A8u;
    // 0x1527a8: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x1527a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1527ac: 0x0  nop
    ctx->pc = 0x1527acu;
    // NOP
    // 0x1527b0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1527B0u;
    {
        const bool branch_taken_0x1527b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1527B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527B0u;
        // 0x1527b4: 0x46053000  add.s       $f0, $f6, $f5 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527b0) {
            ctx->pc = 0x1527FCu;
            return;
        }
    }
    ctx->pc = 0x1527B8u;
    // 0x1527b8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1527b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1527bc: 0x0  nop
    ctx->pc = 0x1527bcu;
    // NOP
    // 0x1527c0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1527C0u;
    {
        const bool branch_taken_0x1527c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1527c0) {
            ctx->pc = 0x1527FCu;
            return;
        }
    }
    ctx->pc = 0x1527C8u;
    // 0x1527c8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1527c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1527cc: 0x0  nop
    ctx->pc = 0x1527ccu;
    // NOP
    // 0x1527d0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1527D0u;
    {
        const bool branch_taken_0x1527d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1527d0) {
            ctx->pc = 0x1527FCu;
            return;
        }
    }
    ctx->pc = 0x1527D8u;
    // 0x1527d8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1527d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1527dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1527dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1527e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1527e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1527e4: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x1527e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1527e8: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x1527e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x1527ec: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x1527ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x1527f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1527f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1527f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1527F4u;
    {
        const bool branch_taken_0x1527f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527F4u;
        // 0x1527f8: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527f4) {
            ctx->pc = 0x152804u;
            return;
        }
    }
    ctx->pc = 0x1527FCu;
}
