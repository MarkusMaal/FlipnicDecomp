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

// Function: entry_00187dbc
// Address: 0x187dbc - 0x187dd8
void entry_00187dbc_0x187dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187dbc_0x187dbc");
#endif

    ctx->pc = 0x187dbcu;

label_187dbc:
    // 0x187dbc: 0x0  nop
    ctx->pc = 0x187dbcu;
    // NOP
    // 0x187dc0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x187dc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187dc4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x187dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x187dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x187dcc: 0x72202b  sltu        $a0, $v1, $s2
    ctx->pc = 0x187dccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x187dd0: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187DD0u;
    {
        const bool branch_taken_0x187dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DD0u;
        // 0x187dd4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187dd0) {
            ctx->pc = 0x187DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187dbc;
        }
    }
    ctx->pc = 0x187DD8u;
}
