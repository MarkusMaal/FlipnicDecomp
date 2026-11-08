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

// Function: entry_00208960
// Address: 0x208960 - 0x20896c
void entry_00208960_0x208960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208960_0x208960");
#endif

    ctx->pc = 0x208960u;

    // 0x208960: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x208960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x208964: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x208964u;
    {
        const bool branch_taken_0x208964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208964u;
        // 0x208968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208964) {
            ctx->pc = 0x20899Cu;
            return;
        }
    }
    ctx->pc = 0x20896Cu;
}
