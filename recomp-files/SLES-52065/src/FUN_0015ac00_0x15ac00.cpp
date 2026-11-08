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

// Function: FUN_0015ac00
// Address: 0x15ac00 - 0x15af9c
void FUN_0015ac00_0x15ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ac00_0x15ac00");
#endif

    switch (ctx->pc) {
        case 0x15ac00u: goto label_15ac00;
        case 0x15ac04u: goto label_15ac04;
        case 0x15ac08u: goto label_15ac08;
        case 0x15ac0cu: goto label_15ac0c;
        case 0x15ac10u: goto label_15ac10;
        case 0x15ac14u: goto label_15ac14;
        case 0x15ac18u: goto label_15ac18;
        case 0x15ac1cu: goto label_15ac1c;
        case 0x15ac20u: goto label_15ac20;
        case 0x15ac24u: goto label_15ac24;
        case 0x15ac28u: goto label_15ac28;
        case 0x15ac2cu: goto label_15ac2c;
        case 0x15ac30u: goto label_15ac30;
        case 0x15ac34u: goto label_15ac34;
        case 0x15ac38u: goto label_15ac38;
        case 0x15ac3cu: goto label_15ac3c;
        case 0x15ac40u: goto label_15ac40;
        case 0x15ac44u: goto label_15ac44;
        case 0x15ac48u: goto label_15ac48;
        case 0x15ac4cu: goto label_15ac4c;
        case 0x15ac50u: goto label_15ac50;
        case 0x15ac54u: goto label_15ac54;
        case 0x15ac58u: goto label_15ac58;
        case 0x15ac5cu: goto label_15ac5c;
        case 0x15ac60u: goto label_15ac60;
        case 0x15ac64u: goto label_15ac64;
        case 0x15ac68u: goto label_15ac68;
        case 0x15ac6cu: goto label_15ac6c;
        case 0x15ac70u: goto label_15ac70;
        case 0x15ac74u: goto label_15ac74;
        case 0x15ac78u: goto label_15ac78;
        case 0x15ac7cu: goto label_15ac7c;
        case 0x15ac80u: goto label_15ac80;
        case 0x15ac84u: goto label_15ac84;
        case 0x15ac88u: goto label_15ac88;
        case 0x15ac8cu: goto label_15ac8c;
        case 0x15ac90u: goto label_15ac90;
        case 0x15ac94u: goto label_15ac94;
        case 0x15ac98u: goto label_15ac98;
        case 0x15ac9cu: goto label_15ac9c;
        case 0x15aca0u: goto label_15aca0;
        case 0x15aca4u: goto label_15aca4;
        case 0x15aca8u: goto label_15aca8;
        case 0x15acacu: goto label_15acac;
        case 0x15acb0u: goto label_15acb0;
        case 0x15acb4u: goto label_15acb4;
        case 0x15acb8u: goto label_15acb8;
        case 0x15acbcu: goto label_15acbc;
        case 0x15acc0u: goto label_15acc0;
        case 0x15acc4u: goto label_15acc4;
        case 0x15acc8u: goto label_15acc8;
        case 0x15acccu: goto label_15accc;
        case 0x15acd0u: goto label_15acd0;
        case 0x15acd4u: goto label_15acd4;
        case 0x15acd8u: goto label_15acd8;
        case 0x15acdcu: goto label_15acdc;
        case 0x15ace0u: goto label_15ace0;
        case 0x15ace4u: goto label_15ace4;
        case 0x15ace8u: goto label_15ace8;
        case 0x15acecu: goto label_15acec;
        case 0x15acf0u: goto label_15acf0;
        case 0x15acf4u: goto label_15acf4;
        case 0x15acf8u: goto label_15acf8;
        case 0x15acfcu: goto label_15acfc;
        case 0x15ad00u: goto label_15ad00;
        case 0x15ad04u: goto label_15ad04;
        case 0x15ad08u: goto label_15ad08;
        case 0x15ad0cu: goto label_15ad0c;
        case 0x15ad10u: goto label_15ad10;
        case 0x15ad14u: goto label_15ad14;
        case 0x15ad18u: goto label_15ad18;
        case 0x15ad1cu: goto label_15ad1c;
        case 0x15ad20u: goto label_15ad20;
        case 0x15ad24u: goto label_15ad24;
        case 0x15ad28u: goto label_15ad28;
        case 0x15ad2cu: goto label_15ad2c;
        case 0x15ad30u: goto label_15ad30;
        case 0x15ad34u: goto label_15ad34;
        case 0x15ad38u: goto label_15ad38;
        case 0x15ad3cu: goto label_15ad3c;
        case 0x15ad40u: goto label_15ad40;
        case 0x15ad44u: goto label_15ad44;
        case 0x15ad48u: goto label_15ad48;
        case 0x15ad4cu: goto label_15ad4c;
        case 0x15ad50u: goto label_15ad50;
        case 0x15ad54u: goto label_15ad54;
        case 0x15ad58u: goto label_15ad58;
        case 0x15ad5cu: goto label_15ad5c;
        case 0x15ad60u: goto label_15ad60;
        case 0x15ad64u: goto label_15ad64;
        case 0x15ad68u: goto label_15ad68;
        case 0x15ad6cu: goto label_15ad6c;
        case 0x15ad70u: goto label_15ad70;
        case 0x15ad74u: goto label_15ad74;
        case 0x15ad78u: goto label_15ad78;
        case 0x15ad7cu: goto label_15ad7c;
        case 0x15ad80u: goto label_15ad80;
        case 0x15ad84u: goto label_15ad84;
        case 0x15ad88u: goto label_15ad88;
        case 0x15ad8cu: goto label_15ad8c;
        case 0x15ad90u: goto label_15ad90;
        case 0x15ad94u: goto label_15ad94;
        case 0x15ad98u: goto label_15ad98;
        case 0x15ad9cu: goto label_15ad9c;
        case 0x15ada0u: goto label_15ada0;
        case 0x15ada4u: goto label_15ada4;
        case 0x15ada8u: goto label_15ada8;
        case 0x15adacu: goto label_15adac;
        case 0x15adb0u: goto label_15adb0;
        case 0x15adb4u: goto label_15adb4;
        case 0x15adb8u: goto label_15adb8;
        case 0x15adbcu: goto label_15adbc;
        case 0x15adc0u: goto label_15adc0;
        case 0x15adc4u: goto label_15adc4;
        case 0x15adc8u: goto label_15adc8;
        case 0x15adccu: goto label_15adcc;
        case 0x15add0u: goto label_15add0;
        case 0x15add4u: goto label_15add4;
        case 0x15add8u: goto label_15add8;
        case 0x15addcu: goto label_15addc;
        case 0x15ade0u: goto label_15ade0;
        case 0x15ade4u: goto label_15ade4;
        case 0x15ade8u: goto label_15ade8;
        case 0x15adecu: goto label_15adec;
        case 0x15adf0u: goto label_15adf0;
        case 0x15adf4u: goto label_15adf4;
        case 0x15adf8u: goto label_15adf8;
        case 0x15adfcu: goto label_15adfc;
        case 0x15ae00u: goto label_15ae00;
        case 0x15ae04u: goto label_15ae04;
        case 0x15ae08u: goto label_15ae08;
        case 0x15ae0cu: goto label_15ae0c;
        case 0x15ae10u: goto label_15ae10;
        case 0x15ae14u: goto label_15ae14;
        case 0x15ae18u: goto label_15ae18;
        case 0x15ae1cu: goto label_15ae1c;
        case 0x15ae20u: goto label_15ae20;
        case 0x15ae24u: goto label_15ae24;
        case 0x15ae28u: goto label_15ae28;
        case 0x15ae2cu: goto label_15ae2c;
        case 0x15ae30u: goto label_15ae30;
        case 0x15ae34u: goto label_15ae34;
        case 0x15ae38u: goto label_15ae38;
        case 0x15ae3cu: goto label_15ae3c;
        case 0x15ae40u: goto label_15ae40;
        case 0x15ae44u: goto label_15ae44;
        case 0x15ae48u: goto label_15ae48;
        case 0x15ae4cu: goto label_15ae4c;
        case 0x15ae50u: goto label_15ae50;
        case 0x15ae54u: goto label_15ae54;
        case 0x15ae58u: goto label_15ae58;
        case 0x15ae5cu: goto label_15ae5c;
        case 0x15ae60u: goto label_15ae60;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae68u: goto label_15ae68;
        case 0x15ae6cu: goto label_15ae6c;
        case 0x15ae70u: goto label_15ae70;
        case 0x15ae74u: goto label_15ae74;
        case 0x15ae78u: goto label_15ae78;
        case 0x15ae7cu: goto label_15ae7c;
        case 0x15ae80u: goto label_15ae80;
        case 0x15ae84u: goto label_15ae84;
        case 0x15ae88u: goto label_15ae88;
        case 0x15ae8cu: goto label_15ae8c;
        case 0x15ae90u: goto label_15ae90;
        case 0x15ae94u: goto label_15ae94;
        case 0x15ae98u: goto label_15ae98;
        case 0x15ae9cu: goto label_15ae9c;
        case 0x15aea0u: goto label_15aea0;
        case 0x15aea4u: goto label_15aea4;
        case 0x15aea8u: goto label_15aea8;
        case 0x15aeacu: goto label_15aeac;
        case 0x15aeb0u: goto label_15aeb0;
        case 0x15aeb4u: goto label_15aeb4;
        case 0x15aeb8u: goto label_15aeb8;
        case 0x15aebcu: goto label_15aebc;
        case 0x15aec0u: goto label_15aec0;
        case 0x15aec4u: goto label_15aec4;
        case 0x15aec8u: goto label_15aec8;
        case 0x15aeccu: goto label_15aecc;
        case 0x15aed0u: goto label_15aed0;
        case 0x15aed4u: goto label_15aed4;
        case 0x15aed8u: goto label_15aed8;
        case 0x15aedcu: goto label_15aedc;
        case 0x15aee0u: goto label_15aee0;
        case 0x15aee4u: goto label_15aee4;
        case 0x15aee8u: goto label_15aee8;
        case 0x15aeecu: goto label_15aeec;
        case 0x15aef0u: goto label_15aef0;
        case 0x15aef4u: goto label_15aef4;
        case 0x15aef8u: goto label_15aef8;
        case 0x15aefcu: goto label_15aefc;
        case 0x15af00u: goto label_15af00;
        case 0x15af04u: goto label_15af04;
        case 0x15af08u: goto label_15af08;
        case 0x15af0cu: goto label_15af0c;
        case 0x15af10u: goto label_15af10;
        case 0x15af14u: goto label_15af14;
        case 0x15af18u: goto label_15af18;
        case 0x15af1cu: goto label_15af1c;
        case 0x15af20u: goto label_15af20;
        case 0x15af24u: goto label_15af24;
        case 0x15af28u: goto label_15af28;
        case 0x15af2cu: goto label_15af2c;
        case 0x15af30u: goto label_15af30;
        case 0x15af34u: goto label_15af34;
        case 0x15af38u: goto label_15af38;
        case 0x15af3cu: goto label_15af3c;
        case 0x15af40u: goto label_15af40;
        case 0x15af44u: goto label_15af44;
        case 0x15af48u: goto label_15af48;
        case 0x15af4cu: goto label_15af4c;
        case 0x15af50u: goto label_15af50;
        case 0x15af54u: goto label_15af54;
        case 0x15af58u: goto label_15af58;
        case 0x15af5cu: goto label_15af5c;
        case 0x15af60u: goto label_15af60;
        case 0x15af64u: goto label_15af64;
        case 0x15af68u: goto label_15af68;
        case 0x15af6cu: goto label_15af6c;
        case 0x15af70u: goto label_15af70;
        case 0x15af74u: goto label_15af74;
        case 0x15af78u: goto label_15af78;
        case 0x15af7cu: goto label_15af7c;
        case 0x15af80u: goto label_15af80;
        case 0x15af84u: goto label_15af84;
        case 0x15af88u: goto label_15af88;
        case 0x15af8cu: goto label_15af8c;
        case 0x15af90u: goto label_15af90;
        case 0x15af94u: goto label_15af94;
        case 0x15af98u: goto label_15af98;
        default: break;
    }

    ctx->pc = 0x15ac00u;

