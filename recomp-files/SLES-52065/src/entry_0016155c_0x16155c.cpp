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

// Function: entry_0016155c
// Address: 0x16155c - 0x16157c
void entry_0016155c_0x16155c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016155c_0x16155c");
#endif

    ctx->pc = 0x16155cu;

    // 0x16155c: 0x0  nop
    ctx->pc = 0x16155cu;
    // NOP
    // 0x161560: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x161560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x161564: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x161564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16156c: 0x0  nop
    ctx->pc = 0x16156cu;
    // NOP
    // 0x161570: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x161570u;
    {
        const bool branch_taken_0x161570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161570) {
            ctx->pc = 0x16157Cu;
            return;
        }
    }
    ctx->pc = 0x161578u;
    // 0x161578: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x161578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x16157cu;
}
