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

// Function: entry_00186dac
// Address: 0x186dac - 0x186dbc
void entry_00186dac_0x186dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186dac_0x186dac");
#endif

    ctx->pc = 0x186dacu;

    // 0x186dac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186DACu;
    {
        const bool branch_taken_0x186dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186dac) {
            ctx->pc = 0x186DBCu;
            return;
        }
    }
    ctx->pc = 0x186DB4u;
    // 0x186db4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186DB4u;
    {
        const bool branch_taken_0x186db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DB4u;
        // 0x186db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186db4) {
            ctx->pc = 0x186DC0u;
            return;
        }
    }
    ctx->pc = 0x186DBCu;
}
