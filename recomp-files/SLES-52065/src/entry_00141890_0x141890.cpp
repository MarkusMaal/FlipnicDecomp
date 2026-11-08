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

// Function: entry_00141890
// Address: 0x141890 - 0x1418ac
void entry_00141890_0x141890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141890_0x141890");
#endif

    ctx->pc = 0x141890u;

    // 0x141890: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x141894: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141894u;
    {
        const bool branch_taken_0x141894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141894u;
        // 0x141898: 0x13143c  dsll32      $v0, $s3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141894) {
            ctx->pc = 0x1418B0u;
            return;
        }
    }
    ctx->pc = 0x14189Cu;
    // 0x14189c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14189Cu;
    {
        const bool branch_taken_0x14189c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14189Cu;
        // 0x1418a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14189c) {
            ctx->pc = 0x1418ACu;
            return;
        }
    }
    ctx->pc = 0x1418A4u;
    // 0x1418a4: 0xc048414  jal         func_121050
    ctx->pc = 0x1418A4u;
    SET_GPR_U32(ctx, 31, 0x1418ACu);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x1418A4u, 0x1418ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418ACu;
}
