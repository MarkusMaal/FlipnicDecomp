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

// Function: entry_00126b68
// Address: 0x126b68 - 0x126b94
void entry_00126b68_0x126b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126b68_0x126b68");
#endif

    ctx->pc = 0x126b68u;

label_126b68:
    // 0x126b68: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_126b6c:
    // 0x126b6c: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x126b6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_126b70:
    // 0x126b70: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_126b74:
    if (ctx->pc == 0x126B74u) {
        ctx->pc = 0x126B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B70u;
        // 0x126b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126B78u;
        goto label_126b78;
    }
    ctx->pc = 0x126B70u;
    {
        const bool branch_taken_0x126b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B70u;
        // 0x126b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b70) {
            ctx->pc = 0x126C10u;
            return;
        }
    }
    ctx->pc = 0x126B78u;
label_126b78:
    // 0x126b78: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_126b7c:
    // 0x126b7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x126b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_126b80:
    // 0x126b80: 0x2463eb20  addiu       $v1, $v1, -0x14E0
    ctx->pc = 0x126b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961952));
label_126b84:
    // 0x126b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_126b88:
    // 0x126b88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_126b8c:
    // 0x126b8c: 0x400008  jr          $v0
label_126b90:
    if (ctx->pc == 0x126B90u) {
        ctx->pc = 0x126B94u;
        goto label_fallthrough_0x126b8c;
    }
    ctx->pc = 0x126B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126B8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x126b8c:
    ctx->pc = 0x126B94u;
}
