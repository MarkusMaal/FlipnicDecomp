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

// Function: entry_0013688c
// Address: 0x13688c - 0x1368a0
void entry_0013688c_0x13688c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013688c_0x13688c");
#endif

    ctx->pc = 0x13688cu;

    // 0x13688c: 0x8382855c  lb          $v0, -0x7AA4($gp)
    ctx->pc = 0x13688cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935900)));
    // 0x136890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136890u;
    {
        const bool branch_taken_0x136890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136890u;
        // 0x136894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136890) {
            ctx->pc = 0x1368A0u;
            return;
        }
    }
    ctx->pc = 0x136898u;
    // 0x136898: 0xa3828558  sb          $v0, -0x7AA8($gp)
    ctx->pc = 0x136898u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935896), (uint8_t)GPR_U32(ctx, 2));
    // 0x13689c: 0xa382855c  sb          $v0, -0x7AA4($gp)
    ctx->pc = 0x13689cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935900), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1368a0u;
}
