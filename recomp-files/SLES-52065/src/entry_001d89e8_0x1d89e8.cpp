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

// Function: entry_001d89e8
// Address: 0x1d89e8 - 0x1d8a08
void entry_001d89e8_0x1d89e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d89e8_0x1d89e8");
#endif

    switch (ctx->pc) {
        case 0x1d89f8u: goto label_1d89f8;
        default: break;
    }

    ctx->pc = 0x1d89e8u;

label_1d89e8:
    // 0x1d89e8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d89e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d89ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d89ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d89f0: 0xc07755a  jal         func_1DD568
    ctx->pc = 0x1D89F0u;
    SET_GPR_U32(ctx, 31, 0x1D89F8u);
    ctx->pc = 0x1D89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89F0u;
    // 0x1d89f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD568u, 0x1D89F0u, 0x1D89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89F8u;
label_1d89f8:
    // 0x1d89f8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D89F8u;
    {
        const bool branch_taken_0x1d89f8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d89f8) {
            ctx->pc = 0x1D89FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D89F8u;
            // 0x1d89fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D89E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89e8;
        }
    }
    ctx->pc = 0x1D8A00u;
    // 0x1d8a00: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8A00u;
    {
        const bool branch_taken_0x1d8a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A00u;
        // 0x1d8a04: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a00) {
            ctx->pc = 0x1D8A88u;
            return;
        }
    }
    ctx->pc = 0x1D8A08u;
}
