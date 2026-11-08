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

// Function: FUN_001be690
// Address: 0x1be690 - 0x1be784
void FUN_001be690_0x1be690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001be690_0x1be690");
#endif

    switch (ctx->pc) {
        case 0x1be6d0u: goto label_1be6d0;
        case 0x1be6e4u: goto label_1be6e4;
        case 0x1be6f0u: goto label_1be6f0;
        case 0x1be6f8u: goto label_1be6f8;
        case 0x1be700u: goto label_1be700;
        case 0x1be720u: goto label_1be720;
        case 0x1be734u: goto label_1be734;
        case 0x1be740u: goto label_1be740;
        case 0x1be748u: goto label_1be748;
        case 0x1be750u: goto label_1be750;
        case 0x1be75cu: goto label_1be75c;
        default: break;
    }

    ctx->pc = 0x1be690u;

    // 0x1be690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1be694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1be694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1be698: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1be698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1be69c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1be69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1be6a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1be6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1be6a4: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1be6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1be6a8: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BE6A8u;
    {
        const bool branch_taken_0x1be6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6A8u;
        // 0x1be6ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6a8) {
            ctx->pc = 0x1BE76Cu;
            goto label_1be76c;
        }
    }
    ctx->pc = 0x1BE6B0u;
    // 0x1be6b0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1be6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1be6b4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE6B4u;
    {
        const bool branch_taken_0x1be6b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be6b4) {
            ctx->pc = 0x1BE700u;
            goto label_1be700;
        }
    }
    ctx->pc = 0x1BE6BCu;
    // 0x1be6bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1be6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be6c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE6C0u;
    {
        const bool branch_taken_0x1be6c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be6c0) {
            ctx->pc = 0x1BE6D0u;
            goto label_1be6d0;
        }
    }
    ctx->pc = 0x1BE6C8u;
    // 0x1be6c8: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE6C8u;
    SET_GPR_U32(ctx, 31, 0x1BE6D0u);
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE6C8u, 0x1BE6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6D0u;
label_1be6d0:
    // 0x1be6d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1be6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be6d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE6D4u;
    {
        const bool branch_taken_0x1be6d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D4u;
        // 0x1be6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6d4) {
            ctx->pc = 0x1BE6E8u;
            goto label_1be6e8;
        }
    }
    ctx->pc = 0x1BE6DCu;
    // 0x1be6dc: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE6DCu;
    SET_GPR_U32(ctx, 31, 0x1BE6E4u);
    ctx->pc = 0x1BE6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6DCu;
    // 0x1be6e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE6DCu, 0x1BE6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6E4u;
label_1be6e4:
    // 0x1be6e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be6e8:
    // 0x1be6e8: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE6E8u;
    SET_GPR_U32(ctx, 31, 0x1BE6F0u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE6E8u, 0x1BE6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6F0u;
label_1be6f0:
    // 0x1be6f0: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE6F0u;
    SET_GPR_U32(ctx, 31, 0x1BE6F8u);
    ctx->pc = 0x1BE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6F0u;
    // 0x1be6f4: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE6F0u, 0x1BE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6F8u;
label_1be6f8:
    // 0x1be6f8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE6F8u;
    SET_GPR_U32(ctx, 31, 0x1BE700u);
    ctx->pc = 0x1BE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6F8u;
    // 0x1be6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE6F8u, 0x1BE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE700u;
label_1be700:
    // 0x1be700: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1be700u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1be704: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BE704u;
    {
        const bool branch_taken_0x1be704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE704u;
        // 0x1be708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be704) {
            ctx->pc = 0x1BE754u;
            goto label_1be754;
        }
    }
    ctx->pc = 0x1BE70Cu;
    // 0x1be70c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1be70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be710: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE710u;
    {
        const bool branch_taken_0x1be710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE710u;
        // 0x1be714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be710) {
            ctx->pc = 0x1BE720u;
            goto label_1be720;
        }
    }
    ctx->pc = 0x1BE718u;
    // 0x1be718: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE718u;
    SET_GPR_U32(ctx, 31, 0x1BE720u);
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE718u, 0x1BE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE720u;
label_1be720:
    // 0x1be720: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1be724: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE724u;
    {
        const bool branch_taken_0x1be724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE724u;
        // 0x1be728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be724) {
            ctx->pc = 0x1BE738u;
            goto label_1be738;
        }
    }
    ctx->pc = 0x1BE72Cu;
    // 0x1be72c: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BE72Cu;
    SET_GPR_U32(ctx, 31, 0x1BE734u);
    ctx->pc = 0x1BE730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE72Cu;
    // 0x1be730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE4B0u, 0x1BE72Cu, 0x1BE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE734u;
label_1be734:
    // 0x1be734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be738:
    // 0x1be738: 0xc06f9a0  jal         func_1BE680
    ctx->pc = 0x1BE738u;
    SET_GPR_U32(ctx, 31, 0x1BE740u);
    ctx->pc = 0x1BE680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE680u, 0x1BE738u, 0x1BE740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE740u;
label_1be740:
    // 0x1be740: 0xc06f99c  jal         func_1BE670
    ctx->pc = 0x1BE740u;
    SET_GPR_U32(ctx, 31, 0x1BE748u);
    ctx->pc = 0x1BE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE740u;
    // 0x1be744: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE670u, 0x1BE740u, 0x1BE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE748u;
label_1be748:
    // 0x1be748: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE748u;
    SET_GPR_U32(ctx, 31, 0x1BE750u);
    ctx->pc = 0x1BE74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE748u;
    // 0x1be74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE748u, 0x1BE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE750u;
label_1be750:
    // 0x1be750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be754:
    // 0x1be754: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1BE754u;
    SET_GPR_U32(ctx, 31, 0x1BE75Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1BE754u, 0x1BE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE75Cu;
label_1be75c:
    // 0x1be75c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1be75cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1be760: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1be760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1be764: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1be764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1be768: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1be768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1be76c:
    // 0x1be76c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1be76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be770: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1be770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1be774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1be778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE77Cu;
        // 0x1be780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE784u;
}
