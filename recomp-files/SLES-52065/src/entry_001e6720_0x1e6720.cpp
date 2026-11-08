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

// Function: entry_001e6720
// Address: 0x1e6720 - 0x1e673c
void entry_001e6720_0x1e6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6720_0x1e6720");
#endif

    ctx->pc = 0x1e6720u;

    // 0x1e6720: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e6720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e6724: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6728: 0x9082003a  lbu         $v0, 0x3A($a0)
    ctx->pc = 0x1e6728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x1e672c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E672Cu;
    {
        const bool branch_taken_0x1e672c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E672Cu;
        // 0x1e6730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e672c) {
            ctx->pc = 0x1E673Cu;
            return;
        }
    }
    ctx->pc = 0x1E6734u;
    // 0x1e6734: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1E6734u;
    {
        const bool branch_taken_0x1e6734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6734u;
        // 0x1e6738: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6734) {
            ctx->pc = 0x1E69DCu;
            return;
        }
    }
    ctx->pc = 0x1E673Cu;
}
