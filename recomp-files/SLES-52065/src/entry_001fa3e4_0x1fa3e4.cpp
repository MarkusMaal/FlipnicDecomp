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

// Function: entry_001fa3e4
// Address: 0x1fa3e4 - 0x1fa3f4
void entry_001fa3e4_0x1fa3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa3e4_0x1fa3e4");
#endif

    ctx->pc = 0x1fa3e4u;

    // 0x1fa3e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fa3e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1fa3e8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa3ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA3ECu;
    {
        const bool branch_taken_0x1fa3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3ECu;
        // 0x1fa3f0: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3ec) {
            ctx->pc = 0x1FA3F8u;
            return;
        }
    }
    ctx->pc = 0x1FA3F4u;
}
