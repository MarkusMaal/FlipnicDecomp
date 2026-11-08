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

// Function: FUN_00122ff0
// Address: 0x122ff0 - 0x12353c
void FUN_00122ff0_0x122ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122ff0_0x122ff0");
#endif

    switch (ctx->pc) {
        case 0x12302cu: goto label_12302c;
        case 0x12304cu: goto label_12304c;
        case 0x1231f0u: goto label_1231f0;
        case 0x123238u: goto label_123238;
        case 0x1232f4u: goto label_1232f4;
        case 0x123364u: goto label_123364;
        case 0x1233b0u: goto label_1233b0;
        case 0x123470u: goto label_123470;
        case 0x1234dcu: goto label_1234dc;
        default: break;
    }

    ctx->pc = 0x122ff0u;

    // 0x122ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x122ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x122ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x122ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x122ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x123000: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x123000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x123004: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x123004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123008: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x123008u;
    {
        const bool branch_taken_0x123008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123008u;
        // 0x12300c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123008) {
            ctx->pc = 0x12306Cu;
            goto label_12306c;
        }
    }
    ctx->pc = 0x123010u;
    // 0x123010: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x123010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123014: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x123014u;
    {
        const bool branch_taken_0x123014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123014) {
            ctx->pc = 0x12306Cu;
            goto label_12306c;
        }
    }
    ctx->pc = 0x12301Cu;
    // 0x12301c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x12301Cu;
    {
        const bool branch_taken_0x12301c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12301c) {
            ctx->pc = 0x123050u;
            goto label_123050;
        }
    }
    ctx->pc = 0x123024u;
    // 0x123024: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123024u;
    {
        const bool branch_taken_0x123024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123024) {
            ctx->pc = 0x123030u;
            goto label_123030;
        }
    }
    ctx->pc = 0x12302Cu;
label_12302c:
    // 0x12302c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12302cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_123030:
    // 0x123030: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x123030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123034: 0x0  nop
    ctx->pc = 0x123034u;
    // NOP
    // 0x123038: 0x0  nop
    ctx->pc = 0x123038u;
    // NOP
    // 0x12303c: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12303Cu;
    {
        const bool branch_taken_0x12303c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12303c) {
            ctx->pc = 0x12302Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12302c;
        }
    }
    ctx->pc = 0x123044u;
    // 0x123044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x123044u;
    {
        const bool branch_taken_0x123044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123044u;
        // 0x123048: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123044) {
            ctx->pc = 0x12306Cu;
            goto label_12306c;
        }
    }
    ctx->pc = 0x12304Cu;
label_12304c:
    // 0x12304c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x12304cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_123050:
    // 0x123050: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x123050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123054: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x123054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123058: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x123058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x12305c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x12305cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x123060: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x123060u;
    {
        const bool branch_taken_0x123060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x123060) {
            ctx->pc = 0x12304Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12304c;
        }
    }
    ctx->pc = 0x123068u;
    // 0x123068: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x123068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12306c:
    // 0x12306c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x12306cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123070: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x123070u;
    {
        const bool branch_taken_0x123070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x123070) {
            ctx->pc = 0x123080u;
            goto label_123080;
        }
    }
    ctx->pc = 0x123078u;
    // 0x123078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x123078u;
    {
        const bool branch_taken_0x123078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123078u;
        // 0x12307c: 0x8c650008  lw          $a1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123078) {
            ctx->pc = 0x12308Cu;
            goto label_12308c;
        }
    }
    ctx->pc = 0x123080u;
label_123080:
    // 0x123080: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x123080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123084: 0x0  nop
    ctx->pc = 0x123084u;
    // NOP
    // 0x123088: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x123088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_12308c:
    // 0x12308c: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123090: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x123090u;
    {
        const bool branch_taken_0x123090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x123094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123090u;
        // 0x123094: 0xa78824  and         $s1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123090) {
            ctx->pc = 0x1230A8u;
            goto label_1230a8;
        }
    }
    ctx->pc = 0x123098u;
    // 0x123098: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x123098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12309c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x12309cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1230a0: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x1230a4: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1230a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_1230a8:
    // 0x1230a8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1230ac: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1230acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1230b0: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1230b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1230b4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1230b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1230b8: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1230B8u;
    {
        const bool branch_taken_0x1230b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1230b8) {
            ctx->pc = 0x1230CCu;
            goto label_1230cc;
        }
    }
    ctx->pc = 0x1230C0u;
    // 0x1230c0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1230c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1230c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1230C4u;
    {
        const bool branch_taken_0x1230c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230C4u;
        // 0x1230c8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230c4) {
            ctx->pc = 0x1230D4u;
            goto label_1230d4;
        }
    }
    ctx->pc = 0x1230CCu;
