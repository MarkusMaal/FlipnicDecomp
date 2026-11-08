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

// Function: FUN_0019cdf0
// Address: 0x19cdf0 - 0x19d0d0
void FUN_0019cdf0_0x19cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019cdf0_0x19cdf0");
#endif

    switch (ctx->pc) {
        case 0x19cdf0u: goto label_19cdf0;
        case 0x19cdf4u: goto label_19cdf4;
        case 0x19cdf8u: goto label_19cdf8;
        case 0x19cdfcu: goto label_19cdfc;
        case 0x19ce00u: goto label_19ce00;
        case 0x19ce04u: goto label_19ce04;
        case 0x19ce08u: goto label_19ce08;
        case 0x19ce0cu: goto label_19ce0c;
        case 0x19ce10u: goto label_19ce10;
        case 0x19ce14u: goto label_19ce14;
        case 0x19ce18u: goto label_19ce18;
        case 0x19ce1cu: goto label_19ce1c;
        case 0x19ce20u: goto label_19ce20;
        case 0x19ce24u: goto label_19ce24;
        case 0x19ce28u: goto label_19ce28;
        case 0x19ce2cu: goto label_19ce2c;
        case 0x19ce30u: goto label_19ce30;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce38u: goto label_19ce38;
        case 0x19ce3cu: goto label_19ce3c;
        case 0x19ce40u: goto label_19ce40;
        case 0x19ce44u: goto label_19ce44;
        case 0x19ce48u: goto label_19ce48;
        case 0x19ce4cu: goto label_19ce4c;
        case 0x19ce50u: goto label_19ce50;
        case 0x19ce54u: goto label_19ce54;
        case 0x19ce58u: goto label_19ce58;
        case 0x19ce5cu: goto label_19ce5c;
        case 0x19ce60u: goto label_19ce60;
        case 0x19ce64u: goto label_19ce64;
        case 0x19ce68u: goto label_19ce68;
        case 0x19ce6cu: goto label_19ce6c;
        case 0x19ce70u: goto label_19ce70;
        case 0x19ce74u: goto label_19ce74;
        case 0x19ce78u: goto label_19ce78;
        case 0x19ce7cu: goto label_19ce7c;
        case 0x19ce80u: goto label_19ce80;
        case 0x19ce84u: goto label_19ce84;
        case 0x19ce88u: goto label_19ce88;
        case 0x19ce8cu: goto label_19ce8c;
        case 0x19ce90u: goto label_19ce90;
        case 0x19ce94u: goto label_19ce94;
        case 0x19ce98u: goto label_19ce98;
        case 0x19ce9cu: goto label_19ce9c;
        case 0x19cea0u: goto label_19cea0;
        case 0x19cea4u: goto label_19cea4;
        case 0x19cea8u: goto label_19cea8;
        case 0x19ceacu: goto label_19ceac;
        case 0x19ceb0u: goto label_19ceb0;
        case 0x19ceb4u: goto label_19ceb4;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19cebcu: goto label_19cebc;
        case 0x19cec0u: goto label_19cec0;
        case 0x19cec4u: goto label_19cec4;
        case 0x19cec8u: goto label_19cec8;
        case 0x19ceccu: goto label_19cecc;
        case 0x19ced0u: goto label_19ced0;
        case 0x19ced4u: goto label_19ced4;
        case 0x19ced8u: goto label_19ced8;
        case 0x19cedcu: goto label_19cedc;
        case 0x19cee0u: goto label_19cee0;
        case 0x19cee4u: goto label_19cee4;
        case 0x19cee8u: goto label_19cee8;
        case 0x19ceecu: goto label_19ceec;
        case 0x19cef0u: goto label_19cef0;
        case 0x19cef4u: goto label_19cef4;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cefcu: goto label_19cefc;
        case 0x19cf00u: goto label_19cf00;
        case 0x19cf04u: goto label_19cf04;
        case 0x19cf08u: goto label_19cf08;
        case 0x19cf0cu: goto label_19cf0c;
        case 0x19cf10u: goto label_19cf10;
        case 0x19cf14u: goto label_19cf14;
        case 0x19cf18u: goto label_19cf18;
        case 0x19cf1cu: goto label_19cf1c;
        case 0x19cf20u: goto label_19cf20;
        case 0x19cf24u: goto label_19cf24;
        case 0x19cf28u: goto label_19cf28;
        case 0x19cf2cu: goto label_19cf2c;
        case 0x19cf30u: goto label_19cf30;
        case 0x19cf34u: goto label_19cf34;
        case 0x19cf38u: goto label_19cf38;
        case 0x19cf3cu: goto label_19cf3c;
        case 0x19cf40u: goto label_19cf40;
        case 0x19cf44u: goto label_19cf44;
        case 0x19cf48u: goto label_19cf48;
        case 0x19cf4cu: goto label_19cf4c;
        case 0x19cf50u: goto label_19cf50;
        case 0x19cf54u: goto label_19cf54;
        case 0x19cf58u: goto label_19cf58;
        case 0x19cf5cu: goto label_19cf5c;
        case 0x19cf60u: goto label_19cf60;
        case 0x19cf64u: goto label_19cf64;
        case 0x19cf68u: goto label_19cf68;
        case 0x19cf6cu: goto label_19cf6c;
        case 0x19cf70u: goto label_19cf70;
        case 0x19cf74u: goto label_19cf74;
        case 0x19cf78u: goto label_19cf78;
        case 0x19cf7cu: goto label_19cf7c;
        case 0x19cf80u: goto label_19cf80;
        case 0x19cf84u: goto label_19cf84;
        case 0x19cf88u: goto label_19cf88;
        case 0x19cf8cu: goto label_19cf8c;
        case 0x19cf90u: goto label_19cf90;
        case 0x19cf94u: goto label_19cf94;
        case 0x19cf98u: goto label_19cf98;
        case 0x19cf9cu: goto label_19cf9c;
        case 0x19cfa0u: goto label_19cfa0;
        case 0x19cfa4u: goto label_19cfa4;
        case 0x19cfa8u: goto label_19cfa8;
        case 0x19cfacu: goto label_19cfac;
        case 0x19cfb0u: goto label_19cfb0;
        case 0x19cfb4u: goto label_19cfb4;
        case 0x19cfb8u: goto label_19cfb8;
        case 0x19cfbcu: goto label_19cfbc;
        case 0x19cfc0u: goto label_19cfc0;
        case 0x19cfc4u: goto label_19cfc4;
        case 0x19cfc8u: goto label_19cfc8;
        case 0x19cfccu: goto label_19cfcc;
        case 0x19cfd0u: goto label_19cfd0;
        case 0x19cfd4u: goto label_19cfd4;
        case 0x19cfd8u: goto label_19cfd8;
        case 0x19cfdcu: goto label_19cfdc;
        case 0x19cfe0u: goto label_19cfe0;
        case 0x19cfe4u: goto label_19cfe4;
        case 0x19cfe8u: goto label_19cfe8;
        case 0x19cfecu: goto label_19cfec;
        case 0x19cff0u: goto label_19cff0;
        case 0x19cff4u: goto label_19cff4;
        case 0x19cff8u: goto label_19cff8;
        case 0x19cffcu: goto label_19cffc;
        case 0x19d000u: goto label_19d000;
        case 0x19d004u: goto label_19d004;
        case 0x19d008u: goto label_19d008;
        case 0x19d00cu: goto label_19d00c;
        case 0x19d010u: goto label_19d010;
        case 0x19d014u: goto label_19d014;
        case 0x19d018u: goto label_19d018;
        case 0x19d01cu: goto label_19d01c;
        case 0x19d020u: goto label_19d020;
        case 0x19d024u: goto label_19d024;
        case 0x19d028u: goto label_19d028;
        case 0x19d02cu: goto label_19d02c;
        case 0x19d030u: goto label_19d030;
        case 0x19d034u: goto label_19d034;
        case 0x19d038u: goto label_19d038;
        case 0x19d03cu: goto label_19d03c;
        case 0x19d040u: goto label_19d040;
        case 0x19d044u: goto label_19d044;
        case 0x19d048u: goto label_19d048;
        case 0x19d04cu: goto label_19d04c;
        case 0x19d050u: goto label_19d050;
        case 0x19d054u: goto label_19d054;
        case 0x19d058u: goto label_19d058;
        case 0x19d05cu: goto label_19d05c;
        case 0x19d060u: goto label_19d060;
        case 0x19d064u: goto label_19d064;
        case 0x19d068u: goto label_19d068;
        case 0x19d06cu: goto label_19d06c;
        case 0x19d070u: goto label_19d070;
        case 0x19d074u: goto label_19d074;
        case 0x19d078u: goto label_19d078;
        case 0x19d07cu: goto label_19d07c;
        case 0x19d080u: goto label_19d080;
        case 0x19d084u: goto label_19d084;
        case 0x19d088u: goto label_19d088;
        case 0x19d08cu: goto label_19d08c;
        case 0x19d090u: goto label_19d090;
        case 0x19d094u: goto label_19d094;
        case 0x19d098u: goto label_19d098;
        case 0x19d09cu: goto label_19d09c;
        case 0x19d0a0u: goto label_19d0a0;
        case 0x19d0a4u: goto label_19d0a4;
        case 0x19d0a8u: goto label_19d0a8;
        case 0x19d0acu: goto label_19d0ac;
        case 0x19d0b0u: goto label_19d0b0;
        case 0x19d0b4u: goto label_19d0b4;
        case 0x19d0b8u: goto label_19d0b8;
        case 0x19d0bcu: goto label_19d0bc;
        case 0x19d0c0u: goto label_19d0c0;
        case 0x19d0c4u: goto label_19d0c4;
        case 0x19d0c8u: goto label_19d0c8;
        case 0x19d0ccu: goto label_19d0cc;
        default: break;
    }

    ctx->pc = 0x19cdf0u;

