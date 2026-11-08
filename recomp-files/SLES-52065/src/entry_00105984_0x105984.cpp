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

// Function: entry_00105984
// Address: 0x105984 - 0x10599c
void entry_00105984_0x105984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105984_0x105984");
#endif

    ctx->pc = 0x105984u;

    // 0x105984: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10598c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10598Cu;
    {
        const bool branch_taken_0x10598c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10598Cu;
        // 0x105990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10598c) {
            ctx->pc = 0x10599Cu;
            return;
        }
    }
    ctx->pc = 0x105994u;
    // 0x105994: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105994u;
    SET_GPR_U32(ctx, 31, 0x10599Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105994u, 0x10599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10599Cu;
}
