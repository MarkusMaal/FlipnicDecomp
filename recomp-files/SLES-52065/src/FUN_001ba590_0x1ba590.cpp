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

// Function: FUN_001ba590
// Address: 0x1ba590 - 0x1ba640
void FUN_001ba590_0x1ba590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ba590_0x1ba590");
#endif

    switch (ctx->pc) {
        case 0x1ba5c4u: goto label_1ba5c4;
        case 0x1ba5d4u: goto label_1ba5d4;
        case 0x1ba5ecu: goto label_1ba5ec;
        case 0x1ba5fcu: goto label_1ba5fc;
        case 0x1ba610u: goto label_1ba610;
        case 0x1ba620u: goto label_1ba620;
        default: break;
    }

    ctx->pc = 0x1ba590u;

    // 0x1ba590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ba594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ba598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ba598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ba59c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ba59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ba5a0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1ba5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ba5a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ba5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba5a8: 0x12030020  beq         $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BA5A8u;
    {
        const bool branch_taken_0x1ba5a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5A8u;
        // 0x1ba5ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5a8) {
            ctx->pc = 0x1BA62Cu;
            goto label_1ba62c;
        }
    }
    ctx->pc = 0x1BA5B0u;
    // 0x1ba5b0: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x1ba5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ba5b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA5B4u;
    {
        const bool branch_taken_0x1ba5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5b4) {
            ctx->pc = 0x1BA5D8u;
            goto label_1ba5d8;
        }
    }
    ctx->pc = 0x1BA5BCu;
    // 0x1ba5bc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1BA5BCu;
    SET_GPR_U32(ctx, 31, 0x1BA5C4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1BA5BCu, 0x1BA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5C4u;
label_1ba5c4:
    // 0x1ba5c4: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba5c8: 0x8c252ef0  lw          $a1, 0x2EF0($at)
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF0u));
    // 0x1ba5cc: 0xc062c20  jal         func_18B080
    ctx->pc = 0x1BA5CCu;
    SET_GPR_U32(ctx, 31, 0x1BA5D4u);
    ctx->pc = 0x1BA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5CCu;
    // 0x1ba5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B080u, 0x1BA5CCu, 0x1BA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5D4u;
label_1ba5d4:
    // 0x1ba5d4: 0xa220001c  sb          $zero, 0x1C($s1)
    ctx->pc = 0x1ba5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
label_1ba5d8:
    // 0x1ba5d8: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x1ba5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x1ba5dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA5DCu;
    {
        const bool branch_taken_0x1ba5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5DCu;
        // 0x1ba5e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5dc) {
            ctx->pc = 0x1BA604u;
            goto label_1ba604;
        }
    }
    ctx->pc = 0x1BA5E4u;
    // 0x1ba5e4: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x1BA5E4u;
    SET_GPR_U32(ctx, 31, 0x1BA5ECu);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x1BA5E4u, 0x1BA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5ECu;
label_1ba5ec:
    // 0x1ba5ec: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba5f0: 0x8c252ef8  lw          $a1, 0x2EF8($at)
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF8u));
    // 0x1ba5f4: 0xc0478dc  jal         func_11E370
    ctx->pc = 0x1BA5F4u;
    SET_GPR_U32(ctx, 31, 0x1BA5FCu);
    ctx->pc = 0x1BA5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5F4u;
    // 0x1ba5f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E370u, 0x1BA5F4u, 0x1BA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5FCu;
label_1ba5fc:
    // 0x1ba5fc: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x1ba5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ba604:
    // 0x1ba604: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1ba604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1ba608: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1BA608u;
    SET_GPR_U32(ctx, 31, 0x1BA610u);
    ctx->pc = 0x1BA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA608u;
    // 0x1ba60c: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1BA608u, 0x1BA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA610u;
label_1ba610:
    // 0x1ba610: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1ba614: 0x8c252ef0  lw          $a1, 0x2EF0($at)
    ctx->pc = 0x1ba614u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212EF0u));
    // 0x1ba618: 0xc062c10  jal         func_18B040
    ctx->pc = 0x1BA618u;
    SET_GPR_U32(ctx, 31, 0x1BA620u);
    ctx->pc = 0x1BA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA618u;
    // 0x1ba61c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B040u, 0x1BA618u, 0x1BA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA620u;
label_1ba620:
    // 0x1ba620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba624: 0xa223001c  sb          $v1, 0x1C($s1)
    ctx->pc = 0x1ba624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ba628: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x1ba628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
label_1ba62c:
    // 0x1ba62c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ba62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba638: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA638u;
        // 0x1ba63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA640u;
}