label_19cdf0:
    // 0x19cdf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19cdf4:
    // 0x19cdf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_19cdf8:
    // 0x19cdf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x19cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_19cdfc:
    // 0x19cdfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19ce00:
    // 0x19ce00: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x19ce00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ce04:
    // 0x19ce04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_19ce08:
    // 0x19ce08: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x19ce08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_19ce0c:
    // 0x19ce0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_19ce10:
    // 0x19ce10: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x19ce10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19ce14:
    // 0x19ce14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ce14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19ce18:
    // 0x19ce18: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19ce18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ce1c:
    // 0x19ce1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_19ce20:
    // 0x19ce20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19ce20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ce24:
    // 0x19ce24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19ce28:
    // 0x19ce28: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x19ce28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19ce2c:
    // 0x19ce2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19ce30:
    // 0x19ce30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19ce34:
    // 0x19ce34: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
label_19ce38:
    if (ctx->pc == 0x19CE38u) {
        ctx->pc = 0x19CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE34u;
        // 0x19ce38: 0xafa500ac  sw          $a1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE3Cu;
        goto label_19ce3c;
    }
    ctx->pc = 0x19CE34u;
    {
        const bool branch_taken_0x19ce34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE34u;
        // 0x19ce38: 0xafa500ac  sw          $a1, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce34) {
            ctx->pc = 0x19D0A0u;
            goto label_19d0a0;
        }
    }
    ctx->pc = 0x19CE3Cu;
