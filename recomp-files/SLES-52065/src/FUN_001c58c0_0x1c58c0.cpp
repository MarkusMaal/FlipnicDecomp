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

// Function: FUN_001c58c0
// Address: 0x1c58c0 - 0x1c595c
void FUN_001c58c0_0x1c58c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c58c0_0x1c58c0");
#endif

    switch (ctx->pc) {
        case 0x1c58ecu: goto label_1c58ec;
        case 0x1c58f4u: goto label_1c58f4;
        case 0x1c5900u: goto label_1c5900;
        case 0x1c590cu: goto label_1c590c;
        case 0x1c592cu: goto label_1c592c;
        case 0x1c5944u: goto label_1c5944;
        default: break;
    }

    ctx->pc = 0x1c58c0u;

    // 0x1c58c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c58c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c58c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c58c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c58c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c58cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c58ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c58d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c58d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58d4: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C58D4u;
    {
        const bool branch_taken_0x1c58d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58D4u;
        // 0x1c58d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58d4) {
            ctx->pc = 0x1C5944u;
            goto label_1c5944;
        }
    }
    ctx->pc = 0x1C58DCu;
    // 0x1c58dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c58e0: 0x2442bb90  addiu       $v0, $v0, -0x4470
    ctx->pc = 0x1c58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949776));
    // 0x1c58e4: 0xc0485d0  jal         func_121740
    ctx->pc = 0x1C58E4u;
    SET_GPR_U32(ctx, 31, 0x1C58ECu);
    ctx->pc = 0x1C58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58E4u;
    // 0x1c58e8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121740u, 0x1C58E4u, 0x1C58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58ECu;
label_1c58ec:
    // 0x1c58ec: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1C58ECu;
    SET_GPR_U32(ctx, 31, 0x1C58F4u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1C58ECu, 0x1C58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58F4u;
label_1c58f4:
    // 0x1c58f4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1c58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1c58f8: 0xc06f8cc  jal         func_1BE330
    ctx->pc = 0x1C58F8u;
    SET_GPR_U32(ctx, 31, 0x1C5900u);
    ctx->pc = 0x1C58FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58F8u;
    // 0x1c58fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE330u, 0x1C58F8u, 0x1C5900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5900u;
label_1c5900:
    // 0x1c5900: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1c5900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1c5904: 0xc06e080  jal         func_1B8200
    ctx->pc = 0x1C5904u;
    SET_GPR_U32(ctx, 31, 0x1C590Cu);
    ctx->pc = 0x1C5908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5904u;
    // 0x1c5908: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8200u, 0x1C5904u, 0x1C590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C590Cu;
label_1c590c:
    // 0x1c590c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C590Cu;
    {
        const bool branch_taken_0x1c590c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C590Cu;
        // 0x1c5910: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c590c) {
            ctx->pc = 0x1C5930u;
            goto label_1c5930;
        }
    }
    ctx->pc = 0x1C5914u;
    // 0x1c5914: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1c5914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1c5918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c591c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1c591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1c5920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5924: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1C5924u;
    SET_GPR_U32(ctx, 31, 0x1C592Cu);
    ctx->pc = 0x1C5928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5924u;
    // 0x1c5928: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1C5924u, 0x1C592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C592Cu;
label_1c592c:
    // 0x1c592c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1c592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1c5930:
    // 0x1c5930: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c5930u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c5934: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5934u;
    {
        const bool branch_taken_0x1c5934 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5934u;
        // 0x1c5938: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5934) {
            ctx->pc = 0x1C5948u;
            goto label_1c5948;
        }
    }
    ctx->pc = 0x1C593Cu;
    // 0x1c593c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1C593Cu;
    SET_GPR_U32(ctx, 31, 0x1C5944u);
    ctx->pc = 0x1C5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C593Cu;
    // 0x1c5940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1C593Cu, 0x1C5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5944u;
label_1c5944:
    // 0x1c5944: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c5944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5948:
    // 0x1c5948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c5948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c594c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c594cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5954u;
        // 0x1c5958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C595Cu;
}
