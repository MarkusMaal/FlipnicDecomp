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

// Function: entry_001c260c
// Address: 0x1c260c - 0x1c2648
void entry_001c260c_0x1c260c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c260c_0x1c260c");
#endif

    switch (ctx->pc) {
        case 0x1c2614u: goto label_1c2614;
        default: break;
    }

    ctx->pc = 0x1c260cu;

label_1c260c:
    // 0x1c260c: 0xc0747dc  jal         func_1D1F70
label_1c2610:
    if (ctx->pc == 0x1C2610u) {
        ctx->pc = 0x1C2614u;
        goto label_1c2614;
    }
    ctx->pc = 0x1C260Cu;
    SET_GPR_U32(ctx, 31, 0x1C2614u);
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C260Cu, 0x1C2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2614u;
label_1c2614:
    // 0x1c2614: 0x14400194  bnez        $v0, . + 4 + (0x194 << 2)
label_1c2618:
    if (ctx->pc == 0x1C2618u) {
        ctx->pc = 0x1C2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2614u;
        // 0x1c2618: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C261Cu;
        goto label_1c261c;
    }
    ctx->pc = 0x1C2614u;
    {
        const bool branch_taken_0x1c2614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2614u;
        // 0x1c2618: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2614) {
            ctx->pc = 0x1C2C68u;
            return;
        }
    }
    ctx->pc = 0x1C261Cu;
label_1c261c:
    // 0x1c261c: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
label_1c2620:
    // 0x1c2620: 0x2c410027  sltiu       $at, $v0, 0x27
    ctx->pc = 0x1c2620u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_1c2624:
    // 0x1c2624: 0x10200193  beqz        $at, . + 4 + (0x193 << 2)
label_1c2628:
    if (ctx->pc == 0x1C2628u) {
        ctx->pc = 0x1C2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2624u;
        // 0x1c2628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C262Cu;
        goto label_1c262c;
    }
    ctx->pc = 0x1C2624u;
    {
        const bool branch_taken_0x1c2624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2624u;
        // 0x1c2628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2624) {
            ctx->pc = 0x1C2C74u;
            return;
        }
    }
    ctx->pc = 0x1C262Cu;
label_1c262c:
    // 0x1c262c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c262cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1c2630:
    // 0x1c2630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c2634:
    // 0x1c2634: 0x24631ab0  addiu       $v1, $v1, 0x1AB0
    ctx->pc = 0x1c2634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6832));
label_1c2638:
    // 0x1c2638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c263c:
    // 0x1c263c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2640:
    // 0x1c2640: 0x400008  jr          $v0
label_1c2644:
    if (ctx->pc == 0x1C2644u) {
        ctx->pc = 0x1C2648u;
        goto label_fallthrough_0x1c2640;
    }
    ctx->pc = 0x1C2640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1c2640:
    ctx->pc = 0x1C2648u;
}
