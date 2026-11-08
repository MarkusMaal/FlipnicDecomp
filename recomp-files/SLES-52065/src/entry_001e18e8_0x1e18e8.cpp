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

// Function: entry_001e18e8
// Address: 0x1e18e8 - 0x1e1930
void entry_001e18e8_0x1e18e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e18e8_0x1e18e8");
#endif

    switch (ctx->pc) {
        case 0x1e1918u: goto label_1e1918;
        default: break;
    }

    ctx->pc = 0x1e18e8u;

    // 0x1e18e8: 0x8f838724  lw          $v1, -0x78DC($gp)
    ctx->pc = 0x1e18e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936356)));
    // 0x1e18ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e18f0: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1E18F0u;
    {
        const bool branch_taken_0x1e18f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18F0u;
        // 0x1e18f4: 0xaf828724  sw          $v0, -0x78DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18f0) {
            ctx->pc = 0x1E1A70u;
            return;
        }
    }
    ctx->pc = 0x1E18F8u;
    // 0x1e18f8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e18fc: 0x2484b4a0  addiu       $a0, $a0, -0x4B60
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948000));
    // 0x1e1900: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1900u;
    {
        const bool branch_taken_0x1e1900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1900u;
        // 0x1e1904: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1900) {
            ctx->pc = 0x1E1930u;
            return;
        }
    }
    ctx->pc = 0x1E1908u;
    // 0x1e1908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e190c: 0x24c6b7d0  addiu       $a2, $a2, -0x4830
    ctx->pc = 0x1e190cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948816));
    // 0x1e1910: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x1E1910u;
    SET_GPR_U32(ctx, 31, 0x1E1918u);
    ctx->pc = 0x1E1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1910u;
    // 0x1e1914: 0xafdd0044  sw          $sp, 0x44($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x1E1910u, 0x1E1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1918u;
label_1e1918:
    // 0x1e1918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1918u;
    {
        const bool branch_taken_0x1e1918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1918) {
            ctx->pc = 0x1E1930u;
            return;
        }
    }
    ctx->pc = 0x1E1920u;
    // 0x1e1920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1928: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E1928u;
    SET_GPR_U32(ctx, 31, 0x1E1930u);
    ctx->pc = 0x1E192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1928u;
    // 0x1e192c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1928u, 0x1E1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1930u;
}
