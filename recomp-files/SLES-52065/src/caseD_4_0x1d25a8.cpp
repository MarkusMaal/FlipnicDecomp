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
// Address: 0x1d25a8 - 0x1d25f8
void caseD_4_0x1d25a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1d25a8");
#endif

    switch (ctx->pc) {
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d25e0u: goto label_1d25e0;
        default: break;
    }

    ctx->pc = 0x1d25a8u;

    // 0x1d25a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d25ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d25acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25b0: 0x8e300044  lw          $s0, 0x44($s1)
    ctx->pc = 0x1d25b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1d25b4: 0xc047988  jal         func_11E620
    ctx->pc = 0x1D25B4u;
    SET_GPR_U32(ctx, 31, 0x1D25BCu);
    ctx->pc = 0x1D25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25B4u;
    // 0x1d25b8: 0x8c259a70  lw          $a1, -0x6590($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x1D25B4u, 0x1D25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25BCu;
label_1d25bc:
    // 0x1d25bc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25c4: 0x8c25ff00  lw          $a1, -0x100($at)
    ctx->pc = 0x1d25c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FF00u));
    // 0x1d25c8: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D25C8u;
    SET_GPR_U32(ctx, 31, 0x1D25D0u);
    ctx->pc = 0x1D25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25C8u;
    // 0x1d25cc: 0x240635e0  addiu       $a2, $zero, 0x35E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D25C8u, 0x1D25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25D0u;
label_1d25d0:
    // 0x1d25d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d25d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25d8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D25D8u;
    SET_GPR_U32(ctx, 31, 0x1D25E0u);
    ctx->pc = 0x1D25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25D8u;
    // 0x1d25dc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D25D8u, 0x1D25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25E0u;
label_1d25e0:
    // 0x1d25e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25e4: 0x8c23fef0  lw          $v1, -0x110($at)
    ctx->pc = 0x1d25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d25e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d25ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d25f0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1D25F0u;
    {
        const bool branch_taken_0x1d25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25F0u;
        // 0x1d25f4: 0xac23fef0  sw          $v1, -0x110($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25f0) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D25F8u;
}
