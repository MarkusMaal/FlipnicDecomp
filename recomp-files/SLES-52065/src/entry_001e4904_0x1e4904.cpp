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

// Function: entry_001e4904
// Address: 0x1e4904 - 0x1e4938
void entry_001e4904_0x1e4904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4904_0x1e4904");
#endif

    switch (ctx->pc) {
        case 0x1e4910u: goto label_1e4910;
        case 0x1e4920u: goto label_1e4920;
        default: break;
    }

    ctx->pc = 0x1e4904u;

    // 0x1e4904: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4908: 0xc081c20  jal         func_207080
    ctx->pc = 0x1E4908u;
    SET_GPR_U32(ctx, 31, 0x1E4910u);
    ctx->pc = 0x1E490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4908u;
    // 0x1e490c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1E4908u, 0x1E4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4910u;
label_1e4910:
    // 0x1e4910: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e4910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e4914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e4914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4918: 0xc07f74e  jal         func_1FDD38
    ctx->pc = 0x1E4918u;
    SET_GPR_U32(ctx, 31, 0x1E4920u);
    ctx->pc = 0x1E491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4918u;
    // 0x1e491c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E4918u, 0x1E4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4920u;
label_1e4920:
    // 0x1e4920: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4920u;
    {
        const bool branch_taken_0x1e4920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4920u;
        // 0x1e4924: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4920) {
            ctx->pc = 0x1E4938u;
            return;
        }
    }
    ctx->pc = 0x1E4928u;
    // 0x1e4928: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1e4928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e492c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1e492cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x1e4930: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E4930u;
    {
        const bool branch_taken_0x1e4930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4930) {
            ctx->pc = 0x1E4964u;
            return;
        }
    }
    ctx->pc = 0x1E4938u;
}
