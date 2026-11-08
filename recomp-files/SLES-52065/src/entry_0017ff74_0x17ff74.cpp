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

// Function: entry_0017ff74
// Address: 0x17ff74 - 0x17ffec
void entry_0017ff74_0x17ff74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ff74_0x17ff74");
#endif

    switch (ctx->pc) {
        case 0x17ff98u: goto label_17ff98;
        case 0x17ffe4u: goto label_17ffe4;
        default: break;
    }

    ctx->pc = 0x17ff74u;

    // 0x17ff74: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ff78: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ff7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ff7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff80: 0x4be5213e  vitof12.xyzw $vf5, $vf4
    ctx->pc = 0x17ff80u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ff84: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x17ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17ff88: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x17ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x17ff8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17ff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ff90: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x17FF90u;
    SET_GPR_U32(ctx, 31, 0x17FF98u);
    ctx->pc = 0x17FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF90u;
    // 0x17ff94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x17FF90u, 0x17FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF98u;
label_17ff98:
    // 0x17ff98: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x17ff98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x17ff9c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17ff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ffa0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x17ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ffa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffa8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ffac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ffb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17ffb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17ffb4: 0x0  nop
    ctx->pc = 0x17ffb4u;
    // NOP
    // 0x17ffb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17ffb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17ffbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17ffbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x17ffc0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x17ffc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17ffc4: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x17ffc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x17ffc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ffcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17ffccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ffd0: 0x0  nop
    ctx->pc = 0x17ffd0u;
    // NOP
    // 0x17ffd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17ffd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ffd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17ffd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17ffdc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17FFDCu;
    SET_GPR_U32(ctx, 31, 0x17FFE4u);
    ctx->pc = 0x17FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFDCu;
    // 0x17ffe0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17FFDCu, 0x17FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFE4u;
label_17ffe4:
    // 0x17ffe4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17FFE4u;
    {
        const bool branch_taken_0x17ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ffe4) {
            ctx->pc = 0x180018u;
            return;
        }
    }
    ctx->pc = 0x17FFECu;
}
