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

// Function: FUN_00143cf0
// Address: 0x143cf0 - 0x1442ac
void FUN_00143cf0_0x143cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143cf0_0x143cf0");
#endif

    switch (ctx->pc) {
        case 0x143d6cu: goto label_143d6c;
        case 0x143d74u: goto label_143d74;
        case 0x143dc4u: goto label_143dc4;
        case 0x143e3cu: goto label_143e3c;
        case 0x143ebcu: goto label_143ebc;
        case 0x143f60u: goto label_143f60;
        case 0x143f74u: goto label_143f74;
        case 0x143f88u: goto label_143f88;
        case 0x14401cu: goto label_14401c;
        case 0x144058u: goto label_144058;
        case 0x144078u: goto label_144078;
        case 0x144080u: goto label_144080;
        case 0x1440a4u: goto label_1440a4;
        case 0x144118u: goto label_144118;
        case 0x144184u: goto label_144184;
        case 0x144204u: goto label_144204;
        case 0x144244u: goto label_144244;
        case 0x14424cu: goto label_14424c;
        case 0x144258u: goto label_144258;
        case 0x144280u: goto label_144280;
        default: break;
    }

    ctx->pc = 0x143cf0u;

    // 0x143cf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x143cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x143cf4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x143cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x143cf8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x143cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x143cfc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x143cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x143d00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x143d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x143d04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143d08: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x143d08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143d10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143d18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x143d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143d20: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x143d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d24: 0x12600156  beqz        $s3, . + 4 + (0x156 << 2)
    ctx->pc = 0x143D24u;
    {
        const bool branch_taken_0x143d24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D24u;
        // 0x143d28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d24) {
            ctx->pc = 0x144280u;
            goto label_144280;
        }
    }
    ctx->pc = 0x143D2Cu;
    // 0x143d2c: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x143d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x143d30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x143d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x143d34: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143d34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143d38: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x143D38u;
    {
        const bool branch_taken_0x143d38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143d38) {
            ctx->pc = 0x143D54u;
            goto label_143d54;
        }
    }
    ctx->pc = 0x143D40u;
    // 0x143d40: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x143d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143d44: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x143d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x143d48: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x143d48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x143d4c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x143D4Cu;
    {
        const bool branch_taken_0x143d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143d4c) {
            ctx->pc = 0x143D74u;
            goto label_143d74;
        }
    }
    ctx->pc = 0x143D54u;
label_143d54:
    // 0x143d54: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x143d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x143d58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x143d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x143d5c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x143d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x143d60: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x143d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x143d64: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x143D64u;
    SET_GPR_U32(ctx, 31, 0x143D6Cu);
    ctx->pc = 0x143D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D64u;
    // 0x143d68: 0x24a5f120  addiu       $a1, $a1, -0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x143D64u, 0x143D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D6Cu;
label_143d6c:
    // 0x143d6c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x143D6Cu;
    SET_GPR_U32(ctx, 31, 0x143D74u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x143D6Cu, 0x143D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D74u;
label_143d74:
    // 0x143d74: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143d78: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x143d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143d7c: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x143d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x143d80: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x143d80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x143d84: 0x14200095  bnez        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x143D84u;
    {
        const bool branch_taken_0x143d84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143d84) {
            ctx->pc = 0x143FDCu;
            goto label_143fdc;
        }
    }
    ctx->pc = 0x143D8Cu;
    // 0x143d8c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x143d90: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x143d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x143d94: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x143d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143d98: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x143d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x143d9c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143D9Cu;
    {
        const bool branch_taken_0x143d9c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x143DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D9Cu;
        // 0x143da0: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d9c) {
            ctx->pc = 0x143DACu;
            goto label_143dac;
        }
    }
    ctx->pc = 0x143DA4u;
    // 0x143da4: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x143da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x143da8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x143da8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_143dac:
    // 0x143dac: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143dacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143db0: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x143DB0u;
    {
        const bool branch_taken_0x143db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DB0u;
        // 0x143db4: 0x134140  sll         $t0, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143db0) {
            ctx->pc = 0x143EACu;
            goto label_143eac;
        }
    }
    ctx->pc = 0x143DB8u;
    // 0x143db8: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143db8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143dbc: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x143DBCu;
    {
        const bool branch_taken_0x143dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DBCu;
        // 0x143dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dbc) {
            ctx->pc = 0x143E2Cu;
            goto label_143e2c;
        }
    }
    ctx->pc = 0x143DC4u;
