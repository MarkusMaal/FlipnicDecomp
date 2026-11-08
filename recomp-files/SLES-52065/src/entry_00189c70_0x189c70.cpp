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

// Function: entry_00189c70
// Address: 0x189c70 - 0x189c9c
void entry_00189c70_0x189c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c70_0x189c70");
#endif

    switch (ctx->pc) {
        case 0x189c8cu: goto label_189c8c;
        case 0x189c94u: goto label_189c94;
        default: break;
    }

    ctx->pc = 0x189c70u;

    // 0x189c70: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x189c70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x189c74: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x189C74u;
    {
        const bool branch_taken_0x189c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C74u;
        // 0x189c78: 0x2c81007f  sltiu       $at, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c74) {
            ctx->pc = 0x189C9Cu;
            return;
        }
    }
    ctx->pc = 0x189C7Cu;
    // 0x189c7c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x189C7Cu;
    {
        const bool branch_taken_0x189c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x189c7c) {
            ctx->pc = 0x189C9Cu;
            return;
        }
    }
    ctx->pc = 0x189C84u;
    // 0x189c84: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x189C84u;
    SET_GPR_U32(ctx, 31, 0x189C8Cu);
    ctx->pc = 0x1170C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170C0u, 0x189C84u, 0x189C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C8Cu;
label_189c8c:
    // 0x189c8c: 0xc045c38  jal         func_1170E0
    ctx->pc = 0x189C8Cu;
    SET_GPR_U32(ctx, 31, 0x189C94u);
    ctx->pc = 0x189C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C8Cu;
    // 0x189c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170E0u, 0x189C8Cu, 0x189C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C94u;
label_189c94:
    // 0x189c94: 0xc045c58  jal         func_117160
    ctx->pc = 0x189C94u;
    SET_GPR_U32(ctx, 31, 0x189C9Cu);
    ctx->pc = 0x189C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C94u;
    // 0x189c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117160u, 0x189C94u, 0x189C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C9Cu;
}
