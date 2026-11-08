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

// Function: caseD_7
// Address: 0x1d2684 - 0x1d26c8
void caseD_7_0x1d2684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1d2684");
#endif

    switch (ctx->pc) {
        case 0x1d2690u: goto label_1d2690;
        case 0x1d26a0u: goto label_1d26a0;
        case 0x1d26b0u: goto label_1d26b0;
        default: break;
    }

    ctx->pc = 0x1d2684u;

    // 0x1d2684: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d2684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d2688: 0xc0749e8  jal         func_1D27A0
    ctx->pc = 0x1D2688u;
    SET_GPR_U32(ctx, 31, 0x1D2690u);
    ctx->pc = 0x1D268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2688u;
    // 0x1d268c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27A0u, 0x1D2688u, 0x1D2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2690u;
label_1d2690:
    // 0x1d2690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2698: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D2698u;
    SET_GPR_U32(ctx, 31, 0x1D26A0u);
    ctx->pc = 0x1D269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2698u;
    // 0x1d269c: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D2698u, 0x1D26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26A0u;
label_1d26a0:
    // 0x1d26a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d26a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d26a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26a8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D26A8u;
    SET_GPR_U32(ctx, 31, 0x1D26B0u);
    ctx->pc = 0x1D26ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26A8u;
    // 0x1d26ac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D26A8u, 0x1D26B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26B0u;
label_1d26b0:
    // 0x1d26b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26b4: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d26b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d26bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d26bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d26c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D26C0u;
    {
        const bool branch_taken_0x1d26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26C0u;
        // 0x1d26c4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26c0) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D26C8u;
}
