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

// Function: entry_0015bdf4
// Address: 0x15bdf4 - 0x15be0c
void entry_0015bdf4_0x15bdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bdf4_0x15bdf4");
#endif

    ctx->pc = 0x15bdf4u;

    // 0x15bdf4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x15bdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15bdf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bdf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bdfc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BDFCu;
    {
        const bool branch_taken_0x15bdfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDFCu;
        // 0x15be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdfc) {
            ctx->pc = 0x15BE0Cu;
            return;
        }
    }
    ctx->pc = 0x15BE04u;
    // 0x15be04: 0xc0401a4  jal         func_100690
    ctx->pc = 0x15BE04u;
    SET_GPR_U32(ctx, 31, 0x15BE0Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x15BE04u, 0x15BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE0Cu;
}
