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

// Function: entry_001f4000
// Address: 0x1f4000 - 0x1f4140
void entry_001f4000_0x1f4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4000_0x1f4000");
#endif

    switch (ctx->pc) {
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f405cu: goto label_1f405c;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4064u: goto label_1f4064;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f406cu: goto label_1f406c;
        case 0x1f4070u: goto label_1f4070;
        case 0x1f4074u: goto label_1f4074;
        case 0x1f4078u: goto label_1f4078;
        case 0x1f407cu: goto label_1f407c;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4084u: goto label_1f4084;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f408cu: goto label_1f408c;
        case 0x1f4090u: goto label_1f4090;
        case 0x1f4094u: goto label_1f4094;
        case 0x1f4098u: goto label_1f4098;
        case 0x1f409cu: goto label_1f409c;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40a4u: goto label_1f40a4;
        case 0x1f40a8u: goto label_1f40a8;
        case 0x1f40acu: goto label_1f40ac;
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40b4u: goto label_1f40b4;
        case 0x1f40b8u: goto label_1f40b8;
        case 0x1f40bcu: goto label_1f40bc;
        case 0x1f40c0u: goto label_1f40c0;
        case 0x1f40c4u: goto label_1f40c4;
        case 0x1f40c8u: goto label_1f40c8;
        case 0x1f40ccu: goto label_1f40cc;
        case 0x1f40d0u: goto label_1f40d0;
        case 0x1f40d4u: goto label_1f40d4;
        case 0x1f40d8u: goto label_1f40d8;
        case 0x1f40dcu: goto label_1f40dc;
        case 0x1f40e0u: goto label_1f40e0;
        case 0x1f40e4u: goto label_1f40e4;
        case 0x1f40e8u: goto label_1f40e8;
        case 0x1f40ecu: goto label_1f40ec;
        case 0x1f40f0u: goto label_1f40f0;
        case 0x1f40f4u: goto label_1f40f4;
        case 0x1f40f8u: goto label_1f40f8;
        case 0x1f40fcu: goto label_1f40fc;
        case 0x1f4100u: goto label_1f4100;
        case 0x1f4104u: goto label_1f4104;
        case 0x1f4108u: goto label_1f4108;
        case 0x1f410cu: goto label_1f410c;
        case 0x1f4110u: goto label_1f4110;
        case 0x1f4114u: goto label_1f4114;
        case 0x1f4118u: goto label_1f4118;
        case 0x1f411cu: goto label_1f411c;
        case 0x1f4120u: goto label_1f4120;
        case 0x1f4124u: goto label_1f4124;
        case 0x1f4128u: goto label_1f4128;
        case 0x1f412cu: goto label_1f412c;
        case 0x1f4130u: goto label_1f4130;
        case 0x1f4134u: goto label_1f4134;
        case 0x1f4138u: goto label_1f4138;
        case 0x1f413cu: goto label_1f413c;
        default: break;
    }

    ctx->pc = 0x1f4000u;

label_1f4000:
    // 0x1f4000: 0x3c1a0039  lui         $k0, 0x39
    ctx->pc = 0x1f4000u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)57 << 16));
label_1f4004:
    // 0x1f4004: 0x275a0e40  addiu       $k0, $k0, 0xE40
    ctx->pc = 0x1f4004u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 3648));
label_1f4008:
    // 0x1f4008: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1f4008u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1f400c:
    // 0x1f400c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1f400cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1f4010:
    // 0x1f4010: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1f4010u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1f4014:
    // 0x1f4014: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1f4014u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1f4018:
    // 0x1f4018: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1f4018u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1f401c:
    // 0x1f401c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1f401cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1f4020:
    // 0x1f4020: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1f4020u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1f4024:
    // 0x1f4024: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1f4024u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1f4028:
    // 0x1f4028: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1f4028u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1f402c:
    // 0x1f402c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1f402cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1f4030:
    // 0x1f4030: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1f4030u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1f4034:
    // 0x1f4034: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1f4034u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1f4038:
    // 0x1f4038: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1f4038u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1f403c:
    // 0x1f403c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1f403cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1f4040:
    // 0x1f4040: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1f4040u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1f4044:
    // 0x1f4044: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1f4044u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1f4048:
    // 0x1f4048: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1f4048u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1f404c:
    // 0x1f404c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1f404cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1f4050:
    // 0x1f4050: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1f4050u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1f4054:
    // 0x1f4054: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1f4054u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1f4058:
    // 0x1f4058: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1f4058u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1f405c:
    // 0x1f405c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1f405cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1f4060:
    // 0x1f4060: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1f4060u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1f4064:
    // 0x1f4064: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1f4064u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1f4068:
    // 0x1f4068: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1f4068u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1f406c:
    // 0x1f406c: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1f406cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1f4070:
    // 0x1f4070: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1f4070u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1f4074:
    // 0x1f4074: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1f4074u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1f4078:
    // 0x1f4078: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1f4078u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1f407c:
    // 0x1f407c: 0x1010  mfhi        $v0
    ctx->pc = 0x1f407cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f4080:
    // 0x1f4080: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f4080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f4084:
    // 0x1f4084: 0xfc221040  sd          $v0, 0x1040($at)
    ctx->pc = 0x1f4084u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4160), GPR_U64(ctx, 2));
