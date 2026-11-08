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

// Function: FUN_00111280
// Address: 0x111280 - 0x1119f8
void FUN_00111280_0x111280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111280_0x111280");
#endif

    switch (ctx->pc) {
        case 0x1112e4u: goto label_1112e4;
        case 0x1112f8u: goto label_1112f8;
        case 0x1113a0u: goto label_1113a0;
        case 0x1113d8u: goto label_1113d8;
        case 0x1113ecu: goto label_1113ec;
        case 0x1113f8u: goto label_1113f8;
        case 0x111414u: goto label_111414;
        case 0x1114acu: goto label_1114ac;
        case 0x1114d4u: goto label_1114d4;
        case 0x111514u: goto label_111514;
        case 0x111568u: goto label_111568;
        case 0x111584u: goto label_111584;
        case 0x11158cu: goto label_11158c;
        case 0x1115c4u: goto label_1115c4;
        case 0x1115f4u: goto label_1115f4;
        case 0x11162cu: goto label_11162c;
        case 0x111644u: goto label_111644;
        case 0x1116acu: goto label_1116ac;
        case 0x1116d4u: goto label_1116d4;
        case 0x1116dcu: goto label_1116dc;
        case 0x1116f8u: goto label_1116f8;
        case 0x11176cu: goto label_11176c;
        case 0x111788u: goto label_111788;
        case 0x1117b0u: goto label_1117b0;
        case 0x1117ecu: goto label_1117ec;
        case 0x111830u: goto label_111830;
        case 0x11184cu: goto label_11184c;
        case 0x111874u: goto label_111874;
        case 0x1118acu: goto label_1118ac;
        case 0x1118d4u: goto label_1118d4;
        case 0x111914u: goto label_111914;
        case 0x111958u: goto label_111958;
        case 0x1119b4u: goto label_1119b4;
        case 0x1119bcu: goto label_1119bc;
        case 0x1119c0u: goto label_1119c0;
        case 0x1119c4u: goto label_1119c4;
        default: break;
    }

    ctx->pc = 0x111280u;

    // 0x111280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x111284: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x111284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x111288: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x111288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11128c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11128cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111290: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x111290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x111294: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x111294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x111298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11129c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1112a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1112a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1112a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1112a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1112a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112ac: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x1112acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1112b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1112b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1112b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1112b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1112b8: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x1112b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1112bc: 0x0  nop
    ctx->pc = 0x1112bcu;
    // NOP
    // 0x1112c0: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1112C0u;
    {
        const bool branch_taken_0x1112c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1112C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112C0u;
        // 0x1112c4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112c0) {
            ctx->pc = 0x1112CCu;
            goto label_1112cc;
        }
    }
    ctx->pc = 0x1112C8u;
    // 0x1112c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1112c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1112cc:
    // 0x1112cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1112ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1112d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1112d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1112d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1112d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112dc: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x1112DCu;
    SET_GPR_U32(ctx, 31, 0x1112E4u);
    ctx->pc = 0x1112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112DCu;
    // 0x1112e0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x1112DCu, 0x1112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1112e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1112e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1112e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112ec: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1112ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1112f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1112F0u;
    {
        const bool branch_taken_0x1112f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F0u;
        // 0x1112f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112f0) {
            ctx->pc = 0x111338u;
            goto label_111338;
        }
    }
    ctx->pc = 0x1112F8u;
label_1112f8:
    // 0x1112f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1112f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1112fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1112fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x111300: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111308: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11130c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x11130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111310: 0x90440224  lbu         $a0, 0x224($v0)
    ctx->pc = 0x111310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x111314: 0x416bc  dsll32      $v0, $a0, 26
    ctx->pc = 0x111314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
    // 0x111318: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11131c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11131Cu;
    {
        const bool branch_taken_0x11131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11131Cu;
        // 0x111320: 0x30820007  andi        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11131c) {
            ctx->pc = 0x111330u;
            goto label_111330;
        }
    }
    ctx->pc = 0x111324u;
    // 0x111324: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x111324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x111328: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111328u;
    {
        const bool branch_taken_0x111328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111328u;
        // 0x11132c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111328) {
            ctx->pc = 0x111344u;
            goto label_111344;
        }
    }
    ctx->pc = 0x111330u;
