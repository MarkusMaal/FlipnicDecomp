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

// Function: entry_001f9674
// Address: 0x1f9674 - 0x1f970c
void entry_001f9674_0x1f9674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9674_0x1f9674");
#endif

    switch (ctx->pc) {
        case 0x1f9698u: goto label_1f9698;
        case 0x1f96b4u: goto label_1f96b4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96f4u: goto label_1f96f4;
        default: break;
    }

    ctx->pc = 0x1f9674u;

    // 0x1f9674: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f9674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f9678: 0x245116b0  addiu       $s1, $v0, 0x16B0
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f967c: 0xac5416b0  sw          $s4, 0x16B0($v0)
    ctx->pc = 0x1f967cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 20));
    // 0x1f9680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9684: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1f9684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1f9688: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f9688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f968c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1f968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1f9690: 0xc080804  jal         func_202010
    ctx->pc = 0x1F9690u;
    SET_GPR_U32(ctx, 31, 0x1F9698u);
    ctx->pc = 0x1F9694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9690u;
    // 0x1f9694: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F9690u, 0x1F9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9698u;
label_1f9698:
    // 0x1f9698: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f9698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f969c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96a0: 0x26101660  addiu       $s0, $s0, 0x1660
    ctx->pc = 0x1f96a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5728));
    // 0x1f96a4: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1f96a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f96a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f96a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96ac: 0xc080804  jal         func_202010
    ctx->pc = 0x1F96ACu;
    SET_GPR_U32(ctx, 31, 0x1F96B4u);
    ctx->pc = 0x1F96B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96ACu;
    // 0x1f96b0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F96ACu, 0x1F96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96B4u;
label_1f96b4:
    // 0x1f96b4: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x1f96b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x1f96b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f96b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96bc: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1f96bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1f96c0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x1F96C0u;
    SET_GPR_U32(ctx, 31, 0x1F96C8u);
    ctx->pc = 0x1F96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96C0u;
    // 0x1f96c4: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1F96C0u, 0x1F96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96C8u;
label_1f96c8:
    // 0x1f96c8: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f96c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f96cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f96ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f96d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96d4: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f96d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f96d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f96dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f96dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f96e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f96e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f96e4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f96e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f96e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f96e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f96ec: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F96ECu;
    SET_GPR_U32(ctx, 31, 0x1F96F4u);
    ctx->pc = 0x1F96F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96ECu;
    // 0x1f96f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F96ECu, 0x1F96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96F4u;
label_1f96f4:
    // 0x1f96f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f96f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96f8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F96F8u;
    {
        const bool branch_taken_0x1f96f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F96FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96F8u;
        // 0x1f96fc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96f8) {
            ctx->pc = 0x1F970Cu;
            return;
        }
    }
    ctx->pc = 0x1F9700u;
    // 0x1f9700: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1f9700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f9704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9704u;
    {
        const bool branch_taken_0x1f9704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9704u;
        // 0x1f9708: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9704) {
            ctx->pc = 0x1F9714u;
            return;
        }
    }
    ctx->pc = 0x1F970Cu;
}
