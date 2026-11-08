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

// Function: caseD_0
// Address: 0x126b94 - 0x126bb0
void caseD_0_0x126b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x126b94");
#endif

    ctx->pc = 0x126b94u;

    // 0x126b94: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x126b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126b98: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x126b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x126b9c: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x126b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126ba0: 0xe6200084  swc1        $f0, 0x84($s1)
    ctx->pc = 0x126ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x126ba4: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x126ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126ba8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x126BA8u;
    {
        const bool branch_taken_0x126ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BA8u;
        // 0x126bac: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ba8) {
            ctx->pc = 0x126C0Cu;
            return;
        }
    }
    ctx->pc = 0x126BB0u;
}
