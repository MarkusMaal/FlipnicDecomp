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

// Function: entry_0010a098
// Address: 0x10a098 - 0x10a0a0
void entry_0010a098_0x10a098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a098_0x10a098");
#endif

    ctx->pc = 0x10a098u;

    // 0x10a098: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x10A098u;
    {
        const bool branch_taken_0x10a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A098u;
        // 0x10a09c: 0xa47001ec  sh          $s0, 0x1EC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 492), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a098) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A0A0u;
}
