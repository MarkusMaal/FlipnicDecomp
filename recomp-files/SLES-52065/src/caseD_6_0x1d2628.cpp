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

// Function: caseD_6
// Address: 0x1d2628 - 0x1d2684
void caseD_6_0x1d2628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1d2628");
#endif

    switch (ctx->pc) {
        case 0x1d2638u: goto label_1d2638;
        case 0x1d2648u: goto label_1d2648;
        case 0x1d265cu: goto label_1d265c;
        case 0x1d266cu: goto label_1d266c;
        default: break;
    }

    ctx->pc = 0x1d2628u;

    // 0x1d2628: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1d2628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1d262c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2630: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2630u;
    SET_GPR_U32(ctx, 31, 0x1D2638u);
    ctx->pc = 0x1D2634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2630u;
    // 0x1d2634: 0x24a5feb0  addiu       $a1, $a1, -0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2630u, 0x1D2638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2638u;
label_1d2638:
    // 0x1d2638: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d263c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2640: 0xc080664  jal         func_201990
    ctx->pc = 0x1D2640u;
    SET_GPR_U32(ctx, 31, 0x1D2648u);
    ctx->pc = 0x1D2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2640u;
    // 0x1d2644: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D2640u, 0x1D2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2648u;
label_1d2648:
    // 0x1d2648: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d264c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d264cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2650: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2654: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2654u;
    SET_GPR_U32(ctx, 31, 0x1D265Cu);
    ctx->pc = 0x1D2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2654u;
    // 0x1d2658: 0x24070203  addiu       $a3, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2654u, 0x1D265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D265Cu;
label_1d265c:
    // 0x1d265c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2664: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2664u;
    SET_GPR_U32(ctx, 31, 0x1D266Cu);
    ctx->pc = 0x1D2668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2664u;
    // 0x1d2668: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2664u, 0x1D266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D266Cu;
label_1d266c:
    // 0x1d266c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2670: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d2670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d2674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2678: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d267c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D267Cu;
    {
        const bool branch_taken_0x1d267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D267Cu;
        // 0x1d2680: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d267c) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D2684u;
}
