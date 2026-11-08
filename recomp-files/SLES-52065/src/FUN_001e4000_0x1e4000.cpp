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

// Function: FUN_001e4000
// Address: 0x1e4000 - 0x1e41f0
void FUN_001e4000_0x1e4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4000_0x1e4000");
#endif

    switch (ctx->pc) {
        case 0x1e4000u: goto label_1e4000;
        case 0x1e4004u: goto label_1e4004;
        case 0x1e4008u: goto label_1e4008;
        case 0x1e400cu: goto label_1e400c;
        case 0x1e4010u: goto label_1e4010;
        case 0x1e4014u: goto label_1e4014;
        case 0x1e4018u: goto label_1e4018;
        case 0x1e401cu: goto label_1e401c;
        case 0x1e4020u: goto label_1e4020;
        case 0x1e4024u: goto label_1e4024;
        case 0x1e4028u: goto label_1e4028;
        case 0x1e402cu: goto label_1e402c;
        case 0x1e4030u: goto label_1e4030;
        case 0x1e4034u: goto label_1e4034;
        case 0x1e4038u: goto label_1e4038;
        case 0x1e403cu: goto label_1e403c;
        case 0x1e4040u: goto label_1e4040;
        case 0x1e4044u: goto label_1e4044;
        case 0x1e4048u: goto label_1e4048;
        case 0x1e404cu: goto label_1e404c;
        case 0x1e4050u: goto label_1e4050;
        case 0x1e4054u: goto label_1e4054;
        case 0x1e4058u: goto label_1e4058;
        case 0x1e405cu: goto label_1e405c;
        case 0x1e4060u: goto label_1e4060;
        case 0x1e4064u: goto label_1e4064;
        case 0x1e4068u: goto label_1e4068;
        case 0x1e406cu: goto label_1e406c;
        case 0x1e4070u: goto label_1e4070;
        case 0x1e4074u: goto label_1e4074;
        case 0x1e4078u: goto label_1e4078;
        case 0x1e407cu: goto label_1e407c;
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e4088u: goto label_1e4088;
        case 0x1e408cu: goto label_1e408c;
        case 0x1e4090u: goto label_1e4090;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e4098u: goto label_1e4098;
        case 0x1e409cu: goto label_1e409c;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e40a8u: goto label_1e40a8;
        case 0x1e40acu: goto label_1e40ac;
        case 0x1e40b0u: goto label_1e40b0;
        case 0x1e40b4u: goto label_1e40b4;
        case 0x1e40b8u: goto label_1e40b8;
        case 0x1e40bcu: goto label_1e40bc;
        case 0x1e40c0u: goto label_1e40c0;
        case 0x1e40c4u: goto label_1e40c4;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40ccu: goto label_1e40cc;
        case 0x1e40d0u: goto label_1e40d0;
        case 0x1e40d4u: goto label_1e40d4;
        case 0x1e40d8u: goto label_1e40d8;
        case 0x1e40dcu: goto label_1e40dc;
        case 0x1e40e0u: goto label_1e40e0;
        case 0x1e40e4u: goto label_1e40e4;
        case 0x1e40e8u: goto label_1e40e8;
        case 0x1e40ecu: goto label_1e40ec;
        case 0x1e40f0u: goto label_1e40f0;
        case 0x1e40f4u: goto label_1e40f4;
        case 0x1e40f8u: goto label_1e40f8;
        case 0x1e40fcu: goto label_1e40fc;
        case 0x1e4100u: goto label_1e4100;
        case 0x1e4104u: goto label_1e4104;
        case 0x1e4108u: goto label_1e4108;
        case 0x1e410cu: goto label_1e410c;
        case 0x1e4110u: goto label_1e4110;
        case 0x1e4114u: goto label_1e4114;
        case 0x1e4118u: goto label_1e4118;
        case 0x1e411cu: goto label_1e411c;
        case 0x1e4120u: goto label_1e4120;
        case 0x1e4124u: goto label_1e4124;
        case 0x1e4128u: goto label_1e4128;
        case 0x1e412cu: goto label_1e412c;
        case 0x1e4130u: goto label_1e4130;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4138u: goto label_1e4138;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e4140u: goto label_1e4140;
        case 0x1e4144u: goto label_1e4144;
        case 0x1e4148u: goto label_1e4148;
        case 0x1e414cu: goto label_1e414c;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4154u: goto label_1e4154;
        case 0x1e4158u: goto label_1e4158;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4160u: goto label_1e4160;
        case 0x1e4164u: goto label_1e4164;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e416cu: goto label_1e416c;
        case 0x1e4170u: goto label_1e4170;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e4178u: goto label_1e4178;
        case 0x1e417cu: goto label_1e417c;
        case 0x1e4180u: goto label_1e4180;
        case 0x1e4184u: goto label_1e4184;
        case 0x1e4188u: goto label_1e4188;
        case 0x1e418cu: goto label_1e418c;
        case 0x1e4190u: goto label_1e4190;
        case 0x1e4194u: goto label_1e4194;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e419cu: goto label_1e419c;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41a4u: goto label_1e41a4;
        case 0x1e41a8u: goto label_1e41a8;
        case 0x1e41acu: goto label_1e41ac;
        case 0x1e41b0u: goto label_1e41b0;
        case 0x1e41b4u: goto label_1e41b4;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41bcu: goto label_1e41bc;
        case 0x1e41c0u: goto label_1e41c0;
        case 0x1e41c4u: goto label_1e41c4;
        case 0x1e41c8u: goto label_1e41c8;
        case 0x1e41ccu: goto label_1e41cc;
        case 0x1e41d0u: goto label_1e41d0;
        case 0x1e41d4u: goto label_1e41d4;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41dcu: goto label_1e41dc;
        case 0x1e41e0u: goto label_1e41e0;
        case 0x1e41e4u: goto label_1e41e4;
        case 0x1e41e8u: goto label_1e41e8;
        case 0x1e41ecu: goto label_1e41ec;
        default: break;
    }

    ctx->pc = 0x1e4000u;

