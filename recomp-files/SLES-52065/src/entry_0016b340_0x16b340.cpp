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

// Function: entry_0016b340
// Address: 0x16b340 - 0x16b35c
void entry_0016b340_0x16b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b340_0x16b340");
#endif

    ctx->pc = 0x16b340u;

    // 0x16b340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16b340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b344: 0x0  nop
    ctx->pc = 0x16b344u;
    // NOP
    // 0x16b348: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x16b348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b34c: 0x0  nop
    ctx->pc = 0x16b34cu;
    // NOP
    // 0x16b350: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B350u;
    {
        const bool branch_taken_0x16b350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B350u;
        // 0x16b354: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b350) {
            ctx->pc = 0x16B35Cu;
            return;
        }
    }
    ctx->pc = 0x16B358u;
    // 0x16b358: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x16b358u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x16b35cu;
}
