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

// Function: FUN_001fbff8
// Address: 0x1fbff8 - 0x1fc20c
void FUN_001fbff8_0x1fbff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbff8_0x1fbff8");
#endif

    switch (ctx->pc) {
        case 0x1fc088u: goto label_1fc088;
        case 0x1fc100u: goto label_1fc100;
        case 0x1fc12cu: goto label_1fc12c;
        case 0x1fc148u: goto label_1fc148;
        case 0x1fc1c0u: goto label_1fc1c0;
        default: break;
    }

    ctx->pc = 0x1fbff8u;

    // 0x1fbff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fbff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fbffc: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1fbffcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc000: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1fc000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1fc004: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fc004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fc008: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fc008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc00c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1fc00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1fc010: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1fc010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1fc014: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1fc014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1fc018: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fc018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fc01c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1fc01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1fc020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc024: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x1fc024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1fc028: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1fc028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1fc02c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1fc02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1fc030: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1FC030u;
    {
        const bool branch_taken_0x1fc030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC030u;
        // 0x1fc034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc030) {
            ctx->pc = 0x1FC1E4u;
            goto label_1fc1e4;
        }
    }
    ctx->pc = 0x1FC038u;
    // 0x1fc038: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fc038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1fc03c: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x1fc03cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x1fc040: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x1fc040u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fc044: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x1fc044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1fc048: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x1fc048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1fc04c: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x1fc04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1fc050: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1fc050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fc054: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x1fc054u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc058: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1fc058u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc05c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fc05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fc060: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x1fc060u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x1fc064: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC064u;
    {
        const bool branch_taken_0x1fc064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc064) {
            ctx->pc = 0x1FC068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC064u;
            // 0x1fc068: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC06Cu;
            goto label_1fc06c;
        }
    }
    ctx->pc = 0x1FC06Cu;
label_1fc06c:
    // 0x1fc06c: 0xa812  mflo        $s5
    ctx->pc = 0x1fc06cu;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1fc070: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1fc070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc074: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FC074u;
    {
        const bool branch_taken_0x1fc074 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC074u;
        // 0x1fc078: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc074) {
            ctx->pc = 0x1FC120u;
            goto label_1fc120;
        }
    }
    ctx->pc = 0x1FC07Cu;
    // 0x1fc07c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1fc07cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc080: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fc080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc084: 0x0  nop
    ctx->pc = 0x1fc084u;
    // NOP
label_1fc088:
    // 0x1fc088: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1fc088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1fc08c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1fc08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fc090: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1fc090u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1fc094: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1fc094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fc098: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x1fc098u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1fc09c: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x1fc09cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1fc0a0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1fc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1fc0a4: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x1fc0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fc0a8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1fc0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fc0ac: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1fc0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc0b0: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1fc0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1fc0b4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1fc0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1fc0b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1fc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fc0bc: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x1fc0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fc0c0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1fc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1fc0c4: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x1fc0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x1fc0c8: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x1fc0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1fc0cc: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1fc0ccu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1fc0d0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1fc0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fc0d4: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x1fc0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1fc0d8: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1fc0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc0dc: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1fc0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc0e0: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1fc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1fc0e4: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x1fc0e4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1fc0e8: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1FC0E8u;
    {
        const bool branch_taken_0x1fc0e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0E8u;
        // 0x1fc0ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0e8) {
            ctx->pc = 0x1FC088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc088;
        }
    }
    ctx->pc = 0x1FC0F0u;
    // 0x1fc0f0: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC0F0u;
    {
        const bool branch_taken_0x1fc0f0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F0u;
        // 0x1fc0f4: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0f0) {
            ctx->pc = 0x1FC124u;
            goto label_1fc124;
        }
    }
    ctx->pc = 0x1FC0F8u;
    // 0x1fc0f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC0F8u;
    {
        const bool branch_taken_0x1fc0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0F8u;
        // 0x1fc0fc: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0f8) {
            ctx->pc = 0x1FC104u;
            goto label_1fc104;
        }
    }
    ctx->pc = 0x1FC100u;
