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

// Function: entry_0017cf1c
// Address: 0x17cf1c - 0x17cf48
void entry_0017cf1c_0x17cf1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cf1c_0x17cf1c");
#endif

    switch (ctx->pc) {
        case 0x17cf24u: goto label_17cf24;
        case 0x17cf30u: goto label_17cf30;
        default: break;
    }

    ctx->pc = 0x17cf1cu;

    // 0x17cf1c: 0xc04619c  jal         func_118670
    ctx->pc = 0x17CF1Cu;
    SET_GPR_U32(ctx, 31, 0x17CF24u);
    ctx->pc = 0x17CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF1Cu;
    // 0x17cf20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17CF1Cu, 0x17CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF24u;
label_17cf24:
    // 0x17cf24: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x17cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17cf28: 0xc04619c  jal         func_118670
    ctx->pc = 0x17CF28u;
    SET_GPR_U32(ctx, 31, 0x17CF30u);
    ctx->pc = 0x17CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF28u;
    // 0x17cf2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17CF28u, 0x17CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF30u;
label_17cf30:
    // 0x17cf30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17cf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17cf34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17cf34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17cf38: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CF38u;
    {
        const bool branch_taken_0x17cf38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF38u;
        // 0x17cf3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf38) {
            ctx->pc = 0x17CF4Cu;
            return;
        }
    }
    ctx->pc = 0x17CF40u;
    // 0x17cf40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17CF40u;
    SET_GPR_U32(ctx, 31, 0x17CF48u);
    ctx->pc = 0x17CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF40u;
    // 0x17cf44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17CF40u, 0x17CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF48u;
}
