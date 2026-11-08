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

// Function: entry_0013c640
// Address: 0x13c640 - 0x13c674
void entry_0013c640_0x13c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c640_0x13c640");
#endif

    switch (ctx->pc) {
        case 0x13c658u: goto label_13c658;
        case 0x13c66cu: goto label_13c66c;
        default: break;
    }

    ctx->pc = 0x13c640u;

    // 0x13c640: 0x92630188  lbu         $v1, 0x188($s3)
    ctx->pc = 0x13c640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 392)));
    // 0x13c644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c648: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13C648u;
    {
        const bool branch_taken_0x13c648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C648u;
        // 0x13c64c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c648) {
            ctx->pc = 0x13C684u;
            return;
        }
    }
    ctx->pc = 0x13C650u;
    // 0x13c650: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13C650u;
    SET_GPR_U32(ctx, 31, 0x13C658u);
    ctx->pc = 0x13C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C650u;
    // 0x13c654: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13C650u, 0x13C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C658u;
label_13c658:
    // 0x13c658: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C658u;
    {
        const bool branch_taken_0x13c658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C658u;
        // 0x13c65c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c658) {
            ctx->pc = 0x13C674u;
            return;
        }
    }
    ctx->pc = 0x13C660u;
    // 0x13c660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c664: 0xc049dd8  jal         func_127760
    ctx->pc = 0x13C664u;
    SET_GPR_U32(ctx, 31, 0x13C66Cu);
    ctx->pc = 0x13C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C664u;
    // 0x13c668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x13C664u, 0x13C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C66Cu;
label_13c66c:
    // 0x13c66c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13c670: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13c670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x13c674u;
}