label_19ce3c:
    // 0x19ce3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19ce3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ce40:
    // 0x19ce40: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x19ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_19ce44:
    // 0x19ce44: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x19ce44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_19ce48:
    // 0x19ce48: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x19ce48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_19ce4c:
    // 0x19ce4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19ce50:
    // 0x19ce50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ce54:
    // 0x19ce54: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x19ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19ce58:
    // 0x19ce58: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x19ce58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19ce5c:
    // 0x19ce5c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19ce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_19ce60:
    // 0x19ce60: 0x8cc62cd8  lw          $a2, 0x2CD8($a2)
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11480)));
label_19ce64:
    // 0x19ce64: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x19ce64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_19ce68:
    // 0x19ce68: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_19ce6c:
    if (ctx->pc == 0x19CE6Cu) {
        ctx->pc = 0x19CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE68u;
        // 0x19ce6c: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE70u;
        goto label_19ce70;
    }
    ctx->pc = 0x19CE68u;
    {
        const bool branch_taken_0x19ce68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE68u;
        // 0x19ce6c: 0x26320004  addiu       $s2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce68) {
            ctx->pc = 0x19CF18u;
            goto label_19cf18;
        }
    }
    ctx->pc = 0x19CE70u;
label_19ce70:
    // 0x19ce70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ce74:
    // 0x19ce74: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_19ce78:
    if (ctx->pc == 0x19CE78u) {
        ctx->pc = 0x19CE7Cu;
        goto label_19ce7c;
    }
    ctx->pc = 0x19CE74u;
    {
        const bool branch_taken_0x19ce74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ce74) {
            ctx->pc = 0x19CE8Cu;
            goto label_19ce8c;
        }
    }
    ctx->pc = 0x19CE7Cu;
