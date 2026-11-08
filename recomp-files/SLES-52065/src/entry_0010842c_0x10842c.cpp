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

// Function: entry_0010842c
// Address: 0x10842c - 0x108434
void entry_0010842c_0x10842c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010842c_0x10842c");
#endif

    ctx->pc = 0x10842cu;

    // 0x10842c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10842Cu;
    {
        const bool branch_taken_0x10842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10842Cu;
        // 0x108430: 0xae0001d4  sw          $zero, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10842c) {
            ctx->pc = 0x108440u;
            return;
        }
    }
    ctx->pc = 0x108434u;
}
