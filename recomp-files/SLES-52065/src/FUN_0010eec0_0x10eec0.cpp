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

// Function: FUN_0010eec0
// Address: 0x10eec0 - 0x10f120
void FUN_0010eec0_0x10eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010eec0_0x10eec0");
#endif

    switch (ctx->pc) {
        case 0x10eec0u: goto label_10eec0;
        case 0x10eec4u: goto label_10eec4;
        case 0x10eec8u: goto label_10eec8;
        case 0x10eeccu: goto label_10eecc;
        case 0x10eed0u: goto label_10eed0;
        case 0x10eed4u: goto label_10eed4;
        case 0x10eed8u: goto label_10eed8;
        case 0x10eedcu: goto label_10eedc;
        case 0x10eee0u: goto label_10eee0;
        case 0x10eee4u: goto label_10eee4;
        case 0x10eee8u: goto label_10eee8;
        case 0x10eeecu: goto label_10eeec;
        case 0x10eef0u: goto label_10eef0;
        case 0x10eef4u: goto label_10eef4;
        case 0x10eef8u: goto label_10eef8;
        case 0x10eefcu: goto label_10eefc;
        case 0x10ef00u: goto label_10ef00;
        case 0x10ef04u: goto label_10ef04;
        case 0x10ef08u: goto label_10ef08;
        case 0x10ef0cu: goto label_10ef0c;
        case 0x10ef10u: goto label_10ef10;
        case 0x10ef14u: goto label_10ef14;
        case 0x10ef18u: goto label_10ef18;
        case 0x10ef1cu: goto label_10ef1c;
        case 0x10ef20u: goto label_10ef20;
        case 0x10ef24u: goto label_10ef24;
        case 0x10ef28u: goto label_10ef28;
        case 0x10ef2cu: goto label_10ef2c;
        case 0x10ef30u: goto label_10ef30;
        case 0x10ef34u: goto label_10ef34;
        case 0x10ef38u: goto label_10ef38;
        case 0x10ef3cu: goto label_10ef3c;
        case 0x10ef40u: goto label_10ef40;
        case 0x10ef44u: goto label_10ef44;
        case 0x10ef48u: goto label_10ef48;
        case 0x10ef4cu: goto label_10ef4c;
        case 0x10ef50u: goto label_10ef50;
        case 0x10ef54u: goto label_10ef54;
        case 0x10ef58u: goto label_10ef58;
        case 0x10ef5cu: goto label_10ef5c;
        case 0x10ef60u: goto label_10ef60;
        case 0x10ef64u: goto label_10ef64;
        case 0x10ef68u: goto label_10ef68;
        case 0x10ef6cu: goto label_10ef6c;
        case 0x10ef70u: goto label_10ef70;
        case 0x10ef74u: goto label_10ef74;
        case 0x10ef78u: goto label_10ef78;
        case 0x10ef7cu: goto label_10ef7c;
        case 0x10ef80u: goto label_10ef80;
        case 0x10ef84u: goto label_10ef84;
        case 0x10ef88u: goto label_10ef88;
        case 0x10ef8cu: goto label_10ef8c;
        case 0x10ef90u: goto label_10ef90;
        case 0x10ef94u: goto label_10ef94;
        case 0x10ef98u: goto label_10ef98;
        case 0x10ef9cu: goto label_10ef9c;
        case 0x10efa0u: goto label_10efa0;
        case 0x10efa4u: goto label_10efa4;
        case 0x10efa8u: goto label_10efa8;
        case 0x10efacu: goto label_10efac;
        case 0x10efb0u: goto label_10efb0;
        case 0x10efb4u: goto label_10efb4;
        case 0x10efb8u: goto label_10efb8;
        case 0x10efbcu: goto label_10efbc;
        case 0x10efc0u: goto label_10efc0;
        case 0x10efc4u: goto label_10efc4;
        case 0x10efc8u: goto label_10efc8;
        case 0x10efccu: goto label_10efcc;
        case 0x10efd0u: goto label_10efd0;
        case 0x10efd4u: goto label_10efd4;
        case 0x10efd8u: goto label_10efd8;
        case 0x10efdcu: goto label_10efdc;
        case 0x10efe0u: goto label_10efe0;
        case 0x10efe4u: goto label_10efe4;
        case 0x10efe8u: goto label_10efe8;
        case 0x10efecu: goto label_10efec;
        case 0x10eff0u: goto label_10eff0;
        case 0x10eff4u: goto label_10eff4;
        case 0x10eff8u: goto label_10eff8;
        case 0x10effcu: goto label_10effc;
        case 0x10f000u: goto label_10f000;
        case 0x10f004u: goto label_10f004;
        case 0x10f008u: goto label_10f008;
        case 0x10f00cu: goto label_10f00c;
        case 0x10f010u: goto label_10f010;
        case 0x10f014u: goto label_10f014;
        case 0x10f018u: goto label_10f018;
        case 0x10f01cu: goto label_10f01c;
        case 0x10f020u: goto label_10f020;
        case 0x10f024u: goto label_10f024;
        case 0x10f028u: goto label_10f028;
        case 0x10f02cu: goto label_10f02c;
        case 0x10f030u: goto label_10f030;
        case 0x10f034u: goto label_10f034;
        case 0x10f038u: goto label_10f038;
        case 0x10f03cu: goto label_10f03c;
        case 0x10f040u: goto label_10f040;
        case 0x10f044u: goto label_10f044;
        case 0x10f048u: goto label_10f048;
        case 0x10f04cu: goto label_10f04c;
        case 0x10f050u: goto label_10f050;
        case 0x10f054u: goto label_10f054;
        case 0x10f058u: goto label_10f058;
        case 0x10f05cu: goto label_10f05c;
        case 0x10f060u: goto label_10f060;
        case 0x10f064u: goto label_10f064;
        case 0x10f068u: goto label_10f068;
        case 0x10f06cu: goto label_10f06c;
        case 0x10f070u: goto label_10f070;
        case 0x10f074u: goto label_10f074;
        case 0x10f078u: goto label_10f078;
        case 0x10f07cu: goto label_10f07c;
        case 0x10f080u: goto label_10f080;
        case 0x10f084u: goto label_10f084;
        case 0x10f088u: goto label_10f088;
        case 0x10f08cu: goto label_10f08c;
        case 0x10f090u: goto label_10f090;
        case 0x10f094u: goto label_10f094;
        case 0x10f098u: goto label_10f098;
        case 0x10f09cu: goto label_10f09c;
        case 0x10f0a0u: goto label_10f0a0;
        case 0x10f0a4u: goto label_10f0a4;
        case 0x10f0a8u: goto label_10f0a8;
        case 0x10f0acu: goto label_10f0ac;
        case 0x10f0b0u: goto label_10f0b0;
        case 0x10f0b4u: goto label_10f0b4;
        case 0x10f0b8u: goto label_10f0b8;
        case 0x10f0bcu: goto label_10f0bc;
        case 0x10f0c0u: goto label_10f0c0;
        case 0x10f0c4u: goto label_10f0c4;
        case 0x10f0c8u: goto label_10f0c8;
        case 0x10f0ccu: goto label_10f0cc;
        case 0x10f0d0u: goto label_10f0d0;
        case 0x10f0d4u: goto label_10f0d4;
        case 0x10f0d8u: goto label_10f0d8;
        case 0x10f0dcu: goto label_10f0dc;
        case 0x10f0e0u: goto label_10f0e0;
        case 0x10f0e4u: goto label_10f0e4;
        case 0x10f0e8u: goto label_10f0e8;
        case 0x10f0ecu: goto label_10f0ec;
        case 0x10f0f0u: goto label_10f0f0;
        case 0x10f0f4u: goto label_10f0f4;
        case 0x10f0f8u: goto label_10f0f8;
        case 0x10f0fcu: goto label_10f0fc;
        case 0x10f100u: goto label_10f100;
        case 0x10f104u: goto label_10f104;
        case 0x10f108u: goto label_10f108;
        case 0x10f10cu: goto label_10f10c;
        case 0x10f110u: goto label_10f110;
        case 0x10f114u: goto label_10f114;
        case 0x10f118u: goto label_10f118;
        case 0x10f11cu: goto label_10f11c;
        default: break;
    }

    ctx->pc = 0x10eec0u;

