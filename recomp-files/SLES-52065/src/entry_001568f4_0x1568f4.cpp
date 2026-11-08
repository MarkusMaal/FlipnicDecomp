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

// Function: entry_001568f4
// Address: 0x1568f4 - 0x1569b4
void entry_001568f4_0x1568f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001568f4_0x1568f4");
#endif

    ctx->pc = 0x1568f4u;

    // 0x1568f4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1568f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1568f8: 0x0  nop
    ctx->pc = 0x1568f8u;
    // NOP
    // 0x1568fc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1568fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156900: 0x0  nop
    ctx->pc = 0x156900u;
    // NOP
    // 0x156904: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x156904u;
    {
        const bool branch_taken_0x156904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156904) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x15690Cu;
    // 0x15690c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x15690cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156910: 0x0  nop
    ctx->pc = 0x156910u;
    // NOP
    // 0x156914: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x156914u;
    {
        const bool branch_taken_0x156914 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156914u;
        // 0x156918: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156914) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x15691Cu;
    // 0x15691c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15691cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156920: 0x0  nop
    ctx->pc = 0x156920u;
    // NOP
    // 0x156924: 0x46022036  c.le.s      $f4, $f2
    ctx->pc = 0x156924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156928: 0x0  nop
    ctx->pc = 0x156928u;
    // NOP
    // 0x15692c: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x15692Cu;
    {
        const bool branch_taken_0x15692c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15692c) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x156934u;
    // 0x156934: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x156934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156938: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x156938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15693c: 0x0  nop
    ctx->pc = 0x15693cu;
    // NOP
    // 0x156940: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x156940u;
    {
        const bool branch_taken_0x156940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156940u;
        // 0x156944: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156940) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x156948u;
    // 0x156948: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15694c: 0x0  nop
    ctx->pc = 0x15694cu;
    // NOP
    // 0x156950: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156954: 0x0  nop
    ctx->pc = 0x156954u;
    // NOP
    // 0x156958: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x156958u;
    {
        const bool branch_taken_0x156958 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156958) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x156960u;
    // 0x156960: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x156960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156964: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x156964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156968: 0x0  nop
    ctx->pc = 0x156968u;
    // NOP
    // 0x15696c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x15696Cu;
    {
        const bool branch_taken_0x15696c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15696c) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x156974u;
    // 0x156974: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x156974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156978: 0x0  nop
    ctx->pc = 0x156978u;
    // NOP
    // 0x15697c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x15697Cu;
    {
        const bool branch_taken_0x15697c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15697c) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x156984u;
    // 0x156984: 0x46041002  mul.s       $f0, $f2, $f4
    ctx->pc = 0x156984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x156988: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x156988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15698c: 0xda070000  lqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15698cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156990: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156990u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156994: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x156994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156998: 0x0  nop
    ctx->pc = 0x156998u;
    // NOP
    // 0x15699c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15699cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1569a0: 0x4be52198  vmulx.xyzw  $vf6, $vf4, $vf5x
    ctx->pc = 0x1569a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1569a4: 0x4be73168  vadd.xyzw   $vf5, $vf6, $vf7
    ctx->pc = 0x1569a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1569a8: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1569a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1569ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1569ACu;
    {
        const bool branch_taken_0x1569ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1569B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1569ACu;
        // 0x1569b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569ac) {
            ctx->pc = 0x1569B8u;
            return;
        }
    }
    ctx->pc = 0x1569B4u;
}
