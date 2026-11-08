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

// Function: entry_0013466c
// Address: 0x13466c - 0x134698
void entry_0013466c_0x13466c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013466c_0x13466c");
#endif

    switch (ctx->pc) {
        case 0x134680u: goto label_134680;
        case 0x134694u: goto label_134694;
        default: break;
    }

    ctx->pc = 0x13466cu;

    // 0x13466c: 0x8fa203ec  lw          $v0, 0x3EC($sp)
    ctx->pc = 0x13466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
    // 0x134670: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x134670u;
    {
        const bool branch_taken_0x134670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134670u;
        // 0x134674: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134670) {
            ctx->pc = 0x1346BCu;
            return;
        }
    }
    ctx->pc = 0x134678u;
    // 0x134678: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x134678u;
    SET_GPR_U32(ctx, 31, 0x134680u);
    ctx->pc = 0x13467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134678u;
    // 0x13467c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x134678u, 0x134680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134680u;
label_134680:
    // 0x134680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134684: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134684u;
    {
        const bool branch_taken_0x134684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134684u;
        // 0x134688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134684) {
            ctx->pc = 0x134698u;
            return;
        }
    }
    ctx->pc = 0x13468Cu;
    // 0x13468c: 0xc05063c  jal         func_1418F0
    ctx->pc = 0x13468Cu;
    SET_GPR_U32(ctx, 31, 0x134694u);
    ctx->pc = 0x1418F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418F0u, 0x13468Cu, 0x134694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134694u;
label_134694:
    // 0x134694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134698u;
}
