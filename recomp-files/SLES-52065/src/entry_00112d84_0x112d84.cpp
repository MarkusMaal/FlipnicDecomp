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

// Function: entry_00112d84
// Address: 0x112d84 - 0x112d8c
void entry_00112d84_0x112d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112d84_0x112d84");
#endif

    ctx->pc = 0x112d84u;

    // 0x112d84: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x112D84u;
    {
        const bool branch_taken_0x112d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D84u;
        // 0x112d88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d84) {
            ctx->pc = 0x112DF0u;
            return;
        }
    }
    ctx->pc = 0x112D8Cu;
}
