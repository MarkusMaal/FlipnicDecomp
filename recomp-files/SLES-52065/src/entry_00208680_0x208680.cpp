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

// Function: entry_00208680
// Address: 0x208680 - 0x208688
void entry_00208680_0x208680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208680_0x208680");
#endif

    ctx->pc = 0x208680u;

    // 0x208680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208680u;
    {
        const bool branch_taken_0x208680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208680u;
        // 0x208684: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208680) {
            ctx->pc = 0x20868Cu;
            return;
        }
    }
    ctx->pc = 0x208688u;
}
