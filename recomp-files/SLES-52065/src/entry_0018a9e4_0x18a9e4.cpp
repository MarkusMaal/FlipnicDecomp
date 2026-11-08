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

// Function: entry_0018a9e4
// Address: 0x18a9e4 - 0x18aa0c
void entry_0018a9e4_0x18a9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a9e4_0x18a9e4");
#endif

    switch (ctx->pc) {
        case 0x18a9ecu: goto label_18a9ec;
        case 0x18aa04u: goto label_18aa04;
        default: break;
    }

    ctx->pc = 0x18a9e4u;

    // 0x18a9e4: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x18A9E4u;
    SET_GPR_U32(ctx, 31, 0x18A9ECu);
    ctx->pc = 0x18A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9E4u;
    // 0x18a9e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x18A9E4u, 0x18A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9ECu;
label_18a9ec:
    // 0x18a9ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18a9ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9f0: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A9F0u;
    {
        const bool branch_taken_0x18a9f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9F0u;
        // 0x18a9f4: 0x148880  sll         $s1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9f0) {
            ctx->pc = 0x18AA0Cu;
            return;
        }
    }
    ctx->pc = 0x18A9F8u;
    // 0x18a9f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9fc: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18A9FCu;
    SET_GPR_U32(ctx, 31, 0x18AA04u);
    ctx->pc = 0x18AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9FCu;
    // 0x18aa00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18A9FCu, 0x18AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA04u;
label_18aa04:
    // 0x18aa04: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x18AA04u;
    {
        const bool branch_taken_0x18aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA04u;
        // 0x18aa08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa04) {
            ctx->pc = 0x18AB4Cu;
            return;
        }
    }
    ctx->pc = 0x18AA0Cu;
}
