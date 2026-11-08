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

// Function: entry_001edd68
// Address: 0x1edd68 - 0x1edd9c
void entry_001edd68_0x1edd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edd68_0x1edd68");
#endif

    ctx->pc = 0x1edd68u;

label_1edd68:
    // 0x1edd68: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1edd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1edd6c:
    // 0x1edd6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1edd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1edd70:
    // 0x1edd70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1edd70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1edd74:
    // 0x1edd74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1edd78:
    if (ctx->pc == 0x1EDD78u) {
        ctx->pc = 0x1EDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD74u;
        // 0x1edd78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD7Cu;
        goto label_1edd7c;
    }
    ctx->pc = 0x1EDD74u;
    {
        const bool branch_taken_0x1edd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD74u;
        // 0x1edd78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd74) {
            ctx->pc = 0x1EDD9Cu;
            return;
        }
    }
    ctx->pc = 0x1EDD7Cu;
label_1edd7c:
    // 0x1edd7c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1edd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1edd80:
    // 0x1edd80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1edd84:
    // 0x1edd84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1edd84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edd88:
    // 0x1edd88: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1edd8c:
    if (ctx->pc == 0x1EDD8Cu) {
        ctx->pc = 0x1EDD90u;
        goto label_1edd90;
    }
    ctx->pc = 0x1EDD88u;
    {
        const bool branch_taken_0x1edd88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd88) {
            ctx->pc = 0x1EDD9Cu;
            return;
        }
    }
    ctx->pc = 0x1EDD90u;
label_1edd90:
    // 0x1edd90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1edd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1edd94:
    // 0x1edd94: 0xc0f809  jalr        $a2
label_1edd98:
    if (ctx->pc == 0x1EDD98u) {
        ctx->pc = 0x1EDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD94u;
        // 0x1edd98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD9Cu;
        goto label_fallthrough_0x1edd94;
    }
    ctx->pc = 0x1EDD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EDD9Cu);
        ctx->pc = 0x1EDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD94u;
        // 0x1edd98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDD94u, 0x1EDD9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1edd94:
    ctx->pc = 0x1EDD9Cu;
}
