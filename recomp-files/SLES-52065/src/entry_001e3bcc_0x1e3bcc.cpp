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

// Function: entry_001e3bcc
// Address: 0x1e3bcc - 0x1e3bd4
void entry_001e3bcc_0x1e3bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3bcc_0x1e3bcc");
#endif

    ctx->pc = 0x1e3bccu;

    // 0x1e3bcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E3BCCu;
    {
        const bool branch_taken_0x1e3bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BCCu;
        // 0x1e3bd0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bcc) {
            ctx->pc = 0x1E3BFCu;
            return;
        }
    }
    ctx->pc = 0x1E3BD4u;
}
