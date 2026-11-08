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

// Function: FUN_0011ad00
// Address: 0x11ad00 - 0x11adc4
void FUN_0011ad00_0x11ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011ad00_0x11ad00");
#endif

    switch (ctx->pc) {
        case 0x11ad40u: goto label_11ad40;
        case 0x11ad50u: goto label_11ad50;
        case 0x11ad80u: goto label_11ad80;
        default: break;
    }

    ctx->pc = 0x11ad00u;

    // 0x11ad00: 0x8046b44  j           func_11AD10
    ctx->pc = 0x11AD00u;
    ctx->pc = 0x11AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD00u;
    // 0x11ad04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD10u;
    goto label_11ad10;
    ctx->pc = 0x11AD08u;
    // 0x11ad08: 0x0  nop
    ctx->pc = 0x11ad08u;
    // NOP
    // 0x11ad0c: 0x0  nop
    ctx->pc = 0x11ad0cu;
    // NOP
label_11ad10:
    // 0x11ad10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ad14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ad18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11ad1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11ad1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11ad20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11ad20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ad24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ad28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11ad28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad2c: 0x808203c4  lb          $v0, 0x3C4($a0)
    ctx->pc = 0x11ad2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 964)));
    // 0x11ad30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AD30u;
    {
        const bool branch_taken_0x11ad30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD30u;
        // 0x11ad34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad30) {
            ctx->pc = 0x11AD40u;
            goto label_11ad40;
        }
    }
    ctx->pc = 0x11AD38u;
    // 0x11ad38: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x11AD38u;
    SET_GPR_U32(ctx, 31, 0x11AD40u);
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x11AD38u, 0x11AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD40u;
label_11ad40:
    // 0x11ad40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ad40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ad44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad48: 0xc046d68  jal         func_11B5A0
    ctx->pc = 0x11AD48u;
    SET_GPR_U32(ctx, 31, 0x11AD50u);
    ctx->pc = 0x11AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD48u;
    // 0x11ad4c: 0x260603c4  addiu       $a2, $s0, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B5A0u, 0x11AD48u, 0x11AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD50u;
label_11ad50:
    // 0x11ad50: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x11ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11ad54: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x11ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x11ad58: 0xa06403c4  sb          $a0, 0x3C4($v1)
    ctx->pc = 0x11ad58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 964), (uint8_t)GPR_U32(ctx, 4));
    // 0x11ad5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ad60: 0xa06003c5  sb          $zero, 0x3C5($v1)
    ctx->pc = 0x11ad60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 965), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ad64: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x11ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x11ad68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AD68u;
    {
        const bool branch_taken_0x11ad68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD68u;
        // 0x11ad6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad68) {
            ctx->pc = 0x11AD78u;
            goto label_11ad78;
        }
    }
    ctx->pc = 0x11AD70u;
    // 0x11ad70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11AD70u;
    {
        const bool branch_taken_0x11ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD70u;
        // 0x11ad74: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad70) {
            ctx->pc = 0x11ADB0u;
            goto label_11adb0;
        }
    }
    ctx->pc = 0x11AD78u;
label_11ad78:
    // 0x11ad78: 0xc046f0c  jal         func_11BC30
    ctx->pc = 0x11AD78u;
    SET_GPR_U32(ctx, 31, 0x11AD80u);
    ctx->pc = 0x11AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD78u;
    // 0x11ad7c: 0x260503c4  addiu       $a1, $s0, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC30u, 0x11AD78u, 0x11AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD80u;
label_11ad80:
    // 0x11ad80: 0xae020528  sw          $v0, 0x528($s0)
    ctx->pc = 0x11ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 2));
    // 0x11ad84: 0x8e020528  lw          $v0, 0x528($s0)
    ctx->pc = 0x11ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x11ad88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AD88u;
    {
        const bool branch_taken_0x11ad88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ad88) {
            ctx->pc = 0x11AD98u;
            goto label_11ad98;
        }
    }
    ctx->pc = 0x11AD90u;
    // 0x11ad90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11AD90u;
    {
        const bool branch_taken_0x11ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD90u;
        // 0x11ad94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad90) {
            ctx->pc = 0x11ADACu;
            goto label_11adac;
        }
    }
    ctx->pc = 0x11AD98u;
label_11ad98:
    // 0x11ad98: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x11ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x11ad9c: 0x8e030528  lw          $v1, 0x528($s0)
    ctx->pc = 0x11ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x11ada0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ada4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x11ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x11ada8: 0xae03052c  sw          $v1, 0x52C($s0)
    ctx->pc = 0x11ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 3));
label_11adac:
    // 0x11adac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11adacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11adb0:
    // 0x11adb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11adb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11adb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11adb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11adb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11adb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11adbc: 0x3e00008  jr          $ra
    ctx->pc = 0x11ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADBCu;
        // 0x11adc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ADC4u;
}