label_1230cc:
    // 0x1230cc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x1230ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x1230d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1230d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1230d4:
    // 0x1230d4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1230d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1230d8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1230d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1230dc: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1230e0: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x1230e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x1230e4: 0x10640038  beq         $v1, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1230E4u;
    {
        const bool branch_taken_0x1230e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1230E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230E4u;
        // 0x1230e8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230e4) {
            ctx->pc = 0x1231C8u;
            goto label_1231c8;
        }
    }
    ctx->pc = 0x1230ECu;
    // 0x1230ec: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1230ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1230f0: 0x2409fffe  addiu       $t1, $zero, -0x2
    ctx->pc = 0x1230f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1230f4: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1230f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1230f8: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x1230f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1230fc: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x1230fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x123100: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x123100u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x123104: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x123104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x123108: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x123108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12310c: 0xe94024  and         $t0, $a3, $t1
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x123110: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x123110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x123114: 0x14870003  bne         $a0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x123114u;
    {
        const bool branch_taken_0x123114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x123114) {
            ctx->pc = 0x123124u;
            goto label_123124;
        }
    }
    ctx->pc = 0x12311Cu;
    // 0x12311c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12311Cu;
    {
        const bool branch_taken_0x12311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12311Cu;
        // 0x123120: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12311c) {
            ctx->pc = 0x123128u;
            goto label_123128;
        }
    }
    ctx->pc = 0x123124u;
label_123124:
    // 0x123124: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x123124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_123128:
    // 0x123128: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x123128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12312c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x12312cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x123130: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x123130u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123134: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123134u;
    {
        const bool branch_taken_0x123134 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x123134) {
            ctx->pc = 0x123150u;
            goto label_123150;
        }
    }
    ctx->pc = 0x12313Cu;
    // 0x12313c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x12313cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x123140: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x123140u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x123144: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x123144u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x123148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123148u;
    {
        const bool branch_taken_0x123148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123148u;
        // 0x12314c: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123148) {
            ctx->pc = 0x123154u;
            goto label_123154;
        }
    }
    ctx->pc = 0x123150u;
label_123150:
    // 0x123150: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x123150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_123154:
    // 0x123154: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x123154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123158: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x123158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x12315c: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x12315cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123160: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123160u;
    {
        const bool branch_taken_0x123160 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x123160) {
            ctx->pc = 0x12317Cu;
            goto label_12317c;
        }
    }
    ctx->pc = 0x123168u;
    // 0x123168: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x123168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x12316c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x12316cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x123170: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x123170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x123174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123174u;
    {
        const bool branch_taken_0x123174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123174u;
        // 0x123178: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123174) {
            ctx->pc = 0x123180u;
            goto label_123180;
        }
    }
    ctx->pc = 0x12317Cu;
label_12317c:
    // 0x12317c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x12317cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_123180:
    // 0x123180: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x123180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123184: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x123184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x123188: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x123188u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12318c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12318Cu;
    {
        const bool branch_taken_0x12318c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12318c) {
            ctx->pc = 0x1231A4u;
            goto label_1231a4;
        }
    }
    ctx->pc = 0x123194u;
    // 0x123194: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x123194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123198: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x123198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x12319c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12319Cu;
    {
        const bool branch_taken_0x12319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12319Cu;
        // 0x1231a0: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12319c) {
            ctx->pc = 0x1231B4u;
            goto label_1231b4;
        }
    }
    ctx->pc = 0x1231A4u;
label_1231a4:
    // 0x1231a4: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x1231a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1231a8: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x1231a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1231ac: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1231acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1231b0: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1231b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
label_1231b4:
    // 0x1231b4: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x1231b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1231b8: 0x14e40009  bne         $a3, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1231B8u;
    {
        const bool branch_taken_0x1231b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1231b8) {
            ctx->pc = 0x1231E0u;
            goto label_1231e0;
        }
    }
    ctx->pc = 0x1231C0u;
    // 0x1231c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1231C0u;
    {
        const bool branch_taken_0x1231c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231C0u;
        // 0x1231c4: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231c0) {
            ctx->pc = 0x1231E0u;
            goto label_1231e0;
        }
    }
    ctx->pc = 0x1231C8u;
