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

// Function: entry_0015c5b0
// Address: 0x15c5b0 - 0x15c5cc
void entry_0015c5b0_0x15c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c5b0_0x15c5b0");
#endif

    ctx->pc = 0x15c5b0u;

    // 0x15c5b0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x15c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5b4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c5bc: 0x0  nop
    ctx->pc = 0x15c5bcu;
    // NOP
    // 0x15c5c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C5C0u;
    {
        const bool branch_taken_0x15c5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5C0u;
        // 0x15c5c4: 0x27b10068  addiu       $s1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5c0) {
            ctx->pc = 0x15C5CCu;
            return;
        }
    }
    ctx->pc = 0x15C5C8u;
    // 0x15c5c8: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x15c5c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    ctx->pc = 0x15c5ccu;
}
