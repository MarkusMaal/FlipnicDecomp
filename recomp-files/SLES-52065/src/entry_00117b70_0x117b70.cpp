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

// Function: entry_00117b70
// Address: 0x117b70 - 0x117b84
void entry_00117b70_0x117b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b70_0x117b70");
#endif

    ctx->pc = 0x117b70u;

    // 0x117b70: 0x83828374  lb          $v0, -0x7C8C($gp)
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935412)));
    // 0x117b74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117B74u;
    {
        const bool branch_taken_0x117b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B74u;
        // 0x117b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b74) {
            ctx->pc = 0x117B84u;
            return;
        }
    }
    ctx->pc = 0x117B7Cu;
    // 0x117b7c: 0xaf808370  sw          $zero, -0x7C90($gp)
    ctx->pc = 0x117b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935408), GPR_U32(ctx, 0));
    // 0x117b80: 0xa3828374  sb          $v0, -0x7C8C($gp)
    ctx->pc = 0x117b80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935412), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x117b84u;
}
