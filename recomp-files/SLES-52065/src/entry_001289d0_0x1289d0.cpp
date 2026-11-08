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

// Function: entry_001289d0
// Address: 0x1289d0 - 0x1289e4
void entry_001289d0_0x1289d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001289d0_0x1289d0");
#endif

    ctx->pc = 0x1289d0u;

    // 0x1289d0: 0x83828464  lb          $v0, -0x7B9C($gp)
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935652)));
    // 0x1289d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1289D4u;
    {
        const bool branch_taken_0x1289d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289D4u;
        // 0x1289d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289d4) {
            ctx->pc = 0x1289E4u;
            return;
        }
    }
    ctx->pc = 0x1289DCu;
    // 0x1289dc: 0xaf808460  sw          $zero, -0x7BA0($gp)
    ctx->pc = 0x1289dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U32(ctx, 0));
    // 0x1289e0: 0xa3828464  sb          $v0, -0x7B9C($gp)
    ctx->pc = 0x1289e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935652), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1289e4u;
}