label_143dc4:
    // 0x143dc4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143DC4u;
    {
        const bool branch_taken_0x143dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143dc4) {
            ctx->pc = 0x143E0Cu;
            goto label_143e0c;
        }
    }
    ctx->pc = 0x143DCCu;
    // 0x143dcc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x143dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143dd0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x143dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x143dd4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x143dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143dd8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x143dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x143ddc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x143ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143de0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x143de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x143de4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x143de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143de8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x143de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x143dec: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x143decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x143df0: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x143df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x143df4: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x143df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x143df8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x143df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x143dfc: 0x92450018  lbu         $a1, 0x18($s2)
    ctx->pc = 0x143dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x143e00: 0xa0850018  sb          $a1, 0x18($a0)
    ctx->pc = 0x143e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x143e04: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x143e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x143e08: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x143e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
label_143e0c:
    // 0x143e0c: 0x0  nop
    ctx->pc = 0x143e0cu;
    // NOP
    // 0x143e10: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143e14: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x143e14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143e18: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x143e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x143e1c: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x143e1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x143e20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143e24: 0x1420ffe7  bnez        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x143E24u;
    {
        const bool branch_taken_0x143e24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x143E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E24u;
        // 0x143e28: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e24) {
            ctx->pc = 0x143DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143dc4;
        }
    }
    ctx->pc = 0x143E2Cu;
label_143e2c:
    // 0x143e2c: 0x0  nop
    ctx->pc = 0x143e2cu;
    // NOP
    // 0x143e30: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x143e30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143e34: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x143E34u;
    {
        const bool branch_taken_0x143e34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E34u;
        // 0x143e38: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e34) {
            ctx->pc = 0x143F80u;
            goto label_143f80;
        }
    }
    ctx->pc = 0x143E3Cu;
label_143e3c:
    // 0x143e3c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x143E3Cu;
    {
        const bool branch_taken_0x143e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e3c) {
            ctx->pc = 0x143E84u;
            goto label_143e84;
        }
    }
    ctx->pc = 0x143E44u;
    // 0x143e44: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143e48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x143e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x143e4c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x143e50: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x143e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x143e54: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x143e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x143e58: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x143e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x143e5c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x143e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143e60: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x143e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x143e64: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x143e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x143e68: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x143e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x143e6c: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x143e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x143e70: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x143e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x143e74: 0x90c30018  lbu         $v1, 0x18($a2)
    ctx->pc = 0x143e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x143e78: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x143e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x143e7c: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x143e80: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x143e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_143e84:
    // 0x143e84: 0x0  nop
    ctx->pc = 0x143e84u;
    // NOP
    // 0x143e88: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143e8c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x143e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x143e90: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x143e94: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x143e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143e98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143e9c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x143E9Cu;
    {
        const bool branch_taken_0x143e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E9Cu;
        // 0x143ea0: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e9c) {
            ctx->pc = 0x143E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143e3c;
        }
    }
    ctx->pc = 0x143EA4u;
    // 0x143ea4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x143EA4u;
    {
        const bool branch_taken_0x143ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ea4) {
            ctx->pc = 0x143F80u;
            goto label_143f80;
        }
    }
    ctx->pc = 0x143EACu;
label_143eac:
    // 0x143eac: 0x2083023  subu        $a2, $s0, $t0
    ctx->pc = 0x143eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x143eb0: 0xd0082b  sltu        $at, $a2, $s0
    ctx->pc = 0x143eb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143eb4: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x143EB4u;
    {
        const bool branch_taken_0x143eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EB4u;
        // 0x143eb8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143eb4) {
            ctx->pc = 0x143F24u;
            goto label_143f24;
        }
    }
    ctx->pc = 0x143EBCu;
