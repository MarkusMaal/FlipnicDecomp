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
// Address: 0x126bc4 - 0x126bd8
void caseD_2_0x126bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x126bc4");
#endif

    ctx->pc = 0x126bc4u;

    // 0x126bc4: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x126bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bc8: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x126bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x126bcc: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x126bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x126BD0u;
    {
        const bool branch_taken_0x126bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BD0u;
        // 0x126bd4: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bd0) {
            ctx->pc = 0x126C0Cu;
            return;
        }
    }
    ctx->pc = 0x126BD8u;
}
