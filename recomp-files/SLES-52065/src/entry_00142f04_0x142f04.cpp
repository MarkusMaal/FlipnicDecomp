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

// Function: entry_00142f04
// Address: 0x142f04 - 0x142f28
void entry_00142f04_0x142f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142f04_0x142f04");
#endif

    ctx->pc = 0x142f04u;

    // 0x142f04: 0x0  nop
    ctx->pc = 0x142f04u;
    // NOP
    // 0x142f08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x142f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142f0c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x142f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x142f10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142F10u;
    {
        const bool branch_taken_0x142f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f10) {
            ctx->pc = 0x142F28u;
            return;
        }
    }
    ctx->pc = 0x142F18u;
    // 0x142f18: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x142f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x142f1c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x142f20: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x142F20u;
    SET_GPR_U32(ctx, 31, 0x142F28u);
    ctx->pc = 0x142F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F20u;
    // 0x142f24: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x142F20u, 0x142F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F28u;
}
