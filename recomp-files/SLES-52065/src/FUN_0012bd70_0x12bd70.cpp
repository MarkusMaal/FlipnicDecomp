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

// Function: FUN_0012bd70
// Address: 0x12bd70 - 0x12c060
void FUN_0012bd70_0x12bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012bd70_0x12bd70");
#endif

    switch (ctx->pc) {
        case 0x12bdccu: goto label_12bdcc;
        case 0x12be8cu: goto label_12be8c;
        case 0x12bfe8u: goto label_12bfe8;
        default: break;
    }

    ctx->pc = 0x12bd70u;

    // 0x12bd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bd74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12bd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12bd78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12bd78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bd7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12bd80: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12bd84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12bd88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12bd8c: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x12bd8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12bd90: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x12bd90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12bd94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12bd98: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12bd9c: 0x110a0031  beq         $t0, $t2, . + 4 + (0x31 << 2)
    ctx->pc = 0x12BD9Cu;
    {
        const bool branch_taken_0x12bd9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x12BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD9Cu;
        // 0x12bda0: 0x1421821  addu        $v1, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd9c) {
            ctx->pc = 0x12BE64u;
            goto label_12be64;
        }
    }
    ctx->pc = 0x12BDA4u;
    // 0x12bda4: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x12bda8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12bdac: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x12bdacu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12bdb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12bdb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bdb4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x12bdb4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12bdb8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x12bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x12bdbc: 0x468011a0  cvt.s.w     $f6, $f2
    ctx->pc = 0x12bdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x12bdc0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12bdc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12bdc4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x12BDC4u;
    {
        const bool branch_taken_0x12bdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDC4u;
        // 0x12bdc8: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdc4) {
            ctx->pc = 0x12BE4Cu;
            goto label_12be4c;
        }
    }
    ctx->pc = 0x12BDCCu;
label_12bdcc:
    // 0x12bdcc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x12bdccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12bdd0: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bdd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12bdd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12bdd8: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x12bdd8u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[6]); }
    // 0x12bddc: 0x46050882  mul.s       $f2, $f1, $f5
    ctx->pc = 0x12bddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x12bde0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12bde0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12bde4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12bde4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12bde8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12bde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12bdec: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x12bdecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12bdf0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BDF0u;
    {
        const bool branch_taken_0x12bdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDF0u;
        // 0x12bdf4: 0x460111c1  sub.s       $f7, $f2, $f1 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdf0) {
            ctx->pc = 0x12BE04u;
            goto label_12be04;
        }
    }
    ctx->pc = 0x12BDF8u;
    // 0x12bdf8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x12bdfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12BDFCu;
    {
        const bool branch_taken_0x12bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BDFCu;
        // 0x12be00: 0xc442fffc  lwc1        $f2, -0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bdfc) {
            ctx->pc = 0x12BE20u;
            goto label_12be20;
        }
    }
    ctx->pc = 0x12BE04u;
label_12be04:
    // 0x12be04: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12be04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12be08: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x12be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12be0c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x12be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12be10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12be14: 0x46071881  sub.s       $f2, $f3, $f7
    ctx->pc = 0x12be14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x12be18: 0x4604381a  mula.s      $f7, $f4
    ctx->pc = 0x12be18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x12be1c: 0x4601109c  madd.s      $f2, $f2, $f1
    ctx->pc = 0x12be1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_12be20:
    // 0x12be20: 0x692823  subu        $a1, $v1, $t1
    ctx->pc = 0x12be20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x12be24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12be28: 0xaa001a  div         $zero, $a1, $t2
    ctx->pc = 0x12be28u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12be2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x12be2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x12be30: 0x0  nop
    ctx->pc = 0x12be30u;
    // NOP
    // 0x12be34: 0x2810  mfhi        $a1
    ctx->pc = 0x12be34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x12be38: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x12be38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12be3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12be40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12be44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12be44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12be48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12be48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12be4c:
    // 0x12be4c: 0x0  nop
    ctx->pc = 0x12be4cu;
    // NOP
    // 0x12be50: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x12be50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12be54: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12BE54u;
    {
        const bool branch_taken_0x12be54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12be54) {
            ctx->pc = 0x12BDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bdcc;
        }
    }
    ctx->pc = 0x12BE5Cu;
    // 0x12be5c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x12BE5Cu;
    {
        const bool branch_taken_0x12be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12be5c) {
            ctx->pc = 0x12C02Cu;
            goto label_12c02c;
        }
    }
    ctx->pc = 0x12BE64u;