label_1f4088:
    // 0x1f4088: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1f4088u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1f408c:
    // 0x1f408c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f408cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f4090:
    // 0x1f4090: 0xfc221048  sd          $v0, 0x1048($at)
    ctx->pc = 0x1f4090u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4168), GPR_U64(ctx, 2));
label_1f4094:
    // 0x1f4094: 0x1012  mflo        $v0
    ctx->pc = 0x1f4094u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1f4098:
    // 0x1f4098: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f409c:
    // 0x1f409c: 0xfc221050  sd          $v0, 0x1050($at)
    ctx->pc = 0x1f409cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4176), GPR_U64(ctx, 2));
label_1f40a0:
    // 0x1f40a0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1f40a0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1f40a4:
    // 0x1f40a4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f40a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f40a8:
    // 0x1f40a8: 0xfc221058  sd          $v0, 0x1058($at)
    ctx->pc = 0x1f40a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4184), GPR_U64(ctx, 2));
label_1f40ac:
    // 0x1f40ac: 0x1028  mfsa        $v0
    ctx->pc = 0x1f40acu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1f40b0:
    // 0x1f40b0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f40b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f40b4:
    // 0x1f40b4: 0xfc221060  sd          $v0, 0x1060($at)
    ctx->pc = 0x1f40b4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4192), GPR_U64(ctx, 2));
label_1f40b8:
    // 0x1f40b8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1f40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1f40bc:
    // 0x1f40bc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1f40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1f40c0:
    // 0x1f40c0: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1f40c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1f40c4:
    // 0x1f40c4: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1f40c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1f40c8:
    // 0x1f40c8: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
label_1f40cc:
    // 0x1f40cc: 0x25080e40  addiu       $t0, $t0, 0xE40
    ctx->pc = 0x1f40ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3648));
label_1f40d0:
    // 0x1f40d0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1f40d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
label_1f40d4:
    // 0x1f40d4: 0xac261068  sw          $a2, 0x1068($at)
    ctx->pc = 0x1f40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4200), GPR_U32(ctx, 6));
label_1f40d8:
    // 0x1f40d8: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1f40d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_1f40dc:
    // 0x1f40dc: 0x24214100  addiu       $at, $at, 0x4100
    ctx->pc = 0x1f40dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 16640));
label_1f40e0:
    // 0x1f40e0: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1f40e0u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1f40e4:
    // 0x1f40e4: 0x40f  sync.p
    ctx->pc = 0x1f40e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f40e8:
    // 0x1f40e8: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1f40e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1f40ec:
    // 0x1f40ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1f40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1f40f0:
    // 0x1f40f0: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1f40f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1f40f4:
    // 0x1f40f4: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1f40f4u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1f40f8:
    // 0x1f40f8: 0x40f  sync.p
    ctx->pc = 0x1f40f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1f40fc:
    // 0x1f40fc: 0x42000018  eret
    ctx->pc = 0x1f40fcu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1f4100:
    // 0x1f4100: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1f4100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1f4104:
    // 0x1f4104: 0x8c21a7b8  lw          $at, -0x5848($at)
    ctx->pc = 0x1f4104u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294944696)));
label_1f4108:
    // 0x1f4108: 0x3c1d0039  lui         $sp, 0x39
    ctx->pc = 0x1f4108u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)57 << 16));
label_1f410c:
    // 0x1f410c: 0x20f809  jalr        $at
label_1f4110:
    if (ctx->pc == 0x1F4110u) {
        ctx->pc = 0x1F4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F410Cu;
        // 0x1f4110: 0x27bd0e40  addiu       $sp, $sp, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4114u;
        goto label_1f4114;
    }
    ctx->pc = 0x1F410Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1F4114u);
        ctx->pc = 0x1F4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F410Cu;
        // 0x1f4110: 0x27bd0e40  addiu       $sp, $sp, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3648));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F410Cu, 0x1F4114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4114u;
label_1f4114:
    // 0x1f4114: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x1f4114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_1f4118:
    // 0x1f4118: 0xc  syscall     0
    ctx->pc = 0x1f4118u;
    ctx->pc = 0x1F411Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1f411c:
    // 0x1f411c: 0x0  nop
    ctx->pc = 0x1f411cu;
    // NOP
label_1f4120:
    // 0x1f4120: 0x0  nop
    ctx->pc = 0x1f4120u;
    // NOP
label_1f4124:
    // 0x1f4124: 0x0  nop
    ctx->pc = 0x1f4124u;
    // NOP
label_1f4128:
    // 0x1f4128: 0x0  nop
    ctx->pc = 0x1f4128u;
    // NOP
label_1f412c:
    // 0x1f412c: 0x0  nop
    ctx->pc = 0x1f412cu;
    // NOP
label_1f4130:
    // 0x1f4130: 0x0  nop
    ctx->pc = 0x1f4130u;
    // NOP
label_1f4134:
    // 0x1f4134: 0x0  nop
    ctx->pc = 0x1f4134u;
    // NOP
label_1f4138:
    // 0x1f4138: 0x0  nop
    ctx->pc = 0x1f4138u;
    // NOP
label_1f413c:
    // 0x1f413c: 0x0  nop
    ctx->pc = 0x1f413cu;
    // NOP
    ctx->pc = 0x1f4140u;
}
