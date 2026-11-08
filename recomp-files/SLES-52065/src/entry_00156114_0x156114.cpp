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

// Function: entry_00156114
// Address: 0x156114 - 0x1561f0
void entry_00156114_0x156114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156114_0x156114");
#endif

    switch (ctx->pc) {
        case 0x156170u: goto label_156170;
        default: break;
    }

    ctx->pc = 0x156114u;

    // 0x156114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x156114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156118: 0x0  nop
    ctx->pc = 0x156118u;
    // NOP
    // 0x15611c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15611cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156120: 0x0  nop
    ctx->pc = 0x156120u;
    // NOP
    // 0x156124: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x156124u;
    {
        const bool branch_taken_0x156124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x156124) {
            ctx->pc = 0x1561F0u;
            return;
        }
    }
    ctx->pc = 0x15612Cu;
    // 0x15612c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x15612cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156130: 0x0  nop
    ctx->pc = 0x156130u;
    // NOP
    // 0x156134: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x156134u;
    {
        const bool branch_taken_0x156134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156134) {
            ctx->pc = 0x1561F0u;
            return;
        }
    }
    ctx->pc = 0x15613Cu;
    // 0x15613c: 0x46022801  sub.s       $f0, $f5, $f2
    ctx->pc = 0x15613cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x156140: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x156140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x156144: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x156144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156148: 0x46002d03  div.s       $f20, $f5, $f0
    ctx->pc = 0x156148u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x15614c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15614cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156150: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x156150u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x156154: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x156154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156158: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x156158u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15615c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15615cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156160: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x156164: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x156164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x156168: 0xc055334  jal         func_154CD0
    ctx->pc = 0x156168u;
    SET_GPR_U32(ctx, 31, 0x156170u);
    ctx->pc = 0x15616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156168u;
    // 0x15616c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x156168u, 0x156170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156170u;
label_156170:
    // 0x156170: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x156170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156174: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x156174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x156178: 0x0  nop
    ctx->pc = 0x156178u;
    // NOP
    // 0x15617c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x15617cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156180: 0x0  nop
    ctx->pc = 0x156180u;
    // NOP
    // 0x156184: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x156184u;
    {
        const bool branch_taken_0x156184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156184u;
        // 0x156188: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156184) {
            ctx->pc = 0x1562C0u;
            return;
        }
    }
    ctx->pc = 0x15618Cu;
    // 0x15618c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15618cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156190: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156194: 0x0  nop
    ctx->pc = 0x156194u;
    // NOP
    // 0x156198: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x156198u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15619c: 0x0  nop
    ctx->pc = 0x15619cu;
    // NOP
    // 0x1561a0: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x1561A0u;
    {
        const bool branch_taken_0x1561a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561a0) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x1561A8u;
    // 0x1561a8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1561a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1561ac: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1561acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561b0: 0x0  nop
    ctx->pc = 0x1561b0u;
    // NOP
    // 0x1561b4: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x1561B4u;
    {
        const bool branch_taken_0x1561b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561b4) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x1561BCu;
    // 0x1561bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1561bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561c0: 0x0  nop
    ctx->pc = 0x1561c0u;
    // NOP
    // 0x1561c4: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1561C4u;
    {
        const bool branch_taken_0x1561c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561c4) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x1561CCu;
    // 0x1561cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1561ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1561d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1561d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1561d4: 0x0  nop
    ctx->pc = 0x1561d4u;
    // NOP
    // 0x1561d8: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1561D8u;
    {
        const bool branch_taken_0x1561d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1561d8) {
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x1561E0u;
    // 0x1561e0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1561e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1561e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1561e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1561e8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1561E8u;
    {
        const bool branch_taken_0x1561e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561E8u;
        // 0x1561ec: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561e8) {
            ctx->pc = 0x1562C0u;
            return;
        }
    }
    ctx->pc = 0x1561F0u;
}