label_12be64:
    // 0x12be64: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x12be64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x12be68: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x12BE68u;
    {
        const bool branch_taken_0x12be68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE68u;
        // 0x12be6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be68) {
            ctx->pc = 0x12C02Cu;
            goto label_12c02c;
        }
    }
    ctx->pc = 0x12BE70u;
    // 0x12be70: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x12be70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12be74: 0x14200059  bnez        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x12BE74u;
    {
        const bool branch_taken_0x12be74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE74u;
        // 0x12be78: 0x2506fff8  addiu       $a2, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be74) {
            ctx->pc = 0x12BFDCu;
            goto label_12bfdc;
        }
    }
    ctx->pc = 0x12BE7Cu;
    // 0x12be7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12be7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be80: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x12be80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12be84: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x12be84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12be88: 0x0  nop
    ctx->pc = 0x12be88u;
    // NOP
label_12be8c:
    // 0x12be8c: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x12be8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12be90: 0x475821  addu        $t3, $v0, $a3
    ctx->pc = 0x12be90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12be94: 0x148001a  div         $zero, $t2, $t0
    ctx->pc = 0x12be94u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12be98: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x12be98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x12be9c: 0xc5690000  lwc1        $f9, 0x0($t3)
    ctx->pc = 0x12be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x12bea0: 0xc5680004  lwc1        $f8, 0x4($t3)
    ctx->pc = 0x12bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x12bea4: 0xc5670008  lwc1        $f7, 0x8($t3)
    ctx->pc = 0x12bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x12bea8: 0xc566000c  lwc1        $f6, 0xC($t3)
    ctx->pc = 0x12bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12beac: 0xc5650010  lwc1        $f5, 0x10($t3)
    ctx->pc = 0x12beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12beb0: 0xc5640014  lwc1        $f4, 0x14($t3)
    ctx->pc = 0x12beb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12beb4: 0xc5630018  lwc1        $f3, 0x18($t3)
    ctx->pc = 0x12beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12beb8: 0xc562001c  lwc1        $f2, 0x1C($t3)
    ctx->pc = 0x12beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12bebc: 0x8010  mfhi        $s0
    ctx->pc = 0x12bebcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x12bec0: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x12bec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12bec4: 0x6ac823  subu        $t9, $v1, $t2
    ctx->pc = 0x12bec4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bec8: 0x24aa0002  addiu       $t2, $a1, 0x2
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x12becc: 0x328001a  div         $zero, $t9, $t0
    ctx->pc = 0x12beccu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 25);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bed0: 0x6ac023  subu        $t8, $v1, $t2
    ctx->pc = 0x12bed0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bed4: 0x24aa0003  addiu       $t2, $a1, 0x3
    ctx->pc = 0x12bed4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x12bed8: 0x6a7823  subu        $t7, $v1, $t2
    ctx->pc = 0x12bed8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bedc: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x12bedcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12bee0: 0x6a7023  subu        $t6, $v1, $t2
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bee4: 0x24aa0005  addiu       $t2, $a1, 0x5
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x12bee8: 0x6a6823  subu        $t5, $v1, $t2
    ctx->pc = 0x12bee8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12beec: 0x24aa0006  addiu       $t2, $a1, 0x6
    ctx->pc = 0x12beecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x12bef0: 0x6a6023  subu        $t4, $v1, $t2
    ctx->pc = 0x12bef0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12bef4: 0x24aa0007  addiu       $t2, $a1, 0x7
    ctx->pc = 0x12bef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x12bef8: 0x6a5823  subu        $t3, $v1, $t2
    ctx->pc = 0x12bef8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12befc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12befcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12bf00: 0xa6502a  slt         $t2, $a1, $a2
    ctx->pc = 0x12bf00u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12bf04: 0x10c880  sll         $t9, $s0, 2
    ctx->pc = 0x12bf04u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12bf08: 0x139c821  addu        $t9, $t1, $t9
    ctx->pc = 0x12bf08u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 25)));
    // 0x12bf0c: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x12bf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf10: 0xc810  mfhi        $t9
    ctx->pc = 0x12bf10u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x12bf14: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x12bf14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x12bf18: 0x308001a  div         $zero, $t8, $t0
    ctx->pc = 0x12bf18u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf20: 0x19c080  sll         $t8, $t9, 2
    ctx->pc = 0x12bf20u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x12bf24: 0x138c021  addu        $t8, $t1, $t8
    ctx->pc = 0x12bf24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
    // 0x12bf28: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x12bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf2c: 0xc010  mfhi        $t8
    ctx->pc = 0x12bf2cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
    // 0x12bf30: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x12bf30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x12bf34: 0x1e8001a  div         $zero, $t7, $t0
    ctx->pc = 0x12bf34u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf3c: 0x187880  sll         $t7, $t8, 2
    ctx->pc = 0x12bf3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x12bf40: 0x12f7821  addu        $t7, $t1, $t7
    ctx->pc = 0x12bf40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x12bf44: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x12bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf48: 0x7810  mfhi        $t7
    ctx->pc = 0x12bf48u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x12bf4c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x12bf4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x12bf50: 0x1c8001a  div         $zero, $t6, $t0
    ctx->pc = 0x12bf50u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf58: 0xf7080  sll         $t6, $t7, 2
    ctx->pc = 0x12bf58u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x12bf5c: 0x12e7021  addu        $t6, $t1, $t6
    ctx->pc = 0x12bf5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
    // 0x12bf60: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x12bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf64: 0x7010  mfhi        $t6
    ctx->pc = 0x12bf64u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12bf68: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x12bf68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x12bf6c: 0x1a8001a  div         $zero, $t5, $t0
    ctx->pc = 0x12bf6cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf74: 0xe6880  sll         $t5, $t6, 2
    ctx->pc = 0x12bf74u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x12bf78: 0x12d6821  addu        $t5, $t1, $t5
    ctx->pc = 0x12bf78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x12bf7c: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x12bf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf80: 0x6810  mfhi        $t5
    ctx->pc = 0x12bf80u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12bf84: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x12bf84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x12bf88: 0x188001a  div         $zero, $t4, $t0
    ctx->pc = 0x12bf88u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bf8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bf8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bf90: 0xd6080  sll         $t4, $t5, 2
    ctx->pc = 0x12bf90u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x12bf94: 0x12c6021  addu        $t4, $t1, $t4
    ctx->pc = 0x12bf94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x12bf98: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x12bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bf9c: 0x6010  mfhi        $t4
    ctx->pc = 0x12bf9cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x12bfa0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x12bfa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x12bfa4: 0x168001a  div         $zero, $t3, $t0
    ctx->pc = 0x12bfa4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bfa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bfac: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x12bfacu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x12bfb0: 0x12b5821  addu        $t3, $t1, $t3
    ctx->pc = 0x12bfb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x12bfb4: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x12bfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bfb8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x12bfb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x12bfbc: 0x5810  mfhi        $t3
    ctx->pc = 0x12bfbcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x12bfc0: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x12bfc0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x12bfc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12bfc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12bfc8: 0x12b5821  addu        $t3, $t1, $t3
    ctx->pc = 0x12bfc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x12bfcc: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x12bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bfd0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12bfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12bfd4: 0x1540ffad  bnez        $t2, . + 4 + (-0x53 << 2)
    ctx->pc = 0x12BFD4u;
    {
        const bool branch_taken_0x12bfd4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFD4u;
        // 0x12bfd8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfd4) {
            ctx->pc = 0x12BE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12be8c;
        }
    }
    ctx->pc = 0x12BFDCu;
