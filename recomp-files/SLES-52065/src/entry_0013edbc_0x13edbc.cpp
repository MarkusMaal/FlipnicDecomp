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

// Function: entry_0013edbc
// Address: 0x13edbc - 0x13eddc
void entry_0013edbc_0x13edbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013edbc_0x13edbc");
#endif

    ctx->pc = 0x13edbcu;

    // 0x13edbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13edbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13edc0: 0x0  nop
    ctx->pc = 0x13edc0u;
    // NOP
    // 0x13edc4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x13edc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13edc8: 0x0  nop
    ctx->pc = 0x13edc8u;
    // NOP
    // 0x13edcc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13EDCCu;
    {
        const bool branch_taken_0x13edcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDCCu;
        // 0x13edd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13edcc) {
            ctx->pc = 0x13EDDCu;
            return;
        }
    }
    ctx->pc = 0x13EDD4u;
    // 0x13edd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13EDD4u;
    {
        const bool branch_taken_0x13edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13edd4) {
            ctx->pc = 0x13EDF8u;
            return;
        }
    }
    ctx->pc = 0x13EDDCu;
}
