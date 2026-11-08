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

// Function: caseD_a
// Address: 0x1c38cc - 0x1c3910
void caseD_a_0x1c38cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1c38cc");
#endif

    switch (ctx->pc) {
        case 0x1c38d8u: goto label_1c38d8;
        case 0x1c38e4u: goto label_1c38e4;
        default: break;
    }

    ctx->pc = 0x1c38ccu;

    // 0x1c38cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38d0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C38D0u;
    SET_GPR_U32(ctx, 31, 0x1C38D8u);
    ctx->pc = 0x1C38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38D0u;
    // 0x1c38d4: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C38D0u, 0x1C38D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38D8u;
label_1c38d8:
    // 0x1c38d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38dc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C38DCu;
    SET_GPR_U32(ctx, 31, 0x1C38E4u);
    ctx->pc = 0x1C38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38DCu;
    // 0x1c38e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C38DCu, 0x1C38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38E4u;
label_1c38e4:
    // 0x1c38e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38e8: 0x8c22f5f0  lw          $v0, -0xA10($at)
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5F0u));
    // 0x1c38ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c38f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38f4: 0xac22f5f0  sw          $v0, -0xA10($at)
    ctx->pc = 0x1c38f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5F0u, _value); } while (0);
    // 0x1c38f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c38f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c38fc: 0x8c22f5f0  lw          $v0, -0xA10($at)
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F5F0u));
    // 0x1c3900: 0x144002c1  bnez        $v0, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x1C3900u;
    {
        const bool branch_taken_0x1c3900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3900u;
        // 0x1c3904: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3900) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3908u;
    // 0x1c3908: 0x100002bf  b           . + 4 + (0x2BF << 2)
    ctx->pc = 0x1C3908u;
    {
        const bool branch_taken_0x1c3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3908u;
        // 0x1c390c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3908) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3910u;
}
