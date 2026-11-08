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

// Function: entry_00174da0
// Address: 0x174da0 - 0x174dc4
void entry_00174da0_0x174da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174da0_0x174da0");
#endif

    ctx->pc = 0x174da0u;

    // 0x174da0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174da4: 0x0  nop
    ctx->pc = 0x174da4u;
    // NOP
    // 0x174da8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x174DA8u;
    {
        const bool branch_taken_0x174da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x174da8) {
            ctx->pc = 0x174DC4u;
            return;
        }
    }
    ctx->pc = 0x174DB0u;
    // 0x174db0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174db0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174db4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x174db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x174db8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174dbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174dc0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x174dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x174dc4u;
}
