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

// Function: entry_00126e64
// Address: 0x126e64 - 0x126e88
void entry_00126e64_0x126e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126e64_0x126e64");
#endif

    ctx->pc = 0x126e64u;

    // 0x126e64: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x126e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126e68: 0x0  nop
    ctx->pc = 0x126e68u;
    // NOP
    // 0x126e6c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x126E6Cu;
    {
        const bool branch_taken_0x126e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126e6c) {
            ctx->pc = 0x126EB4u;
            return;
        }
    }
    ctx->pc = 0x126E74u;
    // 0x126e74: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126E74u;
    {
        const bool branch_taken_0x126e74 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x126E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E74u;
        // 0x126e78: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e74) {
            ctx->pc = 0x126E88u;
            return;
        }
    }
    ctx->pc = 0x126E7Cu;
    // 0x126e7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x126e7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126E80u;
    {
        const bool branch_taken_0x126e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E80u;
        // 0x126e84: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e80) {
            ctx->pc = 0x126EA0u;
            return;
        }
    }
    ctx->pc = 0x126E88u;
}
