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

// Function: entry_001bef5c
// Address: 0x1bef5c - 0x1bef80
void entry_001bef5c_0x1bef5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef5c_0x1bef5c");
#endif

    ctx->pc = 0x1bef5cu;

    // 0x1bef5c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x1bef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1bef60: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1bef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bef64: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1bef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x1bef68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bef68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bef6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bef6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bef70: 0x0  nop
    ctx->pc = 0x1bef70u;
    // NOP
    // 0x1bef74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEF74u;
    {
        const bool branch_taken_0x1bef74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF74u;
        // 0x1bef78: 0xe4410074  swc1        $f1, 0x74($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef74) {
            ctx->pc = 0x1BEF80u;
            return;
        }
    }
    ctx->pc = 0x1BEF7Cu;
    // 0x1bef7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1bef80u;
}
