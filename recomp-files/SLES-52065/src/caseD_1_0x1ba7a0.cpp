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

// Function: caseD_1
// Address: 0x1ba7a0 - 0x1ba7c4
void caseD_1_0x1ba7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1ba7a0");
#endif

    ctx->pc = 0x1ba7a0u;

    // 0x1ba7a0: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7a4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7ac: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba7b0: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7b4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7bc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BA7BCu;
    {
        const bool branch_taken_0x1ba7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7BCu;
        // 0x1ba7c0: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7bc) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA7C4u;
}