label_143ebc:
    // 0x143ebc: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x143EBCu;
    {
        const bool branch_taken_0x143ebc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ebc) {
            ctx->pc = 0x143F04u;
            goto label_143f04;
        }
    }
    ctx->pc = 0x143EC4u;
    // 0x143ec4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x143ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143ec8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x143ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x143ecc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x143eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x143ed0: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x143ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x143ed4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x143ed8: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x143ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x143edc: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x143edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143ee0: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x143ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x143ee4: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x143ee8: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x143ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x143eec: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x143eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x143ef0: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x143ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x143ef4: 0x90c40018  lbu         $a0, 0x18($a2)
    ctx->pc = 0x143ef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x143ef8: 0xa0e40018  sb          $a0, 0x18($a3)
    ctx->pc = 0x143ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x143efc: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x143efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x143f00: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x143f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
label_143f04:
    // 0x143f04: 0x0  nop
    ctx->pc = 0x143f04u;
    // NOP
    // 0x143f08: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x143f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143f0c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x143f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x143f10: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x143f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x143f14: 0xd0202b  sltu        $a0, $a2, $s0
    ctx->pc = 0x143f14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143f18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143f1c: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x143F1Cu;
    {
        const bool branch_taken_0x143f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x143F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F1Cu;
        // 0x143f20: 0xaea50004  sw          $a1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f1c) {
            ctx->pc = 0x143EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143ebc;
        }
    }
    ctx->pc = 0x143F24u;
label_143f24:
    // 0x143f24: 0x0  nop
    ctx->pc = 0x143f24u;
    // NOP
    // 0x143f28: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x143f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x143f2c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x143f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x143f30: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x143f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x143f34: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x143f34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143f38: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x143F38u;
    {
        const bool branch_taken_0x143f38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x143F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F38u;
        // 0x143f3c: 0x2848821  addu        $s1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f38) {
            ctx->pc = 0x143F54u;
            goto label_143f54;
        }
    }
    ctx->pc = 0x143F40u;
    // 0x143f40: 0x250082b  sltu        $at, $s2, $s0
    ctx->pc = 0x143f40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x143f44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x143F44u;
    {
        const bool branch_taken_0x143f44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f44) {
            ctx->pc = 0x143F50u;
            goto label_143f50;
        }
    }
    ctx->pc = 0x143F4Cu;
    // 0x143f4c: 0x2489021  addu        $s2, $s2, $t0
    ctx->pc = 0x143f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_143f50:
    // 0x143f50: 0x2848821  addu        $s1, $s4, $a0
    ctx->pc = 0x143f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_143f54:
    // 0x143f54: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x143f54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x143f58: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x143F58u;
    {
        const bool branch_taken_0x143f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f58) {
            ctx->pc = 0x143F80u;
            goto label_143f80;
        }
    }
    ctx->pc = 0x143F60u;
label_143f60:
    // 0x143f60: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x143f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x143f64: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x143f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x143f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f6c: 0xc050f28  jal         func_143CA0
    ctx->pc = 0x143F6Cu;
    SET_GPR_U32(ctx, 31, 0x143F74u);
    ctx->pc = 0x143F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F6Cu;
    // 0x143f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CA0u, 0x143F6Cu, 0x143F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F74u;
label_143f74:
    // 0x143f74: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x143f74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x143f78: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x143F78u;
    {
        const bool branch_taken_0x143f78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143f78) {
            ctx->pc = 0x143F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143f60;
        }
    }
    ctx->pc = 0x143F80u;
label_143f80:
    // 0x143f80: 0x126000bf  beqz        $s3, . + 4 + (0xBF << 2)
    ctx->pc = 0x143F80u;
    {
        const bool branch_taken_0x143f80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f80) {
            ctx->pc = 0x144280u;
            goto label_144280;
        }
    }
    ctx->pc = 0x143F88u;
label_143f88:
    // 0x143f88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x143f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x143f8c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x143f8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x143f90: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x143f90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x143f94: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x143f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143f98: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x143f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x143f9c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x143f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143fa0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x143fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x143fa4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x143fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x143fa8: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x143fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x143fac: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x143facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x143fb0: 0xae830010  sw          $v1, 0x10($s4)
    ctx->pc = 0x143fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
    // 0x143fb4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x143fb8: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x143fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
    // 0x143fbc: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x143fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x143fc0: 0xa2830018  sb          $v1, 0x18($s4)
    ctx->pc = 0x143fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x143fc4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x143fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x143fc8: 0xae83001c  sw          $v1, 0x1C($s4)
    ctx->pc = 0x143fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 3));
    // 0x143fcc: 0x1660ffee  bnez        $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x143FCCu;
    {
        const bool branch_taken_0x143fcc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x143FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FCCu;
        // 0x143fd0: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fcc) {
            ctx->pc = 0x143F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143f88;
        }
    }
    ctx->pc = 0x143FD4u;
    // 0x143fd4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x143FD4u;
    {
        const bool branch_taken_0x143fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FD4u;
        // 0x143fd8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fd4) {
            ctx->pc = 0x144284u;
            goto label_144284;
        }
    }
    ctx->pc = 0x143FDCu;
