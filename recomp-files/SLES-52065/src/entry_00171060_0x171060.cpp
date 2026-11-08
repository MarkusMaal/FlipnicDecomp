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

// Function: entry_00171060
// Address: 0x171060 - 0x171080
void entry_00171060_0x171060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171060_0x171060");
#endif

    ctx->pc = 0x171060u;

    // 0x171060: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x171060u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171064: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x171064u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x171068: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x171068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x17106c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17106Cu;
    {
        const bool branch_taken_0x17106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17106Cu;
        // 0x171070: 0xc4800250  lwc1        $f0, 0x250($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17106c) {
            ctx->pc = 0x171080u;
            return;
        }
    }
    ctx->pc = 0x171074u;
    // 0x171074: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x171074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x171078: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x171078u;
    {
        const bool branch_taken_0x171078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171078u;
        // 0x17107c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171078) {
            ctx->pc = 0x1710B0u;
            return;
        }
    }
    ctx->pc = 0x171080u;
}