label_1231c8:
    // 0x1231c8: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1231C8u;
    {
        const bool branch_taken_0x1231c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1231c8) {
            ctx->pc = 0x1231E0u;
            goto label_1231e0;
        }
    }
    ctx->pc = 0x1231D0u;
    // 0x1231d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1231d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1231d4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1231D4u;
    {
        const bool branch_taken_0x1231d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1231d4) {
            ctx->pc = 0x1231E0u;
            goto label_1231e0;
        }
    }
    ctx->pc = 0x1231DCu;
    // 0x1231dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1231dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1231e0:
    // 0x1231e0: 0x10a000d1  beqz        $a1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1231E0u;
    {
        const bool branch_taken_0x1231e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231e0) {
            ctx->pc = 0x123528u;
            goto label_123528;
        }
    }
    ctx->pc = 0x1231E8u;
    // 0x1231e8: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1231E8u;
    {
        const bool branch_taken_0x1231e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231e8) {
            ctx->pc = 0x1234E4u;
            goto label_1234e4;
        }
    }
    ctx->pc = 0x1231F0u;
label_1231f0:
    // 0x1231f0: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1231F0u;
    {
        const bool branch_taken_0x1231f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231f0) {
            ctx->pc = 0x12336Cu;
            goto label_12336c;
        }
    }
    ctx->pc = 0x1231F8u;
    // 0x1231f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1231f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1231fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1231fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123200: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x123200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123204: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x123204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x123208: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12320c: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12320Cu;
    {
        const bool branch_taken_0x12320c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x12320c) {
            ctx->pc = 0x123240u;
            goto label_123240;
        }
    }
    ctx->pc = 0x123214u;
    // 0x123214: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x123214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123218: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x12321c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x12321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x123220: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123224: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x123228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12322c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123230: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x123230u;
    SET_GPR_U32(ctx, 31, 0x123238u);
    ctx->pc = 0x123234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123230u;
    // 0x123234: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x123230u, 0x123238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123238u;
label_123238:
    // 0x123238: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x123238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12323c: 0x0  nop
    ctx->pc = 0x12323cu;
    // NOP
label_123240:
    // 0x123240: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123244: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x123244u;
    {
        const bool branch_taken_0x123244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x123244) {
            ctx->pc = 0x123260u;
            goto label_123260;
        }
    }
    ctx->pc = 0x12324Cu;
    // 0x12324c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x12324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123250: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123254: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x123254u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x123258: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x123258u;
    {
        const bool branch_taken_0x123258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123258) {
            ctx->pc = 0x1232ACu;
            goto label_1232ac;
        }
    }
    ctx->pc = 0x123260u;
label_123260:
    // 0x123260: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x123260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123264: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123264u;
    {
        const bool branch_taken_0x123264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123264) {
            ctx->pc = 0x123280u;
            goto label_123280;
        }
    }
    ctx->pc = 0x12326Cu;
    // 0x12326c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x12326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123270: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123274: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x123274u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x123278: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x123278u;
    {
        const bool branch_taken_0x123278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x123278) {
            ctx->pc = 0x1232ACu;
            goto label_1232ac;
        }
    }
    ctx->pc = 0x123280u;
label_123280:
    // 0x123280: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x123280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123284: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x123284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123288: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x123288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12328c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x12328cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x123290: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x123290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x123294: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x123294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x123298: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x123298u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12329c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1232a0: 0xc38026  xor         $s0, $a2, $v1
    ctx->pc = 0x1232a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x1232a4: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1232A4u;
    {
        const bool branch_taken_0x1232a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1232A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1232A4u;
        // 0x1232a8: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1232a4) {
            ctx->pc = 0x1234E4u;
            goto label_1234e4;
        }
    }
    ctx->pc = 0x1232ACu;
label_1232ac:
    // 0x1232ac: 0x0  nop
    ctx->pc = 0x1232acu;
    // NOP
    // 0x1232b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1232b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1232b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1232B4u;
    {
        const bool branch_taken_0x1232b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1232b4) {
            ctx->pc = 0x1232D0u;
            goto label_1232d0;
        }
    }
    ctx->pc = 0x1232BCu;
    // 0x1232bc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1232bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1232c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1232c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1232c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1232c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1232c8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1232C8u;
    {
        const bool branch_taken_0x1232c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1232c8) {
            ctx->pc = 0x1232FCu;
            goto label_1232fc;
        }
    }
    ctx->pc = 0x1232D0u;