label_143fdc:
    // 0x143fdc: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x143fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x143fe0: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x143fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x143fe4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x143fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x143fe8: 0x27b60098  addiu       $s6, $sp, 0x98
    ctx->pc = 0x143fe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x143fec: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x143fecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x143ff0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x143ff4: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x143ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143ff8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143FF8u;
    {
        const bool branch_taken_0x143ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FF8u;
        // 0x143ffc: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ff8) {
            ctx->pc = 0x144008u;
            goto label_144008;
        }
    }
    ctx->pc = 0x144000u;
    // 0x144000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144000u;
    {
        const bool branch_taken_0x144000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144000u;
        // 0x144004: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144000) {
            ctx->pc = 0x144010u;
            goto label_144010;
        }
    }
    ctx->pc = 0x144008u;
label_144008:
    // 0x144008: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x144008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14400c: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14400cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_144010:
    // 0x144010: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x144010u;
    {
        const bool branch_taken_0x144010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x144014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144010u;
        // 0x144014: 0x3c0207ff  lui         $v0, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2047 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144010) {
            ctx->pc = 0x14404Cu;
            goto label_14404c;
        }
    }
    ctx->pc = 0x144018u;
    // 0x144018: 0x3c0103ff  lui         $at, 0x3FF
    ctx->pc = 0x144018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
label_14401c:
    // 0x14401c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x14401cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x144020: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x144020u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x144024: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x144024u;
    {
        const bool branch_taken_0x144024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144024) {
            ctx->pc = 0x144034u;
            goto label_144034;
        }
    }
    ctx->pc = 0x14402Cu;
    // 0x14402c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14402Cu;
    {
        const bool branch_taken_0x14402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14402Cu;
        // 0x144030: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14402c) {
            ctx->pc = 0x14403Cu;
            goto label_14403c;
        }
    }
    ctx->pc = 0x144034u;
label_144034:
    // 0x144034: 0x0  nop
    ctx->pc = 0x144034u;
    // NOP
    // 0x144038: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x144038u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_14403c:
    // 0x14403c: 0x0  nop
    ctx->pc = 0x14403cu;
    // NOP
    // 0x144040: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x144040u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144044: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x144044u;
    {
        const bool branch_taken_0x144044 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144044u;
        // 0x144048: 0x3c0103ff  lui         $at, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1023 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144044) {
            ctx->pc = 0x14401Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14401c;
        }
    }
    ctx->pc = 0x14404Cu;
label_14404c:
    // 0x14404c: 0x0  nop
    ctx->pc = 0x14404cu;
    // NOP
    // 0x144050: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x144050u;
    SET_GPR_U32(ctx, 31, 0x144058u);
    ctx->pc = 0x144054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144050u;
    // 0x144054: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x144050u, 0x144058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144058u;
label_144058:
    // 0x144058: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x144058u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14405c: 0x16e00008  bnez        $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x14405Cu;
    {
        const bool branch_taken_0x14405c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x144060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14405Cu;
        // 0x144060: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14405c) {
            ctx->pc = 0x144080u;
            goto label_144080;
        }
    }
    ctx->pc = 0x144064u;
    // 0x144064: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x144064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x144068: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x144068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14406c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14406cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x144070: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x144070u;
    SET_GPR_U32(ctx, 31, 0x144078u);
    ctx->pc = 0x144074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144070u;
    // 0x144074: 0x24a5f140  addiu       $a1, $a1, -0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x144070u, 0x144078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144078u;
