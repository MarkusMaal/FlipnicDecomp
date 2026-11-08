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

// Function: caseD_2d
// Address: 0x203ce8 - 0x203cf4
void caseD_2d_0x203ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2d_0x203ce8");
#endif

    ctx->pc = 0x203ce8u;

    // 0x203ce8: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x203ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203cec: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x203CECu;
    {
        const bool branch_taken_0x203cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203CECu;
        // 0x203cf0: 0x37de0004  ori         $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203cec) {
            ctx->pc = 0x203C68u;
            return;
        }
    }
    ctx->pc = 0x203CF4u;
}
