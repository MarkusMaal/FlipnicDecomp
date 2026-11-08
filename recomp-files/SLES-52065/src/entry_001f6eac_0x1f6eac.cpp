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

// Function: entry_001f6eac
// Address: 0x1f6eac - 0x1f6eb4
void entry_001f6eac_0x1f6eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6eac_0x1f6eac");
#endif

    ctx->pc = 0x1f6eacu;

    // 0x1f6eac: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F6EACu;
    {
        const bool branch_taken_0x1f6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EACu;
        // 0x1f6eb0: 0xae40bb34  sw          $zero, -0x44CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294949684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eac) {
            ctx->pc = 0x1F6E48u;
            return;
        }
    }
    ctx->pc = 0x1F6EB4u;
}
