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

// Function: entry_00160e9c
// Address: 0x160e9c - 0x160ec4
void entry_00160e9c_0x160e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e9c_0x160e9c");
#endif

    ctx->pc = 0x160e9cu;

    // 0x160e9c: 0x0  nop
    ctx->pc = 0x160e9cu;
    // NOP
    // 0x160ea0: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x160ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
    // 0x160ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160ea8: 0x0  nop
    ctx->pc = 0x160ea8u;
    // NOP
    // 0x160eac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x160eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160eb0: 0x0  nop
    ctx->pc = 0x160eb0u;
    // NOP
    // 0x160eb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x160EB4u;
    {
        const bool branch_taken_0x160eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160eb4) {
            ctx->pc = 0x160EC4u;
            return;
        }
    }
    ctx->pc = 0x160EBCu;
    // 0x160ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x160EBCu;
    {
        const bool branch_taken_0x160ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160EBCu;
        // 0x160ec0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ebc) {
            ctx->pc = 0x160ECCu;
            return;
        }
    }
    ctx->pc = 0x160EC4u;
}
