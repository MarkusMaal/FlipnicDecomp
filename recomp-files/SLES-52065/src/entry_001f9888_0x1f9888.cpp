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

// Function: entry_001f9888
// Address: 0x1f9888 - 0x1f98ec
void entry_001f9888_0x1f9888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9888_0x1f9888");
#endif

    switch (ctx->pc) {
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98d4u: goto label_1f98d4;
        default: break;
    }

    ctx->pc = 0x1f9888u;

    // 0x1f9888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f988c: 0x245016b0  addiu       $s0, $v0, 0x16B0
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f9890: 0xac5316b0  sw          $s3, 0x16B0($v0)
    ctx->pc = 0x1f9890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 19));
    // 0x1f9894: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1f9894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1f9898: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1f989c: 0xc080804  jal         func_202010
    ctx->pc = 0x1F989Cu;
    SET_GPR_U32(ctx, 31, 0x1F98A4u);
    ctx->pc = 0x1F98A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F989Cu;
    // 0x1f98a0: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F989Cu, 0x1F98A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98A4u;
label_1f98a4:
    // 0x1f98a4: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1f98a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f98a8: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f98a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f98ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f98acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f98b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98b4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f98b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f98b8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1f98b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f98bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f98c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f98c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f98c4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f98c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f98c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f98cc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F98CCu;
    SET_GPR_U32(ctx, 31, 0x1F98D4u);
    ctx->pc = 0x1F98D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98CCu;
    // 0x1f98d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F98CCu, 0x1F98D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F98D4u;
label_1f98d4:
    // 0x1f98d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f98d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98d8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F98D8u;
    {
        const bool branch_taken_0x1f98d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98D8u;
        // 0x1f98dc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98d8) {
            ctx->pc = 0x1F98ECu;
            return;
        }
    }
    ctx->pc = 0x1F98E0u;
    // 0x1f98e0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1f98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f98e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F98E4u;
    {
        const bool branch_taken_0x1f98e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98E4u;
        // 0x1f98e8: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98e4) {
            ctx->pc = 0x1F98F4u;
            return;
        }
    }
    ctx->pc = 0x1F98ECu;
}
