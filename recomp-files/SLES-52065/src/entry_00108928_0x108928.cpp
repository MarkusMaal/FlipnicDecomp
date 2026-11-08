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

// Function: entry_00108928
// Address: 0x108928 - 0x108964
void entry_00108928_0x108928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108928_0x108928");
#endif

    switch (ctx->pc) {
        case 0x108930u: goto label_108930;
        case 0x10893cu: goto label_10893c;
        case 0x108950u: goto label_108950;
        case 0x10895cu: goto label_10895c;
        default: break;
    }

    ctx->pc = 0x108928u;

    // 0x108928: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108928u;
    SET_GPR_U32(ctx, 31, 0x108930u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108928u, 0x108930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108930u;
label_108930:
    // 0x108930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108934: 0xc04a018  jal         func_128060
    ctx->pc = 0x108934u;
    SET_GPR_U32(ctx, 31, 0x10893Cu);
    ctx->pc = 0x108938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108934u;
    // 0x108938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x108934u, 0x10893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10893Cu;
label_10893c:
    // 0x10893c: 0x8f908604  lw          $s0, -0x79FC($gp)
    ctx->pc = 0x10893cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936068)));
    // 0x108940: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x108940u;
    {
        const bool branch_taken_0x108940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x108940) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108948u;
    // 0x108948: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108948u;
    SET_GPR_U32(ctx, 31, 0x108950u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108948u, 0x108950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108950u;
label_108950:
    // 0x108950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x108950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108954: 0xc04a094  jal         func_128250
    ctx->pc = 0x108954u;
    SET_GPR_U32(ctx, 31, 0x10895Cu);
    ctx->pc = 0x108958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108954u;
    // 0x108958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128250u, 0x108954u, 0x10895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10895Cu;
label_10895c:
    // 0x10895c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10895Cu;
    {
        const bool branch_taken_0x10895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10895c) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108964u;
}