label_12bfdc:
    // 0x12bfdc: 0x0  nop
    ctx->pc = 0x12bfdcu;
    // NOP
    // 0x12bfe0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12BFE0u;
    {
        const bool branch_taken_0x12bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFE0u;
        // 0x12bfe4: 0x53880  sll         $a3, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bfe0) {
            ctx->pc = 0x12C01Cu;
            goto label_12c01c;
        }
    }
    ctx->pc = 0x12BFE8u;
label_12bfe8:
    // 0x12bfe8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x12bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12bfec: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x12bfecu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12bff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12bff4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x12bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bff8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x12bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12bffc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x12bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12c000: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12c000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12c004: 0x1010  mfhi        $v0
    ctx->pc = 0x12c004u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12c008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c00c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12c010: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c014: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12c014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12c018: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12c018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12c01c:
    // 0x12c01c: 0x0  nop
    ctx->pc = 0x12c01cu;
    // NOP
    // 0x12c020: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x12c020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x12c024: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12C024u;
    {
        const bool branch_taken_0x12c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C024u;
        // 0x12c028: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c024) {
            ctx->pc = 0x12BFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bfe8;
        }
    }
    ctx->pc = 0x12C02Cu;
label_12c02c:
    // 0x12c02c: 0x0  nop
    ctx->pc = 0x12c02cu;
    // NOP
    // 0x12c030: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c034: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x12c034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12c038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c03c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12c040: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x12c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12c044: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12c044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12c048: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C048u;
    {
        const bool branch_taken_0x12c048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C048u;
        // 0x12c04c: 0x46010003  div.s       $f0, $f0, $f1 (Delay Slot)
        { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c048) {
            ctx->pc = 0x12C054u;
            goto label_12c054;
        }
    }
    ctx->pc = 0x12C050u;
    // 0x12c050: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12c050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_12c054:
    // 0x12c054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c058: 0x3e00008  jr          $ra
    ctx->pc = 0x12C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C058u;
        // 0x12c05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C060u;
}
