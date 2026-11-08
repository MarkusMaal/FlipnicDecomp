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

// Function: entry_00173ce4
// Address: 0x173ce4 - 0x173d10
void entry_00173ce4_0x173ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173ce4_0x173ce4");
#endif

    ctx->pc = 0x173ce4u;

    // 0x173ce4: 0x0  nop
    ctx->pc = 0x173ce4u;
    // NOP
    // 0x173ce8: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x173ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x173cec: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x173CECu;
    {
        const bool branch_taken_0x173cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173cec) {
            ctx->pc = 0x173C34u;
            return;
        }
    }
    ctx->pc = 0x173CF4u;
    // 0x173cf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173cf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173cf8: 0x0  nop
    ctx->pc = 0x173cf8u;
    // NOP
    // 0x173cfc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x173cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173d00: 0x0  nop
    ctx->pc = 0x173d00u;
    // NOP
    // 0x173d04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x173D04u;
    {
        const bool branch_taken_0x173d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x173d04) {
            ctx->pc = 0x173D10u;
            return;
        }
    }
    ctx->pc = 0x173D0Cu;
    // 0x173d0c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x173d0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x173d10u;
}