label_15ac00:
    // 0x15ac00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15ac04:
    // 0x15ac04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15ac08:
    // 0x15ac08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ac08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ac0c:
    // 0x15ac0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15ac10:
    // 0x15ac10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ac14:
    // 0x15ac14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15ac14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ac18:
    // 0x15ac18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ac1c:
    // 0x15ac1c: 0xc4a102f0  lwc1        $f1, 0x2F0($a1)
    ctx->pc = 0x15ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ac20:
    // 0x15ac20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15ac20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ac24:
    // 0x15ac24: 0x0  nop
    ctx->pc = 0x15ac24u;
    // NOP
label_15ac28:
    // 0x15ac28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_15ac2c:
    if (ctx->pc == 0x15AC2Cu) {
        ctx->pc = 0x15AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC28u;
        // 0x15ac2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC30u;
        goto label_15ac30;
    }
    ctx->pc = 0x15AC28u;
    {
        const bool branch_taken_0x15ac28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC28u;
        // 0x15ac2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac28) {
            ctx->pc = 0x15AC38u;
            goto label_15ac38;
        }
    }
    ctx->pc = 0x15AC30u;
label_15ac30:
    // 0x15ac30: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_15ac34:
    if (ctx->pc == 0x15AC34u) {
        ctx->pc = 0x15AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC30u;
        // 0x15ac34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC38u;
        goto label_15ac38;
    }
    ctx->pc = 0x15AC30u;
    {
        const bool branch_taken_0x15ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC30u;
        // 0x15ac34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac30) {
            ctx->pc = 0x15AF84u;
            goto label_15af84;
        }
    }
    ctx->pc = 0x15AC38u;
