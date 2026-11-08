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

// Function: entry_00133464
// Address: 0x133464 - 0x133478
void entry_00133464_0x133464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133464_0x133464");
#endif

    ctx->pc = 0x133464u;

    // 0x133464: 0x83828534  lb          $v0, -0x7ACC($gp)
    ctx->pc = 0x133464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935860)));
    // 0x133468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133468u;
    {
        const bool branch_taken_0x133468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133468u;
        // 0x13346c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133468) {
            ctx->pc = 0x133478u;
            return;
        }
    }
    ctx->pc = 0x133470u;
    // 0x133470: 0xaf808530  sw          $zero, -0x7AD0($gp)
    ctx->pc = 0x133470u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935856), GPR_U32(ctx, 0));
    // 0x133474: 0xa3828534  sb          $v0, -0x7ACC($gp)
    ctx->pc = 0x133474u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935860), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x133478u;
}
