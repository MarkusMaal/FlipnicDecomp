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

// Function: entry_00186338
// Address: 0x186338 - 0x186360
void entry_00186338_0x186338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186338_0x186338");
#endif

    switch (ctx->pc) {
        case 0x18634cu: goto label_18634c;
        default: break;
    }

    ctx->pc = 0x186338u;

    // 0x186338: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x186338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x18633c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18633cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186344: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186344u;
    SET_GPR_U32(ctx, 31, 0x18634Cu);
    ctx->pc = 0x186348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186344u;
    // 0x186348: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186344u, 0x18634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18634Cu;
label_18634c:
    // 0x18634c: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x18634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x186350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x186350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186358: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x186358u;
    SET_GPR_U32(ctx, 31, 0x186360u);
    ctx->pc = 0x18635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186358u;
    // 0x18635c: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C720u, 0x186358u, 0x186360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186360u;
}
