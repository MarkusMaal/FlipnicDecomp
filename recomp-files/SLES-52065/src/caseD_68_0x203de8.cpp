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

// Function: caseD_68
// Address: 0x203de8 - 0x203df8
void caseD_68_0x203de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_68_0x203de8");
#endif

    ctx->pc = 0x203de8u;

    // 0x203de8: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x203de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203dec: 0x37de0040  ori         $fp, $fp, 0x40
    ctx->pc = 0x203decu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)64);
    // 0x203df0: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x203DF0u;
    {
        const bool branch_taken_0x203df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DF0u;
        // 0x203df4: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203df0) {
            ctx->pc = 0x203C6Cu;
            return;
        }
    }
    ctx->pc = 0x203DF8u;
}