label_19ce7c:
    // 0x19ce7c: 0x10800084  beqz        $a0, . + 4 + (0x84 << 2)
label_19ce80:
    if (ctx->pc == 0x19CE80u) {
        ctx->pc = 0x19CE84u;
        goto label_19ce84;
    }
    ctx->pc = 0x19CE7Cu;
    {
        const bool branch_taken_0x19ce7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce7c) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19CE84u;
label_19ce84:
    // 0x19ce84: 0x10000082  b           . + 4 + (0x82 << 2)
label_19ce88:
    if (ctx->pc == 0x19CE88u) {
        ctx->pc = 0x19CE8Cu;
        goto label_19ce8c;
    }
    ctx->pc = 0x19CE84u;
    {
        const bool branch_taken_0x19ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce84) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19CE8Cu;
label_19ce8c:
    // 0x19ce8c: 0x0  nop
    ctx->pc = 0x19ce8cu;
    // NOP
label_19ce90:
    // 0x19ce90: 0xc064bf8  jal         func_192FE0
label_19ce94:
    if (ctx->pc == 0x19CE94u) {
        ctx->pc = 0x19CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE90u;
        // 0x19ce94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE98u;
        goto label_19ce98;
    }
    ctx->pc = 0x19CE90u;
    SET_GPR_U32(ctx, 31, 0x19CE98u);
    ctx->pc = 0x19CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE90u;
    // 0x19ce94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192FE0u, 0x19CE90u, 0x19CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE98u;
label_19ce98:
    // 0x19ce98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19ce98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ce9c:
    // 0x19ce9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19cea0:
    // 0x19cea0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19cea4:
    // 0x19cea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cea8:
    // 0x19cea8: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x19cea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_19ceac:
    // 0x19ceac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ceacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ceb0:
    // 0x19ceb0: 0x320f809  jalr        $t9
label_19ceb4:
    if (ctx->pc == 0x19CEB4u) {
        ctx->pc = 0x19CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB0u;
        // 0x19ceb4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEB8u;
        goto label_19ceb8;
    }
    ctx->pc = 0x19CEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CEB8u);
        ctx->pc = 0x19CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB0u;
        // 0x19ceb4: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CEB0u, 0x19CEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CEB8u;
label_19ceb8:
    // 0x19ceb8: 0xc0802aa  jal         func_200AA8
label_19cebc:
    if (ctx->pc == 0x19CEBCu) {
        ctx->pc = 0x19CEC0u;
        goto label_19cec0;
    }
    ctx->pc = 0x19CEB8u;
    SET_GPR_U32(ctx, 31, 0x19CEC0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19CEB8u, 0x19CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEC0u;
label_19cec0:
    // 0x19cec0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x19cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19cec4:
    // 0x19cec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19cec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19cec8:
    // 0x19cec8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x19cec8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19cecc:
    // 0x19cecc: 0x0  nop
    ctx->pc = 0x19ceccu;
    // NOP
label_19ced0:
    // 0x19ced0: 0x0  nop
    ctx->pc = 0x19ced0u;
    // NOP
label_19ced4:
    // 0x19ced4: 0x1010  mfhi        $v0
    ctx->pc = 0x19ced4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ced8:
    // 0x19ced8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x19ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_19cedc:
    // 0x19cedc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_19cee0:
    // 0x19cee0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19cee4:
    // 0x19cee4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cee8:
    // 0x19cee8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_19ceec:
    // 0x19ceec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x19ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19cef0:
    // 0x19cef0: 0xc064c4c  jal         func_193130
label_19cef4:
    if (ctx->pc == 0x19CEF4u) {
        ctx->pc = 0x19CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEF0u;
        // 0x19cef4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEF8u;
        goto label_19cef8;
    }
    ctx->pc = 0x19CEF0u;
    SET_GPR_U32(ctx, 31, 0x19CEF8u);
    ctx->pc = 0x19CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEF0u;
    // 0x19cef4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19CEF0u, 0x19CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEF8u;
label_19cef8:
    // 0x19cef8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cefc:
    // 0x19cefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cf00:
    // 0x19cf00: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19cf04:
    // 0x19cf04: 0x320f809  jalr        $t9
label_19cf08:
    if (ctx->pc == 0x19CF08u) {
        ctx->pc = 0x19CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF04u;
        // 0x19cf08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF0Cu;
        goto label_19cf0c;
    }
    ctx->pc = 0x19CF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CF0Cu);
        ctx->pc = 0x19CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF04u;
        // 0x19cf08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF04u, 0x19CF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CF0Cu;
