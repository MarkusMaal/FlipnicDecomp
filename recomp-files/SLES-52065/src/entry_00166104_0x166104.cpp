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

// Function: entry_00166104
// Address: 0x166104 - 0x166124
void entry_00166104_0x166104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166104_0x166104");
#endif

    switch (ctx->pc) {
        case 0x166118u: goto label_166118;
        default: break;
    }

    ctx->pc = 0x166104u;

    // 0x166104: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x166104u;
    {
        const bool branch_taken_0x166104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166104) {
            ctx->pc = 0x166124u;
            return;
        }
    }
    ctx->pc = 0x16610Cu;
    // 0x16610c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166110: 0xc042118  jal         func_108460
    ctx->pc = 0x166110u;
    SET_GPR_U32(ctx, 31, 0x166118u);
    ctx->pc = 0x166114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166110u;
    // 0x166114: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x166110u, 0x166118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166118u;
label_166118:
    // 0x166118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16611c: 0xc0597d8  jal         func_165F60
    ctx->pc = 0x16611Cu;
    SET_GPR_U32(ctx, 31, 0x166124u);
    ctx->pc = 0x166120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16611Cu;
    // 0x166120: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F60u, 0x16611Cu, 0x166124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166124u;
}
