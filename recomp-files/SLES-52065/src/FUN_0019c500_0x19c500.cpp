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

// Function: FUN_0019c500
// Address: 0x19c500 - 0x19c5d4
void FUN_0019c500_0x19c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019c500_0x19c500");
#endif

    switch (ctx->pc) {
        case 0x19c53cu: goto label_19c53c;
        case 0x19c568u: goto label_19c568;
        case 0x19c574u: goto label_19c574;
        case 0x19c580u: goto label_19c580;
        case 0x19c58cu: goto label_19c58c;
        case 0x19c598u: goto label_19c598;
        case 0x19c5a4u: goto label_19c5a4;
        case 0x19c5bcu: goto label_19c5bc;
        default: break;
    }

    ctx->pc = 0x19c500u;

    // 0x19c500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19c508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c50c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c514: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x19C514u;
    {
        const bool branch_taken_0x19c514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C514u;
        // 0x19c518: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c514) {
            ctx->pc = 0x19C5BCu;
            goto label_19c5bc;
        }
    }
    ctx->pc = 0x19C51Cu;
    // 0x19c51c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x19c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x19c520: 0x26220ac0  addiu       $v0, $s1, 0xAC0
    ctx->pc = 0x19c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
    // 0x19c524: 0x2463b2f0  addiu       $v1, $v1, -0x4D10
    ctx->pc = 0x19c524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947568));
    // 0x19c528: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19C528u;
    {
        const bool branch_taken_0x19c528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C528u;
        // 0x19c52c: 0xae23031c  sw          $v1, 0x31C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c528) {
            ctx->pc = 0x19C568u;
            goto label_19c568;
        }
    }
    ctx->pc = 0x19C530u;
    // 0x19c530: 0x26240ae0  addiu       $a0, $s1, 0xAE0
    ctx->pc = 0x19c530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2784));
    // 0x19c534: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x19C534u;
    SET_GPR_U32(ctx, 31, 0x19C53Cu);
    ctx->pc = 0x19C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C534u;
    // 0x19c538: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19C534u, 0x19C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C53Cu;
label_19c53c:
    // 0x19c53c: 0x26240ac0  addiu       $a0, $s1, 0xAC0
    ctx->pc = 0x19c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2752));
    // 0x19c540: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C540u;
    {
        const bool branch_taken_0x19c540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C540u;
        // 0x19c544: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c540) {
            ctx->pc = 0x19C568u;
            goto label_19c568;
        }
    }
    ctx->pc = 0x19C548u;
    // 0x19c548: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x19c54c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C54Cu;
    {
        const bool branch_taken_0x19c54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C54Cu;
        // 0x19c550: 0xae220acc  sw          $v0, 0xACC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c54c) {
            ctx->pc = 0x19C568u;
            goto label_19c568;
        }
    }
    ctx->pc = 0x19C554u;
    // 0x19c554: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19c554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19c558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c55c: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x19c560: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x19C560u;
    SET_GPR_U32(ctx, 31, 0x19C568u);
    ctx->pc = 0x19C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C560u;
    // 0x19c564: 0xae220acc  sw          $v0, 0xACC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2764), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x19C560u, 0x19C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C568u;
label_19c568:
    // 0x19c568: 0x26240aa0  addiu       $a0, $s1, 0xAA0
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2720));
    // 0x19c56c: 0xc0699c8  jal         func_1A6720
    ctx->pc = 0x19C56Cu;
    SET_GPR_U32(ctx, 31, 0x19C574u);
    ctx->pc = 0x19C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C56Cu;
    // 0x19c570: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6720u, 0x19C56Cu, 0x19C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C574u;
label_19c574:
    // 0x19c574: 0x26240a80  addiu       $a0, $s1, 0xA80
    ctx->pc = 0x19c574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2688));
    // 0x19c578: 0xc069aa8  jal         func_1A6AA0
    ctx->pc = 0x19C578u;
    SET_GPR_U32(ctx, 31, 0x19C580u);
    ctx->pc = 0x19C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C578u;
    // 0x19c57c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AA0u, 0x19C578u, 0x19C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C580u;
label_19c580:
    // 0x19c580: 0x262409e0  addiu       $a0, $s1, 0x9E0
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2528));
    // 0x19c584: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x19C584u;
    SET_GPR_U32(ctx, 31, 0x19C58Cu);
    ctx->pc = 0x19C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C584u;
    // 0x19c588: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19C584u, 0x19C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C58Cu;
label_19c58c:
    // 0x19c58c: 0x26240940  addiu       $a0, $s1, 0x940
    ctx->pc = 0x19c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2368));
    // 0x19c590: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x19C590u;
    SET_GPR_U32(ctx, 31, 0x19C598u);
    ctx->pc = 0x19C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C590u;
    // 0x19c594: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x19C590u, 0x19C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C598u;
label_19c598:
    // 0x19c598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c59c: 0xc064324  jal         func_190C90
    ctx->pc = 0x19C59Cu;
    SET_GPR_U32(ctx, 31, 0x19C5A4u);
    ctx->pc = 0x19C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C59Cu;
    // 0x19c5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x19C59Cu, 0x19C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5A4u;
label_19c5a4:
    // 0x19c5a4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19c5a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c5a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c5ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C5ACu;
    {
        const bool branch_taken_0x19c5ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5ACu;
        // 0x19c5b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5ac) {
            ctx->pc = 0x19C5C0u;
            goto label_19c5c0;
        }
    }
    ctx->pc = 0x19C5B4u;
    // 0x19c5b4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19C5B4u;
    SET_GPR_U32(ctx, 31, 0x19C5BCu);
    ctx->pc = 0x19C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5B4u;
    // 0x19c5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19C5B4u, 0x19C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5BCu;
label_19c5bc:
    // 0x19c5bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19c5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c5c0:
    // 0x19c5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5CCu;
        // 0x19c5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5D4u;
}
