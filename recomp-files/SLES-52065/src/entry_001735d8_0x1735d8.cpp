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

// Function: entry_001735d8
// Address: 0x1735d8 - 0x17366c
void entry_001735d8_0x1735d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001735d8_0x1735d8");
#endif

    ctx->pc = 0x1735d8u;

    // 0x1735d8: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1735dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1735dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1735e0: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1735E0u;
    {
        const bool branch_taken_0x1735e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1735E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735E0u;
        // 0x1735e4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735e0) {
            ctx->pc = 0x173520u;
            return;
        }
    }
    ctx->pc = 0x1735E8u;
    // 0x1735e8: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1735E8u;
    {
        const bool branch_taken_0x1735e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735E8u;
        // 0x1735ec: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735e8) {
            ctx->pc = 0x1736A0u;
            return;
        }
    }
    ctx->pc = 0x1735F0u;
    // 0x1735f0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1735f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1735f4: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x1735f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1735f8: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1735f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1735fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1735fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173600: 0x0  nop
    ctx->pc = 0x173600u;
    // NOP
    // 0x173604: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x173604u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173608: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x173608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17360c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x173610: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x173610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x173614: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x173618: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x173618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17361c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17361Cu;
    {
        const bool branch_taken_0x17361c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17361Cu;
        // 0x173620: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17361c) {
            ctx->pc = 0x17366Cu;
            return;
        }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x173624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173628: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x173628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17362c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173630: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173634: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173638: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17363c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173640: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x173640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173648: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17364c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17364cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173650: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173654: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x173654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173658: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17365c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17365cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173660: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173664u;
    {
        const bool branch_taken_0x173664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173664u;
        // 0x173668: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173664) {
            ctx->pc = 0x173674u;
            return;
        }
    }
    ctx->pc = 0x17366Cu;
}
