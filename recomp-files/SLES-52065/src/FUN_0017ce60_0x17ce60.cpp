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

// Function: FUN_0017ce60
// Address: 0x17ce60 - 0x17cf64
void FUN_0017ce60_0x17ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ce60_0x17ce60");
#endif

    switch (ctx->pc) {
        case 0x17ce9cu: goto label_17ce9c;
        case 0x17ceacu: goto label_17ceac;
        case 0x17ceb4u: goto label_17ceb4;
        case 0x17cec4u: goto label_17cec4;
        case 0x17ced0u: goto label_17ced0;
        case 0x17cee4u: goto label_17cee4;
        case 0x17cef8u: goto label_17cef8;
        case 0x17cf18u: goto label_17cf18;
        case 0x17cf24u: goto label_17cf24;
        case 0x17cf30u: goto label_17cf30;
        case 0x17cf48u: goto label_17cf48;
        default: break;
    }

    ctx->pc = 0x17ce60u;

    // 0x17ce60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ce64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17ce68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ce6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ce70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ce74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ce74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce78: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x17CE78u;
    {
        const bool branch_taken_0x17ce78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE78u;
        // 0x17ce7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce78) {
            ctx->pc = 0x17CF48u;
            goto label_17cf48;
        }
    }
    ctx->pc = 0x17CE80u;
    // 0x17ce80: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ce84: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17ce88: 0x2442b118  addiu       $v0, $v0, -0x4EE8
    ctx->pc = 0x17ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947096));
    // 0x17ce8c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x17ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x17ce90: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x17ce90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17ce94: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x17CE94u;
    SET_GPR_U32(ctx, 31, 0x17CE9Cu);
    ctx->pc = 0x17CE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE94u;
    // 0x17ce98: 0x24a5d250  addiu       $a1, $a1, -0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x17CE94u, 0x17CE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE9Cu;
label_17ce9c:
    // 0x17ce9c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x17ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17cea0: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x17cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x17cea4: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x17CEA4u;
    SET_GPR_U32(ctx, 31, 0x17CEACu);
    ctx->pc = 0x17CEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEA4u;
    // 0x17cea8: 0x24a5d250  addiu       $a1, $a1, -0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x17CEA4u, 0x17CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEACu;
label_17ceac:
    // 0x17ceac: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x17CEACu;
    SET_GPR_U32(ctx, 31, 0x17CEB4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x17CEACu, 0x17CEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEB4u;
label_17ceb4:
    // 0x17ceb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17ceb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ceb8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x17ceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x17cebc: 0xc048920  jal         func_122480
    ctx->pc = 0x17CEBCu;
    SET_GPR_U32(ctx, 31, 0x17CEC4u);
    ctx->pc = 0x17CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEBCu;
    // 0x17cec0: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x17CEBCu, 0x17CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEC4u;
label_17cec4:
    // 0x17cec4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17cec8: 0xc080748  jal         func_201D20
    ctx->pc = 0x17CEC8u;
    SET_GPR_U32(ctx, 31, 0x17CED0u);
    ctx->pc = 0x17CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEC8u;
    // 0x17cecc: 0x2484f8b8  addiu       $a0, $a0, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17CEC8u, 0x17CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CED0u;
label_17ced0:
    // 0x17ced0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17ced0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x17ced4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17ced4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ced8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x17cedc: 0xc048884  jal         func_122210
    ctx->pc = 0x17CEDCu;
    SET_GPR_U32(ctx, 31, 0x17CEE4u);
    ctx->pc = 0x17CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEDCu;
    // 0x17cee0: 0x24a5f8b8  addiu       $a1, $a1, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x17CEDCu, 0x17CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEE4u;
label_17cee4:
    // 0x17cee4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x17cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x17cee8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x17cee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17ceec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ceecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cef0: 0xc04c2c8  jal         func_130B20
    ctx->pc = 0x17CEF0u;
    SET_GPR_U32(ctx, 31, 0x17CEF8u);
    ctx->pc = 0x17CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CEF0u;
    // 0x17cef4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B20u, 0x17CEF0u, 0x17CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEF8u;
label_17cef8:
    // 0x17cef8: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x17cef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x17cefc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cf00: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CF00u;
    {
        const bool branch_taken_0x17cf00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF00u;
        // 0x17cf04: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf00) {
            ctx->pc = 0x17CF1Cu;
            goto label_17cf1c;
        }
    }
    ctx->pc = 0x17CF08u;
    // 0x17cf08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17cf0c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x17cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17cf10: 0xc046c14  jal         func_11B050
    ctx->pc = 0x17CF10u;
    SET_GPR_U32(ctx, 31, 0x17CF18u);
    ctx->pc = 0x17CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF10u;
    // 0x17cf14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x17CF10u, 0x17CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF18u;
label_17cf18:
    // 0x17cf18: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x17cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_17cf1c:
    // 0x17cf1c: 0xc04619c  jal         func_118670
    ctx->pc = 0x17CF1Cu;
    SET_GPR_U32(ctx, 31, 0x17CF24u);
    ctx->pc = 0x17CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF1Cu;
    // 0x17cf20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17CF1Cu, 0x17CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF24u;
label_17cf24:
    // 0x17cf24: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x17cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17cf28: 0xc04619c  jal         func_118670
    ctx->pc = 0x17CF28u;
    SET_GPR_U32(ctx, 31, 0x17CF30u);
    ctx->pc = 0x17CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF28u;
    // 0x17cf2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17CF28u, 0x17CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF30u;
label_17cf30:
    // 0x17cf30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17cf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17cf34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17cf34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17cf38: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CF38u;
    {
        const bool branch_taken_0x17cf38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF38u;
        // 0x17cf3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf38) {
            ctx->pc = 0x17CF4Cu;
            goto label_17cf4c;
        }
    }
    ctx->pc = 0x17CF40u;
    // 0x17cf40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17CF40u;
    SET_GPR_U32(ctx, 31, 0x17CF48u);
    ctx->pc = 0x17CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF40u;
    // 0x17cf44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17CF40u, 0x17CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF48u;
label_17cf48:
    // 0x17cf48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17cf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17cf4c:
    // 0x17cf4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17cf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cf50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17cf50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cf54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17cf54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cf58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF5Cu;
        // 0x17cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CF64u;
}
