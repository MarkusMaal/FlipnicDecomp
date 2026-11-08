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

// Function: entry_001794b4
// Address: 0x1794b4 - 0x179518
void entry_001794b4_0x1794b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001794b4_0x1794b4");
#endif

    ctx->pc = 0x1794b4u;

    // 0x1794b4: 0x90e70838  lbu         $a3, 0x838($a3)
    ctx->pc = 0x1794b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x1794b8: 0x10e0005e  beqz        $a3, . + 4 + (0x5E << 2)
    ctx->pc = 0x1794B8u;
    {
        const bool branch_taken_0x1794b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B8u;
        // 0x1794bc: 0x23940  sll         $a3, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794b8) {
            ctx->pc = 0x179634u;
            return;
        }
    }
    ctx->pc = 0x1794C0u;
    // 0x1794c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1794c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1794c4: 0x875021  addu        $t2, $a0, $a3
    ctx->pc = 0x1794c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1794c8: 0x25470020  addiu       $a3, $t2, 0x20
    ctx->pc = 0x1794c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x1794cc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1794ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1794d0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1794d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1794d4: 0x25480030  addiu       $t0, $t2, 0x30
    ctx->pc = 0x1794d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x1794d8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1794d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1794dc: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x1794dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1794e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1794e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1794e4: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1794e4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1794e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1794e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794ec: 0xc7828028  lwc1        $f2, -0x7FD8($gp)
    ctx->pc = 0x1794ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1794f0: 0xc5410034  lwc1        $f1, 0x34($t2)
    ctx->pc = 0x1794f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1794f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1794f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1794f8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1794f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1794fc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1794fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179500: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179504: 0x46022883  div.s       $f2, $f5, $f2
    ctx->pc = 0x179504u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x179508: 0x0  nop
    ctx->pc = 0x179508u;
    // NOP
    // 0x17950c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17950cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x179510: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x179510u;
    {
        const bool branch_taken_0x179510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179510u;
        // 0x179514: 0xe5410034  swc1        $f1, 0x34($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179510) {
            ctx->pc = 0x1795DCu;
            return;
        }
    }
    ctx->pc = 0x179518u;
}
