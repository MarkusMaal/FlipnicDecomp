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

// Function: entry_001c5c34
// Address: 0x1c5c34 - 0x1c5c6c
void entry_001c5c34_0x1c5c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5c34_0x1c5c34");
#endif

    switch (ctx->pc) {
        case 0x1c5c3cu: goto label_1c5c3c;
        case 0x1c5c44u: goto label_1c5c44;
        default: break;
    }

    ctx->pc = 0x1c5c34u;

label_1c5c34:
    // 0x1c5c34: 0xc06d410  jal         func_1B5040
label_1c5c38:
    if (ctx->pc == 0x1C5C38u) {
        ctx->pc = 0x1C5C3Cu;
        goto label_1c5c3c;
    }
    ctx->pc = 0x1C5C34u;
    SET_GPR_U32(ctx, 31, 0x1C5C3Cu);
    ctx->pc = 0x1B5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5040u, 0x1C5C34u, 0x1C5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C3Cu;
label_1c5c3c:
    // 0x1c5c3c: 0xc0485a4  jal         func_121690
label_1c5c40:
    if (ctx->pc == 0x1C5C40u) {
        ctx->pc = 0x1C5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C3Cu;
        // 0x1c5c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C44u;
        goto label_1c5c44;
    }
    ctx->pc = 0x1C5C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C44u);
    ctx->pc = 0x1C5C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C3Cu;
    // 0x1c5c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121690u, 0x1C5C3Cu, 0x1C5C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C44u;
label_1c5c44:
    // 0x1c5c44: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1c5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1c5c48:
    // 0x1c5c48: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1c5c48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1c5c4c:
    // 0x1c5c4c: 0x1020009c  beqz        $at, . + 4 + (0x9C << 2)
label_1c5c50:
    if (ctx->pc == 0x1C5C50u) {
        ctx->pc = 0x1C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C4Cu;
        // 0x1c5c50: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C54u;
        goto label_1c5c54;
    }
    ctx->pc = 0x1C5C4Cu;
    {
        const bool branch_taken_0x1c5c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C4Cu;
        // 0x1c5c50: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c4c) {
            ctx->pc = 0x1C5EC0u;
            return;
        }
    }
    ctx->pc = 0x1C5C54u;
label_1c5c54:
    // 0x1c5c54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c5c58:
    // 0x1c5c58: 0x24631fa0  addiu       $v1, $v1, 0x1FA0
    ctx->pc = 0x1c5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8096));
label_1c5c5c:
    // 0x1c5c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c5c60:
    // 0x1c5c60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5c64:
    // 0x1c5c64: 0x400008  jr          $v0
label_1c5c68:
    if (ctx->pc == 0x1C5C68u) {
        ctx->pc = 0x1C5C6Cu;
        goto label_fallthrough_0x1c5c64;
    }
    ctx->pc = 0x1C5C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5C64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1c5c64:
    ctx->pc = 0x1C5C6Cu;
}
