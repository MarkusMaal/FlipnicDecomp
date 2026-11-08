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

// Function: entry_001a1dac
// Address: 0x1a1dac - 0x1a1dc8
void entry_001a1dac_0x1a1dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1dac_0x1a1dac");
#endif

    ctx->pc = 0x1a1dacu;

    // 0x1a1dac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1db0: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x1a1db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a1db4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A1DB4u;
    {
        const bool branch_taken_0x1a1db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB4u;
        // 0x1a1db8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db4) {
            ctx->pc = 0x1A1D0Cu;
            return;
        }
    }
    ctx->pc = 0x1A1DBCu;
    // 0x1a1dbc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1A1DBCu;
    {
        const bool branch_taken_0x1a1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1dbc) {
            ctx->pc = 0x1A1F88u;
            return;
        }
    }
    ctx->pc = 0x1A1DC4u;
    // 0x1a1dc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1a1dc8u;
}