label_10eec0:
    // 0x10eec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10eec4:
    // 0x10eec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10eec8:
    // 0x10eec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10eecc:
    // 0x10eecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10eed0:
    // 0x10eed0: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x10eed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_10eed4:
    // 0x10eed4: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
label_10eed8:
    if (ctx->pc == 0x10EED8u) {
        ctx->pc = 0x10EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EED4u;
        // 0x10eed8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEDCu;
        goto label_10eedc;
    }
    ctx->pc = 0x10EED4u;
    {
        const bool branch_taken_0x10eed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EED4u;
        // 0x10eed8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eed4) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10EEDCu;
label_10eedc:
    // 0x10eedc: 0x92230230  lbu         $v1, 0x230($s1)
    ctx->pc = 0x10eedcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_10eee0:
    // 0x10eee0: 0x31e7c  dsll32      $v1, $v1, 25
    ctx->pc = 0x10eee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 25));
label_10eee4:
    // 0x10eee4: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10eee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_10eee8:
    // 0x10eee8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_10eeec:
    if (ctx->pc == 0x10EEECu) {
        ctx->pc = 0x10EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEE8u;
        // 0x10eeec: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EEF0u;
        goto label_10eef0;
    }
    ctx->pc = 0x10EEE8u;
    {
        const bool branch_taken_0x10eee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEE8u;
        // 0x10eeec: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eee8) {
            ctx->pc = 0x10EF24u;
            goto label_10ef24;
        }
    }
    ctx->pc = 0x10EEF0u;
