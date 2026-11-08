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

// Function: FUN_001d4610
// Address: 0x1d4610 - 0x1d46c0
void FUN_001d4610_0x1d4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4610_0x1d4610");
#endif

    switch (ctx->pc) {
        case 0x1d462cu: goto label_1d462c;
        default: break;
    }

    ctx->pc = 0x1d4610u;

    // 0x1d4610: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1d4610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4614: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1d4614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4618: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x1d4618u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d461c: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x1d461cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4620: 0x250d0008  addiu       $t5, $t0, 0x8
    ctx->pc = 0x1d4620u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1d4624: 0x250b000c  addiu       $t3, $t0, 0xC
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1d4628: 0x250a022c  addiu       $t2, $t0, 0x22C
    ctx->pc = 0x1d4628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 556));
label_1d462c:
    // 0x1d462c: 0x8d03022c  lw          $v1, 0x22C($t0)
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 556)));
    // 0x1d4630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4634: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d463c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d463cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4640: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1d4644: 0xac4900a0  sw          $t1, 0xA0($v0)
    ctx->pc = 0x1d4644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 9));
    // 0x1d4648: 0x8d03022c  lw          $v1, 0x22C($t0)
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 556)));
    // 0x1d464c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4654: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4658: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1d4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1d465c: 0xac4e00a0  sw          $t6, 0xA0($v0)
    ctx->pc = 0x1d465cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 14));
    // 0x1d4660: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1d4660u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4664: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1d4664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d4668: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d4668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d466c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4670: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d4674: 0x2486001f  addiu       $a2, $a0, 0x1F
    ctx->pc = 0x1d4674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1d4678: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x1d4678u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d467c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d467cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d4680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4684: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1d4684u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1d4688: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1d468c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d468cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d4690: 0xac6c00a4  sw          $t4, 0xA4($v1)
    ctx->pc = 0x1d4690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 12));
    // 0x1d4694: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d4698: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1d4698u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d469c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d46a0: 0x15270005  bne         $t1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D46A0u;
    {
        const bool branch_taken_0x1d46a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 7));
        ctx->pc = 0x1D46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46A0u;
        // 0x1d46a4: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46a0) {
            ctx->pc = 0x1D46B8u;
            goto label_1d46b8;
        }
    }
    ctx->pc = 0x1D46A8u;
    // 0x1d46a8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d46ac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d46acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d46b0: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D46B0u;
    {
        const bool branch_taken_0x1d46b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B0u;
        // 0x1d46b4: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b0) {
            ctx->pc = 0x1D462Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d462c;
        }
    }
    ctx->pc = 0x1D46B8u;
label_1d46b8:
    // 0x1d46b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46C0u;
}
