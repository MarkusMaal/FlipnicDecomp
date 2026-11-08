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

// Function: entry_0014e430
// Address: 0x14e430 - 0x14e46c
void entry_0014e430_0x14e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e430_0x14e430");
#endif

    switch (ctx->pc) {
        case 0x14e440u: goto label_14e440;
        case 0x14e458u: goto label_14e458;
        default: break;
    }

    ctx->pc = 0x14e430u;

    // 0x14e430: 0x1292000e  beq         $s4, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x14E430u;
    {
        const bool branch_taken_0x14e430 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x14E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E430u;
        // 0x14e434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e430) {
            ctx->pc = 0x14E46Cu;
            return;
        }
    }
    ctx->pc = 0x14E438u;
    // 0x14e438: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E438u;
    SET_GPR_U32(ctx, 31, 0x14E440u);
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E438u, 0x14E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E440u;
label_14e440:
    // 0x14e440: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e448: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e44c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e450: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E450u;
    SET_GPR_U32(ctx, 31, 0x14E458u);
    ctx->pc = 0x14E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E450u;
    // 0x14e454: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E450u, 0x14E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E458u;
label_14e458:
    // 0x14e458: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e45c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e460: 0x83a700d4  lb          $a3, 0xD4($sp)
    ctx->pc = 0x14e460u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x14e464: 0xc053b14  jal         func_14EC50
    ctx->pc = 0x14E464u;
    SET_GPR_U32(ctx, 31, 0x14E46Cu);
    ctx->pc = 0x14E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E464u;
    // 0x14e468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC50u, 0x14E464u, 0x14E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E46Cu;
}
