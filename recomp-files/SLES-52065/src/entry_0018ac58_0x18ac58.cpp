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

// Function: entry_0018ac58
// Address: 0x18ac58 - 0x18ac60
void entry_0018ac58_0x18ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ac58_0x18ac58");
#endif

    ctx->pc = 0x18ac58u;

    // 0x18ac58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC58u;
    {
        const bool branch_taken_0x18ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC58u;
        // 0x18ac5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac58) {
            ctx->pc = 0x18AC68u;
            return;
        }
    }
    ctx->pc = 0x18AC60u;
}
