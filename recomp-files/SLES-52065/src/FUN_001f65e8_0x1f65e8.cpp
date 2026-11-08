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

// Function: FUN_001f65e8
// Address: 0x1f65e8 - 0x1f66a8
void FUN_001f65e8_0x1f65e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f65e8_0x1f65e8");
#endif

    switch (ctx->pc) {
        case 0x1f660cu: goto label_1f660c;
        case 0x1f6648u: goto label_1f6648;
        case 0x1f6684u: goto label_1f6684;
        default: break;
    }

    ctx->pc = 0x1f65e8u;

    // 0x1f65e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f65e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f65ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f65ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f65f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f65f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f65f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f65f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f65f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f65fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f65fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6600: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f6600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f6604: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F6604u;
    SET_GPR_U32(ctx, 31, 0x1F660Cu);
    ctx->pc = 0x1F6608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6604u;
    // 0x1f6608: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F6604u, 0x1F660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F660Cu;
label_1f660c:
    // 0x1f660c: 0x90430072  lbu         $v1, 0x72($v0)
    ctx->pc = 0x1f660cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
    // 0x1f6610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6614: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F6614u;
    {
        const bool branch_taken_0x1f6614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6614u;
        // 0x1f6618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6614) {
            ctx->pc = 0x1F6690u;
            goto label_1f6690;
        }
    }
    ctx->pc = 0x1F661Cu;
    // 0x1f661c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1f661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f6620: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1f6620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f6624: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1f6624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f6628: 0x72242018  mult1       $a0, $s1, $a0
    ctx->pc = 0x1f6628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f662c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f6630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6634: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1f6634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1f6638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f6638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f663c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f6640: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1f6640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f6644: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1f6648:
    // 0x1f6648: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1f664c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x1f664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1f6650: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f6650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6654: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f6654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f6658: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x1f6658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f665c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f665cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6660: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6660u;
    {
        const bool branch_taken_0x1f6660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6660) {
            ctx->pc = 0x1F6648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6648;
        }
    }
    ctx->pc = 0x1F6668u;
    // 0x1f6668: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f6668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f666c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f6670: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1f6670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x1f6674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6678: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1f6678u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1f667c: 0xc07d634  jal         func_1F58D0
    ctx->pc = 0x1F667Cu;
    SET_GPR_U32(ctx, 31, 0x1F6684u);
    ctx->pc = 0x1F6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F667Cu;
    // 0x1f6680: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F58D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F58D0u, 0x1F667Cu, 0x1F6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6684u;
label_1f6684:
    // 0x1f6684: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f6684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f6688: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1f6688u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1f668c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f668cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6690:
    // 0x1f6690: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f6694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f6698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f669c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f669cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f66a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F66A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F66A0u;
        // 0x1f66a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F66A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F66A8u;
}
