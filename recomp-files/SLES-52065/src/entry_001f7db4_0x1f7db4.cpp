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

// Function: entry_001f7db4
// Address: 0x1f7db4 - 0x1f7df8
void entry_001f7db4_0x1f7db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7db4_0x1f7db4");
#endif

    switch (ctx->pc) {
        case 0x1f7dbcu: goto label_1f7dbc;
        case 0x1f7dc8u: goto label_1f7dc8;
        case 0x1f7de0u: goto label_1f7de0;
        default: break;
    }

    ctx->pc = 0x1f7db4u;

    // 0x1f7db4: 0xc07dc12  jal         func_1F7048
    ctx->pc = 0x1F7DB4u;
    SET_GPR_U32(ctx, 31, 0x1F7DBCu);
    ctx->pc = 0x1F7DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DB4u;
    // 0x1f7db8: 0x3c150022  lui         $s5, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7048u, 0x1F7DB4u, 0x1F7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DBCu;
label_1f7dbc:
    // 0x1f7dbc: 0x8ea4bb30  lw          $a0, -0x44D0($s5)
    ctx->pc = 0x1f7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7dc0: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F7DC0u;
    SET_GPR_U32(ctx, 31, 0x1F7DC8u);
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F7DC0u, 0x1F7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DC8u;
label_1f7dc8:
    // 0x1f7dc8: 0x8ea3bb30  lw          $v1, -0x44D0($s5)
    ctx->pc = 0x1f7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949680)));
    // 0x1f7dcc: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F7DCCu;
    {
        const bool branch_taken_0x1f7dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DCCu;
        // 0x1f7dd0: 0x3a440008  xori        $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dcc) {
            ctx->pc = 0x1F7EF4u;
            return;
        }
    }
    ctx->pc = 0x1F7DD4u;
    // 0x1f7dd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7dd8: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F7DD8u;
    SET_GPR_U32(ctx, 31, 0x1F7DE0u);
    ctx->pc = 0x1F7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DD8u;
    // 0x1f7ddc: 0x3c110022  lui         $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F7DD8u, 0x1F7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DE0u;
label_1f7de0:
    // 0x1f7de0: 0x8e22bb48  lw          $v0, -0x44B8($s1)
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949704)));
    // 0x1f7de4: 0x441002b  bgez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F7DE4u;
    {
        const bool branch_taken_0x1f7de4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DE4u;
        // 0x1f7de8: 0x3c140039  lui         $s4, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7de4) {
            ctx->pc = 0x1F7E94u;
            return;
        }
    }
    ctx->pc = 0x1F7DECu;
    // 0x1f7dec: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f7decu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f7df0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F7DF0u;
    {
        const bool branch_taken_0x1f7df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DF0u;
        // 0x1f7df4: 0x3c170022  lui         $s7, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7df0) {
            ctx->pc = 0x1F7E1Cu;
            return;
        }
    }
    ctx->pc = 0x1F7DF8u;
}