label_144078:
    // 0x144078: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x144078u;
    SET_GPR_U32(ctx, 31, 0x144080u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x144078u, 0x144080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144080u;
label_144080:
    // 0x144080: 0xaed70000  sw          $s7, 0x0($s6)
    ctx->pc = 0x144080u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 23));
    // 0x144084: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x144084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x144088: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x144088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14408c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x144090: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x144090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x144094: 0xb4082b  sltu        $at, $a1, $s4
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x144098: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x144098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x14409c: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x14409Cu;
    {
        const bool branch_taken_0x14409c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1440A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14409Cu;
        // 0x1440a0: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14409c) {
            ctx->pc = 0x14410Cu;
            goto label_14410c;
        }
    }
    ctx->pc = 0x1440A4u;
label_1440a4:
    // 0x1440a4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1440A4u;
    {
        const bool branch_taken_0x1440a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440a4) {
            ctx->pc = 0x1440ECu;
            goto label_1440ec;
        }
    }
    ctx->pc = 0x1440ACu;
    // 0x1440ac: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1440acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1440b0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1440b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1440b4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1440b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1440b8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1440b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1440bc: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1440bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1440c0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1440c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1440c4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1440c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1440c8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1440c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1440cc: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x1440ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1440d0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1440d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1440d4: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1440d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1440d8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1440d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1440dc: 0x90a60018  lbu         $a2, 0x18($a1)
    ctx->pc = 0x1440dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1440e0: 0xa0860018  sb          $a2, 0x18($a0)
    ctx->pc = 0x1440e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x1440e4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1440e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1440e8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1440e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
label_1440ec:
    // 0x1440ec: 0x0  nop
    ctx->pc = 0x1440ecu;
    // NOP
    // 0x1440f0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1440f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1440f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1440f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1440f8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1440f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1440fc: 0xb4302b  sltu        $a2, $a1, $s4
    ctx->pc = 0x1440fcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x144100: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x144104: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x144104u;
    {
        const bool branch_taken_0x144104 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x144108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144104u;
        // 0x144108: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144104) {
            ctx->pc = 0x1440A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1440a4;
        }
    }
    ctx->pc = 0x14410Cu;
label_14410c:
    // 0x14410c: 0x0  nop
    ctx->pc = 0x14410cu;
    // NOP
    // 0x144110: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x144110u;
    {
        const bool branch_taken_0x144110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x144110) {
            ctx->pc = 0x144178u;
            goto label_144178;
        }
    }
    ctx->pc = 0x144118u;
label_144118:
    // 0x144118: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x144118u;
    {
        const bool branch_taken_0x144118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144118) {
            ctx->pc = 0x144160u;
            goto label_144160;
        }
    }
    ctx->pc = 0x144120u;
    // 0x144120: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x144120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x144124: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x144124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x144128: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x144128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14412c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x14412cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x144130: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x144130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x144134: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x144134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x144138: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x144138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14413c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x14413cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x144140: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x144140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x144144: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x144144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x144148: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x144148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14414c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x14414cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x144150: 0x92460018  lbu         $a2, 0x18($s2)
    ctx->pc = 0x144150u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x144154: 0xa0860018  sb          $a2, 0x18($a0)
    ctx->pc = 0x144154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x144158: 0x8e46001c  lw          $a2, 0x1C($s2)
    ctx->pc = 0x144158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14415c: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x14415cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
label_144160:
    // 0x144160: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x144160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144164: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x144164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x144168: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x144168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14416c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14416cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x144170: 0x1660ffe9  bnez        $s3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x144170u;
    {
        const bool branch_taken_0x144170 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x144174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144170u;
        // 0x144174: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144170) {
            ctx->pc = 0x144118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144118;
        }
    }
    ctx->pc = 0x144178u;
label_144178:
    // 0x144178: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x144178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14417c: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x14417Cu;
    {
        const bool branch_taken_0x14417c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14417c) {
            ctx->pc = 0x1441ECu;
            goto label_1441ec;
        }
    }
    ctx->pc = 0x144184u;
