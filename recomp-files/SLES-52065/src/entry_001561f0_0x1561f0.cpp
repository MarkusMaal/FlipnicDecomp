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

// Function: entry_001561f0
// Address: 0x1561f0 - 0x1562bc
void entry_001561f0_0x1561f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001561f0_0x1561f0");
#endif

    ctx->pc = 0x1561f0u;

    // 0x1561f0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1561f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1561f4: 0x0  nop
    ctx->pc = 0x1561f4u;
    // NOP
    // 0x1561f8: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x1561f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561fc: 0x0  nop
    ctx->pc = 0x1561fcu;
    // NOP
    // 0x156200: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x156200u;
    {
        const bool branch_taken_0x156200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156200) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x156208u;
    // 0x156208: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x156208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15620c: 0x0  nop
    ctx->pc = 0x15620cu;
    // NOP
    // 0x156210: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x156210u;
    {
        const bool branch_taken_0x156210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156210u;
        // 0x156214: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156210) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x156218u;
    // 0x156218: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x156218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15621c: 0x0  nop
    ctx->pc = 0x15621cu;
    // NOP
    // 0x156220: 0x46032836  c.le.s      $f5, $f3
    ctx->pc = 0x156220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156224: 0x0  nop
    ctx->pc = 0x156224u;
    // NOP
    // 0x156228: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x156228u;
    {
        const bool branch_taken_0x156228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156228) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x156230u;
    // 0x156230: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x156230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156234: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x156234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156238: 0x0  nop
    ctx->pc = 0x156238u;
    // NOP
    // 0x15623c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x15623Cu;
    {
        const bool branch_taken_0x15623c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15623Cu;
        // 0x156240: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15623c) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x156244u;
    // 0x156244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156248: 0x0  nop
    ctx->pc = 0x156248u;
    // NOP
    // 0x15624c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x15624cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156250: 0x0  nop
    ctx->pc = 0x156250u;
    // NOP
    // 0x156254: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x156254u;
    {
        const bool branch_taken_0x156254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156254) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x15625Cu;
    // 0x15625c: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x15625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156260: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x156260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156264: 0x0  nop
    ctx->pc = 0x156264u;
    // NOP
    // 0x156268: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x156268u;
    {
        const bool branch_taken_0x156268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156268) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x156270u;
    // 0x156270: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156274: 0x0  nop
    ctx->pc = 0x156274u;
    // NOP
    // 0x156278: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x156278u;
    {
        const bool branch_taken_0x156278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156278) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x156280u;
    // 0x156280: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x156280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x156284: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x156284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156288: 0x0  nop
    ctx->pc = 0x156288u;
    // NOP
    // 0x15628c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x15628Cu;
    {
        const bool branch_taken_0x15628c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15628c) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x156294u;
    // 0x156294: 0x46051802  mul.s       $f0, $f3, $f5
    ctx->pc = 0x156294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x156298: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x156298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15629c: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15629cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1562a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1562a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1562a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1562a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1562a8: 0x0  nop
    ctx->pc = 0x1562a8u;
    // NOP
    // 0x1562ac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1562acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1562b0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1562b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1562b4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1562b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1562b8: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1562b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    ctx->pc = 0x1562bcu;
}
