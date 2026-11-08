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

// Function: FUN_00187f00
// Address: 0x187f00 - 0x1883ec
void FUN_00187f00_0x187f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187f00_0x187f00");
#endif

    switch (ctx->pc) {
        case 0x187f30u: goto label_187f30;
        case 0x187f34u: goto label_187f34;
        case 0x187f8cu: goto label_187f8c;
        case 0x187fa0u: goto label_187fa0;
        case 0x188028u: goto label_188028;
        case 0x188038u: goto label_188038;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880f0u: goto label_1880f0;
        case 0x188268u: goto label_188268;
        case 0x1882acu: goto label_1882ac;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882ecu: goto label_1882ec;
        default: break;
    }

    ctx->pc = 0x187f00u;

    // 0x187f00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x187f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x187f04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x187f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x187f08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187f14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x187f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187f1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x187f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187f24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x187f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f28: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x187F28u;
    {
        const bool branch_taken_0x187f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F28u;
        // 0x187f2c: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f28) {
            ctx->pc = 0x188394u;
            goto label_188394;
        }
    }
    ctx->pc = 0x187F30u;
label_187f30:
    // 0x187f30: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x187f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_187f34:
    // 0x187f34: 0x14640100  bne         $v1, $a0, . + 4 + (0x100 << 2)
    ctx->pc = 0x187F34u;
    {
        const bool branch_taken_0x187f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x187f34) {
            ctx->pc = 0x188338u;
            goto label_188338;
        }
    }
    ctx->pc = 0x187F3Cu;
    // 0x187f3c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x187f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187f40: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x187F40u;
    {
        const bool branch_taken_0x187f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f40) {
            ctx->pc = 0x188338u;
            goto label_188338;
        }
    }
    ctx->pc = 0x187F48u;
    // 0x187f48: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x187f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x187f4c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x187F4Cu;
    {
        const bool branch_taken_0x187f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x187f4c) {
            ctx->pc = 0x187F78u;
            goto label_187f78;
        }
    }
    ctx->pc = 0x187F54u;
    // 0x187f54: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x187f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x187f58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187F58u;
    {
        const bool branch_taken_0x187f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f58) {
            ctx->pc = 0x187F78u;
            goto label_187f78;
        }
    }
    ctx->pc = 0x187F60u;
    // 0x187f60: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x187f60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x187f64: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x187f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x187f68: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x187f68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x187f6c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x187f70: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x187F70u;
    {
        const bool branch_taken_0x187f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F70u;
        // 0x187f74: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f70) {
            ctx->pc = 0x188394u;
            goto label_188394;
        }
    }
    ctx->pc = 0x187F78u;
label_187f78:
    // 0x187f78: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x187f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f7c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187f80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x187f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f84: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x187F84u;
    {
        const bool branch_taken_0x187f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F84u;
        // 0x187f88: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f84) {
            ctx->pc = 0x187FE0u;
            goto label_187fe0;
        }
    }
    ctx->pc = 0x187F8Cu;
label_187f8c:
    // 0x187f8c: 0x0  nop
    ctx->pc = 0x187f8cu;
    // NOP
    // 0x187f90: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x187f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x187f94: 0x24c6f9e0  addiu       $a2, $a2, -0x620
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965728));
    // 0x187f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x187F98u;
    {
        const bool branch_taken_0x187f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F98u;
        // 0x187f9c: 0x30e500ff  andi        $a1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f98) {
            ctx->pc = 0x187FBCu;
            goto label_187fbc;
        }
    }
    ctx->pc = 0x187FA0u;
label_187fa0:
    // 0x187fa0: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x187fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187fa4: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x187FA4u;
    {
        const bool branch_taken_0x187fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x187fa4) {
            ctx->pc = 0x187FB8u;
            goto label_187fb8;
        }
    }
    ctx->pc = 0x187FACu;
    // 0x187fac: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x187facu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187fb0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187FB0u;
    {
        const bool branch_taken_0x187fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fb0) {
            ctx->pc = 0x187FCCu;
            goto label_187fcc;
        }
    }
    ctx->pc = 0x187FB8u;
