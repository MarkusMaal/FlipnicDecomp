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

// Function: entry_00117314
// Address: 0x117314 - 0x11732c
void entry_00117314_0x117314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117314_0x117314");
#endif

    ctx->pc = 0x117314u;

    // 0x117314: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x117314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x117318: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x117318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11731c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11731Cu;
    {
        const bool branch_taken_0x11731c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x117320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11731Cu;
        // 0x117320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11731c) {
            ctx->pc = 0x11732Cu;
            return;
        }
    }
    ctx->pc = 0x117324u;
    // 0x117324: 0xc0401a4  jal         func_100690
    ctx->pc = 0x117324u;
    SET_GPR_U32(ctx, 31, 0x11732Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x117324u, 0x11732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11732Cu;
}