label_111330:
    // 0x111330: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x111330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x111334: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_111338:
    // 0x111338: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x111338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11133c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11133Cu;
    {
        const bool branch_taken_0x11133c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11133Cu;
        // 0x111340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11133c) {
            ctx->pc = 0x1112F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1112f8;
        }
    }
    ctx->pc = 0x111344u;
label_111344:
    // 0x111344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111344u;
    {
        const bool branch_taken_0x111344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111344) {
            ctx->pc = 0x111368u;
            goto label_111368;
        }
    }
    ctx->pc = 0x11134Cu;
    // 0x11134c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111350: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x111354: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x111354u;
    {
        const bool branch_taken_0x111354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x111354) {
            ctx->pc = 0x111368u;
            goto label_111368;
        }
    }
    ctx->pc = 0x11135Cu;
    // 0x11135c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x11135cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x111360: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x111360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x111364: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_111368:
    // 0x111368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x111368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11136c: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x11136cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x111370: 0x10200199  beqz        $at, . + 4 + (0x199 << 2)
    ctx->pc = 0x111370u;
    {
        const bool branch_taken_0x111370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111370u;
        // 0x111374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111370) {
            ctx->pc = 0x1119D8u;
            goto label_1119d8;
        }
    }
    ctx->pc = 0x111378u;
    // 0x111378: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x111378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11137c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11137cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x111380: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
    // 0x111384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x111388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11138c: 0x400008  jr          $v0
    ctx->pc = 0x11138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111394u: goto label_111394;
            case 0x1114A0u: goto label_1114a0;
            case 0x1114F8u: goto label_1114f8;
            case 0x111674u: goto label_111674;
            case 0x11177Cu: goto label_11177c;
            case 0x1117D0u: goto label_1117d0;
            case 0x1118A0u: goto label_1118a0;
            case 0x1118F8u: goto label_1118f8;
            case 0x111974u: goto label_111974;
            case 0x1119D4u: goto label_1119d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11138Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x111394u;
label_111394:
    // 0x111394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x111394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111398: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x111398u;
    {
        const bool branch_taken_0x111398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111398u;
        // 0x11139c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111398) {
            ctx->pc = 0x1113F8u;
            goto label_1113f8;
        }
    }
    ctx->pc = 0x1113A0u;
label_1113a0:
    // 0x1113a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1113a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1113a4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1113a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1113a8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1113a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1113ac: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1113acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1113b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1113b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1113b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1113b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1113b8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1113b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1113bc: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x1113bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1113c0: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1113c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1113c4: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1113c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1113c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1113C8u;
    {
        const bool branch_taken_0x1113c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C8u;
        // 0x1113cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113c8) {
            ctx->pc = 0x1113E0u;
            goto label_1113e0;
        }
    }
    ctx->pc = 0x1113D0u;
    // 0x1113d0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1113D0u;
    SET_GPR_U32(ctx, 31, 0x1113D8u);
    ctx->pc = 0x1113D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113D0u;
    // 0x1113d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1113D0u, 0x1113D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D8u;
label_1113d8:
    // 0x1113d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1113D8u;
    {
        const bool branch_taken_0x1113d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113d8) {
            ctx->pc = 0x1113ECu;
            goto label_1113ec;
        }
    }
    ctx->pc = 0x1113E0u;
label_1113e0:
    // 0x1113e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1113e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1113e4: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1113E4u;
    SET_GPR_U32(ctx, 31, 0x1113ECu);
    ctx->pc = 0x1113E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113E4u;
    // 0x1113e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1113E4u, 0x1113ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113ECu;
