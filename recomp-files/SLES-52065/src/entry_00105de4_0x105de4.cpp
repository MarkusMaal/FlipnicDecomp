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

// Function: entry_00105de4
// Address: 0x105de4 - 0x105dfc
void entry_00105de4_0x105de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105de4_0x105de4");
#endif

    ctx->pc = 0x105de4u;

    // 0x105de4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105de8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105de8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105dec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DECu;
    {
        const bool branch_taken_0x105dec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DECu;
        // 0x105df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dec) {
            ctx->pc = 0x105DFCu;
            return;
        }
    }
    ctx->pc = 0x105DF4u;
    // 0x105df4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105DF4u;
    SET_GPR_U32(ctx, 31, 0x105DFCu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105DF4u, 0x105DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DFCu;
}
