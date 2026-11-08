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

// Function: entry_0017d03c
// Address: 0x17d03c - 0x17d05c
void entry_0017d03c_0x17d03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d03c_0x17d03c");
#endif

    switch (ctx->pc) {
        case 0x17d054u: goto label_17d054;
        default: break;
    }

    ctx->pc = 0x17d03cu;

    // 0x17d03c: 0x0  nop
    ctx->pc = 0x17d03cu;
    // NOP
    // 0x17d040: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D040u;
    {
        const bool branch_taken_0x17d040 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D040u;
        // 0x17d044: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d040) {
            ctx->pc = 0x17D05Cu;
            return;
        }
    }
    ctx->pc = 0x17D048u;
    // 0x17d048: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x17d048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x17d04c: 0xc04619c  jal         func_118670
    ctx->pc = 0x17D04Cu;
    SET_GPR_U32(ctx, 31, 0x17D054u);
    ctx->pc = 0x17D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D04Cu;
    // 0x17d050: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17D04Cu, 0x17D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D054u;
label_17d054:
    // 0x17d054: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x17D054u;
    {
        const bool branch_taken_0x17d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D054u;
        // 0x17d058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d054) {
            ctx->pc = 0x17D210u;
            return;
        }
    }
    ctx->pc = 0x17D05Cu;
}
