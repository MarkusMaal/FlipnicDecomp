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

// Function: entry_00117d04
// Address: 0x117d04 - 0x117d1c
void entry_00117d04_0x117d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d04_0x117d04");
#endif

    ctx->pc = 0x117d04u;

    // 0x117d04: 0x28834000  slti        $v1, $a0, 0x4000
    ctx->pc = 0x117d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x117d08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x117D08u;
    {
        const bool branch_taken_0x117d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117d08) {
            ctx->pc = 0x117D1Cu;
            return;
        }
    }
    ctx->pc = 0x117D10u;
    // 0x117d10: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x117d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x117d14: 0xc0458ec  jal         func_1163B0
    ctx->pc = 0x117D14u;
    SET_GPR_U32(ctx, 31, 0x117D1Cu);
    ctx->pc = 0x117D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D14u;
    // 0x117d18: 0x2484e598  addiu       $a0, $a0, -0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1163B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1163B0u, 0x117D14u, 0x117D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D1Cu;
}
