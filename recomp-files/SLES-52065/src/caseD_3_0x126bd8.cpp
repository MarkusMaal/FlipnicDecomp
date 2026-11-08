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
// Address: 0x126bd8 - 0x126be4
void caseD_3_0x126bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x126bd8");
#endif

    ctx->pc = 0x126bd8u;

    // 0x126bd8: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x126bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126bdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x126BDCu;
    {
        const bool branch_taken_0x126bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BDCu;
        // 0x126be0: 0xe6200088  swc1        $f0, 0x88($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126bdc) {
            ctx->pc = 0x126C0Cu;
            return;
        }
    }
    ctx->pc = 0x126BE4u;
}