label_10eef0:
    // 0x10eef0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10eef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10eef4:
    // 0x10eef4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x10eef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_10eef8:
    // 0x10eef8: 0x320f809  jalr        $t9
label_10eefc:
    if (ctx->pc == 0x10EEFCu) {
        ctx->pc = 0x10EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF8u;
        // 0x10eefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF00u;
        goto label_10ef00;
    }
    ctx->pc = 0x10EEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EF00u);
        ctx->pc = 0x10EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF8u;
        // 0x10eefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EEF8u, 0x10EF00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EF00u;
label_10ef00:
    // 0x10ef00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ef04:
    if (ctx->pc == 0x10EF04u) {
        ctx->pc = 0x10EF08u;
        goto label_10ef08;
    }
    ctx->pc = 0x10EF00u;
    {
        const bool branch_taken_0x10ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ef00) {
            ctx->pc = 0x10EF24u;
            goto label_10ef24;
        }
    }
    ctx->pc = 0x10EF08u;
label_10ef08:
    // 0x10ef08: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x10ef08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_10ef0c:
    // 0x10ef0c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x10ef0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_10ef10:
    // 0x10ef10: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x10ef10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_10ef14:
    // 0x10ef14: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_10ef18:
    // 0x10ef18: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10ef1c:
    // 0x10ef1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10ef1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10ef20:
    // 0x10ef20: 0xa2230230  sb          $v1, 0x230($s1)
    ctx->pc = 0x10ef20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 3));
label_10ef24:
    // 0x10ef24: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x10ef24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10ef28:
    // 0x10ef28: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x10ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_10ef2c:
    // 0x10ef2c: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x10ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
label_10ef30:
    // 0x10ef30: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x10ef30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10ef34:
    // 0x10ef34: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
label_10ef38:
    if (ctx->pc == 0x10EF38u) {
        ctx->pc = 0x10EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF34u;
        // 0x10ef38: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF3Cu;
        goto label_10ef3c;
    }
    ctx->pc = 0x10EF34u;
    {
        const bool branch_taken_0x10ef34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF34u;
        // 0x10ef38: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef34) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10EF3Cu;
label_10ef3c:
    // 0x10ef3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ef40:
    // 0x10ef40: 0x2484e390  addiu       $a0, $a0, -0x1C70
    ctx->pc = 0x10ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960016));
label_10ef44:
    // 0x10ef44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ef48:
    // 0x10ef48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10ef4c:
    // 0x10ef4c: 0x600008  jr          $v1
label_10ef50:
    if (ctx->pc == 0x10EF50u) {
        ctx->pc = 0x10EF54u;
        goto label_10ef54;
    }
    ctx->pc = 0x10EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EF54u: goto label_10ef54;
            case 0x10EFB0u: goto label_10efb0;
            case 0x10EFF4u: goto label_10eff4;
            case 0x10F068u: goto label_10f068;
            case 0x10F0E0u: goto label_10f0e0;
            case 0x10F10Cu: goto label_10f10c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10EF54u;
label_10ef54:
    // 0x10ef54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10ef58:
    // 0x10ef58: 0x84420032  lh          $v0, 0x32($v0)
    ctx->pc = 0x10ef58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_10ef5c:
    // 0x10ef5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ef60:
    if (ctx->pc == 0x10EF60u) {
        ctx->pc = 0x10EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF5Cu;
        // 0x10ef60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF64u;
        goto label_10ef64;
    }
    ctx->pc = 0x10EF5Cu;
    {
        const bool branch_taken_0x10ef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF5Cu;
        // 0x10ef60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef5c) {
            ctx->pc = 0x10EF80u;
            goto label_10ef80;
        }
    }
    ctx->pc = 0x10EF64u;