label_1fc100:
    // 0x1fc100: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fc100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fc104:
    // 0x1fc104: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x1fc104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1fc108: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC108u;
    {
        const bool branch_taken_0x1fc108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc108) {
            ctx->pc = 0x1FC10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC108u;
            // 0x1fc10c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC120u;
            goto label_1fc120;
        }
    }
    ctx->pc = 0x1FC110u;
    // 0x1fc110: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fc110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc114: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FC114u;
    {
        const bool branch_taken_0x1fc114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC114u;
        // 0x1fc118: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc114) {
            ctx->pc = 0x1FC100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc100;
        }
    }
    ctx->pc = 0x1FC11Cu;
    // 0x1fc11c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x1fc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_1fc120:
    // 0x1fc120: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x1fc120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1fc124:
    // 0x1fc124: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x1FC124u;
    SET_GPR_U32(ctx, 31, 0x1FC12Cu);
    ctx->pc = 0x1FC128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC124u;
    // 0x1fc128: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x1FC124u, 0x1FC12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC12Cu;
label_1fc12c:
    // 0x1fc12c: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FC12Cu;
    {
        const bool branch_taken_0x1fc12c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC12Cu;
        // 0x1fc130: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc12c) {
            ctx->pc = 0x1FC1E0u;
            goto label_1fc1e0;
        }
    }
    ctx->pc = 0x1FC134u;
    // 0x1fc134: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x1fc134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1fc138: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1fc138u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc13c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fc13cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc140: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1fc140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc144: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x1fc144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1fc148:
    // 0x1fc148: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1fc148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1fc14c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1fc14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fc150: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1fc150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1fc154: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1fc154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1fc158: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x1fc158u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1fc15c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc160: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1fc160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc164: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1fc164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1fc168: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1fc168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1fc16c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc170: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x1fc170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fc174: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1fc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1fc178: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x1fc178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1fc17c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1fc17cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1fc180: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1fc180u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1fc184: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1fc184u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fc188: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1fc188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1fc18c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1fc18cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fc190: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1fc190u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fc194: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1fc194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1fc198: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x1fc198u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1fc19c: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x1fc19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1fc1a0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1FC1A0u;
    {
        const bool branch_taken_0x1fc1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1A0u;
        // 0x1fc1a4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1a0) {
            ctx->pc = 0x1FC148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc148;
        }
    }
    ctx->pc = 0x1FC1A8u;
    // 0x1fc1a8: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x1fc1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1fc1ac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc1b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC1B0u;
    {
        const bool branch_taken_0x1fc1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B0u;
        // 0x1fc1b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b0) {
            ctx->pc = 0x1FC1E4u;
            goto label_1fc1e4;
        }
    }
    ctx->pc = 0x1FC1B8u;
    // 0x1fc1b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC1B8u;
    {
        const bool branch_taken_0x1fc1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1B8u;
        // 0x1fc1bc: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc1b8) {
            ctx->pc = 0x1FC1C4u;
            goto label_1fc1c4;
        }
    }
    ctx->pc = 0x1FC1C0u;
label_1fc1c0:
    // 0x1fc1c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1fc1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1fc1c4:
    // 0x1fc1c4: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x1fc1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1fc1c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC1C8u;
    {
        const bool branch_taken_0x1fc1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1c8) {
            ctx->pc = 0x1FC1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1C8u;
            // 0x1fc1cc: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC1E0u;
            goto label_1fc1e0;
        }
    }
    ctx->pc = 0x1FC1D0u;
    // 0x1fc1d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fc1d4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FC1D4u;
    {
        const bool branch_taken_0x1fc1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc1d4) {
            ctx->pc = 0x1FC1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC1D4u;
            // 0x1fc1d8: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc1c0;
        }
    }
    ctx->pc = 0x1FC1DCu;
    // 0x1fc1dc: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x1fc1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_1fc1e0:
    // 0x1fc1e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fc1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fc1e4:
    // 0x1fc1e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fc1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fc1e8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1fc1e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fc1ec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1fc1ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fc1f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1fc1f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fc1f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1fc1f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fc1f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fc1f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc1fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1fc1fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc204: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC204u;
        // 0x1fc208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC20Cu;
}