label_1232d0:
    // 0x1232d0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1232d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1232d4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1232d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1232d8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1232d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1232dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1232dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1232e0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1232e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1232e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1232e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1232e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1232e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1232ec: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1232ECu;
    SET_GPR_U32(ctx, 31, 0x1232F4u);
    ctx->pc = 0x1232F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1232ECu;
    // 0x1232f0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1232ECu, 0x1232F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1232F4u;
label_1232f4:
    // 0x1232f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1232f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1232f8: 0x0  nop
    ctx->pc = 0x1232f8u;
    // NOP
label_1232fc:
    // 0x1232fc: 0x0  nop
    ctx->pc = 0x1232fcu;
    // NOP
    // 0x123300: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x123304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x123308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12330c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12330Cu;
    {
        const bool branch_taken_0x12330c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12330c) {
            ctx->pc = 0x123324u;
            goto label_123324;
        }
    }
    ctx->pc = 0x123314u;
    // 0x123314: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123318: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12331c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12331Cu;
    {
        const bool branch_taken_0x12331c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12331Cu;
        // 0x123320: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12331c) {
            ctx->pc = 0x123338u;
            goto label_123338;
        }
    }
    ctx->pc = 0x123324u;
label_123324:
    // 0x123324: 0x0  nop
    ctx->pc = 0x123324u;
    // NOP
    // 0x123328: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12332c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123330: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x123330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x123334: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_123338:
    // 0x123338: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12333c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x12333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123340: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x123344: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123348: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x123348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x12334c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x12334cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x123350: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x123350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123358: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12335c: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x12335Cu;
    SET_GPR_U32(ctx, 31, 0x123364u);
    ctx->pc = 0x123360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12335Cu;
    // 0x123360: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x12335Cu, 0x123364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123364u;
label_123364:
    // 0x123364: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x123364u;
    {
        const bool branch_taken_0x123364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123364u;
        // 0x123368: 0x8fa6003c  lw          $a2, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123364) {
            ctx->pc = 0x1234E4u;
            goto label_1234e4;
        }
    }
    ctx->pc = 0x12336Cu;
label_12336c:
    // 0x12336c: 0x0  nop
    ctx->pc = 0x12336cu;
    // NOP
    // 0x123370: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x123370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123378: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x123378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12337c: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x12337cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x123380: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x123380u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123384: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x123384u;
    {
        const bool branch_taken_0x123384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x123384) {
            ctx->pc = 0x1233B8u;
            goto label_1233b8;
        }
    }
    ctx->pc = 0x12338Cu;
    // 0x12338c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123390: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x123394: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x123394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x123398: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x12339c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x12339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1233a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1233a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1233a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1233a8: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1233A8u;
    SET_GPR_U32(ctx, 31, 0x1233B0u);
    ctx->pc = 0x1233ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233A8u;
    // 0x1233ac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1233A8u, 0x1233B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233B0u;
label_1233b0:
    // 0x1233b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1233b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1233b4: 0x0  nop
    ctx->pc = 0x1233b4u;
    // NOP
label_1233b8:
    // 0x1233b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1233b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1233bc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1233BCu;
    {
        const bool branch_taken_0x1233bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1233bc) {
            ctx->pc = 0x1233D8u;
            goto label_1233d8;
        }
    }
    ctx->pc = 0x1233C4u;
    // 0x1233c4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1233c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1233c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1233c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1233cc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1233ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1233d0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1233D0u;
    {
        const bool branch_taken_0x1233d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1233d0) {
            ctx->pc = 0x123424u;
            goto label_123424;
        }
    }
    ctx->pc = 0x1233D8u;
label_1233d8:
    // 0x1233d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1233d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1233dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1233DCu;
    {
        const bool branch_taken_0x1233dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1233dc) {
            ctx->pc = 0x1233F8u;
            goto label_1233f8;
        }
    }
    ctx->pc = 0x1233E4u;
    // 0x1233e4: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1233e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1233e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1233e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1233ec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1233ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1233f0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1233F0u;
    {
        const bool branch_taken_0x1233f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1233f0) {
            ctx->pc = 0x123424u;
            goto label_123424;
        }
    }
    ctx->pc = 0x1233F8u;
