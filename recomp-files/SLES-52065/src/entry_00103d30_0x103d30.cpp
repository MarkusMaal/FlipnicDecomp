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

// Function: entry_00103d30
// Address: 0x103d30 - 0x103d54
void entry_00103d30_0x103d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103d30_0x103d30");
#endif

    switch (ctx->pc) {
        case 0x103d38u: goto label_103d38;
        case 0x103d48u: goto label_103d48;
        default: break;
    }

    ctx->pc = 0x103d30u;

    // 0x103d30: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103D30u;
    SET_GPR_U32(ctx, 31, 0x103D38u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103D30u, 0x103D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D38u;
label_103d38:
    // 0x103d38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x103D38u;
    {
        const bool branch_taken_0x103d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D38u;
        // 0x103d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d38) {
            ctx->pc = 0x103D54u;
            return;
        }
    }
    ctx->pc = 0x103D40u;
    // 0x103d40: 0xc056360  jal         func_158D80
    ctx->pc = 0x103D40u;
    SET_GPR_U32(ctx, 31, 0x103D48u);
    ctx->pc = 0x103D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D40u;
    // 0x103d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x103D40u, 0x103D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D48u;
label_103d48:
    // 0x103d48: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x103d4c: 0x244295f0  addiu       $v0, $v0, -0x6A10
    ctx->pc = 0x103d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940144));
    // 0x103d50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103d54u;
}
