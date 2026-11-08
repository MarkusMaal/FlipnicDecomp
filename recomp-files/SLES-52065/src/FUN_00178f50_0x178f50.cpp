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

// Function: FUN_00178f50
// Address: 0x178f50 - 0x17929c
void FUN_00178f50_0x178f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178f50_0x178f50");
#endif

    switch (ctx->pc) {
        case 0x178f84u: goto label_178f84;
        case 0x17901cu: goto label_17901c;
        case 0x179024u: goto label_179024;
        case 0x179040u: goto label_179040;
        case 0x179174u: goto label_179174;
        case 0x17917cu: goto label_17917c;
        case 0x179184u: goto label_179184;
        case 0x17919cu: goto label_17919c;
        case 0x1791bcu: goto label_1791bc;
        case 0x179240u: goto label_179240;
        default: break;
    }

    ctx->pc = 0x178f50u;

    // 0x178f50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178f54: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178f58: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x178f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x178f5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x178f64: 0x3c02bf7a  lui         $v0, 0xBF7A
    ctx->pc = 0x178f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49018 << 16));
    // 0x178f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f6c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x178f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x178f70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f74: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x178f74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x178f78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178f7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x178F7Cu;
    {
        const bool branch_taken_0x178f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F7Cu;
        // 0x178f80: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f7c) {
            ctx->pc = 0x178FDCu;
            goto label_178fdc;
        }
    }
    ctx->pc = 0x178F84u;
label_178f84:
    // 0x178f84: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x178f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x178f88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x178f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x178f8c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x178f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x178f90: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x178f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x178f94: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x178f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x178f98: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x178f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178f9c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x178f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178fa0: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x178fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178fa4: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x178fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x178fa8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x178fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178fac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178fb0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x178fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x178fb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178fb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178fb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178fbc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x178fbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x178fc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x178fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x178fc4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x178fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x178fc8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x178fc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178fcc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x178fccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178fd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x178fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x178fd4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x178fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178fd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x178fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_178fdc:
    // 0x178fdc: 0x0  nop
    ctx->pc = 0x178fdcu;
    // NOP
    // 0x178fe0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178fe4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x178fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x178fe8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x178FE8u;
    {
        const bool branch_taken_0x178fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FE8u;
        // 0x178fec: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178fe8) {
            ctx->pc = 0x178F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178f84;
        }
    }
    ctx->pc = 0x178FF0u;
    // 0x178ff0: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x178ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x178ff4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x178ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x178ff8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x178ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x178ffc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x178ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179000: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x179000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x179004: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x179004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x179008: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x179008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17900c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x179010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179014: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x179014u;
    {
        const bool branch_taken_0x179014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179014u;
        // 0x179018: 0x4614a542  mul.s       $f21, $f20, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179014) {
            ctx->pc = 0x17911Cu;
            goto label_17911c;
        }
    }
    ctx->pc = 0x17901Cu;
label_17901c:
    // 0x17901c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17901Cu;
    {
        const bool branch_taken_0x17901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17901Cu;
        // 0x179020: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17901c) {
            ctx->pc = 0x179104u;
            goto label_179104;
        }
    }
    ctx->pc = 0x179024u;
label_179024:
    // 0x179024: 0x0  nop
    ctx->pc = 0x179024u;
    // NOP
    // 0x179028: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x179028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17902c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179030: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x179030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x179034: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x179034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x179038: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x179038u;
    {
        const bool branch_taken_0x179038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179038u;
        // 0x17903c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179038) {
            ctx->pc = 0x1790ECu;
            goto label_1790ec;
        }
    }
    ctx->pc = 0x179040u;
