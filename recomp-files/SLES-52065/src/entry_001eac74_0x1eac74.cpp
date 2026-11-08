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

// Function: entry_001eac74
// Address: 0x1eac74 - 0x1eac94
void entry_001eac74_0x1eac74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac74_0x1eac74");
#endif

    switch (ctx->pc) {
        case 0x1eac8cu: goto label_1eac8c;
        default: break;
    }

    ctx->pc = 0x1eac74u;

    // 0x1eac74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eac78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1eac78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1eac7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1eac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eac80: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1eac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1eac84: 0xc07ab84  jal         func_1EAE10
    ctx->pc = 0x1EAC84u;
    SET_GPR_U32(ctx, 31, 0x1EAC8Cu);
    ctx->pc = 0x1EAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC84u;
    // 0x1eac88: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAE10u, 0x1EAC84u, 0x1EAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC8Cu;
label_1eac8c:
    // 0x1eac8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eac90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1eac94u;
}
