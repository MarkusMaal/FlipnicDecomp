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

// Function: entry_001cfc84
// Address: 0x1cfc84 - 0x1cfca4
void entry_001cfc84_0x1cfc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfc84_0x1cfc84");
#endif

    switch (ctx->pc) {
        case 0x1cfc90u: goto label_1cfc90;
        case 0x1cfc9cu: goto label_1cfc9c;
        default: break;
    }

    ctx->pc = 0x1cfc84u;

    // 0x1cfc84: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc88: 0xc06d8ac  jal         func_1B62B0
    ctx->pc = 0x1CFC88u;
    SET_GPR_U32(ctx, 31, 0x1CFC90u);
    ctx->pc = 0x1CFC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC88u;
    // 0x1cfc8c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B62B0u, 0x1CFC88u, 0x1CFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC90u;
label_1cfc90:
    // 0x1cfc90: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfc94: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFC94u;
    SET_GPR_U32(ctx, 31, 0x1CFC9Cu);
    ctx->pc = 0x1CFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFC94u;
    // 0x1cfc98: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFC94u, 0x1CFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFC9Cu;
label_1cfc9c:
    // 0x1cfc9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1CFC9Cu;
    {
        const bool branch_taken_0x1cfc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfc9c) {
            ctx->pc = 0x1CFD64u;
            return;
        }
    }
    ctx->pc = 0x1CFCA4u;
}
