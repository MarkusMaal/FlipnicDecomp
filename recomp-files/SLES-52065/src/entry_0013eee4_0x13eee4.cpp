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

// Function: entry_0013eee4
// Address: 0x13eee4 - 0x13ef04
void entry_0013eee4_0x13eee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eee4_0x13eee4");
#endif

    ctx->pc = 0x13eee4u;

    // 0x13eee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13eee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13eee8: 0x0  nop
    ctx->pc = 0x13eee8u;
    // NOP
    // 0x13eeec: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x13eeecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13eef0: 0x0  nop
    ctx->pc = 0x13eef0u;
    // NOP
    // 0x13eef4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13EEF4u;
    {
        const bool branch_taken_0x13eef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EEF4u;
        // 0x13eef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eef4) {
            ctx->pc = 0x13EF04u;
            return;
        }
    }
    ctx->pc = 0x13EEFCu;
    // 0x13eefc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13EEFCu;
    {
        const bool branch_taken_0x13eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eefc) {
            ctx->pc = 0x13EF24u;
            return;
        }
    }
    ctx->pc = 0x13EF04u;
}