label_19cf0c:
    // 0x19cf0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19cf10:
    // 0x19cf10: 0x1000005f  b           . + 4 + (0x5F << 2)
label_19cf14:
    if (ctx->pc == 0x19CF14u) {
        ctx->pc = 0x19CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF10u;
        // 0x19cf14: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF18u;
        goto label_19cf18;
    }
    ctx->pc = 0x19CF10u;
    {
        const bool branch_taken_0x19cf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF10u;
        // 0x19cf14: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf10) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19CF18u;
label_19cf18:
    // 0x19cf18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19cf1c:
    // 0x19cf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cf20:
    // 0x19cf20: 0xc04c6dc  jal         func_131B70
label_19cf24:
    if (ctx->pc == 0x19CF24u) {
        ctx->pc = 0x19CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF20u;
        // 0x19cf24: 0x24a5dad0  addiu       $a1, $a1, -0x2530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF28u;
        goto label_19cf28;
    }
    ctx->pc = 0x19CF20u;
    SET_GPR_U32(ctx, 31, 0x19CF28u);
    ctx->pc = 0x19CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF20u;
    // 0x19cf24: 0x24a5dad0  addiu       $a1, $a1, -0x2530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x19CF20u, 0x19CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF28u;
label_19cf28:
    // 0x19cf28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19cf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_19cf2c:
    // 0x19cf2c: 0x8e830674  lw          $v1, 0x674($s4)
    ctx->pc = 0x19cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
label_19cf30:
    // 0x19cf30: 0xc424db00  lwc1        $f4, -0x2500($at)
    ctx->pc = 0x19cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294957824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19cf34:
    // 0x19cf34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19cf38:
    // 0x19cf38: 0xc6650030  lwc1        $f5, 0x30($s3)
    ctx->pc = 0x19cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_19cf3c:
    // 0x19cf3c: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x19cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19cf40:
    // 0x19cf40: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x19cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19cf44:
    // 0x19cf44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_19cf48:
    // 0x19cf48: 0xc422db04  lwc1        $f2, -0x24FC($at)
    ctx->pc = 0x19cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294957828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19cf4c:
    // 0x19cf4c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x19cf4cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_19cf50:
    // 0x19cf50: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x19cf50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_19cf54:
    // 0x19cf54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_19cf58:
    // 0x19cf58: 0xc420db08  lwc1        $f0, -0x24F8($at)
    ctx->pc = 0x19cf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294957832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19cf5c:
    // 0x19cf5c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x19cf5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_19cf60:
    // 0x19cf60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x19cf60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_19cf64:
    // 0x19cf64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19cf64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19cf68:
    // 0x19cf68: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_19cf6c:
    if (ctx->pc == 0x19CF6Cu) {
        ctx->pc = 0x19CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF68u;
        // 0x19cf6c: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF70u;
        goto label_19cf70;
    }
    ctx->pc = 0x19CF68u;
    {
        const bool branch_taken_0x19cf68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF68u;
        // 0x19cf6c: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf68) {
            ctx->pc = 0x19D068u;
            goto label_19d068;
        }
    }
    ctx->pc = 0x19CF70u;
