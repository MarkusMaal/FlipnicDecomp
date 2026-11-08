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

// Function: entry_00162f64
// Address: 0x162f64 - 0x162f84
void entry_00162f64_0x162f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162f64_0x162f64");
#endif

    ctx->pc = 0x162f64u;

    // 0x162f64: 0x8e230220  lw          $v1, 0x220($s1)
    ctx->pc = 0x162f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x162f68: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x162f6c: 0xc6200228  lwc1        $f0, 0x228($s1)
    ctx->pc = 0x162f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162f70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x162f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x162f74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162f78: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x162f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162f7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x162f7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x162f80: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x162f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x162f84u;
}
