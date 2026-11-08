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

// Function: entry_00120da8
// Address: 0x120da8 - 0x120dbc
void entry_00120da8_0x120da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120da8_0x120da8");
#endif

    ctx->pc = 0x120da8u;

    // 0x120da8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x120da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120dac: 0x1603001e  bne         $s0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x120DACu;
    {
        const bool branch_taken_0x120dac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x120DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DACu;
        // 0x120db0: 0x14082a  slt         $at, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120dac) {
            ctx->pc = 0x120E28u;
            return;
        }
    }
    ctx->pc = 0x120DB4u;
    // 0x120db4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x120DB4u;
    {
        const bool branch_taken_0x120db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120DB4u;
        // 0x120db8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120db4) {
            ctx->pc = 0x120E28u;
            return;
        }
    }
    ctx->pc = 0x120DBCu;
}
