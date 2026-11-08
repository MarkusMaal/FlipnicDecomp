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

// Function: entry_0019ef48
// Address: 0x19ef48 - 0x19ef74
void entry_0019ef48_0x19ef48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef48_0x19ef48");
#endif

    switch (ctx->pc) {
        case 0x19ef6cu: goto label_19ef6c;
        default: break;
    }

    ctx->pc = 0x19ef48u;

    // 0x19ef48: 0x8e8206a0  lw          $v0, 0x6A0($s4)
    ctx->pc = 0x19ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1696)));
    // 0x19ef4c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x19EF4Cu;
    {
        const bool branch_taken_0x19ef4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef4c) {
            ctx->pc = 0x19F034u;
            return;
        }
    }
    ctx->pc = 0x19EF54u;
    // 0x19ef54: 0x8e82069c  lw          $v0, 0x69C($s4)
    ctx->pc = 0x19ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x19ef58: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EF58u;
    {
        const bool branch_taken_0x19ef58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19ef58) {
            ctx->pc = 0x19EF74u;
            return;
        }
    }
    ctx->pc = 0x19EF60u;
    // 0x19ef60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef64: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19EF64u;
    SET_GPR_U32(ctx, 31, 0x19EF6Cu);
    ctx->pc = 0x19EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF64u;
    // 0x19ef68: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19EF64u, 0x19EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF6Cu;
label_19ef6c:
    // 0x19ef6c: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x19EF6Cu;
    {
        const bool branch_taken_0x19ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef6c) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19EF74u;
}
