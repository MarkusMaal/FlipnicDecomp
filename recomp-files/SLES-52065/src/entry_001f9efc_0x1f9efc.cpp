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

// Function: entry_001f9efc
// Address: 0x1f9efc - 0x1f9f08
void entry_001f9efc_0x1f9efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9efc_0x1f9efc");
#endif

    ctx->pc = 0x1f9efcu;

    // 0x1f9efc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f9f00: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1F9F00u;
    {
        const bool branch_taken_0x1f9f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F00u;
        // 0x1f9f04: 0xc44048f8  lwc1        $f0, 0x48F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f00) {
            ctx->pc = 0x1FA020u;
            return;
        }
    }
    ctx->pc = 0x1F9F08u;
}