label_1113ec:
    // 0x1113ec: 0x0  nop
    ctx->pc = 0x1113ecu;
    // NOP
    // 0x1113f0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1113f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1113f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1113f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1113f8:
    // 0x1113f8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1113fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1113fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111400: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x111400u;
    {
        const bool branch_taken_0x111400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111400u;
        // 0x111404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111400) {
            ctx->pc = 0x1113A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1113a0;
        }
    }
    ctx->pc = 0x111408u;
    // 0x111408: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x111408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11140c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11140Cu;
    {
        const bool branch_taken_0x11140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11140Cu;
        // 0x111410: 0x2405fff7  addiu       $a1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11140c) {
            ctx->pc = 0x111480u;
            goto label_111480;
        }
    }
    ctx->pc = 0x111414u;
label_111414:
    // 0x111414: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x111414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111418: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x111418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x11141c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x11141cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x111420: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x111420u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x111424: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x111424u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x111428: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x111428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x11142c: 0x8c872cd8  lw          $a3, 0x2CD8($a0)
    ctx->pc = 0x11142cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x111430: 0x90e60224  lbu         $a2, 0x224($a3)
    ctx->pc = 0x111430u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111434: 0x626fc  dsll32      $a0, $a2, 27
    ctx->pc = 0x111434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 27));
    // 0x111438: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x111438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x11143c: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x11143Cu;
    {
        const bool branch_taken_0x11143c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x111440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11143Cu;
        // 0x111440: 0x626bc  dsll32      $a0, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11143c) {
            ctx->pc = 0x111478u;
            goto label_111478;
        }
    }
    ctx->pc = 0x111444u;
    // 0x111444: 0x427fe  dsrl32      $a0, $a0, 31
    ctx->pc = 0x111444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 31));
    // 0x111448: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111448u;
    {
        const bool branch_taken_0x111448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x111448) {
            ctx->pc = 0x111460u;
            goto label_111460;
        }
    }
    ctx->pc = 0x111450u;
    // 0x111450: 0x8ce40224  lw          $a0, 0x224($a3)
    ctx->pc = 0x111450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111454: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x111454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x111458: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x111458u;
    {
        const bool branch_taken_0x111458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111458u;
        // 0x11145c: 0xace40224  sw          $a0, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111458) {
            ctx->pc = 0x111478u;
            goto label_111478;
        }
    }
    ctx->pc = 0x111460u;
label_111460:
    // 0x111460: 0x8ce40224  lw          $a0, 0x224($a3)
    ctx->pc = 0x111460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111464: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x111464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x111468: 0xace40224  sw          $a0, 0x224($a3)
    ctx->pc = 0x111468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 4));
    // 0x11146c: 0x8ce40224  lw          $a0, 0x224($a3)
    ctx->pc = 0x11146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111470: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x111470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x111474: 0xace40224  sw          $a0, 0x224($a3)
    ctx->pc = 0x111474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 4));
label_111478:
    // 0x111478: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x111478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x11147c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_111480:
    // 0x111480: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x111480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111484: 0x44202a  slt         $a0, $v0, $a0
    ctx->pc = 0x111484u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x111488: 0x1480ffe2  bnez        $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x111488u;
    {
        const bool branch_taken_0x111488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x111488) {
            ctx->pc = 0x111414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111414;
        }
    }
    ctx->pc = 0x111490u;
    // 0x111490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111498: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x111498u;
    {
        const bool branch_taken_0x111498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111498u;
        // 0x11149c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111498) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x1114A0u;
label_1114a0:
    // 0x1114a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1114a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1114A4u;
    {
        const bool branch_taken_0x1114a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114A4u;
        // 0x1114a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114a4) {
            ctx->pc = 0x1114D4u;
            goto label_1114d4;
        }
    }
    ctx->pc = 0x1114ACu;
