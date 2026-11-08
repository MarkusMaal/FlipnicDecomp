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

// Function: FUN_0012bb40
// Address: 0x12bb40 - 0x12bcb0
void FUN_0012bb40_0x12bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012bb40_0x12bb40");
#endif

    switch (ctx->pc) {
        case 0x12bb78u: goto label_12bb78;
        case 0x12bbd8u: goto label_12bbd8;
        case 0x12bc34u: goto label_12bc34;
        default: break;
    }

    ctx->pc = 0x12bb40u;

    // 0x12bb40: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x12bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12bb44: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x12bb44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12bb48: 0x146a002f  bne         $v1, $t2, . + 4 + (0x2F << 2)
    ctx->pc = 0x12BB48u;
    {
        const bool branch_taken_0x12bb48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x12bb48) {
            ctx->pc = 0x12BC08u;
            goto label_12bc08;
        }
    }
    ctx->pc = 0x12BB50u;
    // 0x12bb50: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x12bb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x12bb54: 0xa082a  slt         $at, $zero, $t2
    ctx->pc = 0x12bb54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12bb58: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x12BB58u;
    {
        const bool branch_taken_0x12bb58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB58u;
        // 0x12bb5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb58) {
            ctx->pc = 0x12BBFCu;
            goto label_12bbfc;
        }
    }
    ctx->pc = 0x12BB60u;
    // 0x12bb60: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x12bb60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x12bb64: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x12BB64u;
    {
        const bool branch_taken_0x12bb64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB64u;
        // 0x12bb68: 0x2547fff8  addiu       $a3, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb64) {
            ctx->pc = 0x12BBCCu;
            goto label_12bbcc;
        }
    }
    ctx->pc = 0x12BB6Cu;
    // 0x12bb6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12bb6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb70: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x12bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bb74: 0x0  nop
    ctx->pc = 0x12bb74u;
    // NOP
label_12bb78:
    // 0x12bb78: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x12bb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x12bb7c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x12bb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x12bb80: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x12bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bb84: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x12bb84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12bb88: 0xc5260004  lwc1        $f6, 0x4($t1)
    ctx->pc = 0x12bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x12bb8c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x12bb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x12bb90: 0xc5250008  lwc1        $f5, 0x8($t1)
    ctx->pc = 0x12bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12bb94: 0xc524000c  lwc1        $f4, 0xC($t1)
    ctx->pc = 0x12bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12bb98: 0xc5230010  lwc1        $f3, 0x10($t1)
    ctx->pc = 0x12bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12bb9c: 0xc5220014  lwc1        $f2, 0x14($t1)
    ctx->pc = 0x12bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12bba0: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x12bba0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x12bba4: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x12bba4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x12bba8: 0x460539c0  add.s       $f7, $f7, $f5
    ctx->pc = 0x12bba8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[5]);
    // 0x12bbac: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x12bbacu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x12bbb0: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x12bbb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x12bbb4: 0xc5210018  lwc1        $f1, 0x18($t1)
    ctx->pc = 0x12bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bbb8: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x12bbb8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x12bbbc: 0xc520001c  lwc1        $f0, 0x1C($t1)
    ctx->pc = 0x12bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bbc0: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x12bbc0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x12bbc4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12BBC4u;
    {
        const bool branch_taken_0x12bbc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBC4u;
        // 0x12bbc8: 0x460039c0  add.s       $f7, $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbc4) {
            ctx->pc = 0x12BB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bb78;
        }
    }
    ctx->pc = 0x12BBCCu;
label_12bbcc:
    // 0x12bbcc: 0x0  nop
    ctx->pc = 0x12bbccu;
    // NOP
    // 0x12bbd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12BBD0u;
    {
        const bool branch_taken_0x12bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBD0u;
        // 0x12bbd4: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbd0) {
            ctx->pc = 0x12BBF0u;
            goto label_12bbf0;
        }
    }
    ctx->pc = 0x12BBD8u;