label_10ef64:
    // 0x10ef64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10ef64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10ef68:
    // 0x10ef68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ef6c:
    // 0x10ef6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ef6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ef70:
    // 0x10ef70: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x10ef70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_10ef74:
    // 0x10ef74: 0x320f809  jalr        $t9
label_10ef78:
    if (ctx->pc == 0x10EF78u) {
        ctx->pc = 0x10EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF74u;
        // 0x10ef78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF7Cu;
        goto label_10ef7c;
    }
    ctx->pc = 0x10EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10EF7Cu);
        ctx->pc = 0x10EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF74u;
        // 0x10ef78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF74u, 0x10EF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EF7Cu;
label_10ef7c:
    // 0x10ef7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ef80:
    // 0x10ef80: 0xc043ca8  jal         func_10F2A0
label_10ef84:
    if (ctx->pc == 0x10EF84u) {
        ctx->pc = 0x10EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF80u;
        // 0x10ef84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF88u;
        goto label_10ef88;
    }
    ctx->pc = 0x10EF80u;
    SET_GPR_U32(ctx, 31, 0x10EF88u);
    ctx->pc = 0x10EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF80u;
    // 0x10ef84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2A0u, 0x10EF80u, 0x10EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF88u;
label_10ef88:
    // 0x10ef88: 0x92240231  lbu         $a0, 0x231($s1)
    ctx->pc = 0x10ef88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10ef8c:
    // 0x10ef8c: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_10ef90:
    // 0x10ef90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x10ef90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_10ef94:
    // 0x10ef94: 0x426fc  dsll32      $a0, $a0, 27
    ctx->pc = 0x10ef94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 27));
label_10ef98:
    // 0x10ef98: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x10ef98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
label_10ef9c:
    // 0x10ef9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10efa0:
    // 0x10efa0: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x10efa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_10efa4:
    // 0x10efa4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10efa8:
    // 0x10efa8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10efa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10efac:
    // 0x10efac: 0xa2230231  sb          $v1, 0x231($s1)
    ctx->pc = 0x10efacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
label_10efb0:
    // 0x10efb0: 0x92260230  lbu         $a2, 0x230($s1)
    ctx->pc = 0x10efb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_10efb4:
    // 0x10efb4: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x10efb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_10efb8:
    // 0x10efb8: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x10efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_10efbc:
    // 0x10efbc: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x10efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_10efc0:
    // 0x10efc0: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_10efc4:
    // 0x10efc4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x10efc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_10efc8:
    // 0x10efc8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10efc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_10efcc:
    // 0x10efcc: 0xa2240230  sb          $a0, 0x230($s1)
    ctx->pc = 0x10efccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 4));
label_10efd0:
    // 0x10efd0: 0x92240231  lbu         $a0, 0x231($s1)
    ctx->pc = 0x10efd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10efd4:
    // 0x10efd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x10efd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_10efd8:
    // 0x10efd8: 0x426fc  dsll32      $a0, $a0, 27
    ctx->pc = 0x10efd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 27));
label_10efdc:
    // 0x10efdc: 0x4273e  dsrl32      $a0, $a0, 28
    ctx->pc = 0x10efdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 28));
label_10efe0:
    // 0x10efe0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_10efe4:
    // 0x10efe4: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x10efe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_10efe8:
    // 0x10efe8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10efec:
    // 0x10efec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10eff0:
    // 0x10eff0: 0xa2230231  sb          $v1, 0x231($s1)
    ctx->pc = 0x10eff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
label_10eff4:
    // 0x10eff4: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x10eff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10eff8:
    // 0x10eff8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x10eff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_10effc:
    // 0x10effc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_10f000:
    if (ctx->pc == 0x10F000u) {
        ctx->pc = 0x10F004u;
        goto label_10f004;
    }
    ctx->pc = 0x10EFFCu;
    {
        const bool branch_taken_0x10effc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10effc) {
            ctx->pc = 0x10F03Cu;
            goto label_10f03c;
        }
    }
    ctx->pc = 0x10F004u;
