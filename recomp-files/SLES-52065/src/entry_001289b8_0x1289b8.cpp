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

// Function: entry_001289b8
// Address: 0x1289b8 - 0x1289d0
void entry_001289b8_0x1289b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001289b8_0x1289b8");
#endif

    ctx->pc = 0x1289b8u;

    // 0x1289b8: 0x8382845c  lb          $v0, -0x7BA4($gp)
    ctx->pc = 0x1289b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x1289bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1289BCu;
    {
        const bool branch_taken_0x1289bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289BCu;
        // 0x1289c0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289bc) {
            ctx->pc = 0x1289D0u;
            return;
        }
    }
    ctx->pc = 0x1289C4u;
    // 0x1289c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1289c8: 0xaf838458  sw          $v1, -0x7BA8($gp)
    ctx->pc = 0x1289c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U32(ctx, 3));
    // 0x1289cc: 0xa382845c  sb          $v0, -0x7BA4($gp)
    ctx->pc = 0x1289ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935644), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1289d0u;
}
