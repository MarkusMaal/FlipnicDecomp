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

// Function: entry_0014dbc8
// Address: 0x14dbc8 - 0x14dbd4
void entry_0014dbc8_0x14dbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dbc8_0x14dbc8");
#endif

    ctx->pc = 0x14dbc8u;

    // 0x14dbc8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x14DBC8u;
    {
        const bool branch_taken_0x14dbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBC8u;
        // 0x14dbcc: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbc8) {
            ctx->pc = 0x14DC04u;
            return;
        }
    }
    ctx->pc = 0x14DBD0u;
    // 0x14dbd0: 0x3c0107ff  lui         $at, 0x7FF
    ctx->pc = 0x14dbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2047 << 16));
    ctx->pc = 0x14dbd4u;
}