label_1233f8:
    // 0x1233f8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1233f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1233fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1233fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123400: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123404: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x123404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x123408: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x123408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x12340c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12340cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x123410: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x123410u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x123414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123418: 0xc38026  xor         $s0, $a2, $v1
    ctx->pc = 0x123418u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x12341c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12341Cu;
    {
        const bool branch_taken_0x12341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12341Cu;
        // 0x123420: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12341c) {
            ctx->pc = 0x1234E4u;
            goto label_1234e4;
        }
    }
    ctx->pc = 0x123424u;
label_123424:
    // 0x123424: 0x0  nop
    ctx->pc = 0x123424u;
    // NOP
    // 0x123428: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123428u;
    {
        const bool branch_taken_0x123428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123428) {
            ctx->pc = 0x123444u;
            goto label_123444;
        }
    }
    ctx->pc = 0x123430u;
    // 0x123430: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123438: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x123438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12343c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12343Cu;
    {
        const bool branch_taken_0x12343c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12343c) {
            ctx->pc = 0x123478u;
            goto label_123478;
        }
    }
    ctx->pc = 0x123444u;
label_123444:
    // 0x123444: 0x0  nop
    ctx->pc = 0x123444u;
    // NOP
    // 0x123448: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x123448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12344c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123450: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x123454: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x123454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x123458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12345c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x12345cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x123460: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123464: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123468: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x123468u;
    SET_GPR_U32(ctx, 31, 0x123470u);
    ctx->pc = 0x12346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123468u;
    // 0x12346c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x123468u, 0x123470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123470u;
label_123470:
    // 0x123470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123474: 0x0  nop
    ctx->pc = 0x123474u;
    // NOP
label_123478:
    // 0x123478: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12347c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12347cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x123480: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x123480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x123484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123484u;
    {
        const bool branch_taken_0x123484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123484) {
            ctx->pc = 0x12349Cu;
            goto label_12349c;
        }
    }
    ctx->pc = 0x12348Cu;
    // 0x12348c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123490: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x123494u;
    {
        const bool branch_taken_0x123494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123494u;
        // 0x123498: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123494) {
            ctx->pc = 0x1234B0u;
            goto label_1234b0;
        }
    }
    ctx->pc = 0x12349Cu;
label_12349c:
    // 0x12349c: 0x0  nop
    ctx->pc = 0x12349cu;
    // NOP
    // 0x1234a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1234a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1234a4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1234a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1234a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1234a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1234ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1234acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1234b0:
    // 0x1234b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1234b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1234b4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1234b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1234b8: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1234b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1234bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1234bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1234c0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1234c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1234c4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1234c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1234c8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1234c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1234cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1234ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1234d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1234d4: 0xc048e98  jal         func_123A60
    ctx->pc = 0x1234D4u;
    SET_GPR_U32(ctx, 31, 0x1234DCu);
    ctx->pc = 0x1234D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234D4u;
    // 0x1234d8: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A60u, 0x1234D4u, 0x1234DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234DCu;
label_1234dc:
    // 0x1234dc: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1234dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1234e0: 0x0  nop
    ctx->pc = 0x1234e0u;
    // NOP
label_1234e4:
    // 0x1234e4: 0x0  nop
    ctx->pc = 0x1234e4u;
    // NOP
    // 0x1234e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1234e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1234ec: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1234ECu;
    {
        const bool branch_taken_0x1234ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1234ec) {
            ctx->pc = 0x123510u;
            goto label_123510;
        }
    }
    ctx->pc = 0x1234F4u;
    // 0x1234f4: 0x10c0ff3e  beqz        $a2, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x1234F4u;
    {
        const bool branch_taken_0x1234f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234f4) {
            ctx->pc = 0x1231F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1231f0;
        }
    }
    ctx->pc = 0x1234FCu;
    // 0x1234fc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1234fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123500: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x123500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x123504: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x123504u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x123508: 0x1060ff39  beqz        $v1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x123508u;
    {
        const bool branch_taken_0x123508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123508) {
            ctx->pc = 0x1231F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1231f0;
        }
    }
    ctx->pc = 0x123510u;
label_123510:
    // 0x123510: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x123510u;
    {
        const bool branch_taken_0x123510 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x123510) {
            ctx->pc = 0x123528u;
            goto label_123528;
        }
    }
    ctx->pc = 0x123518u;
    // 0x123518: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x123518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12351c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x12351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123520: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x123520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x123524: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x123524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_123528:
    // 0x123528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x123528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12352c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12352cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x123530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123534: 0x3e00008  jr          $ra
    ctx->pc = 0x123534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123534u;
        // 0x123538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12353Cu;
}