label_15ac38:
    // 0x15ac38: 0x862201f6  lh          $v0, 0x1F6($s1)
    ctx->pc = 0x15ac38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 502)));
label_15ac3c:
    // 0x15ac3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15ac40:
    // 0x15ac40: 0xa62201f6  sh          $v0, 0x1F6($s1)
    ctx->pc = 0x15ac40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 2));
label_15ac44:
    // 0x15ac44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15ac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_15ac48:
    // 0x15ac48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ac48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15ac4c:
    // 0x15ac4c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x15ac4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15ac50:
    // 0x15ac50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15ac54:
    if (ctx->pc == 0x15AC54u) {
        ctx->pc = 0x15AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC50u;
        // 0x15ac54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC58u;
        goto label_15ac58;
    }
    ctx->pc = 0x15AC50u;
    {
        const bool branch_taken_0x15ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC50u;
        // 0x15ac54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac50) {
            ctx->pc = 0x15AC60u;
            goto label_15ac60;
        }
    }
    ctx->pc = 0x15AC58u;
label_15ac58:
    // 0x15ac58: 0x100000cb  b           . + 4 + (0xCB << 2)
label_15ac5c:
    if (ctx->pc == 0x15AC5Cu) {
        ctx->pc = 0x15AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC58u;
        // 0x15ac5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC60u;
        goto label_15ac60;
    }
    ctx->pc = 0x15AC58u;
    {
        const bool branch_taken_0x15ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC58u;
        // 0x15ac5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac58) {
            ctx->pc = 0x15AF88u;
            goto label_15af88;
        }
    }
    ctx->pc = 0x15AC60u;