label_1e4000:
    // 0x1e4000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4004:
    // 0x1e4004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e4008:
    // 0x1e4008: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e400c:
    // 0x1e400c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4010:
    // 0x1e4010: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e4010u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e4014:
    // 0x1e4014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4018:
    // 0x1e4018: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1e401c:
    // 0x1e401c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e4020:
    if (ctx->pc == 0x1E4020u) {
        ctx->pc = 0x1E4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E401Cu;
        // 0x1e4020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4024u;
        goto label_1e4024;
    }
    ctx->pc = 0x1E401Cu;
    {
        const bool branch_taken_0x1e401c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E401Cu;
        // 0x1e4020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e401c) {
            ctx->pc = 0x1E402Cu;
            goto label_1e402c;
        }
    }
    ctx->pc = 0x1E4024u;
label_1e4024:
    // 0x1e4024: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1e4028:
    if (ctx->pc == 0x1E4028u) {
        ctx->pc = 0x1E4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4024u;
        // 0x1e4028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E402Cu;
        goto label_1e402c;
    }
    ctx->pc = 0x1E4024u;
    {
        const bool branch_taken_0x1e4024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4024u;
        // 0x1e4028: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4024) {
            ctx->pc = 0x1E41D4u;
            goto label_1e41d4;
        }
    }
    ctx->pc = 0x1E402Cu;
label_1e402c:
    // 0x1e402c: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x1e402cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
label_1e4030:
    // 0x1e4030: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e4034:
    if (ctx->pc == 0x1E4034u) {
        ctx->pc = 0x1E4038u;
        goto label_1e4038;
    }
    ctx->pc = 0x1E4030u;
    {
        const bool branch_taken_0x1e4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4030) {
            ctx->pc = 0x1E40A4u;
            goto label_1e40a4;
        }
    }
    ctx->pc = 0x1E4038u;