label_179040:
    // 0x179040: 0x10850029  beq         $a0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x179040u;
    {
        const bool branch_taken_0x179040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x179044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179040u;
        // 0x179044: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179040) {
            ctx->pc = 0x1790E8u;
            goto label_1790e8;
        }
    }
    ctx->pc = 0x179048u;
    // 0x179048: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x179048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17904c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x17904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x179050: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x179050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179054: 0x4bc110ac  vsub.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x179054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x179058: 0x4bc210ea  vmul.xyz    $vf3, $vf2, $vf2
    ctx->pc = 0x179058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17905c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17905cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x179060: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x179060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x179064: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x179064u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x179068: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x179068u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17906c: 0x0  nop
    ctx->pc = 0x17906cu;
    // NOP
    // 0x179070: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x179070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179074: 0x0  nop
    ctx->pc = 0x179074u;
    // NOP
    // 0x179078: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x179078u;
    {
        const bool branch_taken_0x179078 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179078) {
            ctx->pc = 0x1790E8u;
            goto label_1790e8;
        }
    }
    ctx->pc = 0x179080u;
    // 0x179080: 0x0  nop
    ctx->pc = 0x179080u;
    // NOP
    // 0x179084: 0x0  nop
    ctx->pc = 0x179084u;
    // NOP
    // 0x179088: 0x46010044  c1          0x10044
    ctx->pc = 0x179088u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17908c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x17908cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x179090: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x179090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x179094: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x179094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x179098: 0x0  nop
    ctx->pc = 0x179098u;
    // NOP
    // 0x17909c: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x17909cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1790a0: 0x4bc210ea  vmul.xyz    $vf3, $vf2, $vf2
    ctx->pc = 0x1790a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1790a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790a8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1790a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790ac: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1790acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1790b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1790b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1790b4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x1790b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1790b8: 0x4a0002ff  vnop
    ctx->pc = 0x1790b8u;
    // NOP operation, no action needed for VU0
    // 0x1790bc: 0x4a0002ff  vnop
    ctx->pc = 0x1790bcu;
    // NOP operation, no action needed for VU0
    // 0x1790c0: 0x4a6303bc  vdiv        $Q, $vf0w, $vf3x
    ctx->pc = 0x1790c0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1790c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1790c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1790c8: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1790c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1790cc: 0x4bc41098  vmulx.xyz   $vf2, $vf2, $vf4x
    ctx->pc = 0x1790ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1790d0: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1790d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1790d4: 0x4bc2212c  vsub.xyz    $vf4, $vf4, $vf2
    ctx->pc = 0x1790d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1790d8: 0xf8c40000  sqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1790d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1790dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1790dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1790e0: 0x4bc22128  vadd.xyz    $vf4, $vf4, $vf2
    ctx->pc = 0x1790e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1790e4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1790e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1790e8:
    // 0x1790e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1790e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1790ec:
    // 0x1790ec: 0x0  nop
    ctx->pc = 0x1790ecu;
    // NOP
    // 0x1790f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1790f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1790f4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1790f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1790f8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1790F8u;
    {
        const bool branch_taken_0x1790f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1790f8) {
            ctx->pc = 0x179040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179040;
        }
    }
    ctx->pc = 0x179100u;
    // 0x179100: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_179104:
    // 0x179104: 0x0  nop
    ctx->pc = 0x179104u;
    // NOP
    // 0x179108: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17910c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x17910cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179110: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x179110u;
    {
        const bool branch_taken_0x179110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179110) {
            ctx->pc = 0x179024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179024;
        }
    }
    ctx->pc = 0x179118u;
    // 0x179118: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17911c:
    // 0x17911c: 0x0  nop
    ctx->pc = 0x17911cu;
    // NOP
    // 0x179120: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x179120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x179124: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x179124u;
    {
        const bool branch_taken_0x179124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179124) {
            ctx->pc = 0x17901Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17901c;
        }
    }
    ctx->pc = 0x17912Cu;
    // 0x17912c: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x17912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179130: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x179130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x179134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x179134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179138: 0x0  nop
    ctx->pc = 0x179138u;
    // NOP
    // 0x17913c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17913cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x179140: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x179140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x179144: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x179144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x179148: 0x0  nop
    ctx->pc = 0x179148u;
    // NOP
    // 0x17914c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17914Cu;
    {
        const bool branch_taken_0x17914c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17914c) {
            ctx->pc = 0x179158u;
            goto label_179158;
        }
    }
    ctx->pc = 0x179154u;
    // 0x179154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x179154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_179158:
    // 0x179158: 0x8e020c20  lw          $v0, 0xC20($s0)
    ctx->pc = 0x179158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3104)));
    // 0x17915c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17915cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x179160: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x179160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x179164: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x179164u;
    {
        const bool branch_taken_0x179164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179164u;
        // 0x179168: 0xae030c20  sw          $v1, 0xC20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179164) {
            ctx->pc = 0x1791A8u;
            goto label_1791a8;
        }
    }
    ctx->pc = 0x17916Cu;
    // 0x17916c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17916Cu;
    SET_GPR_U32(ctx, 31, 0x179174u);
    ctx->pc = 0x179170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17916Cu;
    // 0x179170: 0xae000c20  sw          $zero, 0xC20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17916Cu, 0x179174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179174u;