label_15ac60:
    // 0x15ac60: 0x924201f6  lbu         $v0, 0x1F6($s2)
    ctx->pc = 0x15ac60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 502)));
label_15ac64:
    // 0x15ac64: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_15ac68:
    if (ctx->pc == 0x15AC68u) {
        ctx->pc = 0x15AC6Cu;
        goto label_15ac6c;
    }
    ctx->pc = 0x15AC64u;
    {
        const bool branch_taken_0x15ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ac64) {
            ctx->pc = 0x15ACB4u;
            goto label_15acb4;
        }
    }
    ctx->pc = 0x15AC6Cu;
label_15ac6c:
    // 0x15ac6c: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x15ac6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
label_15ac70:
    // 0x15ac70: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_15ac74:
    // 0x15ac74: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15ac74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_15ac78:
    // 0x15ac78: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15ac7c:
    // 0x15ac7c: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x15ac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15ac80:
    // 0x15ac80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15ac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15ac84:
    // 0x15ac84: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15ac84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15ac88:
    // 0x15ac88: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15ac8c:
    // 0x15ac8c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15ac8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ac90:
    // 0x15ac90: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15ac90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15ac94:
    // 0x15ac94: 0x0  nop
    ctx->pc = 0x15ac94u;
    // NOP
label_15ac98:
    // 0x15ac98: 0x0  nop
    ctx->pc = 0x15ac98u;
    // NOP
label_15ac9c:
    // 0x15ac9c: 0x1010  mfhi        $v0
    ctx->pc = 0x15ac9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15aca0:
    // 0x15aca0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_15aca4:
    // 0x15aca4: 0xc054aac  jal         func_152AB0
label_15aca8:
    if (ctx->pc == 0x15ACA8u) {
        ctx->pc = 0x15ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA4u;
        // 0x15aca8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACACu;
        goto label_15acac;
    }
    ctx->pc = 0x15ACA4u;
    SET_GPR_U32(ctx, 31, 0x15ACACu);
    ctx->pc = 0x15ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACA4u;
    // 0x15aca8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152AB0u, 0x15ACA4u, 0x15ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACACu;
label_15acac:
    // 0x15acac: 0x10000012  b           . + 4 + (0x12 << 2)
label_15acb0:
    if (ctx->pc == 0x15ACB0u) {
        ctx->pc = 0x15ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACACu;
        // 0x15acb0: 0xae220338  sw          $v0, 0x338($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACB4u;
        goto label_15acb4;
    }
    ctx->pc = 0x15ACACu;
    {
        const bool branch_taken_0x15acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACACu;
        // 0x15acb0: 0xae220338  sw          $v0, 0x338($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acac) {
            ctx->pc = 0x15ACF8u;
            goto label_15acf8;
        }
    }
    ctx->pc = 0x15ACB4u;
label_15acb4:
    // 0x15acb4: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x15acb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
label_15acb8:
    // 0x15acb8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_15acbc:
    // 0x15acbc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_15acc0:
    // 0x15acc0: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x15acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15acc4:
    // 0x15acc4: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x15acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15acc8:
    // 0x15acc8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15acc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15accc:
    // 0x15accc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15acccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15acd0:
    // 0x15acd0: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x15acd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15acd4:
    // 0x15acd4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15acd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15acd8:
    // 0x15acd8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15acd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15acdc:
    // 0x15acdc: 0x0  nop
    ctx->pc = 0x15acdcu;
    // NOP
label_15ace0:
    // 0x15ace0: 0x0  nop
    ctx->pc = 0x15ace0u;
    // NOP
label_15ace4:
    // 0x15ace4: 0x1010  mfhi        $v0
    ctx->pc = 0x15ace4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15ace8:
    // 0x15ace8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_15acec:
    // 0x15acec: 0xc054ae0  jal         func_152B80
label_15acf0:
    if (ctx->pc == 0x15ACF0u) {
        ctx->pc = 0x15ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACECu;
        // 0x15acf0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACF4u;
        goto label_15acf4;
    }
    ctx->pc = 0x15ACECu;
    SET_GPR_U32(ctx, 31, 0x15ACF4u);
    ctx->pc = 0x15ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ACECu;
    // 0x15acf0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152B80u, 0x15ACECu, 0x15ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ACF4u;
label_15acf4:
    // 0x15acf4: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x15acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
label_15acf8:
    // 0x15acf8: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x15acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_15acfc:
    // 0x15acfc: 0x480009f  bltz        $a0, . + 4 + (0x9F << 2)
label_15ad00:
    if (ctx->pc == 0x15AD00u) {
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD04u;
        goto label_15ad04;
    }
    ctx->pc = 0x15ACFCu;
    {
        const bool branch_taken_0x15acfc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acfc) {
            ctx->pc = 0x15AF7Cu;
            goto label_15af7c;
        }
    }
    ctx->pc = 0x15AD04u;
