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

// Function: entry_00163c1c
// Address: 0x163c1c - 0x163c58
void entry_00163c1c_0x163c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163c1c_0x163c1c");
#endif

    ctx->pc = 0x163c1cu;

    // 0x163c1c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x163c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x163c20: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x163c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163c24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163c28: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x163c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163c2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163c30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x163c30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c34: 0x0  nop
    ctx->pc = 0x163c34u;
    // NOP
    // 0x163c38: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x163C38u;
    {
        const bool branch_taken_0x163c38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c38) {
            ctx->pc = 0x163C58u;
            return;
        }
    }
    ctx->pc = 0x163C40u;
    // 0x163c40: 0xc66002f0  lwc1        $f0, 0x2F0($s3)
    ctx->pc = 0x163c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x163c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c48: 0x0  nop
    ctx->pc = 0x163c48u;
    // NOP
    // 0x163c4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x163C4Cu;
    {
        const bool branch_taken_0x163c4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163c4c) {
            ctx->pc = 0x163C58u;
            return;
        }
    }
    ctx->pc = 0x163C54u;
    // 0x163c54: 0xe66102f0  swc1        $f1, 0x2F0($s3)
    ctx->pc = 0x163c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 752), bits); }
    ctx->pc = 0x163c58u;
}
