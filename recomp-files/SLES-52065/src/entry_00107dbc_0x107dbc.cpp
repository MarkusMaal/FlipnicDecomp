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

// Function: entry_00107dbc
// Address: 0x107dbc - 0x107dd0
void entry_00107dbc_0x107dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107dbc_0x107dbc");
#endif

    ctx->pc = 0x107dbcu;

    // 0x107dbc: 0x0  nop
    ctx->pc = 0x107dbcu;
    // NOP
    // 0x107dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x107dc4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x107dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107dc8: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x107DC8u;
    {
        const bool branch_taken_0x107dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC8u;
        // 0x107dcc: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107dc8) {
            ctx->pc = 0x107CC8u;
            return;
        }
    }
    ctx->pc = 0x107DD0u;
}
