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

// Function: entry_00148408
// Address: 0x148408 - 0x148428
void entry_00148408_0x148408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148408_0x148408");
#endif

    ctx->pc = 0x148408u;

    // 0x148408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14840c: 0x0  nop
    ctx->pc = 0x14840cu;
    // NOP
    // 0x148410: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x148410u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148414: 0x0  nop
    ctx->pc = 0x148414u;
    // NOP
    // 0x148418: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x148418u;
    {
        const bool branch_taken_0x148418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148418) {
            ctx->pc = 0x148428u;
            return;
        }
    }
    ctx->pc = 0x148420u;
    // 0x148420: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x148420u;
    {
        const bool branch_taken_0x148420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148420u;
        // 0x148424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148420) {
            ctx->pc = 0x14842Cu;
            return;
        }
    }
    ctx->pc = 0x148428u;
}
