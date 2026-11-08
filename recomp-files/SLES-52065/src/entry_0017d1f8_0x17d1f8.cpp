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

// Function: entry_0017d1f8
// Address: 0x17d1f8 - 0x17d210
void entry_0017d1f8_0x17d1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1f8_0x17d1f8");
#endif

    switch (ctx->pc) {
        case 0x17d20cu: goto label_17d20c;
        default: break;
    }

    ctx->pc = 0x17d1f8u;

    // 0x17d1f8: 0x2b1102b  sltu        $v0, $s5, $s1
    ctx->pc = 0x17d1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x17d1fc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17D1FCu;
    {
        const bool branch_taken_0x17d1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1FCu;
        // 0x17d200: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1fc) {
            ctx->pc = 0x17D1DCu;
            return;
        }
    }
    ctx->pc = 0x17D204u;
    // 0x17d204: 0xc04619c  jal         func_118670
    ctx->pc = 0x17D204u;
    SET_GPR_U32(ctx, 31, 0x17D20Cu);
    ctx->pc = 0x17D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D204u;
    // 0x17d208: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17D204u, 0x17D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D20Cu;
label_17d20c:
    // 0x17d20c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17d210u;
}