label_10f004:
    // 0x10f004: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f008:
    // 0x10f008: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x10f008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_10f00c:
    // 0x10f00c: 0x320f809  jalr        $t9
label_10f010:
    if (ctx->pc == 0x10F010u) {
        ctx->pc = 0x10F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F00Cu;
        // 0x10f010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F014u;
        goto label_10f014;
    }
    ctx->pc = 0x10F00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F014u);
        ctx->pc = 0x10F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F00Cu;
        // 0x10f010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F00Cu, 0x10F014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F014u;
label_10f014:
    // 0x10f014: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10f018:
    if (ctx->pc == 0x10F018u) {
        ctx->pc = 0x10F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F014u;
        // 0x10f018: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F01Cu;
        goto label_10f01c;
    }
    ctx->pc = 0x10F014u;
    {
        const bool branch_taken_0x10f014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F014u;
        // 0x10f018: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f014) {
            ctx->pc = 0x10F03Cu;
            goto label_10f03c;
        }
    }
    ctx->pc = 0x10F01Cu;
label_10f01c:
    // 0x10f01c: 0x64040008  daddiu      $a0, $zero, 0x8
    ctx->pc = 0x10f01cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_10f020:
    // 0x10f020: 0xae230228  sw          $v1, 0x228($s1)
    ctx->pc = 0x10f020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 3));
label_10f024:
    // 0x10f024: 0x92250231  lbu         $a1, 0x231($s1)
    ctx->pc = 0x10f024u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10f028:
    // 0x10f028: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_10f02c:
    // 0x10f02c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10f030:
    // 0x10f030: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10f034:
    // 0x10f034: 0x10000035  b           . + 4 + (0x35 << 2)
label_10f038:
    if (ctx->pc == 0x10F038u) {
        ctx->pc = 0x10F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F034u;
        // 0x10f038: 0xa2230231  sb          $v1, 0x231($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F03Cu;
        goto label_10f03c;
    }
    ctx->pc = 0x10F034u;
    {
        const bool branch_taken_0x10f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F034u;
        // 0x10f038: 0xa2230231  sb          $v1, 0x231($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f034) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10F03Cu;
label_10f03c:
    // 0x10f03c: 0x92230230  lbu         $v1, 0x230($s1)
    ctx->pc = 0x10f03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_10f040:
    // 0x10f040: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10f040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_10f044:
    // 0x10f044: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_10f048:
    if (ctx->pc == 0x10F048u) {
        ctx->pc = 0x10F04Cu;
        goto label_10f04c;
    }
    ctx->pc = 0x10F044u;
    {
        const bool branch_taken_0x10f044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f044) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10F04Cu;
label_10f04c:
    // 0x10f04c: 0x92250231  lbu         $a1, 0x231($s1)
    ctx->pc = 0x10f04cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10f050:
    // 0x10f050: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10f050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_10f054:
    // 0x10f054: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x10f054u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_10f058:
    // 0x10f058: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10f05c:
    // 0x10f05c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10f060:
    // 0x10f060: 0x1000002a  b           . + 4 + (0x2A << 2)
label_10f064:
    if (ctx->pc == 0x10F064u) {
        ctx->pc = 0x10F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F060u;
        // 0x10f064: 0xa2230231  sb          $v1, 0x231($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F068u;
        goto label_10f068;
    }
    ctx->pc = 0x10F060u;
    {
        const bool branch_taken_0x10f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F060u;
        // 0x10f064: 0xa2230231  sb          $v1, 0x231($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f060) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10F068u;
label_10f068:
    // 0x10f068: 0x922a0230  lbu         $t2, 0x230($s1)
    ctx->pc = 0x10f068u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_10f06c:
    // 0x10f06c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_10f070:
    // 0x10f070: 0x64090008  daddiu      $t1, $zero, 0x8
    ctx->pc = 0x10f070u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_10f074:
    // 0x10f074: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x10f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_10f078:
    // 0x10f078: 0x30070007  andi        $a3, $zero, 0x7
    ctx->pc = 0x10f078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)7);
label_10f07c:
    // 0x10f07c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x10f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_10f080:
    // 0x10f080: 0x64030010  daddiu      $v1, $zero, 0x10
    ctx->pc = 0x10f080u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
label_10f084:
    // 0x10f084: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x10f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_10f088:
    // 0x10f088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f08c:
    // 0x10f08c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x10f08cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_10f090:
    // 0x10f090: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x10f090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_10f094:
    // 0x10f094: 0xa2280230  sb          $t0, 0x230($s1)
    ctx->pc = 0x10f094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 8));
