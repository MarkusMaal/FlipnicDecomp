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

// Function: entry_001cb9c4
// Address: 0x1cb9c4 - 0x1cb9cc
void entry_001cb9c4_0x1cb9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb9c4_0x1cb9c4");
#endif

    ctx->pc = 0x1cb9c4u;

    // 0x1cb9c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CB9C4u;
    {
        const bool branch_taken_0x1cb9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9C4u;
        // 0x1cb9c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9c4) {
            ctx->pc = 0x1CB9F8u;
            return;
        }
    }
    ctx->pc = 0x1CB9CCu;
}
