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

// Function: entry_001fb1a0
// Address: 0x1fb1a0 - 0x1fb1c0
void entry_001fb1a0_0x1fb1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb1a0_0x1fb1a0");
#endif

    ctx->pc = 0x1fb1a0u;

    // 0x1fb1a0: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x1fb1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x1fb1a4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1fb1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb1a8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB1A8u;
    {
        const bool branch_taken_0x1fb1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1a8) {
            ctx->pc = 0x1FB1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB1A8u;
            // 0x1fb1ac: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB1ECu;
            return;
        }
    }
    ctx->pc = 0x1FB1B0u;
    // 0x1fb1b0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB1B0u;
    {
        const bool branch_taken_0x1fb1b0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1fb1b0) {
            ctx->pc = 0x1FB1C0u;
            return;
        }
    }
    ctx->pc = 0x1FB1B8u;
    // 0x1fb1b8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1fb1b8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1fb1bc: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1fb1bcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->pc = 0x1fb1c0u;
}