label_1e4038:
    // 0x1e4038: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e403c:
    // 0x1e403c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e4040:
    if (ctx->pc == 0x1E4040u) {
        ctx->pc = 0x1E4044u;
        goto label_1e4044;
    }
    ctx->pc = 0x1E403Cu;
    {
        const bool branch_taken_0x1e403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e403c) {
            ctx->pc = 0x1E40A4u;
            goto label_1e40a4;
        }
    }
    ctx->pc = 0x1E4044u;
label_1e4044:
    // 0x1e4044: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e4044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e4048:
    // 0x1e4048: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e404c:
    // 0x1e404c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e404cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4050:
    // 0x1e4050: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e4054:
    if (ctx->pc == 0x1E4054u) {
        ctx->pc = 0x1E4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4050u;
        // 0x1e4054: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4058u;
        goto label_1e4058;
    }
    ctx->pc = 0x1E4050u;
    {
        const bool branch_taken_0x1e4050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4050u;
        // 0x1e4054: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4050) {
            ctx->pc = 0x1E4078u;
            goto label_1e4078;
        }
    }
    ctx->pc = 0x1E4058u;
label_1e4058:
    // 0x1e4058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e405c:
    // 0x1e405c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e405cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e4060:
    // 0x1e4060: 0x320f809  jalr        $t9
label_1e4064:
    if (ctx->pc == 0x1E4064u) {
        ctx->pc = 0x1E4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4060u;
        // 0x1e4064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4068u;
        goto label_1e4068;
    }
    ctx->pc = 0x1E4060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4068u);
        ctx->pc = 0x1E4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4060u;
        // 0x1e4064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4060u, 0x1E4068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4068u;
label_1e4068:
    // 0x1e4068: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e406c:
    // 0x1e406c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4070:
    if (ctx->pc == 0x1E4070u) {
        ctx->pc = 0x1E4074u;
        goto label_1e4074;
    }
    ctx->pc = 0x1E406Cu;
    {
        const bool branch_taken_0x1e406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e406c) {
            ctx->pc = 0x1E4078u;
            goto label_1e4078;
        }
    }
    ctx->pc = 0x1E4074u;
label_1e4074:
    // 0x1e4074: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e4074u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e4078:
    // 0x1e4078: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_1e407c:
    if (ctx->pc == 0x1E407Cu) {
        ctx->pc = 0x1E407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4078u;
        // 0x1e407c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4080u;
        goto label_1e4080;
    }
    ctx->pc = 0x1E4078u;
    {
        const bool branch_taken_0x1e4078 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4078u;
        // 0x1e407c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4078) {
            ctx->pc = 0x1E4088u;
            goto label_1e4088;
        }
    }
    ctx->pc = 0x1E4080u;
label_1e4080:
    // 0x1e4080: 0x10000055  b           . + 4 + (0x55 << 2)
label_1e4084:
    if (ctx->pc == 0x1E4084u) {
        ctx->pc = 0x1E4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4080u;
        // 0x1e4084: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4088u;
        goto label_1e4088;
    }
    ctx->pc = 0x1E4080u;
    {
        const bool branch_taken_0x1e4080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4080u;
        // 0x1e4084: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4080) {
            ctx->pc = 0x1E41D8u;
            goto label_1e41d8;
        }
    }
    ctx->pc = 0x1E4088u;
label_1e4088:
    // 0x1e4088: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1e4088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1e408c:
    // 0x1e408c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1e408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e4090:
    // 0x1e4090: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e4090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1e4094:
    // 0x1e4094: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1e4094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_1e4098:
    // 0x1e4098: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e4098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1e409c:
    // 0x1e409c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e409cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e40a0:
    // 0x1e40a0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e40a4:
    // 0x1e40a4: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x1e40a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
