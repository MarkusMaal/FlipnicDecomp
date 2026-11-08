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

// Function: FUN_001ec238
// Address: 0x1ec238 - 0x1ec2a0
void FUN_001ec238_0x1ec238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec238_0x1ec238");
#endif

    switch (ctx->pc) {
        case 0x1ec268u: goto label_1ec268;
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec288u: goto label_1ec288;
        default: break;
    }

    ctx->pc = 0x1ec238u;

    // 0x1ec238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec23c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ec23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ec240: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ec240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ec244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec24c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1ec24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1ec250: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ec250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ec254: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1ec254u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1ec258: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC258u;
    {
        const bool branch_taken_0x1ec258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec258) {
            ctx->pc = 0x1EC268u;
            goto label_1ec268;
        }
    }
    ctx->pc = 0x1EC260u;
    // 0x1ec260: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EC260u;
    SET_GPR_U32(ctx, 31, 0x1EC268u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EC260u, 0x1EC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC268u;
label_1ec268:
    // 0x1ec268: 0xc07ace0  jal         func_1EB380
    ctx->pc = 0x1EC268u;
    SET_GPR_U32(ctx, 31, 0x1EC270u);
    ctx->pc = 0x1EC26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC268u;
    // 0x1ec26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB380u, 0x1EC268u, 0x1EC270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC270u;
label_1ec270:
    // 0x1ec270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec274: 0xf  sync
    ctx->pc = 0x1ec274u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ec278: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC278u;
    {
        const bool branch_taken_0x1ec278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC278u;
        // 0x1ec27c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec278) {
            ctx->pc = 0x1EC28Cu;
            goto label_1ec28c;
        }
    }
    ctx->pc = 0x1EC280u;
    // 0x1ec280: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EC280u;
    SET_GPR_U32(ctx, 31, 0x1EC288u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EC280u, 0x1EC288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC288u;
label_1ec288:
    // 0x1ec288: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec28c:
    // 0x1ec28c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ec28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec290: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ec290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec294: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec298: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC298u;
        // 0x1ec29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC2A0u;
}
