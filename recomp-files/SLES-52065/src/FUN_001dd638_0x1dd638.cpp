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

// Function: FUN_001dd638
// Address: 0x1dd638 - 0x1dd6f4
void FUN_001dd638_0x1dd638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd638_0x1dd638");
#endif

    ctx->pc = 0x1dd638u;

    // 0x1dd638: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dd638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd63c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD63Cu;
    {
        const bool branch_taken_0x1dd63c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD63Cu;
        // 0x1dd640: 0x640c0  sll         $t0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd63c) {
            ctx->pc = 0x1DD678u;
            goto label_1dd678;
        }
    }
    ctx->pc = 0x1DD644u;
    // 0x1dd644: 0x1061023  subu        $v0, $t0, $a2
    ctx->pc = 0x1dd644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1dd648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dd648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd64c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd650: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1dd650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd654: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1dd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dd658: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd65c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dd660: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dd660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd664: 0x8c637334  lw          $v1, 0x7334($v1)
    ctx->pc = 0x1dd664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29492)));
    // 0x1dd668: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD668u;
    {
        const bool branch_taken_0x1dd668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD668u;
        // 0x1dd66c: 0x3c0a0038  lui         $t2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd668) {
            ctx->pc = 0x1DD680u;
            goto label_1dd680;
        }
    }
    ctx->pc = 0x1DD670u;
    // 0x1dd670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD670u;
    {
        const bool branch_taken_0x1dd670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD670u;
        // 0x1dd674: 0x53840  sll         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd670) {
            ctx->pc = 0x1DD680u;
            goto label_1dd680;
        }
    }
    ctx->pc = 0x1DD678u;
label_1dd678:
    // 0x1dd678: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x1dd678u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x1dd67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd680:
    // 0x1dd680: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x1dd680u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1dd684: 0x25497330  addiu       $t1, $t2, 0x7330
    ctx->pc = 0x1dd684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 29488));
    // 0x1dd688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd68c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd690: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd694: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1dd694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1dd698: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x1dd698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1dd69c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1dd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1dd6a0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD6A0u;
    {
        const bool branch_taken_0x1dd6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6A0u;
        // 0x1dd6a4: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6a0) {
            ctx->pc = 0x1DD6C8u;
            goto label_1dd6c8;
        }
    }
    ctx->pc = 0x1DD6A8u;
    // 0x1dd6a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1dd6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dd6ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD6ACu;
    {
        const bool branch_taken_0x1dd6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6ACu;
        // 0x1dd6b0: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6ac) {
            ctx->pc = 0x1DD6C8u;
            goto label_1dd6c8;
        }
    }
    ctx->pc = 0x1DD6B4u;
    // 0x1dd6b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd6b8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1dd6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1dd6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6BCu;
        // 0x1dd6c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6C4u;
    // 0x1dd6c4: 0x0  nop
    ctx->pc = 0x1dd6c4u;
    // NOP
label_1dd6c8:
    // 0x1dd6c8: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x1dd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1dd6cc: 0x25447330  addiu       $a0, $t2, 0x7330
    ctx->pc = 0x1dd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 29488));
    // 0x1dd6d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd6d4: 0x2405fbff  addiu       $a1, $zero, -0x401
    ctx->pc = 0x1dd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1dd6d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1dd6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dd6dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd6e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd6e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd6e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dd6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dd6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6ECu;
        // 0x1dd6f0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6F4u;
}
