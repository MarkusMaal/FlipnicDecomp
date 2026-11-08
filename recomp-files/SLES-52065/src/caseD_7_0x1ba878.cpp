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

// Function: caseD_7
// Address: 0x1ba878 - 0x1ba89c
void caseD_7_0x1ba878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1ba878");
#endif

    ctx->pc = 0x1ba878u;

    // 0x1ba878: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba87c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba884: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba888: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba88c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba894: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA894u;
    {
        const bool branch_taken_0x1ba894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA894u;
        // 0x1ba898: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba894) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA89Cu;
}
