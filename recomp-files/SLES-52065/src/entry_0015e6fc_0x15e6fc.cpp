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

// Function: entry_0015e6fc
// Address: 0x15e6fc - 0x15e710
void entry_0015e6fc_0x15e6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e6fc_0x15e6fc");
#endif

    ctx->pc = 0x15e6fcu;

    // 0x15e6fc: 0x0  nop
    ctx->pc = 0x15e6fcu;
    // NOP
    // 0x15e700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15e704: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x15e704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15e708: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15E708u;
    {
        const bool branch_taken_0x15e708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E708u;
        // 0x15e70c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e708) {
            ctx->pc = 0x15E6E0u;
            return;
        }
    }
    ctx->pc = 0x15E710u;
}
