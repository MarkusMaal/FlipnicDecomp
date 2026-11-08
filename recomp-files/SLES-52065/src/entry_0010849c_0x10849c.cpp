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

// Function: entry_0010849c
// Address: 0x10849c - 0x1084cc
void entry_0010849c_0x10849c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010849c_0x10849c");
#endif

    switch (ctx->pc) {
        case 0x1084b8u: goto label_1084b8;
        default: break;
    }

    ctx->pc = 0x10849cu;

    // 0x10849c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1084a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1084a4: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1084a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1084a8: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1084A8u;
    {
        const bool branch_taken_0x1084a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1084ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084A8u;
        // 0x1084ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084a8) {
            ctx->pc = 0x1084CCu;
            return;
        }
    }
    ctx->pc = 0x1084B0u;
    // 0x1084b0: 0xc0618e4  jal         func_186390
    ctx->pc = 0x1084B0u;
    SET_GPR_U32(ctx, 31, 0x1084B8u);
    ctx->pc = 0x1084B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084B0u;
    // 0x1084b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186390u, 0x1084B0u, 0x1084B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084B8u;
label_1084b8:
    // 0x1084b8: 0x93828398  lbu         $v0, -0x7C68($gp)
    ctx->pc = 0x1084b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935448)));
    // 0x1084bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1084BCu;
    {
        const bool branch_taken_0x1084bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084BCu;
        // 0x1084c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084bc) {
            ctx->pc = 0x1084CCu;
            return;
        }
    }
    ctx->pc = 0x1084C4u;
    // 0x1084c4: 0xc0618e4  jal         func_186390
    ctx->pc = 0x1084C4u;
    SET_GPR_U32(ctx, 31, 0x1084CCu);
    ctx->pc = 0x1084C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084C4u;
    // 0x1084c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186390u, 0x1084C4u, 0x1084CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084CCu;
}
