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

// Function: entry_001e5944
// Address: 0x1e5944 - 0x1e594c
void entry_001e5944_0x1e5944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5944_0x1e5944");
#endif

    ctx->pc = 0x1e5944u;

    // 0x1e5944: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5944u;
    {
        const bool branch_taken_0x1e5944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5944u;
        // 0x1e5948: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5944) {
            ctx->pc = 0x1E59A4u;
            return;
        }
    }
    ctx->pc = 0x1E594Cu;
}