label_187fb8:
    // 0x187fb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_187fbc:
    // 0x187fbc: 0x0  nop
    ctx->pc = 0x187fbcu;
    // NOP
    // 0x187fc0: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x187fc0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187fc4: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x187FC4u;
    {
        const bool branch_taken_0x187fc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x187fc4) {
            ctx->pc = 0x187FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187fa0;
        }
    }
    ctx->pc = 0x187FCCu;
label_187fcc:
    // 0x187fcc: 0x0  nop
    ctx->pc = 0x187fccu;
    // NOP
    // 0x187fd0: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x187fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x187fd4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187FD4u;
    {
        const bool branch_taken_0x187fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fd4) {
            ctx->pc = 0x187FF8u;
            goto label_187ff8;
        }
    }
    ctx->pc = 0x187FDCu;
    // 0x187fdc: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x187fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_187fe0:
    // 0x187fe0: 0x92470000  lbu         $a3, 0x0($s2)
    ctx->pc = 0x187fe0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x187fe4: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x187FE4u;
    {
        const bool branch_taken_0x187fe4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x187fe4) {
            ctx->pc = 0x187F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f8c;
        }
    }
    ctx->pc = 0x187FECu;
    // 0x187fec: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x187fecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x187ff0: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x187FF0u;
    {
        const bool branch_taken_0x187ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ff0) {
            ctx->pc = 0x187F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f8c;
        }
    }
    ctx->pc = 0x187FF8u;
label_187ff8:
    // 0x187ff8: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x187ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x187ffc: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x187ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x188000: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x188000) {
            ctx->pc = 0x188020u;
            goto label_188020;
        }
    }
    ctx->pc = 0x188008u;
    // 0x188008: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x188008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x18800c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18800Cu;
    {
        const bool branch_taken_0x18800c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18800c) {
            ctx->pc = 0x188020u;
            goto label_188020;
        }
    }
    ctx->pc = 0x188014u;
    // 0x188014: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x188014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x188018: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x188018u;
    {
        const bool branch_taken_0x188018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188018u;
        // 0x18801c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188018) {
            ctx->pc = 0x188090u;
            goto label_188090;
        }
    }
    ctx->pc = 0x188020u;
label_188020:
    // 0x188020: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x188020u;
    {
        const bool branch_taken_0x188020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188020) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188028u;
label_188028:
    // 0x188028: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x18802c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x18802cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x188030: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x188030u;
    {
        const bool branch_taken_0x188030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188030u;
        // 0x188034: 0x24c6f9e8  addiu       $a2, $a2, -0x618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188030) {
            ctx->pc = 0x188054u;
            goto label_188054;
        }
    }
    ctx->pc = 0x188038u;
label_188038:
    // 0x188038: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18803c: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18803Cu;
    {
        const bool branch_taken_0x18803c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x18803c) {
            ctx->pc = 0x188050u;
            goto label_188050;
        }
    }
    ctx->pc = 0x188044u;
    // 0x188044: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x188044u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188048: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188048u;
    {
        const bool branch_taken_0x188048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188048) {
            ctx->pc = 0x188064u;
            goto label_188064;
        }
    }
    ctx->pc = 0x188050u;
label_188050:
    // 0x188050: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x188050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_188054:
    // 0x188054: 0x0  nop
    ctx->pc = 0x188054u;
    // NOP
    // 0x188058: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x188058u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18805c: 0x14e0fff6  bnez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18805Cu;
    {
        const bool branch_taken_0x18805c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x18805c) {
            ctx->pc = 0x188038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188038;
        }
    }
    ctx->pc = 0x188064u;
label_188064:
    // 0x188064: 0x0  nop
    ctx->pc = 0x188064u;
    // NOP
    // 0x188068: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x188068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18806c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18806Cu;
    {
        const bool branch_taken_0x18806c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18806c) {
            ctx->pc = 0x188090u;
            goto label_188090;
        }
    }
    ctx->pc = 0x188074u;
    // 0x188074: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x188074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_188078:
    // 0x188078: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188078u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18807c: 0x14a0ffea  bnez        $a1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x18807Cu;
    {
        const bool branch_taken_0x18807c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18807c) {
            ctx->pc = 0x188028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188028;
        }
    }
    ctx->pc = 0x188084u;
    // 0x188084: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x188084u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188088: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x188088u;
    {
        const bool branch_taken_0x188088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x188088) {
            ctx->pc = 0x188028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188028;
        }
    }
    ctx->pc = 0x188090u;
