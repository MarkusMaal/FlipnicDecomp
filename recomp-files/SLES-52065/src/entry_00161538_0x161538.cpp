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

// Function: entry_00161538
// Address: 0x161538 - 0x16155c
void entry_00161538_0x161538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161538_0x161538");
#endif

    ctx->pc = 0x161538u;

    // 0x161538: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x161538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x16153c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x16153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161540: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x161540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x161544: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x161544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161548: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161548u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16154c: 0x0  nop
    ctx->pc = 0x16154cu;
    // NOP
    // 0x161550: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x161550u;
    {
        const bool branch_taken_0x161550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161550) {
            ctx->pc = 0x16155Cu;
            return;
        }
    }
    ctx->pc = 0x161558u;
    // 0x161558: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x161558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x16155cu;
}