label_15ad04:
    // 0x15ad04: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x15ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15ad08:
    // 0x15ad08: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15ad0c:
    // 0x15ad0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ad10:
    // 0x15ad10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15ad14:
    // 0x15ad14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ad18:
    // 0x15ad18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15ad18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15ad1c:
    // 0x15ad1c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15ad1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15ad20:
    // 0x15ad20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ad20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ad24:
    // 0x15ad24: 0x26290300  addiu       $t1, $s1, 0x300
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15ad28:
    // 0x15ad28: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x15ad28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ad2c:
    // 0x15ad2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15ad30:
    // 0x15ad30: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x15ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
label_15ad34:
    // 0x15ad34: 0x8e24033c  lw          $a0, 0x33C($s1)
    ctx->pc = 0x15ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15ad38:
    // 0x15ad38: 0xc054c30  jal         func_1530C0
label_15ad3c:
    if (ctx->pc == 0x15AD3Cu) {
        ctx->pc = 0x15AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD38u;
        // 0x15ad3c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD40u;
        goto label_15ad40;
    }
    ctx->pc = 0x15AD38u;
    SET_GPR_U32(ctx, 31, 0x15AD40u);
    ctx->pc = 0x15AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD38u;
    // 0x15ad3c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530C0u, 0x15AD38u, 0x15AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD40u;
label_15ad40:
    // 0x15ad40: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15ad44:
    // 0x15ad44: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_15ad48:
    // 0x15ad48: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x15ad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_15ad4c:
    // 0x15ad4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ad4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ad50:
    // 0x15ad50: 0x0  nop
    ctx->pc = 0x15ad50u;
    // NOP
label_15ad54:
    // 0x15ad54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15ad54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_15ad58:
    // 0x15ad58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15ad58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ad5c:
    // 0x15ad5c: 0x0  nop
    ctx->pc = 0x15ad5cu;
    // NOP
label_15ad60:
    // 0x15ad60: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_15ad64:
    if (ctx->pc == 0x15AD64u) {
        ctx->pc = 0x15AD68u;
        goto label_15ad68;
    }
    ctx->pc = 0x15AD60u;
    {
        const bool branch_taken_0x15ad60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ad60) {
            ctx->pc = 0x15AE14u;
            goto label_15ae14;
        }
    }
    ctx->pc = 0x15AD68u;
label_15ad68:
    // 0x15ad68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15ad68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ad6c:
    // 0x15ad6c: 0x0  nop
    ctx->pc = 0x15ad6cu;
    // NOP
label_15ad70:
    // 0x15ad70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15ad70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ad74:
    // 0x15ad74: 0x0  nop
    ctx->pc = 0x15ad74u;
    // NOP
label_15ad78:
    // 0x15ad78: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_15ad7c:
    if (ctx->pc == 0x15AD7Cu) {
        ctx->pc = 0x15AD80u;
        goto label_15ad80;
    }
    ctx->pc = 0x15AD78u;
    {
        const bool branch_taken_0x15ad78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ad78) {
            ctx->pc = 0x15AE14u;
            goto label_15ae14;
        }
    }
    ctx->pc = 0x15AD80u;
label_15ad80:
    // 0x15ad80: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15ad84:
    // 0x15ad84: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x15ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_15ad88:
    // 0x15ad88: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x15ad88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_15ad8c:
    // 0x15ad8c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_15ad90:
    if (ctx->pc == 0x15AD90u) {
        ctx->pc = 0x15AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD8Cu;
        // 0x15ad90: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD94u;
        goto label_15ad94;
    }
    ctx->pc = 0x15AD8Cu;
    {
        const bool branch_taken_0x15ad8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD8Cu;
        // 0x15ad90: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad8c) {
            ctx->pc = 0x15ADECu;
            goto label_15adec;
        }
    }
    ctx->pc = 0x15AD94u;
label_15ad94:
    // 0x15ad94: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_15ad98:
    if (ctx->pc == 0x15AD98u) {
        ctx->pc = 0x15AD9Cu;
        goto label_15ad9c;
    }
    ctx->pc = 0x15AD94u;
    {
        const bool branch_taken_0x15ad94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ad94) {
            ctx->pc = 0x15ADECu;
            goto label_15adec;
        }
    }
    ctx->pc = 0x15AD9Cu;
label_15ad9c:
    // 0x15ad9c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x15ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_15ada0:
    // 0x15ada0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_15ada4:
    if (ctx->pc == 0x15ADA4u) {
        ctx->pc = 0x15ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADA0u;
        // 0x15ada4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADA8u;
        goto label_15ada8;
    }
    ctx->pc = 0x15ADA0u;
    {
        const bool branch_taken_0x15ada0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADA0u;
        // 0x15ada4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ada0) {
            ctx->pc = 0x15ADECu;
            goto label_15adec;
        }
    }
    ctx->pc = 0x15ADA8u;
label_15ada8:
    // 0x15ada8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15adac:
    // 0x15adac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15adacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15adb0:
    // 0x15adb0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15adb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15adb4:
    // 0x15adb4: 0xc056a64  jal         func_15A990
label_15adb8:
    if (ctx->pc == 0x15ADB8u) {
        ctx->pc = 0x15ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADB4u;
        // 0x15adb8: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADBCu;
        goto label_15adbc;
    }
    ctx->pc = 0x15ADB4u;
    SET_GPR_U32(ctx, 31, 0x15ADBCu);
    ctx->pc = 0x15ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADB4u;
    // 0x15adb8: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A990u, 0x15ADB4u, 0x15ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADBCu;
