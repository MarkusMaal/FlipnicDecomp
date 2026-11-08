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

// Function: entry_00178b84
// Address: 0x178b84 - 0x178c20
void entry_00178b84_0x178b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178b84_0x178b84");
#endif

    ctx->pc = 0x178b84u;

    // 0x178b84: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x178b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178b88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x178b8c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x178b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x178b90: 0x26240420  addiu       $a0, $s1, 0x420
    ctx->pc = 0x178b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x178b94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178b98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x178b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x178b9c: 0xc6200430  lwc1        $f0, 0x430($s1)
    ctx->pc = 0x178b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178ba0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x178ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x178ba4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178ba8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x178ba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x178bac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178bacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x178bb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x178bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x178bb4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x178bb4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x178bb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x178bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x178bbc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x178bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x178bc0: 0xc6200434  lwc1        $f0, 0x434($s1)
    ctx->pc = 0x178bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178bc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x178bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x178bc8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x178bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x178bcc: 0xc6200438  lwc1        $f0, 0x438($s1)
    ctx->pc = 0x178bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178bd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x178bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x178bd4: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x178bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x178bd8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x178bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x178bdc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x178bdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178be0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x178be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178be4: 0x4bc110a8  vadd.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x178be4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x178be8: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x178be8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x178bec: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x178becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x178bf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178bf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x178bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x178bf8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x178bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x178bfc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x178bfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178c00: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x178c00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178c04: 0x8e220450  lw          $v0, 0x450($s1)
    ctx->pc = 0x178c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x178c08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x178c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x178c0c: 0xae220450  sw          $v0, 0x450($s1)
    ctx->pc = 0x178c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 2));
    // 0x178c10: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x178c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x178c14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x178C14u;
    {
        const bool branch_taken_0x178c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C14u;
        // 0x178c18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c14) {
            ctx->pc = 0x178C20u;
            return;
        }
    }
    ctx->pc = 0x178C1Cu;
    // 0x178c1c: 0xae200450  sw          $zero, 0x450($s1)
    ctx->pc = 0x178c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 0));
    ctx->pc = 0x178c20u;
}
