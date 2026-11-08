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

// Function: FUN_00120950
// Address: 0x120950 - 0x120a88
void FUN_00120950_0x120950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120950_0x120950");
#endif

    switch (ctx->pc) {
        case 0x120950u: goto label_120950;
        case 0x120954u: goto label_120954;
        case 0x120958u: goto label_120958;
        case 0x12095cu: goto label_12095c;
        case 0x120960u: goto label_120960;
        case 0x120964u: goto label_120964;
        case 0x120968u: goto label_120968;
        case 0x12096cu: goto label_12096c;
        case 0x120970u: goto label_120970;
        case 0x120974u: goto label_120974;
        case 0x120978u: goto label_120978;
        case 0x12097cu: goto label_12097c;
        case 0x120980u: goto label_120980;
        case 0x120984u: goto label_120984;
        case 0x120988u: goto label_120988;
        case 0x12098cu: goto label_12098c;
        case 0x120990u: goto label_120990;
        case 0x120994u: goto label_120994;
        case 0x120998u: goto label_120998;
        case 0x12099cu: goto label_12099c;
        case 0x1209a0u: goto label_1209a0;
        case 0x1209a4u: goto label_1209a4;
        case 0x1209a8u: goto label_1209a8;
        case 0x1209acu: goto label_1209ac;
        case 0x1209b0u: goto label_1209b0;
        case 0x1209b4u: goto label_1209b4;
        case 0x1209b8u: goto label_1209b8;
        case 0x1209bcu: goto label_1209bc;
        case 0x1209c0u: goto label_1209c0;
        case 0x1209c4u: goto label_1209c4;
        case 0x1209c8u: goto label_1209c8;
        case 0x1209ccu: goto label_1209cc;
        case 0x1209d0u: goto label_1209d0;
        case 0x1209d4u: goto label_1209d4;
        case 0x1209d8u: goto label_1209d8;
        case 0x1209dcu: goto label_1209dc;
        case 0x1209e0u: goto label_1209e0;
        case 0x1209e4u: goto label_1209e4;
        case 0x1209e8u: goto label_1209e8;
        case 0x1209ecu: goto label_1209ec;
        case 0x1209f0u: goto label_1209f0;
        case 0x1209f4u: goto label_1209f4;
        case 0x1209f8u: goto label_1209f8;
        case 0x1209fcu: goto label_1209fc;
        case 0x120a00u: goto label_120a00;
        case 0x120a04u: goto label_120a04;
        case 0x120a08u: goto label_120a08;
        case 0x120a0cu: goto label_120a0c;
        case 0x120a10u: goto label_120a10;
        case 0x120a14u: goto label_120a14;
        case 0x120a18u: goto label_120a18;
        case 0x120a1cu: goto label_120a1c;
        case 0x120a20u: goto label_120a20;
        case 0x120a24u: goto label_120a24;
        case 0x120a28u: goto label_120a28;
        case 0x120a2cu: goto label_120a2c;
        case 0x120a30u: goto label_120a30;
        case 0x120a34u: goto label_120a34;
        case 0x120a38u: goto label_120a38;
        case 0x120a3cu: goto label_120a3c;
        case 0x120a40u: goto label_120a40;
        case 0x120a44u: goto label_120a44;
        case 0x120a48u: goto label_120a48;
        case 0x120a4cu: goto label_120a4c;
        case 0x120a50u: goto label_120a50;
        case 0x120a54u: goto label_120a54;
        case 0x120a58u: goto label_120a58;
        case 0x120a5cu: goto label_120a5c;
        case 0x120a60u: goto label_120a60;
        case 0x120a64u: goto label_120a64;
        case 0x120a68u: goto label_120a68;
        case 0x120a6cu: goto label_120a6c;
        case 0x120a70u: goto label_120a70;
        case 0x120a74u: goto label_120a74;
        case 0x120a78u: goto label_120a78;
        case 0x120a7cu: goto label_120a7c;
        case 0x120a80u: goto label_120a80;
        case 0x120a84u: goto label_120a84;
        default: break;
    }

    ctx->pc = 0x120950u;

label_120950:
    // 0x120950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_120954:
    // 0x120954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_120958:
    // 0x120958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12095c:
    // 0x12095c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_120960:
    // 0x120960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120964:
    // 0x120964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x120964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_120968:
    // 0x120968: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_12096c:
    // 0x12096c: 0xc04842c  jal         func_1210B0
