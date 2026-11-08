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

// Function: entry_0015e6e0
// Address: 0x15e6e0 - 0x15e6fc
void entry_0015e6e0_0x15e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e6e0_0x15e6e0");
#endif

    ctx->pc = 0x15e6e0u;

    // 0x15e6e0: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x15e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x15e6e4: 0xc4610254  lwc1        $f1, 0x254($v1)
    ctx->pc = 0x15e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e6e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15e6e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e6ec: 0x0  nop
    ctx->pc = 0x15e6ecu;
    // NOP
    // 0x15e6f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15E6F0u;
    {
        const bool branch_taken_0x15e6f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E6F0u;
        // 0x15e6f4: 0x24660254  addiu       $a2, $v1, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e6f0) {
            ctx->pc = 0x15E6FCu;
            return;
        }
    }
    ctx->pc = 0x15E6F8u;
    // 0x15e6f8: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x15e6f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->pc = 0x15e6fcu;
}
