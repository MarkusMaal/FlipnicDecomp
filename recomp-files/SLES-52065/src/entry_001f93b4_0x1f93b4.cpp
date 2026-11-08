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

// Function: entry_001f93b4
// Address: 0x1f93b4 - 0x1f93fc
void entry_001f93b4_0x1f93b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f93b4_0x1f93b4");
#endif

    switch (ctx->pc) {
        case 0x1f93e4u: goto label_1f93e4;
        default: break;
    }

    ctx->pc = 0x1f93b4u;

    // 0x1f93b4: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f93b8: 0xacf01680  sw          $s0, 0x1680($a3)
    ctx->pc = 0x1f93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 5760), GPR_U32(ctx, 16));
    // 0x1f93bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f93bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93c0: 0x24e71680  addiu       $a3, $a3, 0x1680
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5760));
    // 0x1f93c4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f93c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f93c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f93c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f93cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f93ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f93d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f93d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f93d4: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f93d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f93d8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f93dc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F93DCu;
    SET_GPR_U32(ctx, 31, 0x1F93E4u);
    ctx->pc = 0x1F93E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93DCu;
    // 0x1f93e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F93DCu, 0x1F93E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93E4u;
label_1f93e4:
    // 0x1f93e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f93e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93e8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F93E8u;
    {
        const bool branch_taken_0x1f93e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93E8u;
        // 0x1f93ec: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93e8) {
            ctx->pc = 0x1F93FCu;
            return;
        }
    }
    ctx->pc = 0x1F93F0u;
    // 0x1f93f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f93f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F93F4u;
    {
        const bool branch_taken_0x1f93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F4u;
        // 0x1f93f8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f4) {
            ctx->pc = 0x1F9404u;
            return;
        }
    }
    ctx->pc = 0x1F93FCu;
}
