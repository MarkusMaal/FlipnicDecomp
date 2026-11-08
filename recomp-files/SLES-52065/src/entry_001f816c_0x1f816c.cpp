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

// Function: entry_001f816c
// Address: 0x1f816c - 0x1f81a0
void entry_001f816c_0x1f816c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f816c_0x1f816c");
#endif

    switch (ctx->pc) {
        case 0x1f817cu: goto label_1f817c;
        case 0x1f8184u: goto label_1f8184;
        case 0x1f818cu: goto label_1f818c;
        default: break;
    }

    ctx->pc = 0x1f816cu;

    // 0x1f816c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8174: 0xc07e2d2  jal         func_1F8B48
    ctx->pc = 0x1F8174u;
    SET_GPR_U32(ctx, 31, 0x1F817Cu);
    ctx->pc = 0x1F8178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8174u;
    // 0x1f8178: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B48u, 0x1F8174u, 0x1F817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F817Cu;
label_1f817c:
    // 0x1f817c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F817Cu;
    SET_GPR_U32(ctx, 31, 0x1F8184u);
    ctx->pc = 0x1F8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F817Cu;
    // 0x1f8180: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F817Cu, 0x1F8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8184u;
label_1f8184:
    // 0x1f8184: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F8184u;
    SET_GPR_U32(ctx, 31, 0x1F818Cu);
    ctx->pc = 0x1F8188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8184u;
    // 0x1f8188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F8184u, 0x1F818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F818Cu;
label_1f818c:
    // 0x1f818c: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f818cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f8190: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f8194: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F8194u;
    {
        const bool branch_taken_0x1f8194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8194u;
        // 0x1f8198: 0x3c140039  lui         $s4, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8194) {
            ctx->pc = 0x1F81C4u;
            return;
        }
    }
    ctx->pc = 0x1F819Cu;
    // 0x1f819c: 0x0  nop
    ctx->pc = 0x1f819cu;
    // NOP
    ctx->pc = 0x1f81a0u;
}
