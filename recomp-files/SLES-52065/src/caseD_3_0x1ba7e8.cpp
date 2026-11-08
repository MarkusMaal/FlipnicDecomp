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

// Function: caseD_3
// Address: 0x1ba7e8 - 0x1ba80c
void caseD_3_0x1ba7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ba7e8");
#endif

    ctx->pc = 0x1ba7e8u;

    // 0x1ba7e8: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7ec: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba7f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba7f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba7f4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba7f8: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba7fc: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba800: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba804: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BA804u;
    {
        const bool branch_taken_0x1ba804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA804u;
        // 0x1ba808: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba804) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA80Cu;
}
