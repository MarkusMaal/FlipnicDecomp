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

// Function: FUN_001d9538
// Address: 0x1d9538 - 0x1d95f0
void FUN_001d9538_0x1d9538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d9538_0x1d9538");
#endif

    switch (ctx->pc) {
        case 0x1d958cu: goto label_1d958c;
        case 0x1d95a8u: goto label_1d95a8;
        case 0x1d95bcu: goto label_1d95bc;
        case 0x1d95d0u: goto label_1d95d0;
        default: break;
    }

    ctx->pc = 0x1d9538u;

    // 0x1d9538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d953c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9540: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x1d9540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9548: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d954c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d9550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9554: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9558: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D9558u;
    {
        const bool branch_taken_0x1d9558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9558u;
        // 0x1d955c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9558) {
            ctx->pc = 0x1D95D0u;
            goto label_1d95d0;
        }
    }
    ctx->pc = 0x1D9560u;
    // 0x1d9560: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1d9560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1d9564: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1d9564u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d9568: 0x245366c0  addiu       $s3, $v0, 0x66C0
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x1d956c: 0x2139021  addu        $s2, $s0, $s3
    ctx->pc = 0x1d956cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1d9570: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d9570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d9574: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1d9574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d9578: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d9578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d957c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D957Cu;
    {
        const bool branch_taken_0x1d957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d957c) {
            ctx->pc = 0x1D9580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D957Cu;
            // 0x1d9580: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D95D4u;
            goto label_1d95d4;
        }
    }
    ctx->pc = 0x1D9584u;
    // 0x1d9584: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D9584u;
    SET_GPR_U32(ctx, 31, 0x1D958Cu);
    ctx->pc = 0x1D9588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9584u;
    // 0x1d9588: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D9584u, 0x1D958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D958Cu;
label_1d958c:
    // 0x1d958c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1d958cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1d9590: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d9594: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d959c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d959cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95a0: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D95A0u;
    SET_GPR_U32(ctx, 31, 0x1D95A8u);
    ctx->pc = 0x1D95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95A0u;
    // 0x1d95a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D95A0u, 0x1D95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95A8u;
label_1d95a8:
    // 0x1d95a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d95ac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d95acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d95b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d95b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95b4: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D95B4u;
    SET_GPR_U32(ctx, 31, 0x1D95BCu);
    ctx->pc = 0x1D95B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95B4u;
    // 0x1d95b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D95B4u, 0x1D95BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95BCu;
label_1d95bc:
    // 0x1d95bc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d95c0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D95C0u;
    {
        const bool branch_taken_0x1d95c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95C0u;
        // 0x1d95c4: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95c0) {
            ctx->pc = 0x1D95D0u;
            goto label_1d95d0;
        }
    }
    ctx->pc = 0x1D95C8u;
    // 0x1d95c8: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D95C8u;
    SET_GPR_U32(ctx, 31, 0x1D95D0u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D95C8u, 0x1D95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95D0u;
label_1d95d0:
    // 0x1d95d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d95d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d95d4:
    // 0x1d95d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d95d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d95d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d95dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d95dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d95e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d95e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d95e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d95e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d95e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D95E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95E8u;
        // 0x1d95ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D95F0u;
}
