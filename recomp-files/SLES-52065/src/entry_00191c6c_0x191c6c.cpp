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

// Function: entry_00191c6c
// Address: 0x191c6c - 0x191ca8
void entry_00191c6c_0x191c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c6c_0x191c6c");
#endif

    ctx->pc = 0x191c6cu;

label_191c6c:
    // 0x191c6c: 0x0  nop
    ctx->pc = 0x191c6cu;
    // NOP
label_191c70:
    // 0x191c70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191c74:
    // 0x191c74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191c78:
    // 0x191c78: 0x8c460490  lw          $a2, 0x490($v0)
    ctx->pc = 0x191c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
label_191c7c:
    // 0x191c7c: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x191c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_191c80:
    // 0x191c80: 0x20630005  addi        $v1, $v1, 0x5
    ctx->pc = 0x191c80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)5, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_191c84:
    // 0x191c84: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x191c84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_191c88:
    // 0x191c88: 0x102001a6  beqz        $at, . + 4 + (0x1A6 << 2)
label_191c8c:
    if (ctx->pc == 0x191C8Cu) {
        ctx->pc = 0x191C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C88u;
        // 0x191c8c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191C90u;
        goto label_191c90;
    }
    ctx->pc = 0x191C88u;
    {
        const bool branch_taken_0x191c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x191C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191C88u;
        // 0x191c8c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191c88) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191C90u;
label_191c90:
    // 0x191c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x191c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_191c94:
    // 0x191c94: 0x2484fe80  addiu       $a0, $a0, -0x180
    ctx->pc = 0x191c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966912));
label_191c98:
    // 0x191c98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x191c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_191c9c:
    // 0x191c9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x191c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_191ca0:
    // 0x191ca0: 0x600008  jr          $v1
label_191ca4:
    if (ctx->pc == 0x191CA4u) {
        ctx->pc = 0x191CA8u;
        goto label_fallthrough_0x191ca0;
    }
    ctx->pc = 0x191CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191CA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x191ca0:
    ctx->pc = 0x191CA8u;
}
