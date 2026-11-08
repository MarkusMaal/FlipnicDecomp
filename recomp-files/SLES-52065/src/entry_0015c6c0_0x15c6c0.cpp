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

// Function: entry_0015c6c0
// Address: 0x15c6c0 - 0x15c6e0
void entry_0015c6c0_0x15c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c6c0_0x15c6c0");
#endif

    ctx->pc = 0x15c6c0u;

    // 0x15c6c0: 0xc7848020  lwc1        $f4, -0x7FE0($gp)
    ctx->pc = 0x15c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15c6c4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x15c6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c6c8: 0x460410c2  mul.s       $f3, $f2, $f4
    ctx->pc = 0x15c6c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15c6cc: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15c6ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c6d0: 0x0  nop
    ctx->pc = 0x15c6d0u;
    // NOP
    // 0x15c6d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C6D4u;
    {
        const bool branch_taken_0x15c6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c6d4) {
            ctx->pc = 0x15C6E0u;
            return;
        }
    }
    ctx->pc = 0x15C6DCu;
    // 0x15c6dc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x15c6dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    ctx->pc = 0x15c6e0u;
}