label_15adbc:
    // 0x15adbc: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15adbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15adc0:
    // 0x15adc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15adc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15adc4:
    // 0x15adc4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15adc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15adc8:
    // 0x15adc8: 0x320f809  jalr        $t9
label_15adcc:
    if (ctx->pc == 0x15ADCCu) {
        ctx->pc = 0x15ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC8u;
        // 0x15adcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADD0u;
        goto label_15add0;
    }
    ctx->pc = 0x15ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15ADD0u);
        ctx->pc = 0x15ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADC8u;
        // 0x15adcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADC8u, 0x15ADD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15ADD0u;
label_15add0:
    // 0x15add0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15add0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15add4:
    // 0x15add4: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_15add8:
    if (ctx->pc == 0x15ADD8u) {
        ctx->pc = 0x15ADDCu;
        goto label_15addc;
    }
    ctx->pc = 0x15ADD4u;
    {
        const bool branch_taken_0x15add4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x15add4) {
            ctx->pc = 0x15ADE4u;
            goto label_15ade4;
        }
    }
    ctx->pc = 0x15ADDCu;
label_15addc:
    // 0x15addc: 0x10000069  b           . + 4 + (0x69 << 2)
label_15ade0:
    if (ctx->pc == 0x15ADE0u) {
        ctx->pc = 0x15ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADDCu;
        // 0x15ade0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADE4u;
        goto label_15ade4;
    }
    ctx->pc = 0x15ADDCu;
    {
        const bool branch_taken_0x15addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADDCu;
        // 0x15ade0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15addc) {
            ctx->pc = 0x15AF84u;
            goto label_15af84;
        }
    }
    ctx->pc = 0x15ADE4u;
label_15ade4:
    // 0x15ade4: 0x10000066  b           . + 4 + (0x66 << 2)
label_15ade8:
    if (ctx->pc == 0x15ADE8u) {
        ctx->pc = 0x15ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADE4u;
        // 0x15ade8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADECu;
        goto label_15adec;
    }
    ctx->pc = 0x15ADE4u;
    {
        const bool branch_taken_0x15ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADE4u;
        // 0x15ade8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ade4) {
            ctx->pc = 0x15AF80u;
            goto label_15af80;
        }
    }
    ctx->pc = 0x15ADECu;
label_15adec:
    // 0x15adec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15adf0:
    // 0x15adf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15adf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15adf4:
    // 0x15adf4: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15adf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15adf8:
    // 0x15adf8: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x15adf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15adfc:
    // 0x15adfc: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x15adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15ae00:
    // 0x15ae00: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x15ae00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_15ae04:
    // 0x15ae04: 0x320f809  jalr        $t9
label_15ae08:
    if (ctx->pc == 0x15AE08u) {
        ctx->pc = 0x15AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE04u;
        // 0x15ae08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE0Cu;
        goto label_15ae0c;
    }
    ctx->pc = 0x15AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15AE0Cu);
        ctx->pc = 0x15AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE04u;
        // 0x15ae08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE04u, 0x15AE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AE0Cu;
label_15ae0c:
    // 0x15ae0c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_15ae10:
    if (ctx->pc == 0x15AE10u) {
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE14u;
        goto label_15ae14;
    }
    ctx->pc = 0x15AE0Cu;
    {
        const bool branch_taken_0x15ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae0c) {
            ctx->pc = 0x15AF80u;
            goto label_15af80;
        }
    }
    ctx->pc = 0x15AE14u;
label_15ae14:
    // 0x15ae14: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15ae14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
label_15ae18:
    // 0x15ae18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15ae1c:
    // 0x15ae1c: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15ae20:
    // 0x15ae20: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15ae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15ae24:
    // 0x15ae24: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ae28:
    // 0x15ae28: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x15ae28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_15ae2c:
    // 0x15ae2c: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x15ae2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_15ae30:
    // 0x15ae30: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x15ae30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_15ae34:
    // 0x15ae34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15ae34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_15ae38:
    // 0x15ae38: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15ae38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ae3c:
    // 0x15ae3c: 0x0  nop
    ctx->pc = 0x15ae3cu;
    // NOP
label_15ae40:
    // 0x15ae40: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_15ae44:
    if (ctx->pc == 0x15AE44u) {
        ctx->pc = 0x15AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE40u;
        // 0x15ae44: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE48u;
        goto label_15ae48;
    }
    ctx->pc = 0x15AE40u;
    {
        const bool branch_taken_0x15ae40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE40u;
        // 0x15ae44: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae40) {
            ctx->pc = 0x15AF80u;
            goto label_15af80;
        }
    }
    ctx->pc = 0x15AE48u;
label_15ae48:
    // 0x15ae48: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15ae48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15ae4c:
    // 0x15ae4c: 0x0  nop
    ctx->pc = 0x15ae4cu;
    // NOP
label_15ae50:
    // 0x15ae50: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15ae50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ae54:
    // 0x15ae54: 0x0  nop
    ctx->pc = 0x15ae54u;
    // NOP
label_15ae58:
    // 0x15ae58: 0x45010049  bc1t        . + 4 + (0x49 << 2)