label_188090:
    // 0x188090: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188090u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188094: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x188098: 0x14a40025  bne         $a1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x188098u;
    {
        const bool branch_taken_0x188098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x188098) {
            ctx->pc = 0x188130u;
            goto label_188130;
        }
    }
    ctx->pc = 0x1880A0u;
    // 0x1880a0: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x1880a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1880a4: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1880A4u;
    {
        const bool branch_taken_0x1880a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880a4) {
            ctx->pc = 0x188130u;
            goto label_188130;
        }
    }
    ctx->pc = 0x1880ACu;
    // 0x1880ac: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x1880acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1880b0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1880b4: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1880B4u;
    {
        const bool branch_taken_0x1880b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1880b4) {
            ctx->pc = 0x1880D4u;
            goto label_1880d4;
        }
    }
    ctx->pc = 0x1880BCu;
    // 0x1880bc: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x1880bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1880c0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1880C0u;
    {
        const bool branch_taken_0x1880c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880c0) {
            ctx->pc = 0x1880D4u;
            goto label_1880d4;
        }
    }
    ctx->pc = 0x1880C8u;
    // 0x1880c8: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x1880c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x1880cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1880CCu;
    {
        const bool branch_taken_0x1880cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880CCu;
        // 0x1880d0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880cc) {
            ctx->pc = 0x188130u;
            goto label_188130;
        }
    }
    ctx->pc = 0x1880D4u;
label_1880d4:
    // 0x1880d4: 0x0  nop
    ctx->pc = 0x1880d4u;
    // NOP
    // 0x1880d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1880D8u;
    {
        const bool branch_taken_0x1880d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D8u;
        // 0x1880dc: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880d8) {
            ctx->pc = 0x188120u;
            goto label_188120;
        }
    }
    ctx->pc = 0x1880E0u;
label_1880e0:
    // 0x1880e0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1880e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1880e4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1880e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1880e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1880E8u;
    {
        const bool branch_taken_0x1880e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880E8u;
        // 0x1880ec: 0x24c6f9e8  addiu       $a2, $a2, -0x618 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880e8) {
            ctx->pc = 0x188100u;
            goto label_188100;
        }
    }
    ctx->pc = 0x1880F0u;
label_1880f0:
    // 0x1880f0: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x1880f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1880f4: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1880F4u;
    {
        const bool branch_taken_0x1880f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1880f4) {
            ctx->pc = 0x18810Cu;
            goto label_18810c;
        }
    }
    ctx->pc = 0x1880FCu;
    // 0x1880fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_188100:
    // 0x188100: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x188100u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x188104: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188104u;
    {
        const bool branch_taken_0x188104 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x188104) {
            ctx->pc = 0x1880F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1880f0;
        }
    }
    ctx->pc = 0x18810Cu;
label_18810c:
    // 0x18810c: 0x0  nop
    ctx->pc = 0x18810cu;
    // NOP
    // 0x188110: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x188110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x188114: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188114u;
    {
        const bool branch_taken_0x188114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188114) {
            ctx->pc = 0x18812Cu;
            goto label_18812c;
        }
    }
    ctx->pc = 0x18811Cu;
    // 0x18811c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18811cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_188120:
    // 0x188120: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x188120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188124: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x188124u;
    {
        const bool branch_taken_0x188124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x188124) {
            ctx->pc = 0x1880E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1880e0;
        }
    }
    ctx->pc = 0x18812Cu;
label_18812c:
    // 0x18812c: 0x0  nop
    ctx->pc = 0x18812cu;
    // NOP