label_19cf70:
    // 0x19cf70: 0x8e830698  lw          $v1, 0x698($s4)
    ctx->pc = 0x19cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
label_19cf74:
    // 0x19cf74: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x19cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19cf78:
    // 0x19cf78: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
label_19cf7c:
    if (ctx->pc == 0x19CF7Cu) {
        ctx->pc = 0x19CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF78u;
        // 0x19cf7c: 0x46022000  add.s       $f0, $f4, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF80u;
        goto label_19cf80;
    }
    ctx->pc = 0x19CF78u;
    {
        const bool branch_taken_0x19cf78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF78u;
        // 0x19cf7c: 0x46022000  add.s       $f0, $f4, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf78) {
            ctx->pc = 0x19D068u;
            goto label_19d068;
        }
    }
    ctx->pc = 0x19CF80u;
label_19cf80:
    // 0x19cf80: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x19cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_19cf84:
    // 0x19cf84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19cf84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19cf88:
    // 0x19cf88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cf8c:
    // 0x19cf8c: 0x0  nop
    ctx->pc = 0x19cf8cu;
    // NOP
label_19cf90:
    // 0x19cf90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cf90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19cf94:
    // 0x19cf94: 0x0  nop
    ctx->pc = 0x19cf94u;
    // NOP
label_19cf98:
    // 0x19cf98: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_19cf9c:
    if (ctx->pc == 0x19CF9Cu) {
        ctx->pc = 0x19CFA0u;
        goto label_19cfa0;
    }
    ctx->pc = 0x19CF98u;
    {
        const bool branch_taken_0x19cf98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cf98) {
            ctx->pc = 0x19D068u;
            goto label_19d068;
        }
    }
    ctx->pc = 0x19CFA0u;
label_19cfa0:
    // 0x19cfa0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19cfa4:
    // 0x19cfa4: 0xc064c0c  jal         func_193030
label_19cfa8:
    if (ctx->pc == 0x19CFA8u) {
        ctx->pc = 0x19CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFA4u;
        // 0x19cfa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CFACu;
        goto label_19cfac;
    }
    ctx->pc = 0x19CFA4u;
    SET_GPR_U32(ctx, 31, 0x19CFACu);
    ctx->pc = 0x19CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFA4u;
    // 0x19cfa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19CFA4u, 0x19CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFACu;
label_19cfac:
    // 0x19cfac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_19cfb0:
    // 0x19cfb0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19cfb4:
    // 0x19cfb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cfb8:
    // 0x19cfb8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_19cfbc:
    if (ctx->pc == 0x19CFBCu) {
        ctx->pc = 0x19CFC0u;
        goto label_19cfc0;
    }
    ctx->pc = 0x19CFB8u;
    {
        const bool branch_taken_0x19cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cfb8) {
            ctx->pc = 0x19CFFCu;
            goto label_19cffc;
        }
    }
    ctx->pc = 0x19CFC0u;
label_19cfc0:
    // 0x19cfc0: 0x8e830908  lw          $v1, 0x908($s4)
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2312)));
label_19cfc4:
    // 0x19cfc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_19cfc8:
    // 0x19cfc8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_19cfcc:
    // 0x19cfcc: 0x24a5dad0  addiu       $a1, $a1, -0x2530
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
label_19cfd0:
    // 0x19cfd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cfd4:
    // 0x19cfd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_19cfd8:
    // 0x19cfd8: 0xc0465f0  jal         func_1197C0
label_19cfdc:
    if (ctx->pc == 0x19CFDCu) {
        ctx->pc = 0x19CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFD8u;
        // 0x19cfdc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CFE0u;
        goto label_19cfe0;
    }
    ctx->pc = 0x19CFD8u;
    SET_GPR_U32(ctx, 31, 0x19CFE0u);
    ctx->pc = 0x19CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFD8u;
    // 0x19cfdc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x19CFD8u, 0x19CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFE0u;
label_19cfe0:
    // 0x19cfe0: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_19cfe4:
    // 0x19cfe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19cfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19cfe8:
    // 0x19cfe8: 0xc064cac  jal         func_1932B0