label_1114ac:
    // 0x1114ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1114acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1114b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1114b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1114b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1114b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1114b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1114bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1114bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1114c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1114c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1114c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1114c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1114c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1114c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1114cc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1114ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1114d0: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x1114d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_1114d4:
    // 0x1114d4: 0x0  nop
    ctx->pc = 0x1114d4u;
    // NOP
    // 0x1114d8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1114d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1114dc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1114dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1114e0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1114E0u;
    {
        const bool branch_taken_0x1114e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1114e0) {
            ctx->pc = 0x1114ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1114ac;
        }
    }
    ctx->pc = 0x1114E8u;
    // 0x1114e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1114e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1114ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1114ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1114f0: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1114F0u;
    {
        const bool branch_taken_0x1114f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114F0u;
        // 0x1114f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114f0) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x1114F8u;
label_1114f8:
    // 0x1114f8: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1114f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1114fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1114fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111500: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x111500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11150c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11150Cu;
    {
        const bool branch_taken_0x11150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11150Cu;
        // 0x111510: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11150c) {
            ctx->pc = 0x111568u;
            goto label_111568;
        }
    }
    ctx->pc = 0x111514u;
label_111514:
    // 0x111514: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x111514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111518: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x111518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x11151c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x11151cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111524: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111528: 0x8c492cd8  lw          $t1, 0x2CD8($v0)
    ctx->pc = 0x111528u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11152c: 0x91240224  lbu         $a0, 0x224($t1)
    ctx->pc = 0x11152cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 548)));
    // 0x111530: 0x416fc  dsll32      $v0, $a0, 27
    ctx->pc = 0x111530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 27));
    // 0x111534: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111538: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111538u;
    {
        const bool branch_taken_0x111538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111538u;
        // 0x11153c: 0x416bc  dsll32      $v0, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111538) {
            ctx->pc = 0x11155Cu;
            goto label_11155c;
        }
    }
    ctx->pc = 0x111540u;
    // 0x111540: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111544: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111544u;
    {
        const bool branch_taken_0x111544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111544) {
            ctx->pc = 0x11155Cu;
            goto label_11155c;
        }
    }
    ctx->pc = 0x11154Cu;
    // 0x11154c: 0x8d220228  lw          $v0, 0x228($t1)
    ctx->pc = 0x11154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 552)));
    // 0x111550: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111550u;
    {
        const bool branch_taken_0x111550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111550u;
        // 0x111554: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111550) {
            ctx->pc = 0x11155Cu;
            goto label_11155c;
        }
    }
    ctx->pc = 0x111558u;
    // 0x111558: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x111558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_11155c:
    // 0x11155c: 0x0  nop
    ctx->pc = 0x11155cu;
    // NOP
    // 0x111560: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x111560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x111564: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_111568:
    // 0x111568: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x111568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11156c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x11156Cu;
    {
        const bool branch_taken_0x11156c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11156c) {
            ctx->pc = 0x111514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111514;
        }
    }
    ctx->pc = 0x111574u;
    // 0x111574: 0x15070117  bne         $t0, $a3, . + 4 + (0x117 << 2)
    ctx->pc = 0x111574u;
    {
        const bool branch_taken_0x111574 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x111578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111574u;
        // 0x111578: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111574) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x11157Cu;
    // 0x11157c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11157Cu;
    {
        const bool branch_taken_0x11157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11157Cu;
        // 0x111580: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11157c) {
            ctx->pc = 0x1115D4u;
            goto label_1115d4;
        }
    }
    ctx->pc = 0x111584u;
label_111584:
    // 0x111584: 0xc044254  jal         func_110950
    ctx->pc = 0x111584u;
    SET_GPR_U32(ctx, 31, 0x11158Cu);
    ctx->pc = 0x110950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110950u, 0x111584u, 0x11158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11158Cu;
