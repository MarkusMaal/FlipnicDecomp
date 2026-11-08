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

// Function: entry_00171080
// Address: 0x171080 - 0x17109c
void entry_00171080_0x171080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171080_0x171080");
#endif

    ctx->pc = 0x171080u;

    // 0x171080: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x171084: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171084u;
    {
        const bool branch_taken_0x171084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171084) {
            ctx->pc = 0x17109Cu;
            return;
        }
    }
    ctx->pc = 0x17108Cu;
    // 0x17108c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17108cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x171090: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x171090u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x171094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x171094u;
    {
        const bool branch_taken_0x171094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171094u;
        // 0x171098: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171094) {
            ctx->pc = 0x1710B0u;
            return;
        }
    }
    ctx->pc = 0x17109Cu;
}
