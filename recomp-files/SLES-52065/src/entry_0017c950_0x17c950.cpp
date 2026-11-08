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

// Function: entry_0017c950
// Address: 0x17c950 - 0x17c958
void entry_0017c950_0x17c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c950_0x17c950");
#endif

    ctx->pc = 0x17c950u;

    // 0x17c950: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17C950u;
    {
        const bool branch_taken_0x17c950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C950u;
        // 0x17c954: 0xa22001d3  sb          $zero, 0x1D3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c950) {
            ctx->pc = 0x17C96Cu;
            return;
        }
    }
    ctx->pc = 0x17C958u;
}
