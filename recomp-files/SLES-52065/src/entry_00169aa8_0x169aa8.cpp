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

// Function: entry_00169aa8
// Address: 0x169aa8 - 0x169ad0
void entry_00169aa8_0x169aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169aa8_0x169aa8");
#endif

    ctx->pc = 0x169aa8u;

label_169aa8:
    // 0x169aa8: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x169aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_169aac:
    // 0x169aac: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x169aacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_169ab0:
    // 0x169ab0: 0x102000e5  beqz        $at, . + 4 + (0xE5 << 2)
label_169ab4:
    if (ctx->pc == 0x169AB4u) {
        ctx->pc = 0x169AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AB0u;
        // 0x169ab4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169AB8u;
        goto label_169ab8;
    }
    ctx->pc = 0x169AB0u;
    {
        const bool branch_taken_0x169ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AB0u;
        // 0x169ab4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ab0) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169AB8u;
label_169ab8:
    // 0x169ab8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_169abc:
    // 0x169abc: 0x2484f410  addiu       $a0, $a0, -0xBF0
    ctx->pc = 0x169abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964240));
label_169ac0:
    // 0x169ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169ac4:
    // 0x169ac4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_169ac8:
    // 0x169ac8: 0x600008  jr          $v1
label_169acc:
    if (ctx->pc == 0x169ACCu) {
        ctx->pc = 0x169AD0u;
        goto label_fallthrough_0x169ac8;
    }
    ctx->pc = 0x169AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169AC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x169ac8:
    ctx->pc = 0x169AD0u;
}
