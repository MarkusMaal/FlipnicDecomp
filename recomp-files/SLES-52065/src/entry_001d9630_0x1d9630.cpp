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

// Function: entry_001d9630
// Address: 0x1d9630 - 0x1d9640
void entry_001d9630_0x1d9630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9630_0x1d9630");
#endif

    ctx->pc = 0x1d9630u;

    // 0x1d9630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d9634: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1d9634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9638: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D9638u;
    {
        const bool branch_taken_0x1d9638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9638) {
            ctx->pc = 0x1D963Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9638u;
            // 0x1d963c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9620u;
            return;
        }
    }
    ctx->pc = 0x1D9640u;
}
