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

// Function: entry_001368a0
// Address: 0x1368a0 - 0x1368b4
void entry_001368a0_0x1368a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001368a0_0x1368a0");
#endif

    ctx->pc = 0x1368a0u;

    // 0x1368a0: 0x83828564  lb          $v0, -0x7A9C($gp)
    ctx->pc = 0x1368a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935908)));
    // 0x1368a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1368A4u;
    {
        const bool branch_taken_0x1368a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A4u;
        // 0x1368a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368a4) {
            ctx->pc = 0x1368B4u;
            return;
        }
    }
    ctx->pc = 0x1368ACu;
    // 0x1368ac: 0xa3828560  sb          $v0, -0x7AA0($gp)
    ctx->pc = 0x1368acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935904), (uint8_t)GPR_U32(ctx, 2));
    // 0x1368b0: 0xa3828564  sb          $v0, -0x7A9C($gp)
    ctx->pc = 0x1368b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935908), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1368b4u;
}
