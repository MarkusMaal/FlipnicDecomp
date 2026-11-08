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

// Function: entry_001774f8
// Address: 0x1774f8 - 0x177588
void entry_001774f8_0x1774f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001774f8_0x1774f8");
#endif

    ctx->pc = 0x1774f8u;

    // 0x1774f8: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1774f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1774fc: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1774FCu;
    {
        const bool branch_taken_0x1774fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774FCu;
        // 0x177500: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774fc) {
            ctx->pc = 0x177440u;
            return;
        }
    }
    ctx->pc = 0x177504u;
    // 0x177504: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x177504u;
    {
        const bool branch_taken_0x177504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x177508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177504u;
        // 0x177508: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177504) {
            ctx->pc = 0x1775BCu;
            return;
        }
    }
    ctx->pc = 0x17750Cu;
    // 0x17750c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17750cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x177510: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x177510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x177514: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x177514u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x177518: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17751c: 0x0  nop
    ctx->pc = 0x17751cu;
    // NOP
    // 0x177520: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177520u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177524: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x177524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177528: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x177528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17752c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x17752cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x177530: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x177530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x177534: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x177534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x177538: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177538u;
    {
        const bool branch_taken_0x177538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177538u;
        // 0x17753c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177538) {
            ctx->pc = 0x177588u;
            return;
        }
    }
    ctx->pc = 0x177540u;
    // 0x177540: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x177540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177544: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x177544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x177548: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17754c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17754cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177550: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177554: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177558: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17755c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x17755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177560: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177564: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177568: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x177568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x17756c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x17756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177570: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x177570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177574: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177578: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x17757c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x177580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x177580u;
    {
        const bool branch_taken_0x177580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177580u;
        // 0x177584: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177580) {
            ctx->pc = 0x177590u;
            return;
        }
    }
    ctx->pc = 0x177588u;
}
