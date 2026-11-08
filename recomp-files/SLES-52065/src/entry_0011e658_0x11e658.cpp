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

// Function: entry_0011e658
// Address: 0x11e658 - 0x11e698
void entry_0011e658_0x11e658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e658_0x11e658");
#endif

    switch (ctx->pc) {
        case 0x11e668u: goto label_11e668;
        case 0x11e680u: goto label_11e680;
        default: break;
    }

    ctx->pc = 0x11e658u;

    // 0x11e658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e65c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e660: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E660u;
    SET_GPR_U32(ctx, 31, 0x11E668u);
    ctx->pc = 0x11E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E660u;
    // 0x11e664: 0x24c6e6d0  addiu       $a2, $a2, -0x1930 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E660u, 0x11E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E668u;
label_11e668:
    // 0x11e668: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11e668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11e66c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11e674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e678: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E678u;
    SET_GPR_U32(ctx, 31, 0x11E680u);
    ctx->pc = 0x11E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E678u;
    // 0x11e67c: 0x24c6e728  addiu       $a2, $a2, -0x18D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E678u, 0x11E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E680u;
label_11e680:
    // 0x11e680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e684: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E684u;
    {
        const bool branch_taken_0x11e684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E684u;
        // 0x11e688: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e684) {
            ctx->pc = 0x11E698u;
            return;
        }
    }
    ctx->pc = 0x11E68Cu;
    // 0x11e68c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x11e68cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e690: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x11E690u;
    {
        const bool branch_taken_0x11e690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e690) {
            ctx->pc = 0x11E7B8u;
            return;
        }
    }
    ctx->pc = 0x11E698u;
}