label_1e40a8:
    // 0x1e40a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e40ac:
    // 0x1e40ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e40b0:
    // 0x1e40b0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e40b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e40b4:
    // 0x1e40b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e40b8:
    if (ctx->pc == 0x1E40B8u) {
        ctx->pc = 0x1E40BCu;
        goto label_1e40bc;
    }
    ctx->pc = 0x1E40B4u;
    {
        const bool branch_taken_0x1e40b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40b4) {
            ctx->pc = 0x1E40C4u;
            goto label_1e40c4;
        }
    }
    ctx->pc = 0x1E40BCu;
label_1e40bc:
    // 0x1e40bc: 0x10000045  b           . + 4 + (0x45 << 2)
label_1e40c0:
    if (ctx->pc == 0x1E40C0u) {
        ctx->pc = 0x1E40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40BCu;
        // 0x1e40c0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40C4u;
        goto label_1e40c4;
    }
    ctx->pc = 0x1E40BCu;
    {
        const bool branch_taken_0x1e40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40BCu;
        // 0x1e40c0: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40bc) {
            ctx->pc = 0x1E41D4u;
            goto label_1e41d4;
        }
    }
    ctx->pc = 0x1E40C4u;
label_1e40c4:
    // 0x1e40c4: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x1e40c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
label_1e40c8:
    // 0x1e40c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e40cc:
    if (ctx->pc == 0x1E40CCu) {
        ctx->pc = 0x1E40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C8u;
        // 0x1e40cc: 0x602826  xor         $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40D0u;
        goto label_1e40d0;
    }
    ctx->pc = 0x1E40C8u;
    {
        const bool branch_taken_0x1e40c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C8u;
        // 0x1e40cc: 0x602826  xor         $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40c8) {
            ctx->pc = 0x1E40E4u;
            goto label_1e40e4;
        }
    }
    ctx->pc = 0x1E40D0u;
label_1e40d0:
    // 0x1e40d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e40d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e40d4:
    // 0x1e40d4: 0xc0795dc  jal         func_1E5770
label_1e40d8:
    if (ctx->pc == 0x1E40D8u) {
        ctx->pc = 0x1E40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40D4u;
        // 0x1e40d8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40DCu;
        goto label_1e40dc;
    }
    ctx->pc = 0x1E40D4u;
    SET_GPR_U32(ctx, 31, 0x1E40DCu);
    ctx->pc = 0x1E40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E40D4u;
    // 0x1e40d8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5770u, 0x1E40D4u, 0x1E40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E40DCu;
label_1e40dc:
    // 0x1e40dc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e40e0:
    if (ctx->pc == 0x1E40E0u) {
        ctx->pc = 0x1E40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40DCu;
        // 0x1e40e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40E4u;
        goto label_1e40e4;
    }
    ctx->pc = 0x1E40DCu;
    {
        const bool branch_taken_0x1e40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40DCu;
        // 0x1e40e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40dc) {
            ctx->pc = 0x1E4168u;
            goto label_1e4168;
        }
    }
    ctx->pc = 0x1E40E4u;
label_1e40e4:
    // 0x1e40e4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e40e8:
    // 0x1e40e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e40e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e40ec:
    // 0x1e40ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e40ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e40f0:
    // 0x1e40f0: 0x320f809  jalr        $t9
label_1e40f4:
    if (ctx->pc == 0x1E40F4u) {
        ctx->pc = 0x1E40F8u;
        goto label_1e40f8;
    }
    ctx->pc = 0x1E40F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E40F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E40F0u, 0x1E40F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E40F8u;
label_1e40f8:
    // 0x1e40f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e40fc:
    if (ctx->pc == 0x1E40FCu) {
        ctx->pc = 0x1E4100u;
        goto label_1e4100;
    }
    ctx->pc = 0x1E40F8u;
    {
        const bool branch_taken_0x1e40f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40f8) {
            ctx->pc = 0x1E4128u;
            goto label_1e4128;
        }
    }
    ctx->pc = 0x1E4100u;
label_1e4100:
    // 0x1e4100: 0xc07a704  jal         func_1E9C10
