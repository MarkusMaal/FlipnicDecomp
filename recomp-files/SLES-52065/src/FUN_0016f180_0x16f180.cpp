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

// Function: FUN_0016f180
// Address: 0x16f180 - 0x16f3fc
void FUN_0016f180_0x16f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016f180_0x16f180");
#endif

    ctx->pc = 0x16f180u;

    // 0x16f180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f184: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16f188: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16f18c: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x16f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x16f190: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16f190u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f194: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16f194u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f198: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16f198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16f19c: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16f19cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16f1a0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16f1a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f1a4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x16f1a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f1a8: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16f1a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16f1ac: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16f1b0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x16f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16f1b4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x16f1b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f1b8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16f1b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f1bc: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16f1bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16f1c0: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x16f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16f1c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f1c8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x16f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f1cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f1ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16f1d0: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f1d0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f1d4: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f1d8: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f1e0: 0x0  nop
    ctx->pc = 0x16f1e0u;
    // NOP
    // 0x16f1e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f1e8: 0x0  nop
    ctx->pc = 0x16f1e8u;
    // NOP
    // 0x16f1ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F1ECu;
    {
        const bool branch_taken_0x16f1ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1ECu;
        // 0x16f1f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1ec) {
            ctx->pc = 0x16F1F8u;
            goto label_16f1f8;
        }
    }
    ctx->pc = 0x16F1F4u;
    // 0x16f1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f1f8:
    // 0x16f1f8: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x16F1F8u;
    {
        const bool branch_taken_0x16f1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f1f8) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F200u;
    // 0x16f200: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x16f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f208: 0x0  nop
    ctx->pc = 0x16f208u;
    // NOP
    // 0x16f20c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f20cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16f210: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f210u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f214: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f218: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f220: 0x0  nop
    ctx->pc = 0x16f220u;
    // NOP
    // 0x16f224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f228: 0x0  nop
    ctx->pc = 0x16f228u;
    // NOP
    // 0x16f22c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F22Cu;
    {
        const bool branch_taken_0x16f22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F22Cu;
        // 0x16f230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f22c) {
            ctx->pc = 0x16F238u;
            goto label_16f238;
        }
    }
    ctx->pc = 0x16F234u;
    // 0x16f234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f238:
    // 0x16f238: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x16F238u;
    {
        const bool branch_taken_0x16f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f238) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F240u;
    // 0x16f240: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x16f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f244: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f248: 0x0  nop
    ctx->pc = 0x16f248u;
    // NOP
    // 0x16f24c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16f24cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16f250: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f250u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f254: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f258: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f260: 0x0  nop
    ctx->pc = 0x16f260u;
    // NOP
    // 0x16f264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f268: 0x0  nop
    ctx->pc = 0x16f268u;
    // NOP
    // 0x16f26c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F26Cu;
    {
        const bool branch_taken_0x16f26c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F26Cu;
        // 0x16f270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f26c) {
            ctx->pc = 0x16F278u;
            goto label_16f278;
        }
    }
    ctx->pc = 0x16F274u;
    // 0x16f274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f278:
    // 0x16f278: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x16F278u;
    {
        const bool branch_taken_0x16f278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f278) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F280u;
    // 0x16f280: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x16f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f284: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x16f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f288: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f288u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f28c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f28cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f290: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f294: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f29c: 0x0  nop
    ctx->pc = 0x16f29cu;
    // NOP
    // 0x16f2a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f2a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f2a4: 0x0  nop
    ctx->pc = 0x16f2a4u;
    // NOP
    // 0x16f2a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F2A8u;
    {
        const bool branch_taken_0x16f2a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2A8u;
        // 0x16f2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2a8) {
            ctx->pc = 0x16F2B4u;
            goto label_16f2b4;
        }
    }
    ctx->pc = 0x16F2B0u;
    // 0x16f2b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f2b4:
    // 0x16f2b4: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x16F2B4u;
    {
        const bool branch_taken_0x16f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2b4) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F2BCu;
    // 0x16f2bc: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x16f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f2c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x16f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f2c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f2c8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f2c8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f2cc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f2d0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f2d8: 0x0  nop
    ctx->pc = 0x16f2d8u;
    // NOP
    // 0x16f2dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f2dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f2e0: 0x0  nop
    ctx->pc = 0x16f2e0u;
    // NOP
    // 0x16f2e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F2E4u;
    {
        const bool branch_taken_0x16f2e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2E4u;
        // 0x16f2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2e4) {
            ctx->pc = 0x16F2F0u;
            goto label_16f2f0;
        }
    }
    ctx->pc = 0x16F2ECu;
    // 0x16f2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f2f0:
    // 0x16f2f0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x16F2F0u;
    {
        const bool branch_taken_0x16f2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2f0) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F2F8u;
    // 0x16f2f8: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x16f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f2fc: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x16f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f300: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f304: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f304u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f308: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f30c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f314: 0x0  nop
    ctx->pc = 0x16f314u;
    // NOP
    // 0x16f318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f31c: 0x0  nop
    ctx->pc = 0x16f31cu;
    // NOP
    // 0x16f320: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F320u;
    {
        const bool branch_taken_0x16f320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F320u;
        // 0x16f324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f320) {
            ctx->pc = 0x16F32Cu;
            goto label_16f32c;
        }
    }
    ctx->pc = 0x16F328u;
    // 0x16f328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f32c:
    // 0x16f32c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x16F32Cu;
    {
        const bool branch_taken_0x16f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f32c) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F334u;
    // 0x16f334: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x16f334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f338: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x16f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f33c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f340: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f340u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f344: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f348: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f350: 0x0  nop
    ctx->pc = 0x16f350u;
    // NOP
    // 0x16f354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f358: 0x0  nop
    ctx->pc = 0x16f358u;
    // NOP
    // 0x16f35c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F35Cu;
    {
        const bool branch_taken_0x16f35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F35Cu;
        // 0x16f360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f35c) {
            ctx->pc = 0x16F368u;
            goto label_16f368;
        }
    }
    ctx->pc = 0x16F364u;
    // 0x16f364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f368:
    // 0x16f368: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16F368u;
    {
        const bool branch_taken_0x16f368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f368) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F370u;
    // 0x16f370: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x16f370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f374: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x16f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f378: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f37c: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f37cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f380: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f384: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f38c: 0x0  nop
    ctx->pc = 0x16f38cu;
    // NOP
    // 0x16f390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f394: 0x0  nop
    ctx->pc = 0x16f394u;
    // NOP
    // 0x16f398: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F398u;
    {
        const bool branch_taken_0x16f398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F398u;
        // 0x16f39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f398) {
            ctx->pc = 0x16F3A4u;
            goto label_16f3a4;
        }
    }
    ctx->pc = 0x16F3A0u;
    // 0x16f3a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f3a4:
    // 0x16f3a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16F3A4u;
    {
        const bool branch_taken_0x16f3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f3a4) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F3ACu;
    // 0x16f3ac: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x16f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f3b0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x16f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f3b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f3b8: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16f3b8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16f3bc: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x16f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x16f3c0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x16f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x16f3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f3c8: 0x0  nop
    ctx->pc = 0x16f3c8u;
    // NOP
    // 0x16f3cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f3d0: 0x0  nop
    ctx->pc = 0x16f3d0u;
    // NOP
    // 0x16f3d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F3D4u;
    {
        const bool branch_taken_0x16f3d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3D4u;
        // 0x16f3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3d4) {
            ctx->pc = 0x16F3E0u;
            goto label_16f3e0;
        }
    }
    ctx->pc = 0x16F3DCu;
    // 0x16f3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f3e0:
    // 0x16f3e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F3E0u;
    {
        const bool branch_taken_0x16f3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f3e0) {
            ctx->pc = 0x16F3F0u;
            goto label_16f3f0;
        }
    }
    ctx->pc = 0x16F3E8u;
    // 0x16f3e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16F3E8u;
    {
        const bool branch_taken_0x16f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3E8u;
        // 0x16f3ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3e8) {
            ctx->pc = 0x16F3F4u;
            goto label_16f3f4;
        }
    }
    ctx->pc = 0x16F3F0u;
label_16f3f0:
    // 0x16f3f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f3f4:
    // 0x16f3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3F4u;
        // 0x16f3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F3FCu;
}
