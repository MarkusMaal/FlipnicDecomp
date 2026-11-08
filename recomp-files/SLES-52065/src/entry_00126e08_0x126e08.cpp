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

// Function: entry_00126e08
// Address: 0x126e08 - 0x126e24
void entry_00126e08_0x126e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126e08_0x126e08");
#endif

    ctx->pc = 0x126e08u;

    // 0x126e08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x126e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e0c: 0x0  nop
    ctx->pc = 0x126e0cu;
    // NOP
    // 0x126e10: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x126e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126e14: 0x0  nop
    ctx->pc = 0x126e14u;
    // NOP
    // 0x126e18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x126E18u;
    {
        const bool branch_taken_0x126e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126e18) {
            ctx->pc = 0x126E24u;
            return;
        }
    }
    ctx->pc = 0x126E20u;
    // 0x126e20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x126e20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x126e24u;
}