label_11158c:
    // 0x11158c: 0x24432cd8  addiu       $v1, $v0, 0x2CD8
    ctx->pc = 0x11158cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 11480));
    // 0x111590: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x111590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111594: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x111594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x111598: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111598u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11159c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11159cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1115a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1115a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1115a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1115a8: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x1115a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x1115ac: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1115acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1115b0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1115b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1115b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1115B4u;
    {
        const bool branch_taken_0x1115b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1115B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115B4u;
        // 0x1115b8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115b4) {
            ctx->pc = 0x1115CCu;
            goto label_1115cc;
        }
    }
    ctx->pc = 0x1115BCu;
    // 0x1115bc: 0xc042118  jal         func_108460
    ctx->pc = 0x1115BCu;
    SET_GPR_U32(ctx, 31, 0x1115C4u);
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x1115BCu, 0x1115C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115C4u;
label_1115c4:
    // 0x1115c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1115C4u;
    {
        const bool branch_taken_0x1115c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1115c4) {
            ctx->pc = 0x1115E8u;
            goto label_1115e8;
        }
    }
    ctx->pc = 0x1115CCu;
label_1115cc:
    // 0x1115cc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1115ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1115d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1115d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1115d4:
    // 0x1115d4: 0x0  nop
    ctx->pc = 0x1115d4u;
    // NOP
    // 0x1115d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1115d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1115dc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1115dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1115e0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1115E0u;
    {
        const bool branch_taken_0x1115e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1115e0) {
            ctx->pc = 0x111584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111584;
        }
    }
    ctx->pc = 0x1115E8u;
label_1115e8:
    // 0x1115e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1115e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1115ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1115ECu;
    {
        const bool branch_taken_0x1115ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1115F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115ECu;
        // 0x1115f0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1115ec) {
            ctx->pc = 0x111650u;
            goto label_111650;
        }
    }
    ctx->pc = 0x1115F4u;
label_1115f4:
    // 0x1115f4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1115f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1115f8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1115f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1115fc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1115fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x111600: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11160c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111610: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x111610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x111614: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x111614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x111618: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11161c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11161Cu;
    {
        const bool branch_taken_0x11161c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11161Cu;
        // 0x111620: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11161c) {
            ctx->pc = 0x111634u;
            goto label_111634;
        }
    }
    ctx->pc = 0x111624u;
    // 0x111624: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x111624u;
    SET_GPR_U32(ctx, 31, 0x11162Cu);
    ctx->pc = 0x111628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111624u;
    // 0x111628: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x111624u, 0x11162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11162Cu;
label_11162c:
    // 0x11162c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11162Cu;
    {
        const bool branch_taken_0x11162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11162c) {
            ctx->pc = 0x111644u;
            goto label_111644;
        }
    }
    ctx->pc = 0x111634u;
label_111634:
    // 0x111634: 0x0  nop
    ctx->pc = 0x111634u;
    // NOP
    // 0x111638: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x111638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11163c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11163Cu;
    SET_GPR_U32(ctx, 31, 0x111644u);
    ctx->pc = 0x111640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11163Cu;
    // 0x111640: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11163Cu, 0x111644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111644u;
label_111644:
    // 0x111644: 0x0  nop
    ctx->pc = 0x111644u;
    // NOP
    // 0x111648: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x111648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x11164c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11164cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_111650:
    // 0x111650: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x111650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111654: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x111654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111658: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x111658u;
    {
        const bool branch_taken_0x111658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111658) {
            ctx->pc = 0x1115F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1115f4;
        }
    }
    ctx->pc = 0x111660u;
    // 0x111660: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x111660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x111664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11166c: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x11166Cu;
    {
        const bool branch_taken_0x11166c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11166Cu;
        // 0x111670: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11166c) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x111674u;
label_111674:
    // 0x111674: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x111674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111678: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x111678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x11167c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11167cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111680: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x111680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x111684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x111688: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x111688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11168c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11168cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111690: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x111690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x111694: 0x0  nop
    ctx->pc = 0x111694u;
    // NOP
    // 0x111698: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x111698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11169c: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x11169Cu;
    {
        const bool branch_taken_0x11169c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11169Cu;
        // 0x1116a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11169c) {
            ctx->pc = 0x11176Cu;
            goto label_11176c;
        }
    }
    ctx->pc = 0x1116A4u;
    // 0x1116a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1116A4u;
    {
        const bool branch_taken_0x1116a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116A4u;
        // 0x1116a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116a4) {
            ctx->pc = 0x1116DCu;
            goto label_1116dc;
        }
    }
    ctx->pc = 0x1116ACu;
