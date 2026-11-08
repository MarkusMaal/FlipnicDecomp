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

// Function: entry_0013a900
// Address: 0x13a900 - 0x13a93c
void entry_0013a900_0x13a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a900_0x13a900");
#endif

    ctx->pc = 0x13a900u;

    // 0x13a900: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a904: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a908: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a90c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a910: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a914: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x13a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a918: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a918u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a91c: 0x0  nop
    ctx->pc = 0x13a91cu;
    // NOP
    // 0x13a920: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13A920u;
    {
        const bool branch_taken_0x13a920 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a920) {
            ctx->pc = 0x13A93Cu;
            return;
        }
    }
    ctx->pc = 0x13A928u;
    // 0x13a928: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x13a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a92c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a92cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a930: 0x0  nop
    ctx->pc = 0x13a930u;
    // NOP
    // 0x13a934: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x13A934u;
    {
        const bool branch_taken_0x13a934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a934) {
            ctx->pc = 0x13A95Cu;
            return;
        }
    }
    ctx->pc = 0x13A93Cu;
}
