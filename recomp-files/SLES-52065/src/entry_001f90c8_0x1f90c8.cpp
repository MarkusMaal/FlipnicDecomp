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

// Function: entry_001f90c8
// Address: 0x1f90c8 - 0x1f9148
void entry_001f90c8_0x1f90c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f90c8_0x1f90c8");
#endif

    switch (ctx->pc) {
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f9130u: goto label_1f9130;
        default: break;
    }

    ctx->pc = 0x1f90c8u;

    // 0x1f90c8: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f90c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f90cc: 0x245116b0  addiu       $s1, $v0, 0x16B0
    ctx->pc = 0x1f90ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f90d0: 0x26101bc0  addiu       $s0, $s0, 0x1BC0
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7104));
    // 0x1f90d4: 0xac5316b0  sw          $s3, 0x16B0($v0)
    ctx->pc = 0x1f90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 19));
    // 0x1f90d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f90d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90dc: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1f90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1f90e0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1f90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f90e4: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1f90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x1f90e8: 0xc080804  jal         func_202010
    ctx->pc = 0x1F90E8u;
    SET_GPR_U32(ctx, 31, 0x1F90F0u);
    ctx->pc = 0x1F90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90E8u;
    // 0x1f90ec: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F90E8u, 0x1F90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90F0u;
label_1f90f0:
    // 0x1f90f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f90f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90f4: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1f90f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f90f8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F90F8u;
    SET_GPR_U32(ctx, 31, 0x1F9100u);
    ctx->pc = 0x1F90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90F8u;
    // 0x1f90fc: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F90F8u, 0x1F9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9100u;
label_1f9100:
    // 0x1f9100: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f9100u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f9104: 0x3c0b0020  lui         $t3, 0x20
    ctx->pc = 0x1f9104u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32 << 16));
    // 0x1f9108: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1f9108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1f910c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9110: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f9110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9114: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f9114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f9118: 0x256b8fb8  addiu       $t3, $t3, -0x7048
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294938552));
    // 0x1f911c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9120: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f9120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9124: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f9124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f9128: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F9128u;
    SET_GPR_U32(ctx, 31, 0x1F9130u);
    ctx->pc = 0x1F912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9128u;
    // 0x1f912c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F9128u, 0x1F9130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9130u;
label_1f9130:
    // 0x1f9130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9134: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9134u;
    {
        const bool branch_taken_0x1f9134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9134u;
        // 0x1f9138: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9134) {
            ctx->pc = 0x1F9148u;
            return;
        }
    }
    ctx->pc = 0x1F913Cu;
    // 0x1f913c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9140u;
    {
        const bool branch_taken_0x1f9140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9140u;
        // 0x1f9144: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9140) {
            ctx->pc = 0x1F9150u;
            return;
        }
    }
    ctx->pc = 0x1F9148u;
}