label_188130:
    // 0x188130: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x188130u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188134: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188134u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188138: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x188138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x18813c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x18813cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x188140: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x188140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x188144: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x188144u;
    {
        const bool branch_taken_0x188144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x188148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188144u;
        // 0x188148: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188144) {
            ctx->pc = 0x188174u;
            goto label_188174;
        }
    }
    ctx->pc = 0x18814Cu;
    // 0x18814c: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18814Cu;
    {
        const bool branch_taken_0x18814c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x18814c) {
            ctx->pc = 0x188174u;
            goto label_188174;
        }
    }
    ctx->pc = 0x188154u;
    // 0x188154: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x188154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x188158: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188158u;
    {
        const bool branch_taken_0x188158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188158) {
            ctx->pc = 0x188168u;
            goto label_188168;
        }
    }
    ctx->pc = 0x188160u;
    // 0x188160: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x188160u;
    {
        const bool branch_taken_0x188160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188160) {
            ctx->pc = 0x188180u;
            goto label_188180;
        }
    }
    ctx->pc = 0x188168u;
label_188168:
    // 0x188168: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x188168u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x18816c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18816Cu;
    {
        const bool branch_taken_0x18816c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18816Cu;
        // 0x188170: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18816c) {
            ctx->pc = 0x188180u;
            goto label_188180;
        }
    }
    ctx->pc = 0x188174u;
label_188174:
    // 0x188174: 0x0  nop
    ctx->pc = 0x188174u;
    // NOP
    // 0x188178: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x188178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x18817c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x18817cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_188180:
    // 0x188180: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x188180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188184: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188184u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x188188: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x188188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x18818c: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x188190: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x188190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x188194: 0x10a40028  beq         $a1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x188194u;
    {
        const bool branch_taken_0x188194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x188198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188194u;
        // 0x188198: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188194) {
            ctx->pc = 0x188238u;
            goto label_188238;
        }
    }
    ctx->pc = 0x18819Cu;
    // 0x18819c: 0x10a40024  beq         $a1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18819Cu;
    {
        const bool branch_taken_0x18819c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x18819c) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881A4u;
    // 0x1881a4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1881a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1881a8: 0x10a40021  beq         $a1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1881A8u;
    {
        const bool branch_taken_0x1881a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881A8u;
        // 0x1881ac: 0x24040063  addiu       $a0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881a8) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881B0u;
    // 0x1881b0: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1881B0u;
    {
        const bool branch_taken_0x1881b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881b0) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881B8u;
    // 0x1881b8: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x1881b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1881bc: 0x10a4001c  beq         $a1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1881BCu;
    {
        const bool branch_taken_0x1881bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881BCu;
        // 0x1881c0: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881bc) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881C4u;
    // 0x1881c4: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1881C4u;
    {
        const bool branch_taken_0x1881c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881c4) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881CCu;
    // 0x1881cc: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1881d0: 0x10a40017  beq         $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1881D0u;
    {
        const bool branch_taken_0x1881d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881D0u;
        // 0x1881d4: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881d0) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881D8u;
    // 0x1881d8: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1881D8u;
    {
        const bool branch_taken_0x1881d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881d8) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881E0u;
    // 0x1881e0: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1881e4: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1881E4u;
    {
        const bool branch_taken_0x1881e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881E4u;
        // 0x1881e8: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881e4) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881ECu;
    // 0x1881ec: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1881ECu;
    {
        const bool branch_taken_0x1881ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1881ec) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x1881F4u;
    // 0x1881f4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x1881f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1881f8: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1881F8u;
    {
        const bool branch_taken_0x1881f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1881FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881F8u;
        // 0x1881fc: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1881f8) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x188200u;
    // 0x188200: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x188200u;
    {
        const bool branch_taken_0x188200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188200) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x188208u;
    // 0x188208: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x188208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x18820c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18820Cu;
    {
        const bool branch_taken_0x18820c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x188210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18820Cu;
        // 0x188210: 0x24040069  addiu       $a0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18820c) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x188214u;
    // 0x188214: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188214u;
    {
        const bool branch_taken_0x188214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188214) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x18821Cu;
    // 0x18821c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x18821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x188220: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188220u;
    {
        const bool branch_taken_0x188220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x188220) {
            ctx->pc = 0x188230u;
            goto label_188230;
        }
    }
    ctx->pc = 0x188228u;
    // 0x188228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188228u;
    {
        const bool branch_taken_0x188228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188228) {
            ctx->pc = 0x188244u;
            goto label_188244;
        }
    }
    ctx->pc = 0x188230u;
label_188230:
    // 0x188230: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188230u;
    {
        const bool branch_taken_0x188230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188230u;
        // 0x188234: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188230) {
            ctx->pc = 0x18824Cu;
            goto label_18824c;
        }
    }
    ctx->pc = 0x188238u;
label_188238:
    // 0x188238: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x188238u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
    // 0x18823c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18823Cu;
    {
        const bool branch_taken_0x18823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18823Cu;
        // 0x188240: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18823c) {
            ctx->pc = 0x18824Cu;
            goto label_18824c;
        }
    }
    ctx->pc = 0x188244u;
label_188244:
    // 0x188244: 0x0  nop
    ctx->pc = 0x188244u;
    // NOP
    // 0x188248: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x188248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_18824c:
    // 0x18824c: 0x0  nop
    ctx->pc = 0x18824cu;
    // NOP
    // 0x188250: 0x32040010  andi        $a0, $s0, 0x10
    ctx->pc = 0x188250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x188254: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x188254u;
    {
        const bool branch_taken_0x188254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188254) {
            ctx->pc = 0x1882A0u;
            goto label_1882a0;
        }
    }
    ctx->pc = 0x18825Cu;
    // 0x18825c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18825cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x188260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188260u;
    {
        const bool branch_taken_0x188260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188260u;
        // 0x188264: 0x8e23fff8  lw          $v1, -0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188260) {
            ctx->pc = 0x18827Cu;
            goto label_18827c;
        }
    }
    ctx->pc = 0x188268u;
