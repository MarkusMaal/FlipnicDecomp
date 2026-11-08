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

// Function: entry_00103194
// Address: 0x103194 - 0x1031c0
void entry_00103194_0x103194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103194_0x103194");
#endif

    ctx->pc = 0x103194u;

    // 0x103194: 0x0  nop
    ctx->pc = 0x103194u;
    // NOP
    // 0x103198: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103198u;
    {
        const bool branch_taken_0x103198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103198) {
            ctx->pc = 0x1031C0u;
            return;
        }
    }
    ctx->pc = 0x1031A0u;
    // 0x1031a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1031a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1031a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1031a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1031a8: 0x0  nop
    ctx->pc = 0x1031a8u;
    // NOP
    // 0x1031ac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1031acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1031b0: 0x0  nop
    ctx->pc = 0x1031b0u;
    // NOP
    // 0x1031b4: 0x0  nop
    ctx->pc = 0x1031b4u;
    // NOP
    // 0x1031b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1031B8u;
    {
        const bool branch_taken_0x1031b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031B8u;
        // 0x1031bc: 0xe4600060  swc1        $f0, 0x60($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031b8) {
            ctx->pc = 0x1031C8u;
            return;
        }
    }
    ctx->pc = 0x1031C0u;
}