label_1116ac:
    // 0x1116ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1116acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1116b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1116b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1116b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1116b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1116b8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1116b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1116bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1116bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1116c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1116c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1116c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1116c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1116c8: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1116c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1116cc: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x1116CCu;
    SET_GPR_U32(ctx, 31, 0x1116D4u);
    ctx->pc = 0x1116D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1116CCu;
    // 0x1116d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x1116CCu, 0x1116D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1116D4u;
label_1116d4:
    // 0x1116d4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x1116d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x1116d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1116d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1116dc:
    // 0x1116dc: 0x0  nop
    ctx->pc = 0x1116dcu;
    // NOP
    // 0x1116e0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1116e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1116e4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1116e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1116e8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1116E8u;
    {
        const bool branch_taken_0x1116e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1116ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116E8u;
        // 0x1116ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116e8) {
            ctx->pc = 0x1116ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1116ac;
        }
    }
    ctx->pc = 0x1116F0u;
    // 0x1116f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1116F0u;
    {
        const bool branch_taken_0x1116f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1116F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1116F0u;
        // 0x1116f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1116f0) {
            ctx->pc = 0x111750u;
            goto label_111750;
        }
    }
    ctx->pc = 0x1116F8u;
label_1116f8:
    // 0x1116f8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1116f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1116fc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1116fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111700: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111704: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11170c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111710: 0x8c432cd8  lw          $v1, 0x2CD8($v0)
    ctx->pc = 0x111710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111714: 0x90620224  lbu         $v0, 0x224($v1)
    ctx->pc = 0x111714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x111718: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x111718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11171c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111720: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x111720u;
    {
        const bool branch_taken_0x111720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111720) {
            ctx->pc = 0x111744u;
            goto label_111744;
        }
    }
    ctx->pc = 0x111728u;
    // 0x111728: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11172c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11172cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111730: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111734: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
    // 0x111738: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x111738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11173c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11173cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x111740: 0xac620224  sw          $v0, 0x224($v1)
    ctx->pc = 0x111740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 2));
label_111744:
    // 0x111744: 0x0  nop
    ctx->pc = 0x111744u;
    // NOP
    // 0x111748: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x111748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x11174c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11174cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_111750:
    // 0x111750: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x111750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111754: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x111754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111758: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x111758u;
    {
        const bool branch_taken_0x111758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111758) {
            ctx->pc = 0x1116F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1116f8;
        }
    }
    ctx->pc = 0x111760u;
    // 0x111760: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111768: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x111768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_11176c:
    // 0x11176c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111774: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x111774u;
    {
        const bool branch_taken_0x111774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111774u;
        // 0x111778: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111774) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x11177Cu;
label_11177c:
    // 0x11177c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11177cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111780: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x111780u;
    {
        const bool branch_taken_0x111780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111780u;
        // 0x111784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111780) {
            ctx->pc = 0x1117B0u;
            goto label_1117b0;
        }
    }
    ctx->pc = 0x111788u;
label_111788:
    // 0x111788: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x111788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11178c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11178cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x111790: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111794: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111798: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11179c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1117a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1117a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1117a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1117a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1117a8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1117a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1117ac: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x1117acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_1117b0:
    // 0x1117b0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1117b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1117b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1117b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1117b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1117B8u;
    {
        const bool branch_taken_0x1117b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1117b8) {
            ctx->pc = 0x111788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111788;
        }
    }
    ctx->pc = 0x1117C0u;
    // 0x1117c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1117c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1117c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1117c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1117c8: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x1117C8u;
    {
        const bool branch_taken_0x1117c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C8u;
        // 0x1117cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c8) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x1117D0u;
label_1117d0:
    // 0x1117d0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1117d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1117d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1117d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117d8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1117d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1117dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1117dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1117e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1117e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1117E4u;
    {
        const bool branch_taken_0x1117e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117E4u;
        // 0x1117e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117e4) {
            ctx->pc = 0x111830u;
            goto label_111830;
        }
    }
    ctx->pc = 0x1117ECu;
