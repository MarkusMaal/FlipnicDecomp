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
// Address: 0x1d225c - 0x1d22a0
void caseD_7_0x1d225c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1d225c");
#endif

    switch (ctx->pc) {
        case 0x1d2268u: goto label_1d2268;
        case 0x1d2278u: goto label_1d2278;
        case 0x1d2288u: goto label_1d2288;
        default: break;
    }

    ctx->pc = 0x1d225cu;

    // 0x1d225c: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d225cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d2260: 0xc0749e8  jal         func_1D27A0
    ctx->pc = 0x1D2260u;
    SET_GPR_U32(ctx, 31, 0x1D2268u);
    ctx->pc = 0x1D2264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2260u;
    // 0x1d2264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27A0u, 0x1D2260u, 0x1D2268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2268u;
label_1d2268:
    // 0x1d2268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d226c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d226cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2270: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D2270u;
    SET_GPR_U32(ctx, 31, 0x1D2278u);
    ctx->pc = 0x1D2274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2270u;
    // 0x1d2274: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D2270u, 0x1D2278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2278u;
label_1d2278:
    // 0x1d2278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d227c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2280: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2280u;
    SET_GPR_U32(ctx, 31, 0x1D2288u);
    ctx->pc = 0x1D2284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2280u;
    // 0x1d2284: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2280u, 0x1D2288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2288u;
label_1d2288:
    // 0x1d2288: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d228c: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d228cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d2290: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2294: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2298: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D2298u;
    {
        const bool branch_taken_0x1d2298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2298u;
        // 0x1d229c: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2298) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D22A0u;
}
