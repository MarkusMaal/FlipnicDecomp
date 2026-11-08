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

// Function: entry_001e92fc
// Address: 0x1e92fc - 0x1e9318
void entry_001e92fc_0x1e92fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e92fc_0x1e92fc");
#endif

    ctx->pc = 0x1e92fcu;

    // 0x1e92fc: 0x0  nop
    ctx->pc = 0x1e92fcu;
    // NOP
    // 0x1e9300: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1e9300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9304: 0x1447fff6  bne         $v0, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E9304u;
    {
        const bool branch_taken_0x1e9304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9304u;
        // 0x1e9308: 0x2183c  dsll32      $v1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9304) {
            ctx->pc = 0x1E92E0u;
            return;
        }
    }
    ctx->pc = 0x1E930Cu;
    // 0x1e930c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1e930cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1e9310: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1E9310u;
    {
        const bool branch_taken_0x1e9310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9310u;
        // 0x1e9314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9310) {
            ctx->pc = 0x1E943Cu;
            return;
        }
    }
    ctx->pc = 0x1E9318u;
}
