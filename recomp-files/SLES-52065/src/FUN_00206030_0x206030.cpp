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

// Function: FUN_00206030
// Address: 0x206030 - 0x20613c
void FUN_00206030_0x206030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00206030_0x206030");
#endif

    switch (ctx->pc) {
        case 0x206070u: goto label_206070;
        case 0x2060b8u: goto label_2060b8;
        case 0x2060f4u: goto label_2060f4;
        default: break;
    }

    ctx->pc = 0x206030u;

    // 0x206030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x206034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20603c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20603cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206040: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x206044: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x206044u;
    {
        const bool branch_taken_0x206044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206044) {
            ctx->pc = 0x206048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206044u;
            // 0x206048: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206060u;
            goto label_206060;
        }
    }
    ctx->pc = 0x20604Cu;
    // 0x20604c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x20604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x206050: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x206050u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x206054: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x206054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x206058: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x206058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x20605c: 0x0  nop
    ctx->pc = 0x20605cu;
    // NOP
label_206060:
    // 0x206060: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x206060u;
    {
        const bool branch_taken_0x206060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206060) {
            ctx->pc = 0x206064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206060u;
            // 0x206064: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206074u;
            goto label_206074;
        }
    }
    ctx->pc = 0x206068u;
    // 0x206068: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x206068u;
    SET_GPR_U32(ctx, 31, 0x206070u);
    ctx->pc = 0x20606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206068u;
    // 0x20606c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x206068u, 0x206070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206070u;
label_206070:
    // 0x206070: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x206070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_206074:
    // 0x206074: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x206074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x206078: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x206078u;
    {
        const bool branch_taken_0x206078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206078) {
            ctx->pc = 0x20607Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206078u;
            // 0x20607c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060E4u;
            goto label_2060e4;
        }
    }
    ctx->pc = 0x206080u;
    // 0x206080: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x206080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x206084: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206084u;
    {
        const bool branch_taken_0x206084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206084u;
        // 0x206088: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x206084) {
            ctx->pc = 0x206094u;
            goto label_206094;
        }
    }
    ctx->pc = 0x20608Cu;
    // 0x20608c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x20608Cu;
    {
        const bool branch_taken_0x20608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20608Cu;
        // 0x206090: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20608c) {
            ctx->pc = 0x20612Cu;
            goto label_20612c;
        }
    }
    ctx->pc = 0x206094u;
label_206094:
    // 0x206094: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x206094u;
    {
        const bool branch_taken_0x206094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206094) {
            ctx->pc = 0x206098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206094u;
            // 0x206098: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060DCu;
            goto label_2060dc;
        }
    }
    ctx->pc = 0x20609Cu;
    // 0x20609c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x20609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2060a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2060A0u;
    {
        const bool branch_taken_0x2060a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2060A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060A0u;
        // 0x2060a4: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060a0) {
            ctx->pc = 0x2060C0u;
            goto label_2060c0;
        }
    }
    ctx->pc = 0x2060A8u;
    // 0x2060a8: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2060A8u;
    {
        const bool branch_taken_0x2060a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2060a8) {
            ctx->pc = 0x2060ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2060A8u;
            // 0x2060ac: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060C0u;
            goto label_2060c0;
        }
    }
    ctx->pc = 0x2060B0u;
    // 0x2060b0: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x2060B0u;
    SET_GPR_U32(ctx, 31, 0x2060B8u);
    ctx->pc = 0x2060B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060B0u;
    // 0x2060b4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x2060B0u, 0x2060B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060B8u;
label_2060b8:
    // 0x2060b8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2060b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2060bc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2060bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2060c0:
    // 0x2060c0: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x2060c4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2060c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2060c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2060c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2060cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2060ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2060d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2060d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2060d4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2060d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2060d8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2060d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2060dc:
    // 0x2060dc: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x2060dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2060e0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2060e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2060e4:
    // 0x2060e4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2060E4u;
    {
        const bool branch_taken_0x2060e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2060e4) {
            ctx->pc = 0x2060E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2060E4u;
            // 0x2060e8: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2060F8u;
            goto label_2060f8;
        }
    }
    ctx->pc = 0x2060ECu;
    // 0x2060ec: 0xc07fa3a  jal         func_1FE8E8
    ctx->pc = 0x2060ECu;
    SET_GPR_U32(ctx, 31, 0x2060F4u);
    ctx->pc = 0x2060F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2060ECu;
    // 0x2060f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8E8u, 0x2060ECu, 0x2060F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060F4u;
label_2060f4:
    // 0x2060f4: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2060f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2060f8:
    // 0x2060f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2060f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2060fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2060FCu;
    {
        const bool branch_taken_0x2060fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2060FCu;
        // 0x206100: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2060fc) {
            ctx->pc = 0x206118u;
            goto label_206118;
        }
    }
    ctx->pc = 0x206104u;
    // 0x206104: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x206104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x206108: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x206108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x20610c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x206110: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206110u;
    {
        const bool branch_taken_0x206110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206110u;
        // 0x206114: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206110) {
            ctx->pc = 0x206128u;
            goto label_206128;
        }
    }
    ctx->pc = 0x206118u;
label_206118:
    // 0x206118: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x206118u;
    {
        const bool branch_taken_0x206118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206118u;
        // 0x20611c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206118) {
            ctx->pc = 0x206124u;
            goto label_206124;
        }
    }
    ctx->pc = 0x206120u;
    // 0x206120: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x206120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_206124:
    // 0x206124: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x206124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_206128:
    // 0x206128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20612c:
    // 0x20612c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20612cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206134: 0x3e00008  jr          $ra
    ctx->pc = 0x206134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206134u;
        // 0x206138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20613Cu;
}