label_12bbd8:
    // 0x12bbd8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x12bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bbdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x12bbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x12bbe0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12bbe4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bbe8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x12bbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x12bbec: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x12bbecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_12bbf0:
    // 0x12bbf0: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x12bbf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12bbf4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12BBF4u;
    {
        const bool branch_taken_0x12bbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bbf4) {
            ctx->pc = 0x12BBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bbd8;
        }
    }
    ctx->pc = 0x12BBFCu;
label_12bbfc:
    // 0x12bbfc: 0x0  nop
    ctx->pc = 0x12bbfcu;
    // NOP
    // 0x12bc00: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12BC00u;
    {
        const bool branch_taken_0x12bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC00u;
        // 0x12bc04: 0xe4870010  swc1        $f7, 0x10($a0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc00) {
            ctx->pc = 0x12BCA8u;
            goto label_12bca8;
        }
    }
    ctx->pc = 0x12BC08u;
label_12bc08:
    // 0x12bc08: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x12bc08u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bc0c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x12bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12bc10: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12bc14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12bc14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc18: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x12bc18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x12bc1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x12bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12bc20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x12bc20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bc24: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x12bc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x12bc28: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12bc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12bc2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12BC2Cu;
    {
        const bool branch_taken_0x12bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC2Cu;
        // 0x12bc30: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc2c) {
            ctx->pc = 0x12BC98u;
            goto label_12bc98;
        }
    }
    ctx->pc = 0x12BC34u;
label_12bc34:
    // 0x12bc34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x12bc34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bc38: 0x8c890014  lw          $t1, 0x14($a0)
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12bc3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12bc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12bc40: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x12bc40u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x12bc44: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x12bc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x12bc48: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12bc48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12bc4c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x12bc4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x12bc50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12bc50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12bc54: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x12bc54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12bc58: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BC58u;
    {
        const bool branch_taken_0x12bc58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC58u;
        // 0x12bc5c: 0x460009c1  sub.s       $f7, $f1, $f0 (Delay Slot)
        ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc58) {
            ctx->pc = 0x12BC6Cu;
            goto label_12bc6c;
        }
    }
    ctx->pc = 0x12BC60u;
    // 0x12bc60: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x12bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12bc64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12BC64u;
    {
        const bool branch_taken_0x12bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC64u;
        // 0x12bc68: 0xc460fffc  lwc1        $f0, -0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc64) {
            ctx->pc = 0x12BC8Cu;
            goto label_12bc8c;
        }
    }
    ctx->pc = 0x12BC6Cu;
label_12bc6c:
    // 0x12bc6c: 0x0  nop
    ctx->pc = 0x12bc6cu;
    // NOP
    // 0x12bc70: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x12bc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x12bc74: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x12bc78: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x12bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12bc7c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bc80: 0x46071041  sub.s       $f1, $f2, $f7
    ctx->pc = 0x12bc80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x12bc84: 0x4603381a  mula.s      $f7, $f3
    ctx->pc = 0x12bc84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x12bc88: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x12bc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_12bc8c:
    // 0x12bc8c: 0x0  nop
    ctx->pc = 0x12bc8cu;
    // NOP
    // 0x12bc90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12bc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12bc94: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x12bc94u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_12bc98:
    // 0x12bc98: 0xea182a  slt         $v1, $a3, $t2
    ctx->pc = 0x12bc98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12bc9c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12BC9Cu;
    {
        const bool branch_taken_0x12bc9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bc9c) {
            ctx->pc = 0x12BC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bc34;
        }
    }
    ctx->pc = 0x12BCA4u;
    // 0x12bca4: 0xe4860010  swc1        $f6, 0x10($a0)
    ctx->pc = 0x12bca4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_12bca8:
    // 0x12bca8: 0x3e00008  jr          $ra
    ctx->pc = 0x12BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BCB0u;
}
