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

// Function: entry_00142904
// Address: 0x142904 - 0x142928
void entry_00142904_0x142904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142904_0x142904");
#endif

    switch (ctx->pc) {
        case 0x142910u: goto label_142910;
        default: break;
    }

    ctx->pc = 0x142904u;

    // 0x142904: 0x0  nop
    ctx->pc = 0x142904u;
    // NOP
    // 0x142908: 0xc050950  jal         func_142540
    ctx->pc = 0x142908u;
    SET_GPR_U32(ctx, 31, 0x142910u);
    ctx->pc = 0x14290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142908u;
    // 0x14290c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142540u, 0x142908u, 0x142910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142910u;
label_142910:
    // 0x142910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142914: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x142914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x142918: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x142918u;
    {
        const bool branch_taken_0x142918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142918) {
            ctx->pc = 0x142894u;
            return;
        }
    }
    ctx->pc = 0x142920u;
    // 0x142920: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x142920u;
    {
        const bool branch_taken_0x142920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142920) {
            ctx->pc = 0x1429BCu;
            return;
        }
    }
    ctx->pc = 0x142928u;
}
