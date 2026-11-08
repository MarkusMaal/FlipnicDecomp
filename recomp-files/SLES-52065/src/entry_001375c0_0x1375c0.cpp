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

// Function: entry_001375c0
// Address: 0x1375c0 - 0x1375f8
void entry_001375c0_0x1375c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001375c0_0x1375c0");
#endif

    ctx->pc = 0x1375c0u;

    // 0x1375c0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1375c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1375c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1375c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1375cc: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x1375ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1375d0: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1375d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1375d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1375d8: 0x0  nop
    ctx->pc = 0x1375d8u;
    // NOP
    // 0x1375dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1375DCu;
    {
        const bool branch_taken_0x1375dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1375dc) {
            ctx->pc = 0x1375F8u;
            return;
        }
    }
    ctx->pc = 0x1375E4u;
    // 0x1375e4: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x1375e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1375e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1375ec: 0x0  nop
    ctx->pc = 0x1375ecu;
    // NOP
    // 0x1375f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1375F0u;
    {
        const bool branch_taken_0x1375f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1375f0) {
            ctx->pc = 0x137610u;
            return;
        }
    }
    ctx->pc = 0x1375F8u;
}
