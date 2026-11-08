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

// Function: caseD_5
// Address: 0x1ba830 - 0x1ba854
void caseD_5_0x1ba830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1ba830");
#endif

    ctx->pc = 0x1ba830u;

    // 0x1ba830: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba834: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba83c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ba83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ba840: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba844: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1ba844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba848: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba84c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BA84Cu;
    {
        const bool branch_taken_0x1ba84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA84Cu;
        // 0x1ba850: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba84c) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA854u;
}
