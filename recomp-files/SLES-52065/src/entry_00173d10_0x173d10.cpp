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

// Function: entry_00173d10
// Address: 0x173d10 - 0x173d30
void entry_00173d10_0x173d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173d10_0x173d10");
#endif

    ctx->pc = 0x173d10u;

    // 0x173d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173d18: 0x0  nop
    ctx->pc = 0x173d18u;
    // NOP
    // 0x173d1c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x173d1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d20: 0x0  nop
    ctx->pc = 0x173d20u;
    // NOP
    // 0x173d24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x173D24u;
    {
        const bool branch_taken_0x173d24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d24) {
            ctx->pc = 0x173D30u;
            return;
        }
    }
    ctx->pc = 0x173D2Cu;
    // 0x173d2c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x173d2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x173d30u;
}
