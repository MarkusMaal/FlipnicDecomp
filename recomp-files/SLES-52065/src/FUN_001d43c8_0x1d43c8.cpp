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

// Function: FUN_001d43c8
// Address: 0x1d43c8 - 0x1d4440
void FUN_001d43c8_0x1d43c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d43c8_0x1d43c8");
#endif

    switch (ctx->pc) {
        case 0x1d43fcu: goto label_1d43fc;
        case 0x1d4408u: goto label_1d4408;
        case 0x1d4414u: goto label_1d4414;
        default: break;
    }

    ctx->pc = 0x1d43c8u;

    // 0x1d43c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d43c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d43cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d43d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d43d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d43d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d43d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d43d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d43dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d43dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d43e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d43e4: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D43E4u;
    {
        const bool branch_taken_0x1d43e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d43e4) {
            ctx->pc = 0x1D43E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D43E4u;
            // 0x1d43e8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4420u;
            goto label_1d4420;
        }
    }
    ctx->pc = 0x1D43ECu;
    // 0x1d43ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d43f0: 0xde0400a0  ld          $a0, 0xA0($s0)
    ctx->pc = 0x1d43f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1d43f4: 0xc0782be  jal         func_1E0AF8
    ctx->pc = 0x1D43F4u;
    SET_GPR_U32(ctx, 31, 0x1D43FCu);
    ctx->pc = 0x1D43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43F4u;
    // 0x1d43f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0AF8u, 0x1D43F4u, 0x1D43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43FCu;
label_1d43fc:
    // 0x1d43fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d43fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4400: 0xc0750a2  jal         func_1D4288
    ctx->pc = 0x1D4400u;
    SET_GPR_U32(ctx, 31, 0x1D4408u);
    ctx->pc = 0x1D4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4400u;
    // 0x1d4404: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4288u, 0x1D4400u, 0x1D4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4408u;
label_1d4408:
    // 0x1d4408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d440c: 0xc0750da  jal         func_1D4368
    ctx->pc = 0x1D440Cu;
    SET_GPR_U32(ctx, 31, 0x1D4414u);
    ctx->pc = 0x1D4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D440Cu;
    // 0x1d4410: 0x8c8502cc  lw          $a1, 0x2CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4368u, 0x1D440Cu, 0x1D4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4414u;
label_1d4414:
    // 0x1d4414: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4414u;
    {
        const bool branch_taken_0x1d4414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4414u;
        // 0x1d4418: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4414) {
            ctx->pc = 0x1D442Cu;
            goto label_1d442c;
        }
    }
    ctx->pc = 0x1D441Cu;
    // 0x1d441c: 0x0  nop
    ctx->pc = 0x1d441cu;
    // NOP
label_1d4420:
    // 0x1d4420: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d4420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d4424: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d4424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d4428: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d4428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d442c:
    // 0x1d442c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d442cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4438: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4438u;
        // 0x1d443c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4440u;
}
