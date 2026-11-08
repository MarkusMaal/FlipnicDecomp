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

// Function: entry_0015682c
// Address: 0x15682c - 0x1568f4
void entry_0015682c_0x15682c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015682c_0x15682c");
#endif

    switch (ctx->pc) {
        case 0x156888u: goto label_156888;
        default: break;
    }

    ctx->pc = 0x15682cu;

    // 0x15682c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15682cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156830: 0x0  nop
    ctx->pc = 0x156830u;
    // NOP
    // 0x156834: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x156834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156838: 0x0  nop
    ctx->pc = 0x156838u;
    // NOP
    // 0x15683c: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x15683Cu;
    {
        const bool branch_taken_0x15683c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15683c) {
            ctx->pc = 0x1568F4u;
            return;
        }
    }
    ctx->pc = 0x156844u;
    // 0x156844: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x156844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156848: 0x0  nop
    ctx->pc = 0x156848u;
    // NOP
    // 0x15684c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x15684Cu;
    {
        const bool branch_taken_0x15684c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15684c) {
            ctx->pc = 0x1568F4u;
            return;
        }
    }
    ctx->pc = 0x156854u;
    // 0x156854: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x156854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x156858: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x156858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15685c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x15685cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156860: 0x46002503  div.s       $f20, $f4, $f0
    ctx->pc = 0x156860u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x156864: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156868: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x156868u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15686c: 0x4be521ac  vsub.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x15686cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x156870: 0xf9060000  sqc2        $vf6, 0x0($t0)
    ctx->pc = 0x156870u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x156874: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x156874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156878: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x15687c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x156880: 0xc055334  jal         func_154CD0
    ctx->pc = 0x156880u;
    SET_GPR_U32(ctx, 31, 0x156888u);
    ctx->pc = 0x156884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156880u;
    // 0x156884: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154CD0u, 0x156880u, 0x156888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156888u;
label_156888:
    // 0x156888: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x156888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15688c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15688cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156890: 0x0  nop
    ctx->pc = 0x156890u;
    // NOP
    // 0x156894: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x156894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156898: 0x0  nop
    ctx->pc = 0x156898u;
    // NOP
    // 0x15689c: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x15689Cu;
    {
        const bool branch_taken_0x15689c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1568A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15689Cu;
        // 0x1568a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15689c) {
            ctx->pc = 0x1569B8u;
            return;
        }
    }
    ctx->pc = 0x1568A4u;
    // 0x1568a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1568a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1568a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1568a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1568ac: 0x0  nop
    ctx->pc = 0x1568acu;
    // NOP
    // 0x1568b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1568b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1568b4: 0x0  nop
    ctx->pc = 0x1568b4u;
    // NOP
    // 0x1568b8: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x1568B8u;
    {
        const bool branch_taken_0x1568b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1568b8) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x1568C0u;
    // 0x1568c0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1568c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568c4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1568c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1568c8: 0x0  nop
    ctx->pc = 0x1568c8u;
    // NOP
    // 0x1568cc: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1568CCu;
    {
        const bool branch_taken_0x1568cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1568cc) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x1568D4u;
    // 0x1568d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1568d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1568d8: 0x0  nop
    ctx->pc = 0x1568d8u;
    // NOP
    // 0x1568dc: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x1568DCu;
    {
        const bool branch_taken_0x1568dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1568dc) {
            ctx->pc = 0x1569B4u;
            return;
        }
    }
    ctx->pc = 0x1568E4u;
    // 0x1568e4: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1568e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1568e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1568e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1568ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1568ECu;
    {
        const bool branch_taken_0x1568ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1568F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1568ECu;
        // 0x1568f0: 0xe6a00008  swc1        $f0, 0x8($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1568ec) {
            ctx->pc = 0x1569B8u;
            return;
        }
    }
    ctx->pc = 0x1568F4u;
}
