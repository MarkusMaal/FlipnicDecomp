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

// Function: caseD_0
// Address: 0x1d24b8 - 0x1d24f8
void caseD_0_0x1d24b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1d24b8");
#endif

    switch (ctx->pc) {
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24ecu: goto label_1d24ec;
        default: break;
    }

    ctx->pc = 0x1d24b8u;

    // 0x1d24b8: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D24B8u;
    SET_GPR_U32(ctx, 31, 0x1D24C0u);
    ctx->pc = 0x1D24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24B8u;
    // 0x1d24bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D24B8u, 0x1D24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24C0u;
label_1d24c0:
    // 0x1d24c0: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1D24C0u;
    {
        const bool branch_taken_0x1d24c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d24c0) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D24C8u;
    // 0x1d24c8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d24cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d24ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24d0: 0x8c22fef0  lw          $v0, -0x110($at)
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36FEF0u));
    // 0x1d24d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d24d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1d24d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d24dc: 0x8c259a70  lw          $a1, -0x6590($at)
    ctx->pc = 0x1d24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x219A70u));
    // 0x1d24e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d24e4: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1D24E4u;
    SET_GPR_U32(ctx, 31, 0x1D24ECu);
    ctx->pc = 0x1D24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24E4u;
    // 0x1d24e8: 0xac22fef0  sw          $v0, -0x110($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294967024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1D24E4u, 0x1D24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24ECu;
label_1d24ec:
    // 0x1d24ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d24f0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1D24F0u;
    {
        const bool branch_taken_0x1d24f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24F0u;
        // 0x1d24f4: 0xac22ff00  sw          $v0, -0x100($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24f0) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D24F8u;
}
