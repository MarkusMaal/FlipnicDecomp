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

// Function: entry_00188b7c
// Address: 0x188b7c - 0x188ba8
void entry_00188b7c_0x188b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188b7c_0x188b7c");
#endif

    ctx->pc = 0x188b7cu;

    // 0x188b7c: 0x0  nop
    ctx->pc = 0x188b7cu;
    // NOP
    // 0x188b80: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x188b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x188b84: 0xc6a2006c  lwc1        $f2, 0x6C($s5)
    ctx->pc = 0x188b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188b88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x188b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x188b8c: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x188b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188b90: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x188b90u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x188b94: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x188b94u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x188b98: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x188b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x188b9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x188b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188ba0: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x188BA0u;
    {
        const bool branch_taken_0x188ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188BA0u;
        // 0x188ba4: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ba0) {
            ctx->pc = 0x188E94u;
            return;
        }
    }
    ctx->pc = 0x188BA8u;
}