label_144184:
    // 0x144184: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x144184u;
    {
        const bool branch_taken_0x144184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144184) {
            ctx->pc = 0x1441CCu;
            goto label_1441cc;
        }
    }
    ctx->pc = 0x14418Cu;
    // 0x14418c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14418cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x144190: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x144190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x144194: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x144194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x144198: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x144198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x14419c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x14419cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1441a0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1441a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1441a4: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1441a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1441a8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1441a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1441ac: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x1441acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1441b0: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1441b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1441b4: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x1441b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1441b8: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1441b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1441bc: 0x90a60018  lbu         $a2, 0x18($a1)
    ctx->pc = 0x1441bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1441c0: 0xa0860018  sb          $a2, 0x18($a0)
    ctx->pc = 0x1441c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 6));
    // 0x1441c4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1441c8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1441c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
label_1441cc:
    // 0x1441cc: 0x0  nop
    ctx->pc = 0x1441ccu;
    // NOP
    // 0x1441d0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1441d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1441d4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1441d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1441d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1441d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1441dc: 0xa3302b  sltu        $a2, $a1, $v1
    ctx->pc = 0x1441dcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1441e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1441e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1441e4: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1441E4u;
    {
        const bool branch_taken_0x1441e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1441E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441E4u;
        // 0x1441e8: 0xae270000  sw          $a3, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441e4) {
            ctx->pc = 0x144184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144184;
        }
    }
    ctx->pc = 0x1441ECu;
label_1441ec:
    // 0x1441ec: 0x0  nop
    ctx->pc = 0x1441ecu;
    // NOP
    // 0x1441f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1441f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1441f4: 0x1095000b  beq         $a0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x1441F4u;
    {
        const bool branch_taken_0x1441f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x1441F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441F4u;
        // 0x1441f8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441f4) {
            ctx->pc = 0x144224u;
            goto label_144224;
        }
    }
    ctx->pc = 0x1441FCu;
    // 0x1441fc: 0xc0510b0  jal         func_1442C0
    ctx->pc = 0x1441FCu;
    SET_GPR_U32(ctx, 31, 0x144204u);
    ctx->pc = 0x1442C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1442C0u, 0x1441FCu, 0x144204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144204u;
label_144204:
    // 0x144204: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x144204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x144208: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x144208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14420c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14420cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x144210: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x144210u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
    // 0x144214: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x144214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144218: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x144218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14421c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14421cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x144220: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x144220u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
label_144224:
    // 0x144224: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x144224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x144228: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14422c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x14422cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x144230: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x144230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x144234: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x144234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x144238: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x144238u;
    {
        const bool branch_taken_0x144238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144238) {
            ctx->pc = 0x144264u;
            goto label_144264;
        }
    }
    ctx->pc = 0x144240u;
    // 0x144240: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x144240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_144244:
    // 0x144244: 0xc0510ac  jal         func_1442B0
    ctx->pc = 0x144244u;
    SET_GPR_U32(ctx, 31, 0x14424Cu);
    ctx->pc = 0x144248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144244u;
    // 0x144248: 0x2652ffe0  addiu       $s2, $s2, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1442B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1442B0u, 0x144244u, 0x14424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14424Cu;
label_14424c:
    // 0x14424c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144250: 0xc050d5c  jal         func_143570
    ctx->pc = 0x144250u;
    SET_GPR_U32(ctx, 31, 0x144258u);
    ctx->pc = 0x144254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144250u;
    // 0x144254: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143570u, 0x144250u, 0x144258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144258u;
label_144258:
    // 0x144258: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x144258u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x14425c: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14425Cu;
    {
        const bool branch_taken_0x14425c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14425Cu;
        // 0x144260: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14425c) {
            ctx->pc = 0x144244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144244;
        }
    }
    ctx->pc = 0x144264u;
label_144264:
    // 0x144264: 0x0  nop
    ctx->pc = 0x144264u;
    // NOP
    // 0x144268: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x144268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14426c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x144270: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144270u;
    {
        const bool branch_taken_0x144270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144270) {
            ctx->pc = 0x144280u;
            goto label_144280;
        }
    }
    ctx->pc = 0x144278u;
    // 0x144278: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144278u;
    SET_GPR_U32(ctx, 31, 0x144280u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144278u, 0x144280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144280u;
label_144280:
    // 0x144280: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x144280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_144284:
    // 0x144284: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x144284u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144288: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x144288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14428c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14428cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14429c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14429cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1442a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1442a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1442a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1442A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1442A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442A4u;
        // 0x1442a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1442A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1442ACu;
}
