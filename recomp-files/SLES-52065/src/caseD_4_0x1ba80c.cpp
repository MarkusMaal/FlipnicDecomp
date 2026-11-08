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

// Function: caseD_4
// Address: 0x1ba80c - 0x1ba830
void caseD_4_0x1ba80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1ba80c");
#endif

    ctx->pc = 0x1ba80cu;

    // 0x1ba80c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba810: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba814: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba818: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ba818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ba81c: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1ba81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba820: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1ba820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba824: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba828: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1BA828u;
    {
        const bool branch_taken_0x1ba828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA828u;
        // 0x1ba82c: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba828) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA830u;
}