label_15ae5c:
    if (ctx->pc == 0x15AE5Cu) {
        ctx->pc = 0x15AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE58u;
        // 0x15ae5c: 0x26230300  addiu       $v1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE60u;
        goto label_15ae60;
    }
    ctx->pc = 0x15AE58u;
    {
        const bool branch_taken_0x15ae58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE58u;
        // 0x15ae5c: 0x26230300  addiu       $v1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae58) {
            ctx->pc = 0x15AF80u;
            goto label_15af80;
        }
    }
    ctx->pc = 0x15AE60u;
label_15ae60:
    // 0x15ae60: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x15ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15ae64:
    // 0x15ae64: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15ae64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15ae68:
    // 0x15ae68: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15ae68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15ae6c:
    // 0x15ae6c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x15ae6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15ae70:
    // 0x15ae70: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15ae70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15ae74:
    // 0x15ae74: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15ae74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15ae78:
    // 0x15ae78: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15ae78u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15ae7c:
    // 0x15ae7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15ae7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15ae80:
    // 0x15ae80: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x15ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ae84:
    // 0x15ae84: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x15ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ae88:
    // 0x15ae88: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x15ae88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_15ae8c:
    // 0x15ae8c: 0x0  nop
    ctx->pc = 0x15ae8cu;
    // NOP
label_15ae90:
    // 0x15ae90: 0x0  nop
    ctx->pc = 0x15ae90u;
    // NOP
label_15ae94:
    // 0x15ae94: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x15ae94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15ae98:
    // 0x15ae98: 0x0  nop
    ctx->pc = 0x15ae98u;
    // NOP
label_15ae9c:
    // 0x15ae9c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_15aea0:
    if (ctx->pc == 0x15AEA0u) {
        ctx->pc = 0x15AEA4u;
        goto label_15aea4;
    }
    ctx->pc = 0x15AE9Cu;
    {
        const bool branch_taken_0x15ae9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ae9c) {
            ctx->pc = 0x15AEECu;
            goto label_15aeec;
        }
    }
    ctx->pc = 0x15AEA4u;
label_15aea4:
    // 0x15aea4: 0xc7838020  lwc1        $f3, -0x7FE0($gp)
    ctx->pc = 0x15aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15aea8:
    // 0x15aea8: 0xc78080b8  lwc1        $f0, -0x7F48($gp)
    ctx->pc = 0x15aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15aeac:
    // 0x15aeac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15aeacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_15aeb0:
    // 0x15aeb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15aeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15aeb4:
    // 0x15aeb4: 0x0  nop
    ctx->pc = 0x15aeb4u;
    // NOP
label_15aeb8:
    // 0x15aeb8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_15aebc:
    if (ctx->pc == 0x15AEBCu) {
        ctx->pc = 0x15AEC0u;
        goto label_15aec0;
    }
    ctx->pc = 0x15AEB8u;
    {
        const bool branch_taken_0x15aeb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aeb8) {
            ctx->pc = 0x15AEECu;
            goto label_15aeec;
        }
    }
    ctx->pc = 0x15AEC0u;
label_15aec0:
    // 0x15aec0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15aec4:
    // 0x15aec4: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x15aec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15aec8:
    // 0x15aec8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15aec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15aecc:
    // 0x15aecc: 0x0  nop
    ctx->pc = 0x15aeccu;
    // NOP
label_15aed0:
    // 0x15aed0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_15aed4:
    if (ctx->pc == 0x15AED4u) {
        ctx->pc = 0x15AED8u;
        goto label_15aed8;
    }
    ctx->pc = 0x15AED0u;
    {
        const bool branch_taken_0x15aed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15aed0) {
            ctx->pc = 0x15AEECu;
            goto label_15aeec;
        }
    }
    ctx->pc = 0x15AED8u;
label_15aed8:
    // 0x15aed8: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15aedc:
    // 0x15aedc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_15aee0:
    // 0x15aee0: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x15aee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_15aee4:
    // 0x15aee4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_15aee8:
    if (ctx->pc == 0x15AEE8u) {
        ctx->pc = 0x15AEECu;
        goto label_15aeec;
    }
    ctx->pc = 0x15AEE4u;
    {
        const bool branch_taken_0x15aee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15aee4) {
            ctx->pc = 0x15AF30u;
            goto label_15af30;
        }
    }
    ctx->pc = 0x15AEECu;
label_15aeec:
    // 0x15aeec: 0x8e23033c  lw          $v1, 0x33C($s1)
    ctx->pc = 0x15aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15aef0:
    // 0x15aef0: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x15aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_15aef4:
    // 0x15aef4: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x15aef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_15aef8:
    // 0x15aef8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_15aefc:
    if (ctx->pc == 0x15AEFCu) {
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF00u;
        goto label_15af00;
    }
    ctx->pc = 0x15AEF8u;
    {
        const bool branch_taken_0x15aef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEF8u;
        // 0x15aefc: 0x24020099  addiu       $v0, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aef8) {
            ctx->pc = 0x15AF30u;
            goto label_15af30;
        }
    }
    ctx->pc = 0x15AF00u;
