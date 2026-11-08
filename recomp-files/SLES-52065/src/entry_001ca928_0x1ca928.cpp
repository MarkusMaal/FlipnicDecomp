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

// Function: entry_001ca928
// Address: 0x1ca928 - 0x1ca950
void entry_001ca928_0x1ca928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca928_0x1ca928");
#endif

    switch (ctx->pc) {
        case 0x1ca930u: goto label_1ca930;
        case 0x1ca940u: goto label_1ca940;
        default: break;
    }

    ctx->pc = 0x1ca928u;

    // 0x1ca928: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CA928u;
    SET_GPR_U32(ctx, 31, 0x1CA930u);
    ctx->pc = 0x1CA92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA928u;
    // 0x1ca92c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CA928u, 0x1CA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA930u;
label_1ca930:
    // 0x1ca930: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA930u;
    {
        const bool branch_taken_0x1ca930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA930u;
        // 0x1ca934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca930) {
            ctx->pc = 0x1CA954u;
            return;
        }
    }
    ctx->pc = 0x1CA938u;
    // 0x1ca938: 0xc060774  jal         func_181DD0
    ctx->pc = 0x1CA938u;
    SET_GPR_U32(ctx, 31, 0x1CA940u);
    ctx->pc = 0x181DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DD0u, 0x1CA938u, 0x1CA940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA940u;
label_1ca940:
    // 0x1ca940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA940u;
    {
        const bool branch_taken_0x1ca940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA940u;
        // 0x1ca944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca940) {
            ctx->pc = 0x1CA950u;
            return;
        }
    }
    ctx->pc = 0x1CA948u;
    // 0x1ca948: 0xc072adc  jal         func_1CAB70
    ctx->pc = 0x1CA948u;
    SET_GPR_U32(ctx, 31, 0x1CA950u);
    ctx->pc = 0x1CA94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA948u;
    // 0x1ca94c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAB70u, 0x1CA948u, 0x1CA950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA950u;
}