label_10f098:
    // 0x10f098: 0x92280230  lbu         $t0, 0x230($s1)
    ctx->pc = 0x10f098u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_10f09c:
    // 0x10f09c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x10f09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_10f0a0:
    // 0x10f0a0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x10f0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_10f0a4:
    // 0x10f0a4: 0xa2240230  sb          $a0, 0x230($s1)
    ctx->pc = 0x10f0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 4));
label_10f0a8:
    // 0x10f0a8: 0x92240230  lbu         $a0, 0x230($s1)
    ctx->pc = 0x10f0a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_10f0ac:
    // 0x10f0ac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_10f0b0:
    // 0x10f0b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_10f0b4:
    // 0x10f0b4: 0xa2220230  sb          $v0, 0x230($s1)
    ctx->pc = 0x10f0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 560), (uint8_t)GPR_U32(ctx, 2));
label_10f0b8:
    // 0x10f0b8: 0x8e230224  lw          $v1, 0x224($s1)
    ctx->pc = 0x10f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_10f0bc:
    // 0x10f0bc: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10f0c0:
    // 0x10f0c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10f0c4:
    // 0x10f0c4: 0xc0465f0  jal         func_1197C0
label_10f0c8:
    if (ctx->pc == 0x10F0C8u) {
        ctx->pc = 0x10F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C4u;
        // 0x10f0c8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0CCu;
        goto label_10f0cc;
    }
    ctx->pc = 0x10F0C4u;
    SET_GPR_U32(ctx, 31, 0x10F0CCu);
    ctx->pc = 0x10F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0C4u;
    // 0x10f0c8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x10F0C4u, 0x10F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0CCu;
label_10f0cc:
    // 0x10f0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f0d0:
    // 0x10f0d0: 0xc042118  jal         func_108460
label_10f0d4:
    if (ctx->pc == 0x10F0D4u) {
        ctx->pc = 0x10F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D0u;
        // 0x10f0d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0D8u;
        goto label_10f0d8;
    }
    ctx->pc = 0x10F0D0u;
    SET_GPR_U32(ctx, 31, 0x10F0D8u);
    ctx->pc = 0x10F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0D0u;
    // 0x10f0d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x10F0D0u, 0x10F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0D8u;
label_10f0d8:
    // 0x10f0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f0dc:
    // 0x10f0dc: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x10f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
label_10f0e0:
    // 0x10f0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10f0e4:
    // 0x10f0e4: 0xc042570  jal         func_1095C0
label_10f0e8:
    if (ctx->pc == 0x10F0E8u) {
        ctx->pc = 0x10F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0E4u;
        // 0x10f0e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F0ECu;
        goto label_10f0ec;
    }
    ctx->pc = 0x10F0E4u;
    SET_GPR_U32(ctx, 31, 0x10F0ECu);
    ctx->pc = 0x10F0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0E4u;
    // 0x10f0e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10F0E4u, 0x10F0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0ECu;
label_10f0ec:
    // 0x10f0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10f0f0:
    // 0x10f0f0: 0x6404000a  daddiu      $a0, $zero, 0xA
    ctx->pc = 0x10f0f0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
label_10f0f4:
    // 0x10f0f4: 0xa22301d3  sb          $v1, 0x1D3($s1)
    ctx->pc = 0x10f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 3));
label_10f0f8:
    // 0x10f0f8: 0x92250231  lbu         $a1, 0x231($s1)
    ctx->pc = 0x10f0f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10f0fc:
    // 0x10f0fc: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x10f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_10f100:
    // 0x10f100: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10f100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10f104:
    // 0x10f104: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10f104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10f108:
    // 0x10f108: 0xa2230231  sb          $v1, 0x231($s1)
    ctx->pc = 0x10f108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 561), (uint8_t)GPR_U32(ctx, 3));
label_10f10c:
    // 0x10f10c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10f110:
    // 0x10f110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10f110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10f114:
    // 0x10f114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10f118:
    // 0x10f118: 0x3e00008  jr          $ra
label_10f11c:
    if (ctx->pc == 0x10F11Cu) {
        ctx->pc = 0x10F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F118u;
        // 0x10f11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F120u;
        goto label_fallthrough_0x10f118;
    }
    ctx->pc = 0x10F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F118u;
        // 0x10f11c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10f118:
    ctx->pc = 0x10F120u;
}
