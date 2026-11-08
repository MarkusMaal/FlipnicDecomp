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

// Function: entry_00196d30
// Address: 0x196d30 - 0x196d4c
void entry_00196d30_0x196d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196d30_0x196d30");
#endif

    ctx->pc = 0x196d30u;

    // 0x196d30: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196D30u;
    {
        const bool branch_taken_0x196d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x196d30) {
            ctx->pc = 0x196D4Cu;
            return;
        }
    }
    ctx->pc = 0x196D38u;
    // 0x196d38: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x196d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196d3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196d40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x196d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196d44: 0xc063e08  jal         func_18F820
    ctx->pc = 0x196D44u;
    SET_GPR_U32(ctx, 31, 0x196D4Cu);
    ctx->pc = 0x196D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D44u;
    // 0x196d48: 0xa040002d  sb          $zero, 0x2D($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196D44u, 0x196D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D4Cu;
}
