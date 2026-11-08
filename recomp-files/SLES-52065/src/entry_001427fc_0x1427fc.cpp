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

// Function: entry_001427fc
// Address: 0x1427fc - 0x142824
void entry_001427fc_0x1427fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001427fc_0x1427fc");
#endif

    switch (ctx->pc) {
        case 0x142810u: goto label_142810;
        case 0x14281cu: goto label_14281c;
        default: break;
    }

    ctx->pc = 0x1427fcu;

    // 0x1427fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1427fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142800: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142800u;
    {
        const bool branch_taken_0x142800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142800) {
            ctx->pc = 0x142824u;
            return;
        }
    }
    ctx->pc = 0x142808u;
    // 0x142808: 0xc050d2c  jal         func_1434B0
    ctx->pc = 0x142808u;
    SET_GPR_U32(ctx, 31, 0x142810u);
    ctx->pc = 0x1434B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B0u, 0x142808u, 0x142810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142810u;
label_142810:
    // 0x142810: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x142810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142814: 0xc050d1c  jal         func_143470
    ctx->pc = 0x142814u;
    SET_GPR_U32(ctx, 31, 0x14281Cu);
    ctx->pc = 0x142818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142814u;
    // 0x142818: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143470u, 0x142814u, 0x14281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14281Cu;
label_14281c:
    // 0x14281c: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x14281Cu;
    {
        const bool branch_taken_0x14281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14281Cu;
        // 0x142820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14281c) {
            ctx->pc = 0x142F4Cu;
            return;
        }
    }
    ctx->pc = 0x142824u;
}
