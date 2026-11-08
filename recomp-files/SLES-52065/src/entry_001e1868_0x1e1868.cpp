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

// Function: entry_001e1868
// Address: 0x1e1868 - 0x1e18a8
void entry_001e1868_0x1e1868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1868_0x1e1868");
#endif

    switch (ctx->pc) {
        case 0x1e1888u: goto label_1e1888;
        case 0x1e18a0u: goto label_1e18a0;
        default: break;
    }

    ctx->pc = 0x1e1868u;

    // 0x1e1868: 0x83828730  lb          $v0, -0x78D0($gp)
    ctx->pc = 0x1e1868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x1e186c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E186Cu;
    {
        const bool branch_taken_0x1e186c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E186Cu;
        // 0x1e1870: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e186c) {
            ctx->pc = 0x1E18A8u;
            return;
        }
    }
    ctx->pc = 0x1E1874u;
    // 0x1e1874: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e1878: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1e1878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1e187c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1e187cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e1880: 0xc079084  jal         func_1E4210
    ctx->pc = 0x1E1880u;
    SET_GPR_U32(ctx, 31, 0x1E1888u);
    ctx->pc = 0x1E1884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1880u;
    // 0x1e1884: 0x2484b830  addiu       $a0, $a0, -0x47D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4210u, 0x1E1880u, 0x1E1888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1888u;
label_1e1888:
    // 0x1e1888: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e1888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e188c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e188cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e1890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1894: 0x24a51a90  addiu       $a1, $a1, 0x1A90
    ctx->pc = 0x1e1894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6800));
    // 0x1e1898: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1E1898u;
    SET_GPR_U32(ctx, 31, 0x1E18A0u);
    ctx->pc = 0x1E189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1898u;
    // 0x1e189c: 0x24c6b818  addiu       $a2, $a2, -0x47E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1E1898u, 0x1E18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18A0u;
label_1e18a0:
    // 0x1e18a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e18a4: 0xa3828730  sb          $v0, -0x78D0($gp)
    ctx->pc = 0x1e18a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936368), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e18a8u;
}
