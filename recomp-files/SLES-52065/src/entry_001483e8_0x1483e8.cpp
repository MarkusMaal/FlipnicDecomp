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

// Function: entry_001483e8
// Address: 0x1483e8 - 0x148408
void entry_001483e8_0x1483e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001483e8_0x1483e8");
#endif

    ctx->pc = 0x1483e8u;

    // 0x1483e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1483e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1483ec: 0x0  nop
    ctx->pc = 0x1483ecu;
    // NOP
    // 0x1483f0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1483f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1483f4: 0x0  nop
    ctx->pc = 0x1483f4u;
    // NOP
    // 0x1483f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1483F8u;
    {
        const bool branch_taken_0x1483f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1483FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1483F8u;
        // 0x1483fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1483f8) {
            ctx->pc = 0x148408u;
            return;
        }
    }
    ctx->pc = 0x148400u;
    // 0x148400: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x148400u;
    {
        const bool branch_taken_0x148400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148400u;
        // 0x148404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148400) {
            ctx->pc = 0x14842Cu;
            return;
        }
    }
    ctx->pc = 0x148408u;
}
