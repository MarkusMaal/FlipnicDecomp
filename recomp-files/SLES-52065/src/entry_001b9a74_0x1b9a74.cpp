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

// Function: entry_001b9a74
// Address: 0x1b9a74 - 0x1b9a7c
void entry_001b9a74_0x1b9a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9a74_0x1b9a74");
#endif

    ctx->pc = 0x1b9a74u;

    // 0x1b9a74: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1B9A74u;
    {
        const bool branch_taken_0x1b9a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A74u;
        // 0x1b9a78: 0xe600009c  swc1        $f0, 0x9C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a74) {
            ctx->pc = 0x1B9C34u;
            return;
        }
    }
    ctx->pc = 0x1B9A7Cu;
}