label_188268:
    // 0x188268: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x188268u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18826c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x18826cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x188270: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x188270u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x188274: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x188278: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x188278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_18827c:
    // 0x18827c: 0x0  nop
    ctx->pc = 0x18827cu;
    // NOP
    // 0x188280: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x188280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188284: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x188284u;
    {
        const bool branch_taken_0x188284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x188284) {
            ctx->pc = 0x188268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188268;
        }
    }
    ctx->pc = 0x18828Cu;
    // 0x18828c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x18828cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x188290: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x188290u;
    {
        const bool branch_taken_0x188290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188290) {
            ctx->pc = 0x188268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188268;
        }
    }
    ctx->pc = 0x188298u;
    // 0x188298: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x188298u;
    {
        const bool branch_taken_0x188298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188298) {
            ctx->pc = 0x188394u;
            goto label_188394;
        }
    }
    ctx->pc = 0x1882A0u;
label_1882a0:
    // 0x1882a0: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x1882a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1882a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1882A4u;
    {
        const bool branch_taken_0x1882a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882a4) {
            ctx->pc = 0x1882C8u;
            goto label_1882c8;
        }
    }
    ctx->pc = 0x1882ACu;
label_1882ac:
    // 0x1882ac: 0x0  nop
    ctx->pc = 0x1882acu;
    // NOP
    // 0x1882b0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1882b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1882b4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1882b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1882b8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1882bc: 0x72202b  sltu        $a0, $v1, $s2
    ctx->pc = 0x1882bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1882c0: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1882C0u;
    {
        const bool branch_taken_0x1882c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1882C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882C0u;
        // 0x1882c4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882c0) {
            ctx->pc = 0x1882ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1882ac;
        }
    }
    ctx->pc = 0x1882C8u;
label_1882c8:
    // 0x1882c8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1882c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1882cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1882ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1882d4: 0xc081798  jal         func_205E60
    ctx->pc = 0x1882D4u;
    SET_GPR_U32(ctx, 31, 0x1882DCu);
    ctx->pc = 0x1882D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882D4u;
    // 0x1882d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E60u, 0x1882D4u, 0x1882DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882DCu;
label_1882dc:
    // 0x1882dc: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x1882dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1882e0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1882e4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1882E4u;
    {
        const bool branch_taken_0x1882e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882e4) {
            ctx->pc = 0x188310u;
            goto label_188310;
        }
    }
    ctx->pc = 0x1882ECu;
