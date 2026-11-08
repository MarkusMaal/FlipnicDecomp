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

// Function: entry_0016d2d0
// Address: 0x16d2d0 - 0x16d308
void entry_0016d2d0_0x16d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d2d0_0x16d2d0");
#endif

    ctx->pc = 0x16d2d0u;

    // 0x16d2d0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x16d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d2d8: 0x0  nop
    ctx->pc = 0x16d2d8u;
    // NOP
    // 0x16d2dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16d2dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16d2e0: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16d2e0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16d2e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16d2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d2ec: 0x0  nop
    ctx->pc = 0x16d2ecu;
    // NOP
    // 0x16d2f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16d2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d2f4: 0x0  nop
    ctx->pc = 0x16d2f4u;
    // NOP
    // 0x16d2f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16D2F8u;
    {
        const bool branch_taken_0x16d2f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d2f8) {
            ctx->pc = 0x16D308u;
            return;
        }
    }
    ctx->pc = 0x16D300u;
    // 0x16d300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16D300u;
    {
        const bool branch_taken_0x16d300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D300u;
        // 0x16d304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d300) {
            ctx->pc = 0x16D310u;
            return;
        }
    }
    ctx->pc = 0x16D308u;
}
