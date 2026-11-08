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

// Function: caseD_4
// Address: 0x1d2180 - 0x1d21d0
void caseD_4_0x1d2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1d2180");
#endif

    switch (ctx->pc) {
        case 0x1d2194u: goto label_1d2194;
        case 0x1d21a8u: goto label_1d21a8;
        case 0x1d21b8u: goto label_1d21b8;
        default: break;
    }

    ctx->pc = 0x1d2180u;

    // 0x1d2180: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d2180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d2184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2188: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d2188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d218c: 0xc047988  jal         func_11E620
    ctx->pc = 0x1D218Cu;
    SET_GPR_U32(ctx, 31, 0x1D2194u);
    ctx->pc = 0x1D2190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D218Cu;
    // 0x1d2190: 0x8c259a70  lw          $a1, -0x6590($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1D218Cu, 0x1D2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2194u;
label_1d2194:
    // 0x1d2194: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d219c: 0x8c25fea8  lw          $a1, -0x158($at)
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FEA8u));
    // 0x1d21a0: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D21A0u;
    SET_GPR_U32(ctx, 31, 0x1D21A8u);
    ctx->pc = 0x1D21A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21A0u;
    // 0x1d21a4: 0x240635e0  addiu       $a2, $zero, 0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D21A0u, 0x1D21A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21A8u;
label_1d21a8:
    // 0x1d21a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d21acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d21b0: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D21B0u;
    SET_GPR_U32(ctx, 31, 0x1D21B8u);
    ctx->pc = 0x1D21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21B0u;
    // 0x1d21b4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D21B0u, 0x1D21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21B8u;
label_1d21b8:
    // 0x1d21b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d21b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d21bc: 0x8c23fea0  lw          $v1, -0x160($at)
    ctx->pc = 0x1d21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEA0u));
    // 0x1d21c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d21c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d21c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d21c8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1D21C8u;
    {
        const bool branch_taken_0x1d21c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21C8u;
        // 0x1d21cc: 0xac23fea0  sw          $v1, -0x160($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21c8) {
            ctx->pc = 0x1D2304u;
            return;
        }
    }
    ctx->pc = 0x1D21D0u;
}
