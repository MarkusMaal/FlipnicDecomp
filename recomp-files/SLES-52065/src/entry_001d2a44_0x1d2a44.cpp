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

// Function: entry_001d2a44
// Address: 0x1d2a44 - 0x1d2a60
void entry_001d2a44_0x1d2a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2a44_0x1d2a44");
#endif

    ctx->pc = 0x1d2a44u;

    // 0x1d2a44: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A44u;
        // 0x1d2a48: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1D2A4Cu;
    // 0x1d2a4c: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 832)));
    // 0x1d2a50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2a54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a58: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1D2A58u;
    {
        const bool branch_taken_0x1d2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A58u;
        // 0x1d2a5c: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a58) {
            ctx->pc = 0x1D2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1D2A60u;
}
