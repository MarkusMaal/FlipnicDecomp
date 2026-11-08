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

// Function: caseD_3
// Address: 0x1d253c - 0x1d25a8
void caseD_3_0x1d253c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1d253c");
#endif

    switch (ctx->pc) {
        case 0x1d254cu: goto label_1d254c;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d256cu: goto label_1d256c;
        case 0x1d2580u: goto label_1d2580;
        case 0x1d2590u: goto label_1d2590;
        default: break;
    }

    ctx->pc = 0x1d253cu;

    // 0x1d253c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d253cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d2540: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2544: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2544u;
    SET_GPR_U32(ctx, 31, 0x1D254Cu);
    ctx->pc = 0x1D2548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2544u;
    // 0x1d2548: 0x24a5feb0  addiu       $a1, $a1, -0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2544u, 0x1D254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D254Cu;
label_1d254c:
    // 0x1d254c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d254cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d2550: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d2550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2554: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2554u;
    SET_GPR_U32(ctx, 31, 0x1D255Cu);
    ctx->pc = 0x1D2558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2554u;
    // 0x1d2558: 0x24a53518  addiu       $a1, $a1, 0x3518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2554u, 0x1D255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D255Cu;
label_1d255c:
    // 0x1d255c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2560: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d2564: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2564u;
    SET_GPR_U32(ctx, 31, 0x1D256Cu);
    ctx->pc = 0x1D2568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2564u;
    // 0x1d2568: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2564u, 0x1D256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D256Cu;
label_1d256c:
    // 0x1d256c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d256cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2574: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d2574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2578: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2578u;
    SET_GPR_U32(ctx, 31, 0x1D2580u);
    ctx->pc = 0x1D257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2578u;
    // 0x1d257c: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2578u, 0x1D2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2580u;
label_1d2580:
    // 0x1d2580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2588: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2588u;
    SET_GPR_U32(ctx, 31, 0x1D2590u);
    ctx->pc = 0x1D258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2588u;
    // 0x1d258c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2588u, 0x1D2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2590u;
label_1d2590:
    // 0x1d2590: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2594: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d2598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d259c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d259cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25a0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1D25A0u;
    {
        const bool branch_taken_0x1d25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25A0u;
        // 0x1d25a4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25a0) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D25A8u;
}