label_1e4104:
    if (ctx->pc == 0x1E4104u) {
        ctx->pc = 0x1E4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4100u;
        // 0x1e4104: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4108u;
        goto label_1e4108;
    }
    ctx->pc = 0x1E4100u;
    SET_GPR_U32(ctx, 31, 0x1E4108u);
    ctx->pc = 0x1E4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4100u;
    // 0x1e4104: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E4100u, 0x1E4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4108u;
label_1e4108:
    // 0x1e4108: 0x0  nop
    ctx->pc = 0x1e4108u;
    // NOP
label_1e410c:
    // 0x1e410c: 0x0  nop
    ctx->pc = 0x1e410cu;
    // NOP
label_1e4110:
    // 0x1e4110: 0x0  nop
    ctx->pc = 0x1e4110u;
    // NOP
label_1e4114:
    // 0x1e4114: 0x0  nop
    ctx->pc = 0x1e4114u;
    // NOP
label_1e4118:
    // 0x1e4118: 0x0  nop
    ctx->pc = 0x1e4118u;
    // NOP
label_1e411c:
    // 0x1e411c: 0x0  nop
    ctx->pc = 0x1e411cu;
    // NOP
label_1e4120:
    // 0x1e4120: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4124:
    if (ctx->pc == 0x1E4124u) {
        ctx->pc = 0x1E4128u;
        goto label_1e4128;
    }
    ctx->pc = 0x1E4120u;
    {
        const bool branch_taken_0x1e4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4120) {
            ctx->pc = 0x1E4108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4108;
        }
    }
    ctx->pc = 0x1E4128u;
label_1e4128:
    // 0x1e4128: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1e412c:
    if (ctx->pc == 0x1E412Cu) {
        ctx->pc = 0x1E4130u;
        goto label_1e4130;
    }
    ctx->pc = 0x1E4128u;
    {
        const bool branch_taken_0x1e4128 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e4128) {
            ctx->pc = 0x1E4150u;
            goto label_1e4150;
        }
    }
    ctx->pc = 0x1E4130u;
label_1e4130:
    // 0x1e4130: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4134:
    // 0x1e4134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4138:
    // 0x1e4138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e413c:
    // 0x1e413c: 0x603026  xor         $a2, $v1, $zero
    ctx->pc = 0x1e413cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_1e4140:
    // 0x1e4140: 0xc07960c  jal         func_1E5830
label_1e4144:
    if (ctx->pc == 0x1E4144u) {
        ctx->pc = 0x1E4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4140u;
        // 0x1e4144: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4148u;
        goto label_1e4148;
    }
    ctx->pc = 0x1E4140u;
    SET_GPR_U32(ctx, 31, 0x1E4148u);
    ctx->pc = 0x1E4144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4140u;
    // 0x1e4144: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5830u, 0x1E4140u, 0x1E4148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4148u;
label_1e4148:
    // 0x1e4148: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e414c:
    if (ctx->pc == 0x1E414Cu) {
        ctx->pc = 0x1E4150u;
        goto label_1e4150;
    }
    ctx->pc = 0x1E4148u;
    {
        const bool branch_taken_0x1e4148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4148) {
            ctx->pc = 0x1E4164u;
            goto label_1e4164;
        }
    }
    ctx->pc = 0x1E4150u;
label_1e4150:
    // 0x1e4150: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4154:
    // 0x1e4154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4158:
    // 0x1e4158: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1e4158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e415c:
    // 0x1e415c: 0xc079670  jal         func_1E59C0
label_1e4160:
    if (ctx->pc == 0x1E4160u) {
        ctx->pc = 0x1E4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E415Cu;
        // 0x1e4160: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4164u;
        goto label_1e4164;
    }
    ctx->pc = 0x1E415Cu;
    SET_GPR_U32(ctx, 31, 0x1E4164u);
    ctx->pc = 0x1E4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E415Cu;
    // 0x1e4160: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E59C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E59C0u, 0x1E415Cu, 0x1E4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4164u;
