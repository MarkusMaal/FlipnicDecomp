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

// Function: FUN_001c1170
// Address: 0x1c1170 - 0x1c11ec
void FUN_001c1170_0x1c1170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1170_0x1c1170");
#endif

    switch (ctx->pc) {
        case 0x1c119cu: goto label_1c119c;
        case 0x1c11a4u: goto label_1c11a4;
        case 0x1c11b8u: goto label_1c11b8;
        case 0x1c11c0u: goto label_1c11c0;
        case 0x1c11d0u: goto label_1c11d0;
        case 0x1c11d8u: goto label_1c11d8;
        default: break;
    }

    ctx->pc = 0x1c1170u;

    // 0x1c1170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c117c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c117cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1180: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1c1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1c1184: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c1184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1188: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1188u;
    {
        const bool branch_taken_0x1c1188 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1188u;
        // 0x1c118c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1188) {
            ctx->pc = 0x1C11ACu;
            goto label_1c11ac;
        }
    }
    ctx->pc = 0x1C1190u;
    // 0x1c1190: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c1190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c1194: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C1194u;
    SET_GPR_U32(ctx, 31, 0x1C119Cu);
    ctx->pc = 0x1C1198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1194u;
    // 0x1c1198: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C1194u, 0x1C119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C119Cu;
label_1c119c:
    // 0x1c119c: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C119Cu;
    SET_GPR_U32(ctx, 31, 0x1C11A4u);
    ctx->pc = 0x1C11A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C119Cu;
    // 0x1c11a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C119Cu, 0x1C11A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11A4u;
label_1c11a4:
    // 0x1c11a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C11A4u;
    {
        const bool branch_taken_0x1c11a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A4u;
        // 0x1c11a8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a4) {
            ctx->pc = 0x1C11DCu;
            goto label_1c11dc;
        }
    }
    ctx->pc = 0x1C11ACu;
label_1c11ac:
    // 0x1c11ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c11acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c11b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C11B0u;
    SET_GPR_U32(ctx, 31, 0x1C11B8u);
    ctx->pc = 0x1C11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B0u;
    // 0x1c11b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C11B0u, 0x1C11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11B8u;
label_1c11b8:
    // 0x1c11b8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C11B8u;
    SET_GPR_U32(ctx, 31, 0x1C11C0u);
    ctx->pc = 0x1C11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B8u;
    // 0x1c11bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C11B8u, 0x1C11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C0u;
label_1c11c0:
    // 0x1c11c0: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1c11c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1c11c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C11C8u;
    SET_GPR_U32(ctx, 31, 0x1C11D0u);
    ctx->pc = 0x1C11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11C8u;
    // 0x1c11cc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C11C8u, 0x1C11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11D0u;
label_1c11d0:
    // 0x1c11d0: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C11D0u;
    SET_GPR_U32(ctx, 31, 0x1C11D8u);
    ctx->pc = 0x1C11D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11D0u;
    // 0x1c11d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C11D0u, 0x1C11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11D8u;
label_1c11d8:
    // 0x1c11d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c11d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c11dc:
    // 0x1c11dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c11dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c11e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11E4u;
        // 0x1c11e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11ECu;
}