label_1117ec:
    // 0x1117ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1117ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1117f0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1117f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1117f4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1117f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1117f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1117fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1117fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111800: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x111800u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111804: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x111804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x111808: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x111808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x11180c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x11180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111810: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111810u;
    {
        const bool branch_taken_0x111810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111810) {
            ctx->pc = 0x111828u;
            goto label_111828;
        }
    }
    ctx->pc = 0x111818u;
    // 0x111818: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x111818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x11181c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11181Cu;
    {
        const bool branch_taken_0x11181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11181Cu;
        // 0x111820: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11181c) {
            ctx->pc = 0x111828u;
            goto label_111828;
        }
    }
    ctx->pc = 0x111824u;
    // 0x111824: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x111824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_111828:
    // 0x111828: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x111828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x11182c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_111830:
    // 0x111830: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x111830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111834: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x111834u;
    {
        const bool branch_taken_0x111834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111834) {
            ctx->pc = 0x1117ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1117ec;
        }
    }
    ctx->pc = 0x11183Cu;
    // 0x11183c: 0x14e60065  bne         $a3, $a2, . + 4 + (0x65 << 2)
    ctx->pc = 0x11183Cu;
    {
        const bool branch_taken_0x11183c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x111840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11183Cu;
        // 0x111840: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11183c) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x111844u;
    // 0x111844: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111844u;
    {
        const bool branch_taken_0x111844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111844u;
        // 0x111848: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111844) {
            ctx->pc = 0x11187Cu;
            goto label_11187c;
        }
    }
    ctx->pc = 0x11184Cu;
label_11184c:
    // 0x11184c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111850: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x111850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111854: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111858: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x111858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11185c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11185cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111868: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11186c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11186Cu;
    SET_GPR_U32(ctx, 31, 0x111874u);
    ctx->pc = 0x111870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11186Cu;
    // 0x111870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11186Cu, 0x111874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111874u;
label_111874:
    // 0x111874: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x111874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x111878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11187c:
    // 0x11187c: 0x0  nop
    ctx->pc = 0x11187cu;
    // NOP
    // 0x111880: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x111880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111884: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x111884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111888: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x111888u;
    {
        const bool branch_taken_0x111888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111888) {
            ctx->pc = 0x11184Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11184c;
        }
    }
    ctx->pc = 0x111890u;
    // 0x111890: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111898: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x111898u;
    {
        const bool branch_taken_0x111898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111898u;
        // 0x11189c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111898) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x1118A0u;
label_1118a0:
    // 0x1118a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1118a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1118a4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1118A4u;
    {
        const bool branch_taken_0x1118a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118A4u;
        // 0x1118a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118a4) {
            ctx->pc = 0x1118D4u;
            goto label_1118d4;
        }
    }
    ctx->pc = 0x1118ACu;
label_1118ac:
    // 0x1118ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1118acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1118b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1118b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1118b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1118b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1118b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1118b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1118bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1118bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1118c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1118c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1118c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1118c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1118c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1118c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1118cc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1118ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1118d0: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x1118d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_1118d4:
    // 0x1118d4: 0x0  nop
    ctx->pc = 0x1118d4u;
    // NOP
    // 0x1118d8: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1118d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1118dc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1118dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1118e0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1118E0u;
    {
        const bool branch_taken_0x1118e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1118e0) {
            ctx->pc = 0x1118ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1118ac;
        }
    }
    ctx->pc = 0x1118E8u;
    // 0x1118e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1118e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1118ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1118ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1118f0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1118F0u;
    {
        const bool branch_taken_0x1118f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118F0u;
        // 0x1118f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118f0) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x1118F8u;
label_1118f8:
    // 0x1118f8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1118f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1118fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1118fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111900: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x111900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11190c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11190Cu;
    {
        const bool branch_taken_0x11190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11190c) {
            ctx->pc = 0x111958u;
            goto label_111958;
        }
    }
    ctx->pc = 0x111914u;
