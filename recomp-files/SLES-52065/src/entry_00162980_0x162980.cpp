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

// Function: entry_00162980
// Address: 0x162980 - 0x1629a0
void entry_00162980_0x162980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162980_0x162980");
#endif

    ctx->pc = 0x162980u;

    // 0x162980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162984: 0x0  nop
    ctx->pc = 0x162984u;
    // NOP
    // 0x162988: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x162988u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x16298c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x16298cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162990: 0x0  nop
    ctx->pc = 0x162990u;
    // NOP
    // 0x162994: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x162994u;
    {
        const bool branch_taken_0x162994 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x162998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162994u;
        // 0x162998: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162994) {
            ctx->pc = 0x1629A0u;
            return;
        }
    }
    ctx->pc = 0x16299Cu;
    // 0x16299c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x16299cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1629a0u;
}
