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

// Function: entry_00110c98
// Address: 0x110c98 - 0x110cc4
void entry_00110c98_0x110c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c98_0x110c98");
#endif

    ctx->pc = 0x110c98u;

label_110c98:
    // 0x110c98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x110c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_110c9c:
    // 0x110c9c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x110c9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_110ca0:
    // 0x110ca0: 0x102000da  beqz        $at, . + 4 + (0xDA << 2)
label_110ca4:
    if (ctx->pc == 0x110CA4u) {
        ctx->pc = 0x110CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CA0u;
        // 0x110ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110CA8u;
        goto label_110ca8;
    }
    ctx->pc = 0x110CA0u;
    {
        const bool branch_taken_0x110ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CA0u;
        // 0x110ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ca0) {
            ctx->pc = 0x11100Cu;
            return;
        }
    }
    ctx->pc = 0x110CA8u;
label_110ca8:
    // 0x110ca8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x110ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_110cac:
    // 0x110cac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x110cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_110cb0:
    // 0x110cb0: 0x2463e400  addiu       $v1, $v1, -0x1C00
    ctx->pc = 0x110cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
label_110cb4:
    // 0x110cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_110cb8:
    // 0x110cb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x110cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_110cbc:
    // 0x110cbc: 0x400008  jr          $v0
label_110cc0:
    if (ctx->pc == 0x110CC0u) {
        ctx->pc = 0x110CC4u;
        goto label_fallthrough_0x110cbc;
    }
    ctx->pc = 0x110CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110CBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x110cbc:
    ctx->pc = 0x110CC4u;
}
