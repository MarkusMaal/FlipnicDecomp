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

// Function: entry_00205960
// Address: 0x205960 - 0x205970
void entry_00205960_0x205960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205960_0x205960");
#endif

    ctx->pc = 0x205960u;

    // 0x205960: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x205960u;
    {
        const bool branch_taken_0x205960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205960u;
        // 0x205964: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205960) {
            ctx->pc = 0x205A0Cu;
            return;
        }
    }
    ctx->pc = 0x205968u;
    // 0x205968: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x205968u;
    {
        const bool branch_taken_0x205968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205968u;
        // 0x20596c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205968) {
            ctx->pc = 0x205A0Cu;
            return;
        }
    }
    ctx->pc = 0x205970u;
}
