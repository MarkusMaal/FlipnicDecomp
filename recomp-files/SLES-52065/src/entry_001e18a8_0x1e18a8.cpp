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

// Function: entry_001e18a8
// Address: 0x1e18a8 - 0x1e18e8
void entry_001e18a8_0x1e18a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e18a8_0x1e18a8");
#endif

    switch (ctx->pc) {
        case 0x1e18c8u: goto label_1e18c8;
        case 0x1e18e0u: goto label_1e18e0;
        default: break;
    }

    ctx->pc = 0x1e18a8u;

    // 0x1e18a8: 0x83828734  lb          $v0, -0x78CC($gp)
    ctx->pc = 0x1e18a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936372)));
    // 0x1e18ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E18ACu;
    {
        const bool branch_taken_0x1e18ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18ACu;
        // 0x1e18b0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18ac) {
            ctx->pc = 0x1E18E8u;
            return;
        }
    }
    ctx->pc = 0x1E18B4u;
    // 0x1e18b4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e18b8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1e18bc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1e18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1e18c0: 0xc079084  jal         func_1E4210
    ctx->pc = 0x1E18C0u;
    SET_GPR_U32(ctx, 31, 0x1E18C8u);
    ctx->pc = 0x1E18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18C0u;
    // 0x1e18c4: 0x2484b890  addiu       $a0, $a0, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4210u, 0x1E18C0u, 0x1E18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18C8u;
label_1e18c8:
    // 0x1e18c8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e18c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e18cc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e18ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e18d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e18d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18d4: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x1e18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    // 0x1e18d8: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1E18D8u;
    SET_GPR_U32(ctx, 31, 0x1E18E0u);
    ctx->pc = 0x1E18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18D8u;
    // 0x1e18dc: 0x24c6b878  addiu       $a2, $a2, -0x4788 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E18D8u, 0x1E18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18E0u;
label_1e18e0:
    // 0x1e18e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e18e4: 0xa3828734  sb          $v0, -0x78CC($gp)
    ctx->pc = 0x1e18e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936372), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e18e8u;
}