label_111914:
    // 0x111914: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x111914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x111918: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x111918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11191c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x11191cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111924: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x111924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111928: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x111928u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11192c: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x11192cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x111930: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x111930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x111934: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x111934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x111938: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111938u;
    {
        const bool branch_taken_0x111938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111938) {
            ctx->pc = 0x111950u;
            goto label_111950;
        }
    }
    ctx->pc = 0x111940u;
    // 0x111940: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x111940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x111944: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x111944u;
    {
        const bool branch_taken_0x111944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111944u;
        // 0x111948: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111944) {
            ctx->pc = 0x111950u;
            goto label_111950;
        }
    }
    ctx->pc = 0x11194Cu;
    // 0x11194c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11194cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_111950:
    // 0x111950: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x111950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x111954: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_111958:
    // 0x111958: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x111958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11195c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11195Cu;
    {
        const bool branch_taken_0x11195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11195c) {
            ctx->pc = 0x111914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111914;
        }
    }
    ctx->pc = 0x111964u;
    // 0x111964: 0x14e6001b  bne         $a3, $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x111964u;
    {
        const bool branch_taken_0x111964 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x111964) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x11196Cu;
    // 0x11196c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11196Cu;
    {
        const bool branch_taken_0x11196c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11196Cu;
        // 0x111970: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11196c) {
            ctx->pc = 0x1119D4u;
            goto label_1119d4;
        }
    }
    ctx->pc = 0x111974u;
label_111974:
    // 0x111974: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x111974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111978: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x111978u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11197c: 0x0  nop
    ctx->pc = 0x11197cu;
    // NOP
    // 0x111980: 0x0  nop
    ctx->pc = 0x111980u;
    // NOP
    // 0x111984: 0x1010  mfhi        $v0
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x111988: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x111988u;
    {
        const bool branch_taken_0x111988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111988) {
            ctx->pc = 0x1119C0u;
            goto label_1119c0;
        }
    }
    ctx->pc = 0x111990u;
    // 0x111990: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x111990u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x111994: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x111994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111998: 0x0  nop
    ctx->pc = 0x111998u;
    // NOP
    // 0x11199c: 0x2812  mflo        $a1
    ctx->pc = 0x11199cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1119a0: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1119a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1119a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1119A4u;
    {
        const bool branch_taken_0x1119a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119A4u;
        // 0x1119a8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119a4) {
            ctx->pc = 0x1119BCu;
            goto label_1119bc;
        }
    }
    ctx->pc = 0x1119ACu;
    // 0x1119ac: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x1119ACu;
    SET_GPR_U32(ctx, 31, 0x1119B4u);
    ctx->pc = 0x1119B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119ACu;
    // 0x1119b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x1119ACu, 0x1119B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119B4u;
label_1119b4:
    // 0x1119b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1119B4u;
    {
        const bool branch_taken_0x1119b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119B4u;
        // 0x1119b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119b4) {
            ctx->pc = 0x1119C4u;
            goto label_1119c4;
        }
    }
    ctx->pc = 0x1119BCu;
label_1119bc:
    // 0x1119bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1119bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1119c0:
    // 0x1119c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1119c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1119c4:
    // 0x1119c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1119c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1119c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1119c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1119cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1119CCu;
    {
        const bool branch_taken_0x1119cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119CCu;
        // 0x1119d0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119cc) {
            ctx->pc = 0x1119D8u;
            goto label_1119d8;
        }
    }
    ctx->pc = 0x1119D4u;
label_1119d4:
    // 0x1119d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1119d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1119d8:
    // 0x1119d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1119d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1119dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1119dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1119e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1119e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1119e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1119e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1119e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1119e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1119ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1119ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1119f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1119F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119F0u;
        // 0x1119f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1119F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1119F8u;
}