label_1882ec:
    // 0x1882ec: 0x0  nop
    ctx->pc = 0x1882ecu;
    // NOP
    // 0x1882f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1882f4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1882f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1882f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1882fc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1882fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x188300: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x188300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x188304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x188304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x188308: 0x1c40fff8  bgtz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x188308u;
    {
        const bool branch_taken_0x188308 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x18830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188308u;
        // 0x18830c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188308) {
            ctx->pc = 0x1882ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1882ec;
        }
    }
    ctx->pc = 0x188310u;
label_188310:
    // 0x188310: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x188310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x188314: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188314u;
    {
        const bool branch_taken_0x188314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188314) {
            ctx->pc = 0x188320u;
            goto label_188320;
        }
    }
    ctx->pc = 0x18831Cu;
    // 0x18831c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_188320:
    // 0x188320: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x188320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x188324: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188324u;
    {
        const bool branch_taken_0x188324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188324) {
            ctx->pc = 0x188330u;
            goto label_188330;
        }
    }
    ctx->pc = 0x18832Cu;
    // 0x18832c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_188330:
    // 0x188330: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x188330u;
    {
        const bool branch_taken_0x188330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188330u;
        // 0x188334: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188330) {
            ctx->pc = 0x188394u;
            goto label_188394;
        }
    }
    ctx->pc = 0x188338u;
label_188338:
    // 0x188338: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x18833c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18833Cu;
    {
        const bool branch_taken_0x18833c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18833c) {
            ctx->pc = 0x188380u;
            goto label_188380;
        }
    }
    ctx->pc = 0x188344u;
    // 0x188344: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x188344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188348: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x188348u;
    {
        const bool branch_taken_0x188348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188348) {
            ctx->pc = 0x188380u;
            goto label_188380;
        }
    }
    ctx->pc = 0x188350u;
    // 0x188350: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x188350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x188354: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x188354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x188358: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188358u;
    {
        const bool branch_taken_0x188358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188358) {
            ctx->pc = 0x188380u;
            goto label_188380;
        }
    }
    ctx->pc = 0x188360u;
    // 0x188360: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x188360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x188364: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188364u;
    {
        const bool branch_taken_0x188364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188364u;
        // 0x188368: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188364) {
            ctx->pc = 0x188380u;
            goto label_188380;
        }
    }
    ctx->pc = 0x18836Cu;
    // 0x18836c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x188370: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x188370u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x188374: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x188374u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x188378: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188378u;
    {
        const bool branch_taken_0x188378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188378u;
        // 0x18837c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188378) {
            ctx->pc = 0x188394u;
            goto label_188394;
        }
    }
    ctx->pc = 0x188380u;
label_188380:
    // 0x188380: 0xa2650000  sb          $a1, 0x0($s3)
    ctx->pc = 0x188380u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x188384: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x188384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x188388: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x188388u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18838c: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x18838cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x188390: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x188390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_188394:
    // 0x188394: 0x0  nop
    ctx->pc = 0x188394u;
    // NOP
    // 0x188398: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x188398u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18839c: 0x14a0fee4  bnez        $a1, . + 4 + (-0x11C << 2)
    ctx->pc = 0x18839Cu;
    {
        const bool branch_taken_0x18839c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18839Cu;
        // 0x1883a0: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18839c) {
            ctx->pc = 0x187F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f30;
        }
    }
    ctx->pc = 0x1883A4u;
    // 0x1883a4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x1883a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1883a8: 0x1440fee2  bnez        $v0, . + 4 + (-0x11E << 2)
    ctx->pc = 0x1883A8u;
    {
        const bool branch_taken_0x1883a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883A8u;
        // 0x1883ac: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883a8) {
            ctx->pc = 0x187F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187f34;
        }
    }
    ctx->pc = 0x1883B0u;
    // 0x1883b0: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x1883b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1883b4: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x1883b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1883b8: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1883b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1883bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1883BCu;
    {
        const bool branch_taken_0x1883bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883BCu;
        // 0x1883c0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883bc) {
            ctx->pc = 0x1883CCu;
            goto label_1883cc;
        }
    }
    ctx->pc = 0x1883C4u;
    // 0x1883c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1883c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1883cc:
    // 0x1883cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1883ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1883d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1883d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1883d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1883d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1883d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1883d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1883dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1883dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1883e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1883e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1883e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1883E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1883E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883E4u;
        // 0x1883e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1883E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1883ECu;
}
