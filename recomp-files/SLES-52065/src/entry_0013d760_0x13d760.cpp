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

// Function: entry_0013d760
// Address: 0x13d760 - 0x13d768
void entry_0013d760_0x13d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d760_0x13d760");
#endif

    ctx->pc = 0x13d760u;

    // 0x13d760: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D760u;
    {
        const bool branch_taken_0x13d760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D760u;
        // 0x13d764: 0xae240184  sw          $a0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d760) {
            ctx->pc = 0x13D77Cu;
            return;
        }
    }
    ctx->pc = 0x13D768u;
}
