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

// Function: entry_00205b70
// Address: 0x205b70 - 0x205b9c
void entry_00205b70_0x205b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205b70_0x205b70");
#endif

    ctx->pc = 0x205b70u;

label_205b70:
    // 0x205b70: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x205b70u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_205b74:
    // 0x205b74: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x205b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_205b78:
    // 0x205b78: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x205b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_205b7c:
    // 0x205b7c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_205b80:
    if (ctx->pc == 0x205B80u) {
        ctx->pc = 0x205B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B7Cu;
        // 0x205b80: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205B84u;
        goto label_205b84;
    }
    ctx->pc = 0x205B7Cu;
    {
        const bool branch_taken_0x205b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B7Cu;
        // 0x205b80: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b7c) {
            ctx->pc = 0x205C2Cu;
            return;
        }
    }
    ctx->pc = 0x205B84u;
label_205b84:
    // 0x205b84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_205b88:
    // 0x205b88: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x205b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_205b8c:
    // 0x205b8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205b90:
    // 0x205b90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_205b94:
    // 0x205b94: 0x800008  jr          $a0
label_205b98:
    if (ctx->pc == 0x205B98u) {
        ctx->pc = 0x205B9Cu;
        goto label_fallthrough_0x205b94;
    }
    ctx->pc = 0x205B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x205b94:
    ctx->pc = 0x205B9Cu;
}
