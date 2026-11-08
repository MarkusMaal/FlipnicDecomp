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

// Function: entry_001beedc
// Address: 0x1beedc - 0x1bef00
void entry_001beedc_0x1beedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beedc_0x1beedc");
#endif

    ctx->pc = 0x1beedcu;

    // 0x1beedc: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x1beedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1beee0: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1beee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1beee4: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x1beee8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1beee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1beeec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1beeecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1beef0: 0x0  nop
    ctx->pc = 0x1beef0u;
    // NOP
    // 0x1beef4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEEF4u;
    {
        const bool branch_taken_0x1beef4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF4u;
        // 0x1beef8: 0xe4410074  swc1        $f1, 0x74($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beef4) {
            ctx->pc = 0x1BEF00u;
            return;
        }
    }
    ctx->pc = 0x1BEEFCu;
    // 0x1beefc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1beefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1bef00u;
}