label_19cfec:
    if (ctx->pc == 0x19CFECu) {
        ctx->pc = 0x19CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFE8u;
        // 0x19cfec: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CFF0u;
        goto label_19cff0;
    }
    ctx->pc = 0x19CFE8u;
    SET_GPR_U32(ctx, 31, 0x19CFF0u);
    ctx->pc = 0x19CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFE8u;
    // 0x19cfec: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CFE8u, 0x19CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFF0u;
label_19cff0:
    // 0x19cff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19cff4:
    // 0x19cff4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19cff8:
    if (ctx->pc == 0x19CFF8u) {
        ctx->pc = 0x19CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFF4u;
        // 0x19cff8: 0xae820674  sw          $v0, 0x674($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CFFCu;
        goto label_19cffc;
    }
    ctx->pc = 0x19CFF4u;
    {
        const bool branch_taken_0x19cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFF4u;
        // 0x19cff8: 0xae820674  sw          $v0, 0x674($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cff4) {
            ctx->pc = 0x19D068u;
            goto label_19d068;
        }
    }
    ctx->pc = 0x19CFFCu;
label_19cffc:
    // 0x19cffc: 0x0  nop
    ctx->pc = 0x19cffcu;
    // NOP
label_19d000:
    // 0x19d000: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19d000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_19d004:
    // 0x19d004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d008:
    // 0x19d008: 0xc064cac  jal         func_1932B0
label_19d00c:
    if (ctx->pc == 0x19D00Cu) {
        ctx->pc = 0x19D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D008u;
        // 0x19d00c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D010u;
        goto label_19d010;
    }
    ctx->pc = 0x19D008u;
    SET_GPR_U32(ctx, 31, 0x19D010u);
    ctx->pc = 0x19D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D008u;
    // 0x19d00c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19D008u, 0x19D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D010u;
label_19d010:
    // 0x19d010: 0x8e830914  lw          $v1, 0x914($s4)
    ctx->pc = 0x19d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2324)));
label_19d014:
    // 0x19d014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d018:
    // 0x19d018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19d018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19d01c:
    // 0x19d01c: 0x12e2000d  beq         $s7, $v0, . + 4 + (0xD << 2)
label_19d020:
    if (ctx->pc == 0x19D020u) {
        ctx->pc = 0x19D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D01Cu;
        // 0x19d020: 0xae830914  sw          $v1, 0x914($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D024u;
        goto label_19d024;
    }
    ctx->pc = 0x19D01Cu;
    {
        const bool branch_taken_0x19d01c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x19D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D01Cu;
        // 0x19d020: 0xae830914  sw          $v1, 0x914($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d01c) {
            ctx->pc = 0x19D054u;
            goto label_19d054;
        }
    }
    ctx->pc = 0x19D024u;
label_19d024:
    // 0x19d024: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19d024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_19d028:
    // 0x19d028: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d02c:
    // 0x19d02c: 0xc064cac  jal         func_1932B0
label_19d030:
    if (ctx->pc == 0x19D030u) {
        ctx->pc = 0x19D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D02Cu;
        // 0x19d030: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D034u;
        goto label_19d034;
    }
    ctx->pc = 0x19D02Cu;
    SET_GPR_U32(ctx, 31, 0x19D034u);
    ctx->pc = 0x19D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D02Cu;
    // 0x19d030: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19D02Cu, 0x19D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D034u;
label_19d034:
    // 0x19d034: 0x8e82090c  lw          $v0, 0x90C($s4)
    ctx->pc = 0x19d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2316)));
label_19d038:
    // 0x19d038: 0x26e4ffff  addiu       $a0, $s7, -0x1
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_19d03c:
    // 0x19d03c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_19d040:
    // 0x19d040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d044:
    // 0x19d044: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x19d044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_19d048:
    // 0x19d048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19d04c:
    // 0x19d04c: 0x10000006  b           . + 4 + (0x6 << 2)
label_19d050:
    if (ctx->pc == 0x19D050u) {
        ctx->pc = 0x19D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D04Cu;
        // 0x19d050: 0xae82090c  sw          $v0, 0x90C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D054u;
        goto label_19d054;
    }
    ctx->pc = 0x19D04Cu;
    {
        const bool branch_taken_0x19d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D04Cu;
        // 0x19d050: 0xae82090c  sw          $v0, 0x90C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d04c) {
            ctx->pc = 0x19D068u;
            goto label_19d068;
        }
    }
    ctx->pc = 0x19D054u;
