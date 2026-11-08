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

// Function: entry_0020435c
// Address: 0x20435c - 0x204364
void entry_0020435c_0x20435c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020435c_0x20435c");
#endif

    ctx->pc = 0x20435cu;

    // 0x20435c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20435Cu;
    {
        const bool branch_taken_0x20435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20435Cu;
        // 0x204360: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20435c) {
            ctx->pc = 0x204380u;
            return;
        }
    }
    ctx->pc = 0x204364u;
}
