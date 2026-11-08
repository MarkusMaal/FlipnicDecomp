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

// Function: entry_001a1044
// Address: 0x1a1044 - 0x1a1078
void entry_001a1044_0x1a1044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1044_0x1a1044");
#endif

    switch (ctx->pc) {
        case 0x1a104cu: goto label_1a104c;
        case 0x1a1068u: goto label_1a1068;
        default: break;
    }

    ctx->pc = 0x1a1044u;

    // 0x1a1044: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x1A1044u;
    SET_GPR_U32(ctx, 31, 0x1A104Cu);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x1A1044u, 0x1A104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A104Cu;
label_1a104c:
    // 0x1a104c: 0xae820670  sw          $v0, 0x670($s4)
    ctx->pc = 0x1a104cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1648), GPR_U32(ctx, 2));
    // 0x1a1050: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1a1054: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1054u;
    {
        const bool branch_taken_0x1a1054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1054) {
            ctx->pc = 0x1A1078u;
            return;
        }
    }
    ctx->pc = 0x1A105Cu;
    // 0x1a105c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1060: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A1060u;
    SET_GPR_U32(ctx, 31, 0x1A1068u);
    ctx->pc = 0x1A1064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1060u;
    // 0x1a1064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1060u, 0x1A1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1068u;
label_1a1068:
    // 0x1a1068: 0x8e840670  lw          $a0, 0x670($s4)
    ctx->pc = 0x1a1068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1a106c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1070: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x1A1070u;
    SET_GPR_U32(ctx, 31, 0x1A1078u);
    ctx->pc = 0x1A1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1070u;
    // 0x1a1074: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x1A1070u, 0x1A1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1078u;
}
