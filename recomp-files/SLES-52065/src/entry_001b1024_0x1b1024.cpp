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

// Function: entry_001b1024
// Address: 0x1b1024 - 0x1b1070
void entry_001b1024_0x1b1024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1024_0x1b1024");
#endif

    switch (ctx->pc) {
        case 0x1b1054u: goto label_1b1054;
        case 0x1b1068u: goto label_1b1068;
        default: break;
    }

    ctx->pc = 0x1b1024u;

label_1b1024:
    // 0x1b1024: 0x0  nop
    ctx->pc = 0x1b1024u;
    // NOP
label_1b1028:
    // 0x1b1028: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1b1028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b102c:
    // 0x1b102c: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_1b1030:
    if (ctx->pc == 0x1B1030u) {
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1034u;
        goto label_1b1034;
    }
    ctx->pc = 0x1B102Cu;
    {
        const bool branch_taken_0x1b102c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b102c) {
            ctx->pc = 0x1B0EB0u;
            return;
        }
    }
    ctx->pc = 0x1B1034u;
label_1b1034:
    // 0x1b1034: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1b1034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b1038:
    // 0x1b1038: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_1b103c:
    if (ctx->pc == 0x1B103Cu) {
        ctx->pc = 0x1B1040u;
        goto label_1b1040;
    }
    ctx->pc = 0x1B1038u;
    {
        const bool branch_taken_0x1b1038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1038) {
            ctx->pc = 0x1B0EACu;
            return;
        }
    }
    ctx->pc = 0x1B1040u;
label_1b1040:
    // 0x1b1040: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x1b1040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_1b1044:
    // 0x1b1044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1048:
    // 0x1b1048: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b104c:
    // 0x1b104c: 0x320f809  jalr        $t9
label_1b1050:
    if (ctx->pc == 0x1B1050u) {
        ctx->pc = 0x1B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B104Cu;
        // 0x1b1050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1054u;
        goto label_1b1054;
    }
    ctx->pc = 0x1B104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1054u);
        ctx->pc = 0x1B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B104Cu;
        // 0x1b1050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B104Cu, 0x1B1054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1054u;
label_1b1054:
    // 0x1b1054: 0x8e84010c  lw          $a0, 0x10C($s4)
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_1b1058:
    // 0x1b1058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b105c:
    // 0x1b105c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b105cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b1060:
    // 0x1b1060: 0x320f809  jalr        $t9
label_1b1064:
    if (ctx->pc == 0x1B1064u) {
        ctx->pc = 0x1B1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1060u;
        // 0x1b1064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1068u;
        goto label_1b1068;
    }
    ctx->pc = 0x1B1060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1068u);
        ctx->pc = 0x1B1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1060u;
        // 0x1b1064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1060u, 0x1B1068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1068u;
label_1b1068:
    // 0x1b1068: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b106c:
    if (ctx->pc == 0x1B106Cu) {
        ctx->pc = 0x1B106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1068u;
        // 0x1b106c: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1070u;
        goto label_fallthrough_0x1b1068;
    }
    ctx->pc = 0x1B1068u;
    {
        const bool branch_taken_0x1b1068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1068u;
        // 0x1b106c: 0x8e820118  lw          $v0, 0x118($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1068) {
            ctx->pc = 0x1B109Cu;
            return;
        }
    }
label_fallthrough_0x1b1068:
    ctx->pc = 0x1B1070u;
}
