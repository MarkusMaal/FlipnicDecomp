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

// Function: entry_002030f8
// Address: 0x2030f8 - 0x203110
void entry_002030f8_0x2030f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002030f8_0x2030f8");
#endif

    ctx->pc = 0x2030f8u;

    // 0x2030f8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2030f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2030fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2030FCu;
    {
        const bool branch_taken_0x2030fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030FCu;
        // 0x203100: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030fc) {
            ctx->pc = 0x203110u;
            return;
        }
    }
    ctx->pc = 0x203104u;
    // 0x203104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203108: 0xc082014  jal         func_208050
    ctx->pc = 0x203108u;
    SET_GPR_U32(ctx, 31, 0x203110u);
    ctx->pc = 0x20310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203108u;
    // 0x20310c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x203108u, 0x203110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203110u;
}