label_179174:
    // 0x179174: 0xc045b20  jal         func_116C80
    ctx->pc = 0x179174u;
    SET_GPR_U32(ctx, 31, 0x17917Cu);
    ctx->pc = 0x179178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179174u;
    // 0x179178: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x179174u, 0x17917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17917Cu;
label_17917c:
    // 0x17917c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17917Cu;
    SET_GPR_U32(ctx, 31, 0x179184u);
    ctx->pc = 0x179180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17917Cu;
    // 0x179180: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17917Cu, 0x179184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179184u;
label_179184:
    // 0x179184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179188: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x179188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17918c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x17918cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x179190: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x179190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x179194: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x179194u;
    SET_GPR_U32(ctx, 31, 0x17919Cu);
    ctx->pc = 0x179198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179194u;
    // 0x179198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x179194u, 0x17919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17919Cu;
label_17919c:
    // 0x17919c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1791a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1791A0u;
    {
        const bool branch_taken_0x1791a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791A0u;
        // 0x1791a4: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791a0) {
            ctx->pc = 0x1791B0u;
            goto label_1791b0;
        }
    }
    ctx->pc = 0x1791A8u;
label_1791a8:
    // 0x1791a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1791a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1791ac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1791acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1791b0:
    // 0x1791b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1791b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1791b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1791B4u;
    {
        const bool branch_taken_0x1791b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1791B4u;
        // 0x1791b8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b4) {
            ctx->pc = 0x179224u;
            goto label_179224;
        }
    }
    ctx->pc = 0x1791BCu;
label_1791bc:
    // 0x1791bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1791bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1791c0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1791c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1791c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1791c8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1791c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1791cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1791ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791d0: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x1791d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791d4: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x1791d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791d8: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x1791d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1791dc: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1791dcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1791e0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1791e0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1791e4: 0x0  nop
    ctx->pc = 0x1791e4u;
    // NOP
    // 0x1791e8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1791e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1791ec: 0x0  nop
    ctx->pc = 0x1791ecu;
    // NOP
    // 0x1791f0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1791F0u;
    {
        const bool branch_taken_0x1791f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1791f0) {
            ctx->pc = 0x179220u;
            goto label_179220;
        }
    }
    ctx->pc = 0x1791F8u;
    // 0x1791f8: 0x0  nop
    ctx->pc = 0x1791f8u;
    // NOP
    // 0x1791fc: 0x0  nop
    ctx->pc = 0x1791fcu;
    // NOP
    // 0x179200: 0x46000004  c1          0x4
    ctx->pc = 0x179200u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x179204: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x179204u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x179208: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x179208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17920c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x17920cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x179210: 0x0  nop
    ctx->pc = 0x179210u;
    // NOP
    // 0x179214: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x179214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x179218: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x179218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17921c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x17921cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_179220:
    // 0x179220: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_179224:
    // 0x179224: 0x0  nop
    ctx->pc = 0x179224u;
    // NOP
    // 0x179228: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17922c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x17922cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179230: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x179230u;
    {
        const bool branch_taken_0x179230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179230u;
        // 0x179234: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179230) {
            ctx->pc = 0x1791BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1791bc;
        }
    }
    ctx->pc = 0x179238u;
    // 0x179238: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x179238u;
    {
        const bool branch_taken_0x179238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179238u;
        // 0x17923c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179238) {
            ctx->pc = 0x17926Cu;
            goto label_17926c;
        }
    }
    ctx->pc = 0x179240u;
label_179240:
    // 0x179240: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x179240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x179244: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x179244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x179248: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x179248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x17924c: 0x24450820  addiu       $a1, $v0, 0x820
    ctx->pc = 0x17924cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
    // 0x179250: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x179254: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x179254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x179258: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x179258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17925c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x17925cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179260: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x179260u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179264: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x179264u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x179268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17926c:
    // 0x17926c: 0x0  nop
    ctx->pc = 0x17926cu;
    // NOP
    // 0x179270: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179274: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x179274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179278: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x179278u;
    {
        const bool branch_taken_0x179278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179278u;
        // 0x17927c: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179278) {
            ctx->pc = 0x179240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179240;
        }
    }
    ctx->pc = 0x179280u;
    // 0x179280: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x179280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179284: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x179284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x179288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17928c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179294: 0x3e00008  jr          $ra
    ctx->pc = 0x179294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179294u;
        // 0x179298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17929Cu;
}
