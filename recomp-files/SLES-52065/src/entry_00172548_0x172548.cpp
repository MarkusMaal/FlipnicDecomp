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

// Function: entry_00172548
// Address: 0x172548 - 0x17255c
void entry_00172548_0x172548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172548_0x172548");
#endif

    ctx->pc = 0x172548u;

    // 0x172548: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x172548u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17254c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17254Cu;
    {
        const bool branch_taken_0x17254c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x172550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17254Cu;
        // 0x172550: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17254c) {
            ctx->pc = 0x172560u;
            return;
        }
    }
    ctx->pc = 0x172554u;
    // 0x172554: 0xc0401a4  jal         func_100690
    ctx->pc = 0x172554u;
    SET_GPR_U32(ctx, 31, 0x17255Cu);
    ctx->pc = 0x172558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172554u;
    // 0x172558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x172554u, 0x17255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17255Cu;
}
