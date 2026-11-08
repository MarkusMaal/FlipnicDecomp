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

// Function: caseD_4c
// Address: 0x203dd8 - 0x203de8
void caseD_4c_0x203dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4c_0x203dd8");
#endif

    ctx->pc = 0x203dd8u;

    // 0x203dd8: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x203dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203ddc: 0x37de0008  ori         $fp, $fp, 0x8
    ctx->pc = 0x203ddcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)8);
    // 0x203de0: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x203DE0u;
    {
        const bool branch_taken_0x203de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DE0u;
        // 0x203de4: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203de0) {
            ctx->pc = 0x203C6Cu;
            return;
        }
    }
    ctx->pc = 0x203DE8u;
}
