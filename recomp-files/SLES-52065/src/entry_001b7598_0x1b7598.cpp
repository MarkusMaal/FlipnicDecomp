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

// Function: entry_001b7598
// Address: 0x1b7598 - 0x1b75d0
void entry_001b7598_0x1b7598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7598_0x1b7598");
#endif

    switch (ctx->pc) {
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75ccu: goto label_1b75cc;
        default: break;
    }

    ctx->pc = 0x1b7598u;

    // 0x1b7598: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b7598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b759c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75a0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b75a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b75a4: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1B75A4u;
    SET_GPR_U32(ctx, 31, 0x1B75ACu);
    ctx->pc = 0x1B75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75A4u;
    // 0x1b75a8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1B75A4u, 0x1B75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75ACu;
label_1b75ac:
    // 0x1b75ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B75ACu;
    {
        const bool branch_taken_0x1b75ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75ACu;
        // 0x1b75b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75ac) {
            ctx->pc = 0x1B75D0u;
            return;
        }
    }
    ctx->pc = 0x1B75B4u;
    // 0x1b75b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b75b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b75bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b75c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b75c4: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1B75C4u;
    SET_GPR_U32(ctx, 31, 0x1B75CCu);
    ctx->pc = 0x1B75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75C4u;
    // 0x1b75c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1B75C4u, 0x1B75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75CCu;
label_1b75cc:
    // 0x1b75cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b75ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b75d0u;
}