label_19d054:
    // 0x19d054: 0x0  nop
    ctx->pc = 0x19d054u;
    // NOP
label_19d058:
    // 0x19d058: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19d058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
label_19d05c:
    // 0x19d05c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19d060:
    // 0x19d060: 0xc064cac  jal         func_1932B0
label_19d064:
    if (ctx->pc == 0x19D064u) {
        ctx->pc = 0x19D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D060u;
        // 0x19d064: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D068u;
        goto label_19d068;
    }
    ctx->pc = 0x19D060u;
    SET_GPR_U32(ctx, 31, 0x19D068u);
    ctx->pc = 0x19D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D060u;
    // 0x19d064: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19D060u, 0x19D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D068u;
label_19d068:
    // 0x19d068: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x19d068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d06c:
    // 0x19d06c: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x19d06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_19d070:
    // 0x19d070: 0x320f809  jalr        $t9
label_19d074:
    if (ctx->pc == 0x19D074u) {
        ctx->pc = 0x19D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D070u;
        // 0x19d074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D078u;
        goto label_19d078;
    }
    ctx->pc = 0x19D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19D078u);
        ctx->pc = 0x19D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D070u;
        // 0x19d074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D070u, 0x19D078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D078u;
label_19d078:
    // 0x19d078: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_19d07c:
    if (ctx->pc == 0x19D07Cu) {
        ctx->pc = 0x19D080u;
        goto label_19d080;
    }
    ctx->pc = 0x19D078u;
    {
        const bool branch_taken_0x19d078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d078) {
            ctx->pc = 0x19D090u;
            goto label_19d090;
        }
    }
    ctx->pc = 0x19D080u;
label_19d080:
    // 0x19d080: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19d080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19d084:
    // 0x19d084: 0xc064c0c  jal         func_193030
label_19d088:
    if (ctx->pc == 0x19D088u) {
        ctx->pc = 0x19D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D084u;
        // 0x19d088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D08Cu;
        goto label_19d08c;
    }
    ctx->pc = 0x19D084u;
    SET_GPR_U32(ctx, 31, 0x19D08Cu);
    ctx->pc = 0x19D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D084u;
    // 0x19d088: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19D084u, 0x19D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D08Cu;
label_19d08c:
    // 0x19d08c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_19d090:
    // 0x19d090: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19d090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_19d094:
    // 0x19d094: 0x2de182a  slt         $v1, $s6, $fp
    ctx->pc = 0x19d094u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_19d098:
    // 0x19d098: 0x1460ff69  bnez        $v1, . + 4 + (-0x97 << 2)
label_19d09c:
    if (ctx->pc == 0x19D09Cu) {
        ctx->pc = 0x19D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D098u;
        // 0x19d09c: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D0A0u;
        goto label_19d0a0;
    }
    ctx->pc = 0x19D098u;
    {
        const bool branch_taken_0x19d098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D098u;
        // 0x19d09c: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d098) {
            ctx->pc = 0x19CE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ce40;
        }
    }
    ctx->pc = 0x19D0A0u;
label_19d0a0:
    // 0x19d0a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19d0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19d0a4:
    // 0x19d0a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19d0a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19d0a8:
    // 0x19d0a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19d0a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19d0ac:
    // 0x19d0ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19d0acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19d0b0:
    // 0x19d0b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19d0b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19d0b4:
    // 0x19d0b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19d0b8:
    // 0x19d0b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19d0bc:
    // 0x19d0bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19d0c0:
    // 0x19d0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19d0c4:
    // 0x19d0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19d0c8:
    // 0x19d0c8: 0x3e00008  jr          $ra
label_19d0cc:
    if (ctx->pc == 0x19D0CCu) {
        ctx->pc = 0x19D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0C8u;
        // 0x19d0cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D0D0u;
        goto label_fallthrough_0x19d0c8;
    }
    ctx->pc = 0x19D0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0C8u;
        // 0x19d0cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d0c8:
    ctx->pc = 0x19D0D0u;
}
