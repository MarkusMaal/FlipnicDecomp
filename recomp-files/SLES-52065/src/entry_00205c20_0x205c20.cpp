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

// Function: entry_00205c20
// Address: 0x205c20 - 0x205c2c
void entry_00205c20_0x205c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205c20_0x205c20");
#endif

    ctx->pc = 0x205c20u;

    // 0x205c20: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205c20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x205c24: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x205C24u;
    {
        const bool branch_taken_0x205c24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x205c24) {
            ctx->pc = 0x205C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C24u;
            // 0x205c28: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205B70u;
            return;
        }
    }
    ctx->pc = 0x205C2Cu;
}