label_15af00:
    // 0x15af00: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_15af04:
    if (ctx->pc == 0x15AF04u) {
        ctx->pc = 0x15AF08u;
        goto label_15af08;
    }
    ctx->pc = 0x15AF00u;
    {
        const bool branch_taken_0x15af00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15af00) {
            ctx->pc = 0x15AF30u;
            goto label_15af30;
        }
    }
    ctx->pc = 0x15AF08u;
label_15af08:
    // 0x15af08: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x15af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_15af0c:
    // 0x15af0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_15af10:
    if (ctx->pc == 0x15AF10u) {
        ctx->pc = 0x15AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF0Cu;
        // 0x15af10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF14u;
        goto label_15af14;
    }
    ctx->pc = 0x15AF0Cu;
    {
        const bool branch_taken_0x15af0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF0Cu;
        // 0x15af10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af0c) {
            ctx->pc = 0x15AF30u;
            goto label_15af30;
        }
    }
    ctx->pc = 0x15AF14u;
label_15af14:
    // 0x15af14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15af14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15af18:
    // 0x15af18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15af18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15af1c:
    // 0x15af1c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15af1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15af20:
    // 0x15af20: 0xc056a64  jal         func_15A990
label_15af24:
    if (ctx->pc == 0x15AF24u) {
        ctx->pc = 0x15AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF20u;
        // 0x15af24: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF28u;
        goto label_15af28;
    }
    ctx->pc = 0x15AF20u;
    SET_GPR_U32(ctx, 31, 0x15AF28u);
    ctx->pc = 0x15AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF20u;
    // 0x15af24: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A990u, 0x15AF20u, 0x15AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF28u;
label_15af28:
    // 0x15af28: 0x1000000a  b           . + 4 + (0xA << 2)
label_15af2c:
    if (ctx->pc == 0x15AF2Cu) {
        ctx->pc = 0x15AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF28u;
        // 0x15af2c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF30u;
        goto label_15af30;
    }
    ctx->pc = 0x15AF28u;
    {
        const bool branch_taken_0x15af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF28u;
        // 0x15af2c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af28) {
            ctx->pc = 0x15AF54u;
            goto label_15af54;
        }
    }
    ctx->pc = 0x15AF30u;
label_15af30:
    // 0x15af30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x15af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15af34:
    // 0x15af34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15af38:
    // 0x15af38: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15af38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15af3c:
    // 0x15af3c: 0xc44d0054  lwc1        $f13, 0x54($v0)
    ctx->pc = 0x15af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15af40:
    // 0x15af40: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x15af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15af44:
    // 0x15af44: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_15af48:
    // 0x15af48: 0x320f809  jalr        $t9
label_15af4c:
    if (ctx->pc == 0x15AF4Cu) {
        ctx->pc = 0x15AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF48u;
        // 0x15af4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF50u;
        goto label_15af50;
    }
    ctx->pc = 0x15AF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15AF50u);
        ctx->pc = 0x15AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF48u;
        // 0x15af4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF48u, 0x15AF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF50u;
label_15af50:
    // 0x15af50: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15af54:
    // 0x15af54: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15af54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15af58:
    // 0x15af58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15af58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15af5c:
    // 0x15af5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15af5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15af60:
    // 0x15af60: 0x320f809  jalr        $t9
label_15af64:
    if (ctx->pc == 0x15AF64u) {
        ctx->pc = 0x15AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF60u;
        // 0x15af64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF68u;
        goto label_15af68;
    }
    ctx->pc = 0x15AF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15AF68u);
        ctx->pc = 0x15AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF60u;
        // 0x15af64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF60u, 0x15AF68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15AF68u;
label_15af68:
    // 0x15af68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15af6c:
    // 0x15af6c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_15af70:
    if (ctx->pc == 0x15AF70u) {
        ctx->pc = 0x15AF74u;
        goto label_15af74;
    }
    ctx->pc = 0x15AF6Cu;
    {
        const bool branch_taken_0x15af6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15af6c) {
            ctx->pc = 0x15AF80u;
            goto label_15af80;
        }
    }
    ctx->pc = 0x15AF74u;
label_15af74:
    // 0x15af74: 0x10000002  b           . + 4 + (0x2 << 2)
label_15af78:
    if (ctx->pc == 0x15AF78u) {
        ctx->pc = 0x15AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF74u;
        // 0x15af78: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF7Cu;
        goto label_15af7c;
    }
    ctx->pc = 0x15AF74u;
    {
        const bool branch_taken_0x15af74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF74u;
        // 0x15af78: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af74) {
            ctx->pc = 0x15AF80u;
            goto label_15af80;
        }
    }
    ctx->pc = 0x15AF7Cu;
label_15af7c:
    // 0x15af7c: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15af7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
label_15af80:
    // 0x15af80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15af80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15af84:
    // 0x15af84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15af84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15af88:
    // 0x15af88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15af88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15af8c:
    // 0x15af8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15af8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15af90:
    // 0x15af90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15af90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15af94:
    // 0x15af94: 0x3e00008  jr          $ra
label_15af98:
    if (ctx->pc == 0x15AF98u) {
        ctx->pc = 0x15AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF94u;
        // 0x15af98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AF9Cu;
        goto label_fallthrough_0x15af94;
    }
    ctx->pc = 0x15AF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF94u;
        // 0x15af98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15af94:
    ctx->pc = 0x15AF9Cu;
}
