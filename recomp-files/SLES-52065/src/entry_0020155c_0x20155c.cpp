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

// Function: entry_0020155c
// Address: 0x20155c - 0x201564
void entry_0020155c_0x20155c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020155c_0x20155c");
#endif

    ctx->pc = 0x20155cu;

    // 0x20155c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20155Cu;
    {
        const bool branch_taken_0x20155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20155Cu;
        // 0x201560: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20155c) {
            ctx->pc = 0x20157Cu;
            return;
        }
    }
    ctx->pc = 0x201564u;
}
