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

// Function: entry_00187a30
// Address: 0x187a30 - 0x187a54
void entry_00187a30_0x187a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187a30_0x187a30");
#endif

    switch (ctx->pc) {
        case 0x187a48u: goto label_187a48;
        default: break;
    }

    ctx->pc = 0x187a30u;

    // 0x187a30: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x187a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x187a34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x187a38: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x187a38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x187a3c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x187a40: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x187A40u;
    SET_GPR_U32(ctx, 31, 0x187A48u);
    ctx->pc = 0x187A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A40u;
    // 0x187a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x187A40u, 0x187A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A48u;
label_187a48:
    // 0x187a48: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x187A48u;
    {
        const bool branch_taken_0x187a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A48u;
        // 0x187a4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a48) {
            ctx->pc = 0x187A54u;
            return;
        }
    }
    ctx->pc = 0x187A50u;
    // 0x187a50: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x187a50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x187a54u;
}
