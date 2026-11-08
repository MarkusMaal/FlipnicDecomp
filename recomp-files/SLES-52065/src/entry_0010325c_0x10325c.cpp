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

// Function: entry_0010325c
// Address: 0x10325c - 0x103288
void entry_0010325c_0x10325c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010325c_0x10325c");
#endif

    ctx->pc = 0x10325cu;

    // 0x10325c: 0x0  nop
    ctx->pc = 0x10325cu;
    // NOP
    // 0x103260: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x103260u;
    {
        const bool branch_taken_0x103260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103260) {
            ctx->pc = 0x103288u;
            return;
        }
    }
    ctx->pc = 0x103268u;
    // 0x103268: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x103268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10326c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10326cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x103270: 0x0  nop
    ctx->pc = 0x103270u;
    // NOP
    // 0x103274: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x103274u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x103278: 0x0  nop
    ctx->pc = 0x103278u;
    // NOP
    // 0x10327c: 0x0  nop
    ctx->pc = 0x10327cu;
    // NOP
    // 0x103280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x103280u;
    {
        const bool branch_taken_0x103280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103280u;
        // 0x103284: 0xe4600060  swc1        $f0, 0x60($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103280) {
            ctx->pc = 0x103290u;
            return;
        }
    }
    ctx->pc = 0x103288u;
}
