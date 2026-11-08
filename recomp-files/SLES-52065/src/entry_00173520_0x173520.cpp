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

// Function: entry_00173520
// Address: 0x173520 - 0x17359c
void entry_00173520_0x173520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173520_0x173520");
#endif

    ctx->pc = 0x173520u;

    // 0x173520: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x173520u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x173524: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x173524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x173528: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x173528u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17352c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17352cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173530: 0x0  nop
    ctx->pc = 0x173530u;
    // NOP
    // 0x173534: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x173534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173538: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17353c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x17353cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x173540: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x173544: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x173548: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17354c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x17354Cu;
    {
        const bool branch_taken_0x17354c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x173550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17354Cu;
        // 0x173550: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17354c) {
            ctx->pc = 0x17359Cu;
            return;
        }
    }
    ctx->pc = 0x173554u;
    // 0x173554: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x173554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173558: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x173558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17355c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173560: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173564: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173568: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x173568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17356c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173570: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x173570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173574: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x173578: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x173578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17357c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x173580: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x173580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173584: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x173584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173588: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x173588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17358c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x17358cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x173590: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x173590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x173594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173594u;
    {
        const bool branch_taken_0x173594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173594u;
        // 0x173598: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173594) {
            ctx->pc = 0x1735A8u;
            return;
        }
    }
    ctx->pc = 0x17359Cu;
}
