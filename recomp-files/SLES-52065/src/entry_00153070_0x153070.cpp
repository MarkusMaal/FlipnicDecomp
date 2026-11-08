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

// Function: entry_00153070
// Address: 0x153070 - 0x15308c
void entry_00153070_0x153070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153070_0x153070");
#endif

    ctx->pc = 0x153070u;

    // 0x153070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x153070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153074: 0x0  nop
    ctx->pc = 0x153074u;
    // NOP
    // 0x153078: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x153078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15307c: 0x0  nop
    ctx->pc = 0x15307cu;
    // NOP
    // 0x153080: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x153080u;
    {
        const bool branch_taken_0x153080 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x153084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153080u;
        // 0x153084: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153080) {
            ctx->pc = 0x15308Cu;
            return;
        }
    }
    ctx->pc = 0x153088u;
    // 0x153088: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x153088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->pc = 0x15308cu;
}
