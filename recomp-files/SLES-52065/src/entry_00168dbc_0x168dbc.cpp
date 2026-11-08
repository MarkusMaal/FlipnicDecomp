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

// Function: entry_00168dbc
// Address: 0x168dbc - 0x168dcc
void entry_00168dbc_0x168dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168dbc_0x168dbc");
#endif

    ctx->pc = 0x168dbcu;

    // 0x168dbc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DBCu;
    {
        const bool branch_taken_0x168dbc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x168DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DBCu;
        // 0x168dc0: 0x33040  sll         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dbc) {
            ctx->pc = 0x168DCCu;
            return;
        }
    }
    ctx->pc = 0x168DC4u;
    // 0x168dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x168DC4u;
    {
        const bool branch_taken_0x168dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DC4u;
        // 0x168dc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dc4) {
            ctx->pc = 0x168DE8u;
            return;
        }
    }
    ctx->pc = 0x168DCCu;
}
