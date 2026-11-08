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

// Function: entry_00190ed8
// Address: 0x190ed8 - 0x190ef0
void entry_00190ed8_0x190ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190ed8_0x190ed8");
#endif

    ctx->pc = 0x190ed8u;

    // 0x190ed8: 0x8e030328  lw          $v1, 0x328($s0)
    ctx->pc = 0x190ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x190edc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x190edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x190ee0: 0x146201ed  bne         $v1, $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x190EE0u;
    {
        const bool branch_taken_0x190ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190ee0) {
            ctx->pc = 0x191698u;
            return;
        }
    }
    ctx->pc = 0x190EE8u;
    // 0x190ee8: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x190EE8u;
    {
        const bool branch_taken_0x190ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EE8u;
        // 0x190eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ee8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x190EF0u;
}
