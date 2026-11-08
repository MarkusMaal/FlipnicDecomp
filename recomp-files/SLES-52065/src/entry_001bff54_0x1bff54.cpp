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

// Function: entry_001bff54
// Address: 0x1bff54 - 0x1bffb4
void entry_001bff54_0x1bff54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bff54_0x1bff54");
#endif

    switch (ctx->pc) {
        case 0x1bff70u: goto label_1bff70;
        case 0x1bff7cu: goto label_1bff7c;
        default: break;
    }

    ctx->pc = 0x1bff54u;

label_1bff54:
    // 0x1bff54: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bff54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1bff58:
    // 0x1bff58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1bff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1bff5c:
    // 0x1bff5c: 0x24421430  addiu       $v0, $v0, 0x1430
    ctx->pc = 0x1bff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5168));
label_1bff60:
    // 0x1bff60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bff64:
    // 0x1bff64: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1bff64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bff68:
    // 0x1bff68: 0xc072e58  jal         func_1CB960
label_1bff6c:
    if (ctx->pc == 0x1BFF6Cu) {
        ctx->pc = 0x1BFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF68u;
        // 0x1bff6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF70u;
        goto label_1bff70;
    }
    ctx->pc = 0x1BFF68u;
    SET_GPR_U32(ctx, 31, 0x1BFF70u);
    ctx->pc = 0x1BFF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF68u;
    // 0x1bff6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB960u, 0x1BFF68u, 0x1BFF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF70u;
label_1bff70:
    // 0x1bff70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bff70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bff74:
    // 0x1bff74: 0xc072f2c  jal         func_1CBCB0
label_1bff78:
    if (ctx->pc == 0x1BFF78u) {
        ctx->pc = 0x1BFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF74u;
        // 0x1bff78: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF7Cu;
        goto label_1bff7c;
    }
    ctx->pc = 0x1BFF74u;
    SET_GPR_U32(ctx, 31, 0x1BFF7Cu);
    ctx->pc = 0x1BFF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF74u;
    // 0x1bff78: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCB0u, 0x1BFF74u, 0x1BFF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF7Cu;
label_1bff7c:
    // 0x1bff7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bff7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bff80:
    // 0x1bff80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bff84:
    // 0x1bff84: 0x12620026  beq         $s3, $v0, . + 4 + (0x26 << 2)
label_1bff88:
    if (ctx->pc == 0x1BFF88u) {
        ctx->pc = 0x1BFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF84u;
        // 0x1bff88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF8Cu;
        goto label_1bff8c;
    }
    ctx->pc = 0x1BFF84u;
    {
        const bool branch_taken_0x1bff84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF84u;
        // 0x1bff88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff84) {
            ctx->pc = 0x1C0020u;
            return;
        }
    }
    ctx->pc = 0x1BFF8Cu;
label_1bff8c:
    // 0x1bff8c: 0x2e410006  sltiu       $at, $s2, 0x6
    ctx->pc = 0x1bff8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1bff90:
    // 0x1bff90: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1bff94:
    if (ctx->pc == 0x1BFF94u) {
        ctx->pc = 0x1BFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF90u;
        // 0x1bff94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF98u;
        goto label_1bff98;
    }
    ctx->pc = 0x1BFF90u;
    {
        const bool branch_taken_0x1bff90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF90u;
        // 0x1bff94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff90) {
            ctx->pc = 0x1C0034u;
            return;
        }
    }
    ctx->pc = 0x1BFF98u;
label_1bff98:
    // 0x1bff98: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1bff9c:
    // 0x1bff9c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1bffa0:
    // 0x1bffa0: 0x24631590  addiu       $v1, $v1, 0x1590
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5520));
label_1bffa4:
    // 0x1bffa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bffa8:
    // 0x1bffa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bffac:
    // 0x1bffac: 0x400008  jr          $v0
label_1bffb0:
    if (ctx->pc == 0x1BFFB0u) {
        ctx->pc = 0x1BFFB4u;
        goto label_fallthrough_0x1bffac;
    }
    ctx->pc = 0x1BFFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFFACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1bffac:
    ctx->pc = 0x1BFFB4u;
}
