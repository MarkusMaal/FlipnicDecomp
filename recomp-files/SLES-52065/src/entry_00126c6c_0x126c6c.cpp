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

// Function: entry_00126c6c
// Address: 0x126c6c - 0x126c84
void entry_00126c6c_0x126c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126c6c_0x126c6c");
#endif

    ctx->pc = 0x126c6cu;

    // 0x126c6c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x126c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x126c70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126C70u;
    {
        const bool branch_taken_0x126c70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x126C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C70u;
        // 0x126c74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c70) {
            ctx->pc = 0x126C84u;
            return;
        }
    }
    ctx->pc = 0x126C78u;
    // 0x126c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126c7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126C7Cu;
    {
        const bool branch_taken_0x126c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C7Cu;
        // 0x126c80: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c7c) {
            ctx->pc = 0x126C9Cu;
            return;
        }
    }
    ctx->pc = 0x126C84u;
}
