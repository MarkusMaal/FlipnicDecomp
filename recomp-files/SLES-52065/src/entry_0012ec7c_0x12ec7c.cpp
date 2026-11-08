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

// Function: entry_0012ec7c
// Address: 0x12ec7c - 0x12ec90
void entry_0012ec7c_0x12ec7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec7c_0x12ec7c");
#endif

    ctx->pc = 0x12ec7cu;

    // 0x12ec7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12ec7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ec80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EC80u;
    {
        const bool branch_taken_0x12ec80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC80u;
        // 0x12ec84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec80) {
            ctx->pc = 0x12EC94u;
            return;
        }
    }
    ctx->pc = 0x12EC88u;
    // 0x12ec88: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EC88u;
    SET_GPR_U32(ctx, 31, 0x12EC90u);
    ctx->pc = 0x12EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC88u;
    // 0x12ec8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EC88u, 0x12EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC90u;
}
