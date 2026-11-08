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

// Function: caseD_6
// Address: 0x1ba854 - 0x1ba878
void caseD_6_0x1ba854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1ba854");
#endif

    ctx->pc = 0x1ba854u;

    // 0x1ba854: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba858: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba85c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba85cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba860: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba864: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba868: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba86c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba86cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba870: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BA870u;
    {
        const bool branch_taken_0x1ba870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA870u;
        // 0x1ba874: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba870) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA878u;
}
