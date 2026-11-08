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

// Function: FUN_001b7550
// Address: 0x1b7550 - 0x1b7664
void FUN_001b7550_0x1b7550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7550_0x1b7550");
#endif

    switch (ctx->pc) {
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75ccu: goto label_1b75cc;
        case 0x1b75e0u: goto label_1b75e0;
        case 0x1b7600u: goto label_1b7600;
        default: break;
    }

    ctx->pc = 0x1b7550u;

    // 0x1b7550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b7550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b7554: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b7554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b7558: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b7558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b755c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b7560: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b7560u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7564: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b7564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b7568: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b7568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b756c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b7570: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b7570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7574: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7578: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1b7578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b757c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7580: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1b7580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7588: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1b7588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b758c: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B758Cu;
    {
        const bool branch_taken_0x1b758c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B758Cu;
        // 0x1b7590: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b758c) {
            ctx->pc = 0x1B7598u;
            goto label_1b7598;
        }
    }
    ctx->pc = 0x1B7594u;
    // 0x1b7594: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b7594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7598:
    // 0x1b7598: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b7598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b759c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75a0: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1b75a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b75a4: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1B75A4u;
    SET_GPR_U32(ctx, 31, 0x1B75ACu);
    ctx->pc = 0x1B75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75A4u;
    // 0x1b75a8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1B75A4u, 0x1B75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75ACu;
label_1b75ac:
    // 0x1b75ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B75ACu;
    {
        const bool branch_taken_0x1b75ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75ACu;
        // 0x1b75b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75ac) {
            ctx->pc = 0x1B75D0u;
            goto label_1b75d0;
        }
    }
    ctx->pc = 0x1B75B4u;
    // 0x1b75b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b75b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b75bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b75c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b75c4: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1B75C4u;
    SET_GPR_U32(ctx, 31, 0x1B75CCu);
    ctx->pc = 0x1B75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75C4u;
    // 0x1b75c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1B75C4u, 0x1B75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75CCu;
label_1b75cc:
    // 0x1b75cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1b75ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b75d0:
    // 0x1b75d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b75d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75d8: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1B75D8u;
    SET_GPR_U32(ctx, 31, 0x1B75E0u);
    ctx->pc = 0x1B75DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75D8u;
    // 0x1b75dc: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1B75D8u, 0x1B75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75E0u;
label_1b75e0:
    // 0x1b75e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B75E0u;
    {
        const bool branch_taken_0x1b75e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b75e0) {
            ctx->pc = 0x1B7600u;
            goto label_1b7600;
        }
    }
    ctx->pc = 0x1B75E8u;
    // 0x1b75e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b75ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b75ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b75f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b75f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b75f8: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1B75F8u;
    SET_GPR_U32(ctx, 31, 0x1B7600u);
    ctx->pc = 0x1B75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75F8u;
    // 0x1b75fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1B75F8u, 0x1B7600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7600u;
label_1b7600:
    // 0x1b7600: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7600u;
    {
        const bool branch_taken_0x1b7600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7600u;
        // 0x1b7604: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7600) {
            ctx->pc = 0x1B7614u;
            goto label_1b7614;
        }
    }
    ctx->pc = 0x1B7608u;
    // 0x1b7608: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x1b7608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b760c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B760Cu;
    {
        const bool branch_taken_0x1b760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B760Cu;
        // 0x1b7610: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b760c) {
            ctx->pc = 0x1B7618u;
            goto label_1b7618;
        }
    }
    ctx->pc = 0x1B7614u;
label_1b7614:
    // 0x1b7614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b7614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b7618:
    // 0x1b7618: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b7618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b761c: 0xb4082a  slt         $at, $a1, $s4
    ctx->pc = 0x1b761cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1b7620: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7620u;
    {
        const bool branch_taken_0x1b7620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7620u;
        // 0x1b7624: 0x265082a  slt         $at, $s3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7620) {
            ctx->pc = 0x1B7630u;
            goto label_1b7630;
        }
    }
    ctx->pc = 0x1B7628u;
    // 0x1b7628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7628u;
    {
        const bool branch_taken_0x1b7628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7628u;
        // 0x1b762c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7628) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B7630u;
label_1b7630:
    // 0x1b7630: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7630u;
    {
        const bool branch_taken_0x1b7630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7630) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B7638u;
    // 0x1b7638: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b7638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1b763c:
    // 0x1b763c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b763cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7640: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b7640u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7644: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b7644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7648: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b7648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b764c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b764cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b765c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B765Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B765Cu;
        // 0x1b7660: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B765Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7664u;
}
