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

// Function: FUN_001e1178
// Address: 0x1e1178 - 0x1e1200
void FUN_001e1178_0x1e1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1178_0x1e1178");
#endif

    switch (ctx->pc) {
        case 0x1e1194u: goto label_1e1194;
        case 0x1e119cu: goto label_1e119c;
        case 0x1e11c8u: goto label_1e11c8;
        case 0x1e11e4u: goto label_1e11e4;
        default: break;
    }

    ctx->pc = 0x1e1178u;

    // 0x1e1178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e117c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1180: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1184: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e1188: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e118c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1E118Cu;
    SET_GPR_U32(ctx, 31, 0x1E1194u);
    ctx->pc = 0x1E1190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E118Cu;
    // 0x1e1190: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1E118Cu, 0x1E1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1194u;
label_1e1194:
    // 0x1e1194: 0xc078304  jal         func_1E0C10
    ctx->pc = 0x1E1194u;
    SET_GPR_U32(ctx, 31, 0x1E119Cu);
    ctx->pc = 0x1E1198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1194u;
    // 0x1e1198: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0C10u, 0x1E1194u, 0x1E119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E119Cu;
label_1e119c:
    // 0x1e119c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e119cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11a0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x1e11a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e11a4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1e11a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1e11a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e11a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e11ac: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1e11acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1e11b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e11b4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e11b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e11b8: 0x2421b340  addiu       $at, $at, -0x4CC0
    ctx->pc = 0x1e11b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294947648));
    // 0x1e11bc: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x1e11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1e11c0: 0xc078314  jal         func_1E0C50
    ctx->pc = 0x1E11C0u;
    SET_GPR_U32(ctx, 31, 0x1E11C8u);
    ctx->pc = 0x1E11C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E11C0u;
    // 0x1e11c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0C50u, 0x1E11C0u, 0x1E11C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E11C8u;
label_1e11c8:
    // 0x1e11c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e11cc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1e11ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1e11d0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1e11d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11d4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E11D4u;
    {
        const bool branch_taken_0x1e11d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E11D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11D4u;
        // 0x1e11d8: 0x202880b  movn        $s1, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11d4) {
            ctx->pc = 0x1E11E4u;
            goto label_1e11e4;
        }
    }
    ctx->pc = 0x1E11DCu;
    // 0x1e11dc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1E11DCu;
    SET_GPR_U32(ctx, 31, 0x1E11E4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1E11DCu, 0x1E11E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E11E4u;
label_1e11e4:
    // 0x1e11e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e11e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e11e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e11ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e11ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e11f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e11f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e11f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e11f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e11f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E11F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F8u;
        // 0x1e11fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1200u;
}