label_120970:
    if (ctx->pc == 0x120970u) {
        ctx->pc = 0x120970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12096Cu;
        // 0x120970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120974u;
        goto label_120974;
    }
    ctx->pc = 0x12096Cu;
    SET_GPR_U32(ctx, 31, 0x120974u);
    ctx->pc = 0x120970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12096Cu;
    // 0x120970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210B0u, 0x12096Cu, 0x120974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120974u;
label_120974:
    // 0x120974: 0x93a20038  lbu         $v0, 0x38($sp)
    ctx->pc = 0x120974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
label_120978:
    // 0x120978: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_12097c:
    if (ctx->pc == 0x12097Cu) {
        ctx->pc = 0x120980u;
        goto label_120980;
    }
    ctx->pc = 0x120978u;
    {
        const bool branch_taken_0x120978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120978) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x120980u;
label_120980:
    // 0x120980: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x120980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_120984:
    // 0x120984: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x120984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_120988:
    // 0x120988: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x120988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_12098c:
    // 0x12098c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x12098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_120990:
    // 0x120990: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x120990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_120994:
    // 0x120994: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_120998:
    if (ctx->pc == 0x120998u) {
        ctx->pc = 0x120998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120994u;
        // 0x120998: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12099Cu;
        goto label_12099c;
    }
    ctx->pc = 0x120994u;
    {
        const bool branch_taken_0x120994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x120998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120994u;
        // 0x120998: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120994) {
            ctx->pc = 0x1209ACu;
            goto label_1209ac;
        }
    }
    ctx->pc = 0x12099Cu;
label_12099c:
    // 0x12099c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x12099cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1209a0:
    // 0x1209a0: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x1209a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
label_1209a4:
    // 0x1209a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1209a8:
    if (ctx->pc == 0x1209A8u) {
        ctx->pc = 0x1209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209A4u;
        // 0x1209a8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209ACu;
        goto label_1209ac;
    }
    ctx->pc = 0x1209A4u;
    {
        const bool branch_taken_0x1209a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209A4u;
        // 0x1209a8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1209a4) {
            ctx->pc = 0x1209BCu;
            goto label_1209bc;
        }
    }
    ctx->pc = 0x1209ACu;
label_1209ac:
    // 0x1209ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1209acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1209b0:
    // 0x1209b0: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1209b4:
    // 0x1209b4: 0x320f809  jalr        $t9
label_1209b8:
    if (ctx->pc == 0x1209B8u) {
        ctx->pc = 0x1209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209B4u;
        // 0x1209b8: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1209BCu;
        goto label_1209bc;
    }
    ctx->pc = 0x1209B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1209BCu);
        ctx->pc = 0x1209B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1209B4u;
        // 0x1209b8: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1209B4u, 0x1209BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1209BCu;
label_1209bc:
    // 0x1209bc: 0x401027  not         $v0, $v0
    ctx->pc = 0x1209bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1209c0:
    // 0x1209c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1209c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1209c4:
    // 0x1209c4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1209c8:
    if (ctx->pc == 0x1209C8u) {
        ctx->pc = 0x1209CCu;
        goto label_1209cc;
    }
    ctx->pc = 0x1209C4u;
    {
        const bool branch_taken_0x1209c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1209c4) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x1209CCu;
label_1209cc:
    // 0x1209cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1209ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1209d0:
    // 0x1209d0: 0x64020005  daddiu      $v0, $zero, 0x5
    ctx->pc = 0x1209d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
label_1209d4:
    // 0x1209d4: 0x9064003a  lbu         $a0, 0x3A($v1)
    ctx->pc = 0x1209d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1209d8:
    // 0x1209d8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1209d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1209dc:
    // 0x1209dc: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1209dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_1209e0:
    // 0x1209e0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1209e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1209e4:
    // 0x1209e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1209e8:
    if (ctx->pc == 0x1209E8u) {
        ctx->pc = 0x1209ECu;
        goto label_1209ec;
    }
    ctx->pc = 0x1209E4u;
    {
        const bool branch_taken_0x1209e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1209e4) {
            ctx->pc = 0x1209F8u;
            goto label_1209f8;
        }
    }
    ctx->pc = 0x1209ECu;
label_1209ec:
    // 0x1209ec: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1209ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_1209f0:
    // 0x1209f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1209f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1209f4:
    // 0x1209f4: 0xa062003a  sb          $v0, 0x3A($v1)
    ctx->pc = 0x1209f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 2));
label_1209f8:
    // 0x1209f8: 0x9064003b  lbu         $a0, 0x3B($v1)
    ctx->pc = 0x1209f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 59)));
