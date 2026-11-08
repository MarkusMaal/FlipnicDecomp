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

// Function: caseD_8
// Address: 0x1d26c8 - 0x1d26f8
void caseD_8_0x1d26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1d26c8");
#endif

    switch (ctx->pc) {
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26e0u: goto label_1d26e0;
        default: break;
    }

    ctx->pc = 0x1d26c8u;

    // 0x1d26c8: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D26C8u;
    SET_GPR_U32(ctx, 31, 0x1D26D0u);
    ctx->pc = 0x1D26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26C8u;
    // 0x1d26cc: 0x8e240044  lw          $a0, 0x44($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D26C8u, 0x1D26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26D0u;
label_1d26d0:
    // 0x1d26d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d26d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26d8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D26D8u;
    SET_GPR_U32(ctx, 31, 0x1D26E0u);
    ctx->pc = 0x1D26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26D8u;
    // 0x1d26dc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D26D8u, 0x1D26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26E0u;
label_1d26e0:
    // 0x1d26e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26e4: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d26e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d26e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d26ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D26F0u;
    {
        const bool branch_taken_0x1d26f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26F0u;
        // 0x1d26f4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26f0) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D26F8u;
}