label_1e4164:
    // 0x1e4164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4168:
    // 0x1e4168: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e416c:
    if (ctx->pc == 0x1E416Cu) {
        ctx->pc = 0x1E4170u;
        goto label_1e4170;
    }
    ctx->pc = 0x1E4168u;
    {
        const bool branch_taken_0x1e4168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4168) {
            ctx->pc = 0x1E4178u;
            goto label_1e4178;
        }
    }
    ctx->pc = 0x1E4170u;
label_1e4170:
    // 0x1e4170: 0x10000018  b           . + 4 + (0x18 << 2)
label_1e4174:
    if (ctx->pc == 0x1E4174u) {
        ctx->pc = 0x1E4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4170u;
        // 0x1e4174: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4178u;
        goto label_1e4178;
    }
    ctx->pc = 0x1E4170u;
    {
        const bool branch_taken_0x1e4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4170u;
        // 0x1e4174: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4170) {
            ctx->pc = 0x1E41D4u;
            goto label_1e41d4;
        }
    }
    ctx->pc = 0x1E4178u;
label_1e4178:
    // 0x1e4178: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e4178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e417c:
    // 0x1e417c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1e417cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_1e4180:
    // 0x1e4180: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1e4184:
    if (ctx->pc == 0x1E4184u) {
        ctx->pc = 0x1E4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4180u;
        // 0x1e4184: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4188u;
        goto label_1e4188;
    }
    ctx->pc = 0x1E4180u;
    {
        const bool branch_taken_0x1e4180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4180u;
        // 0x1e4184: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4180) {
            ctx->pc = 0x1E41D4u;
            goto label_1e41d4;
        }
    }
    ctx->pc = 0x1E4188u;
label_1e4188:
    // 0x1e4188: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1e4188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e418c:
    // 0x1e418c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1e418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e4190:
    // 0x1e4190: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1e4190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e4194:
    // 0x1e4194: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1e4194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e4198:
    // 0x1e4198: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1e419c:
    if (ctx->pc == 0x1E419Cu) {
        ctx->pc = 0x1E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4198u;
        // 0x1e419c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E41A0u;
        goto label_1e41a0;
    }
    ctx->pc = 0x1E4198u;
    {
        const bool branch_taken_0x1e4198 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4198u;
        // 0x1e419c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4198) {
            ctx->pc = 0x1E41B0u;
            goto label_1e41b0;
        }
    }
    ctx->pc = 0x1E41A0u;
label_1e41a0:
    // 0x1e41a0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1e41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1e41a4:
    // 0x1e41a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e41a8:
    // 0x1e41a8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1e41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1e41ac:
    // 0x1e41ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e41b0:
    // 0x1e41b0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1e41b4:
    // 0x1e41b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1e41b8:
    // 0x1e41b8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1e41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_1e41bc:
    // 0x1e41bc: 0x2464002f  addiu       $a0, $v1, 0x2F
    ctx->pc = 0x1e41bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 47));
label_1e41c0:
    // 0x1e41c0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1e41c4:
    // 0x1e41c4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1e41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_1e41c8:
    // 0x1e41c8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e41cc:
    // 0x1e41cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e41d0:
    // 0x1e41d0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1e41d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_1e41d4:
    // 0x1e41d4: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e41d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e41d8:
    // 0x1e41d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e41d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e41dc:
    // 0x1e41dc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e41dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e41e0:
    // 0x1e41e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e41e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e41e4:
    // 0x1e41e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e41e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e41e8:
    // 0x1e41e8: 0x3e00008  jr          $ra
label_1e41ec:
    if (ctx->pc == 0x1E41ECu) {
        ctx->pc = 0x1E41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41E8u;
        // 0x1e41ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E41F0u;
        goto label_fallthrough_0x1e41e8;
    }
    ctx->pc = 0x1E41E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E41E8u;
        // 0x1e41ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E41E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e41e8:
    ctx->pc = 0x1E41F0u;
}
