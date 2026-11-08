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

// Function: entry_00129f40
// Address: 0x129f40 - 0x129f60
void entry_00129f40_0x129f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f40_0x129f40");
#endif

    ctx->pc = 0x129f40u;

    // 0x129f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129f44: 0x0  nop
    ctx->pc = 0x129f44u;
    // NOP
    // 0x129f48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129f4c: 0x0  nop
    ctx->pc = 0x129f4cu;
    // NOP
    // 0x129f50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x129F50u;
    {
        const bool branch_taken_0x129f50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129f50) {
            ctx->pc = 0x129F60u;
            return;
        }
    }
    ctx->pc = 0x129F58u;
    // 0x129f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x129F58u;
    {
        const bool branch_taken_0x129f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F58u;
        // 0x129f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f58) {
            ctx->pc = 0x129F64u;
            return;
        }
    }
    ctx->pc = 0x129F60u;
}
