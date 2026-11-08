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

// Function: entry_00141874
// Address: 0x141874 - 0x141890
void entry_00141874_0x141874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141874_0x141874");
#endif

    ctx->pc = 0x141874u;

    // 0x141874: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x141874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x141878: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141878u;
    {
        const bool branch_taken_0x141878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141878) {
            ctx->pc = 0x141890u;
            return;
        }
    }
    ctx->pc = 0x141880u;
    // 0x141880: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141880u;
    {
        const bool branch_taken_0x141880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141880u;
        // 0x141884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141880) {
            ctx->pc = 0x141890u;
            return;
        }
    }
    ctx->pc = 0x141888u;
    // 0x141888: 0xc048414  jal         func_121050
    ctx->pc = 0x141888u;
    SET_GPR_U32(ctx, 31, 0x141890u);
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x141888u, 0x141890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141890u;
}
