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

// Function: FUN_001ec100
// Address: 0x1ec100 - 0x1ec168
void FUN_001ec100_0x1ec100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec100_0x1ec100");
#endif

    switch (ctx->pc) {
        case 0x1ec130u: goto label_1ec130;
        case 0x1ec138u: goto label_1ec138;
        case 0x1ec150u: goto label_1ec150;
        default: break;
    }

    ctx->pc = 0x1ec100u;

    // 0x1ec100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec104: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ec104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ec108: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ec108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ec10c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec114: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1ec114u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1ec118: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ec118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ec11c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1ec11cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1ec120: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC120u;
    {
        const bool branch_taken_0x1ec120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec120) {
            ctx->pc = 0x1EC130u;
            goto label_1ec130;
        }
    }
    ctx->pc = 0x1EC128u;
    // 0x1ec128: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EC128u;
    SET_GPR_U32(ctx, 31, 0x1EC130u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EC128u, 0x1EC130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC130u;
label_1ec130:
    // 0x1ec130: 0xc07acdc  jal         func_1EB370
    ctx->pc = 0x1EC130u;
    SET_GPR_U32(ctx, 31, 0x1EC138u);
    ctx->pc = 0x1EC134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC130u;
    // 0x1ec134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB370u, 0x1EC130u, 0x1EC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC138u;
label_1ec138:
    // 0x1ec138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec13c: 0xf  sync
    ctx->pc = 0x1ec13cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec140: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC140u;
    {
        const bool branch_taken_0x1ec140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC140u;
        // 0x1ec144: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec140) {
            ctx->pc = 0x1EC154u;
            goto label_1ec154;
        }
    }
    ctx->pc = 0x1EC148u;
    // 0x1ec148: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC148u;
    SET_GPR_U32(ctx, 31, 0x1EC150u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC148u, 0x1EC150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC150u;
label_1ec150:
    // 0x1ec150: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec154:
    // 0x1ec154: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ec154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec158: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ec158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec160: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC160u;
        // 0x1ec164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC168u;
}
