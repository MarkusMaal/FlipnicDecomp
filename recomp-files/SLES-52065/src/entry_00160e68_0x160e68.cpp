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

// Function: entry_00160e68
// Address: 0x160e68 - 0x160e84
void entry_00160e68_0x160e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e68_0x160e68");
#endif

    ctx->pc = 0x160e68u;

    // 0x160e68: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x160e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160e6c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x160e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160e70: 0x0  nop
    ctx->pc = 0x160e70u;
    // NOP
    // 0x160e74: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x160E74u;
    {
        const bool branch_taken_0x160e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160e74) {
            ctx->pc = 0x160E84u;
            return;
        }
    }
    ctx->pc = 0x160E7Cu;
    // 0x160e7c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x160e7cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x160e80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x160e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160e84u;
}
