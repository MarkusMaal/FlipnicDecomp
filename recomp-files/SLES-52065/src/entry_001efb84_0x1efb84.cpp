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

// Function: entry_001efb84
// Address: 0x1efb84 - 0x1efba4
void entry_001efb84_0x1efb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efb84_0x1efb84");
#endif

    switch (ctx->pc) {
        case 0x1efb8cu: goto label_1efb8c;
        case 0x1efb94u: goto label_1efb94;
        default: break;
    }

    ctx->pc = 0x1efb84u;

    // 0x1efb84: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EFB84u;
    SET_GPR_U32(ctx, 31, 0x1EFB8Cu);
    ctx->pc = 0x1EFB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB84u;
    // 0x1efb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EFB84u, 0x1EFB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB8Cu;
label_1efb8c:
    // 0x1efb8c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFB8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB94u);
    ctx->pc = 0x1EFB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB8Cu;
    // 0x1efb90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFB8Cu, 0x1EFB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB94u;
label_1efb94:
    // 0x1efb94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1efb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efb98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1efb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efb9c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1efb9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1efba0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1efba0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x1efba4u;
}