label_1209fc:
    // 0x1209fc: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1209fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_120a00:
    // 0x120a00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x120a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_120a04:
    // 0x120a04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x120a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_120a08:
    // 0x120a08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_120a0c:
    if (ctx->pc == 0x120A0Cu) {
        ctx->pc = 0x120A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A08u;
        // 0x120a0c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A10u;
        goto label_120a10;
    }
    ctx->pc = 0x120A08u;
    {
        const bool branch_taken_0x120a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A08u;
        // 0x120a0c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a08) {
            ctx->pc = 0x120A2Cu;
            goto label_120a2c;
        }
    }
    ctx->pc = 0x120A10u;
label_120a10:
    // 0x120a10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x120a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_120a14:
    // 0x120a14: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x120a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
label_120a18:
    // 0x120a18: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x120a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_120a1c:
    // 0x120a1c: 0xc07f5d4  jal         func_1FD750
label_120a20:
    if (ctx->pc == 0x120A20u) {
        ctx->pc = 0x120A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A1Cu;
        // 0x120a20: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A24u;
        goto label_120a24;
    }
    ctx->pc = 0x120A1Cu;
    SET_GPR_U32(ctx, 31, 0x120A24u);
    ctx->pc = 0x120A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A1Cu;
    // 0x120a20: 0x24a5e930  addiu       $a1, $a1, -0x16D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x120A1Cu, 0x120A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A24u;
label_120a24:
    // 0x120a24: 0xc07ef8a  jal         func_1FBE28
label_120a28:
    if (ctx->pc == 0x120A28u) {
        ctx->pc = 0x120A2Cu;
        goto label_120a2c;
    }
    ctx->pc = 0x120A24u;
    SET_GPR_U32(ctx, 31, 0x120A2Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x120A24u, 0x120A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A2Cu;
label_120a2c:
    // 0x120a2c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x120a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_120a30:
    // 0x120a30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120a34:
    // 0x120a34: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x120a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
label_120a38:
    // 0x120a38: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x120a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_120a3c:
    // 0x120a3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x120a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_120a40:
    // 0x120a40: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_120a44:
    if (ctx->pc == 0x120A44u) {
        ctx->pc = 0x120A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A40u;
        // 0x120a44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A48u;
        goto label_120a48;
    }
    ctx->pc = 0x120A40u;
    {
        const bool branch_taken_0x120a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A40u;
        // 0x120a44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120a40) {
            ctx->pc = 0x120A74u;
            goto label_120a74;
        }
    }
    ctx->pc = 0x120A48u;
label_120a48:
    // 0x120a48: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x120a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_120a4c:
    // 0x120a4c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x120a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_120a50:
    // 0x120a50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x120a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_120a54:
    // 0x120a54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_120a58:
    if (ctx->pc == 0x120A58u) {
        ctx->pc = 0x120A5Cu;
        goto label_120a5c;
    }
    ctx->pc = 0x120A54u;
    {
        const bool branch_taken_0x120a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120a54) {
            ctx->pc = 0x120A70u;
            goto label_120a70;
        }
    }
    ctx->pc = 0x120A5Cu;
label_120a5c:
    // 0x120a5c: 0x93a20039  lbu         $v0, 0x39($sp)
    ctx->pc = 0x120a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 57)));
label_120a60:
    // 0x120a60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_120a64:
    if (ctx->pc == 0x120A64u) {
        ctx->pc = 0x120A68u;
        goto label_120a68;
    }
    ctx->pc = 0x120A60u;
    {
        const bool branch_taken_0x120a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120a60) {
            ctx->pc = 0x120A70u;
            goto label_120a70;
        }
    }
    ctx->pc = 0x120A68u;
label_120a68:
    // 0x120a68: 0xc048208  jal         func_120820
label_120a6c:
    if (ctx->pc == 0x120A6Cu) {
        ctx->pc = 0x120A70u;
        goto label_120a70;
    }
    ctx->pc = 0x120A68u;
    SET_GPR_U32(ctx, 31, 0x120A70u);
    ctx->pc = 0x120820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120820u, 0x120A68u, 0x120A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A70u;
label_120a70:
    // 0x120a70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x120a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120a74:
    // 0x120a74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_120a78:
    // 0x120a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120a7c:
    // 0x120a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_120a80:
    // 0x120a80: 0x3e00008  jr          $ra
label_120a84:
    if (ctx->pc == 0x120A84u) {
        ctx->pc = 0x120A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A80u;
        // 0x120a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120A88u;
        goto label_fallthrough_0x120a80;
    }
    ctx->pc = 0x120A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A80u;
        // 0x120a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x120a80:
    ctx->pc = 0x120A88u;
}
