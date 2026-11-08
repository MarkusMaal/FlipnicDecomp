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

// Function: caseD_2
// Address: 0x1ba7c4 - 0x1ba7e8
void caseD_2_0x1ba7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1ba7c4");
#endif

    ctx->pc = 0x1ba7c4u;

    // 0x1ba7c4: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7c8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7d0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba7d4: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7d8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7e0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1BA7E0u;
    {
        const bool branch_taken_0x1ba7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7E0u;
        // 0x1ba7e4: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7e0) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA7E8u;
}
