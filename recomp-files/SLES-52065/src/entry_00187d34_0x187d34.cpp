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

// Function: entry_00187d34
// Address: 0x187d34 - 0x187d40
void entry_00187d34_0x187d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d34_0x187d34");
#endif

    ctx->pc = 0x187d34u;

    // 0x187d34: 0x0  nop
    ctx->pc = 0x187d34u;
    // NOP
    // 0x187d38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187D38u;
    {
        const bool branch_taken_0x187d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D38u;
        // 0x187d3c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d38) {
            ctx->pc = 0x187D54u;
            return;
        }
    }
    ctx->pc = 0x187D40u;
}
