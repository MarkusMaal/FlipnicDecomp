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

// Function: FUN_00126d70
// Address: 0x126d70 - 0x127118
void FUN_00126d70_0x126d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126d70_0x126d70");
#endif

    switch (ctx->pc) {
        case 0x126e08u: goto label_126e08;
        case 0x126f38u: goto label_126f38;
        case 0x126f88u: goto label_126f88;
        case 0x126fd4u: goto label_126fd4;
        case 0x127010u: goto label_127010;
        case 0x127094u: goto label_127094;
        default: break;
    }

    ctx->pc = 0x126d70u;

    // 0x126d70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x126d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x126d74: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x126d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x126d78: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x126d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x126d7c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x126d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x126d80: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x126d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x126d84: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x126d88: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x126d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x126d8c: 0x27b700e4  addiu       $s7, $sp, 0xE4
    ctx->pc = 0x126d8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x126d90: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x126d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x126d94: 0x27b600e0  addiu       $s6, $sp, 0xE0
    ctx->pc = 0x126d94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x126d98: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x126d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x126d9c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x126d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x126da0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x126da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126da4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x126da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x126da8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x126da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x126dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x126db0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x126db4: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x126db4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x126db8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x126db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dbc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x126dbcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x126dc0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x126dc0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x126dc4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x126dc4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x126dc8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x126dc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x126dcc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x126dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x126dd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x126dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x126dd4: 0x78a200a0  lq          $v0, 0xA0($a1)
    ctx->pc = 0x126dd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x126dd8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x126dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x126ddc: 0x78a200b0  lq          $v0, 0xB0($a1)
    ctx->pc = 0x126ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x126de0: 0x7fc20000  sq          $v0, 0x0($fp)
    ctx->pc = 0x126de0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), GPR_VEC(ctx, 2));
    // 0x126de4: 0xc4a000c0  lwc1        $f0, 0xC0($a1)
    ctx->pc = 0x126de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126de8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x126de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x126dec: 0xc4a000c4  lwc1        $f0, 0xC4($a1)
    ctx->pc = 0x126decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126df0: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x126df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x126df4: 0x8cb500f4  lw          $s5, 0xF4($a1)
    ctx->pc = 0x126df4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x126df8: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x126df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x126dfc: 0x102000aa  beqz        $at, . + 4 + (0xAA << 2)
    ctx->pc = 0x126DFCu;
    {
        const bool branch_taken_0x126dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DFCu;
        // 0x126e00: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dfc) {
            ctx->pc = 0x1270A8u;
            goto label_1270a8;
        }
    }
    ctx->pc = 0x126E04u;
    // 0x126e04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x126e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126e08:
    // 0x126e08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x126e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e0c: 0x0  nop
    ctx->pc = 0x126e0cu;
    // NOP
    // 0x126e10: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x126e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126e14: 0x0  nop
    ctx->pc = 0x126e14u;
    // NOP
    // 0x126e18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x126E18u;
    {
        const bool branch_taken_0x126e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126e18) {
            ctx->pc = 0x126E24u;
            goto label_126e24;
        }
    }
    ctx->pc = 0x126E20u;
    // 0x126e20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x126e20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_126e24:
    // 0x126e24: 0x0  nop
    ctx->pc = 0x126e24u;
    // NOP
    // 0x126e28: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x126e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x126e2c: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x126e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x126e30: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x126e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x126e34: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x126e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x126e38: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126E38u;
    {
        const bool branch_taken_0x126e38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x126E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E38u;
        // 0x126e3c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e38) {
            ctx->pc = 0x126E4Cu;
            goto label_126e4c;
        }
    }
    ctx->pc = 0x126E40u;
    // 0x126e40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x126e40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126E44u;
    {
        const bool branch_taken_0x126e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E44u;
        // 0x126e48: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e44) {
            ctx->pc = 0x126E64u;
            goto label_126e64;
        }
    }
    ctx->pc = 0x126E4Cu;
label_126e4c:
    // 0x126e4c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x126e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x126e50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126e54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e58: 0x0  nop
    ctx->pc = 0x126e58u;
    // NOP
    // 0x126e5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126e60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x126e60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_126e64:
    // 0x126e64: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x126e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126e68: 0x0  nop
    ctx->pc = 0x126e68u;
    // NOP
    // 0x126e6c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x126E6Cu;
    {
        const bool branch_taken_0x126e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126e6c) {
            ctx->pc = 0x126EB4u;
            goto label_126eb4;
        }
    }
    ctx->pc = 0x126E74u;
    // 0x126e74: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126E74u;
    {
        const bool branch_taken_0x126e74 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x126E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E74u;
        // 0x126e78: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e74) {
            ctx->pc = 0x126E88u;
            goto label_126e88;
        }
    }
    ctx->pc = 0x126E7Cu;
    // 0x126e7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x126e7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126E80u;
    {
        const bool branch_taken_0x126e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126E80u;
        // 0x126e84: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126e80) {
            ctx->pc = 0x126EA0u;
            goto label_126ea0;
        }
    }
    ctx->pc = 0x126E88u;
label_126e88:
    // 0x126e88: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x126e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x126e8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126e94: 0x0  nop
    ctx->pc = 0x126e94u;
    // NOP
    // 0x126e98: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x126e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x126e9c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x126e9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_126ea0:
    // 0x126ea0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126ea0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126ea4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126ea8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x126ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126eac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126EACu;
    {
        const bool branch_taken_0x126eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126eac) {
            ctx->pc = 0x126EC8u;
            goto label_126ec8;
        }
    }
    ctx->pc = 0x126EB4u;
label_126eb4:
    // 0x126eb4: 0x0  nop
    ctx->pc = 0x126eb4u;
    // NOP
    // 0x126eb8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126eb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126ebc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126ec4: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x126ec4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_126ec8:
    // 0x126ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x126ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126ecc: 0x0  nop
    ctx->pc = 0x126eccu;
    // NOP
    // 0x126ed0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x126ed0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126ed4: 0x0  nop
    ctx->pc = 0x126ed4u;
    // NOP
    // 0x126ed8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x126ED8u;
    {
        const bool branch_taken_0x126ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x126EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ED8u;
        // 0x126edc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ed8) {
            ctx->pc = 0x126EF0u;
            goto label_126ef0;
        }
    }
    ctx->pc = 0x126EE0u;
    // 0x126ee0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x126ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x126ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126ee8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x126EE8u;
    {
        const bool branch_taken_0x126ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EE8u;
        // 0x126eec: 0xc4570000  lwc1        $f23, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ee8) {
            ctx->pc = 0x127028u;
            goto label_127028;
        }
    }
    ctx->pc = 0x126EF0u;
label_126ef0:
    // 0x126ef0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x126ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x126ef4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x126ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x126ef8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x126ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x126efc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x126efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x126f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f04: 0x0  nop
    ctx->pc = 0x126f04u;
    // NOP
    // 0x126f08: 0x46010681  sub.s       $f26, $f0, $f1
    ctx->pc = 0x126f08u;
    ctx->f[26] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x126f0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x126f10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x126f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x126f14: 0xc4960004  lwc1        $f22, 0x4($a0)
    ctx->pc = 0x126f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x126f18: 0xc4950000  lwc1        $f21, 0x0($a0)
    ctx->pc = 0x126f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x126f1c: 0x4601b642  mul.s       $f25, $f22, $f1
    ctx->pc = 0x126f1cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x126f20: 0x461aa81a  mula.s      $f21, $f26
    ctx->pc = 0x126f20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[26]));
    // 0x126f24: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x126F24u;
    {
        const bool branch_taken_0x126f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x126F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F24u;
        // 0x126f28: 0x4601b5dc  madd.s      $f23, $f22, $f1 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f24) {
            ctx->pc = 0x127028u;
            goto label_127028;
        }
    }
    ctx->pc = 0x126F2Cu;
    // 0x126f2c: 0x4616ae01  sub.s       $f24, $f21, $f22
    ctx->pc = 0x126f2cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x126f30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x126F30u;
    {
        const bool branch_taken_0x126f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F30u;
        // 0x126f34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f30) {
            ctx->pc = 0x126F80u;
            goto label_126f80;
        }
    }
    ctx->pc = 0x126F38u;
label_126f38:
    // 0x126f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x126f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f3c: 0x0  nop
    ctx->pc = 0x126f3cu;
    // NOP
    // 0x126f40: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x126f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f44: 0x0  nop
    ctx->pc = 0x126f44u;
    // NOP
    // 0x126f48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x126F48u;
    {
        const bool branch_taken_0x126f48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x126F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F48u;
        // 0x126f4c: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f48) {
            ctx->pc = 0x126F60u;
            goto label_126f60;
        }
    }
    ctx->pc = 0x126F50u;
    // 0x126f50: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126F58u;
    {
        const bool branch_taken_0x126f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126F58u;
        // 0x126f5c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126f58) {
            ctx->pc = 0x126F74u;
            goto label_126f74;
        }
    }
    ctx->pc = 0x126F60u;
label_126f60:
    // 0x126f60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x126f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x126f64: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f6c: 0x0  nop
    ctx->pc = 0x126f6cu;
    // NOP
    // 0x126f70: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x126f70u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_126f74:
    // 0x126f74: 0x0  nop
    ctx->pc = 0x126f74u;
    // NOP
    // 0x126f78: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x126f78u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x126f7c: 0x4616ae01  sub.s       $f24, $f21, $f22
    ctx->pc = 0x126f7cu;
    ctx->f[24] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_126f80:
    // 0x126f80: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x126F80u;
    SET_GPR_U32(ctx, 31, 0x126F88u);
    ctx->pc = 0x126F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126F80u;
    // 0x126f84: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x126F80u, 0x126F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F88u;
label_126f88:
    // 0x126f88: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x126f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x126f8c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x126f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126f94: 0x0  nop
    ctx->pc = 0x126f94u;
    // NOP
    // 0x126f98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x126f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f9c: 0x0  nop
    ctx->pc = 0x126f9cu;
    // NOP
    // 0x126fa0: 0x4500ffe5  bc1f        . + 4 + (-0x1B << 2)
    ctx->pc = 0x126FA0u;
    {
        const bool branch_taken_0x126fa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126fa0) {
            ctx->pc = 0x126F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126f38;
        }
    }
    ctx->pc = 0x126FA8u;
    // 0x126fa8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x126FA8u;
    {
        const bool branch_taken_0x126fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FA8u;
        // 0x126fac: 0x461aa802  mul.s       $f0, $f21, $f26 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[26]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126fa8) {
            ctx->pc = 0x127028u;
            goto label_127028;
        }
    }
    ctx->pc = 0x126FB0u;
    // 0x126fb0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x126fb4: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x126fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126fb8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x126fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x126fbc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x126fc0: 0x461905c0  add.s       $f23, $f0, $f25
    ctx->pc = 0x126fc0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x126fc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x126fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x126fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126fcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x126FCCu;
    {
        const bool branch_taken_0x126fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fcc) {
            ctx->pc = 0x126FDCu;
            goto label_126fdc;
        }
    }
    ctx->pc = 0x126FD4u;
label_126fd4:
    // 0x126fd4: 0x0  nop
    ctx->pc = 0x126fd4u;
    // NOP
    // 0x126fd8: 0x4601bdc0  add.s       $f23, $f23, $f1
    ctx->pc = 0x126fd8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
label_126fdc:
    // 0x126fdc: 0x0  nop
    ctx->pc = 0x126fdcu;
    // NOP
    // 0x126fe0: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x126fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126fe4: 0x0  nop
    ctx->pc = 0x126fe4u;
    // NOP
    // 0x126fe8: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x126FE8u;
    {
        const bool branch_taken_0x126fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126fe8) {
            ctx->pc = 0x126FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126fd4;
        }
    }
    ctx->pc = 0x126FF0u;
    // 0x126ff0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x126ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x126ff4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x126ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x126ff8: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x126ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x126ffc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x127000: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127008u;
    {
        const bool branch_taken_0x127008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127008) {
            ctx->pc = 0x127014u;
            goto label_127014;
        }
    }
    ctx->pc = 0x127010u;
label_127010:
    // 0x127010: 0x4601bdc1  sub.s       $f23, $f23, $f1
    ctx->pc = 0x127010u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
label_127014:
    // 0x127014: 0x0  nop
    ctx->pc = 0x127014u;
    // NOP
    // 0x127018: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x127018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12701c: 0x0  nop
    ctx->pc = 0x12701cu;
    // NOP
    // 0x127020: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x127020u;
    {
        const bool branch_taken_0x127020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127020) {
            ctx->pc = 0x127010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127010;
        }
    }
    ctx->pc = 0x127028u;
label_127028:
    // 0x127028: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x127028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x12702c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x127030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127034: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x127034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x127038: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x127038u;
    {
        const bool branch_taken_0x127038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127038u;
        // 0x12703c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127038) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127040u;
    // 0x127040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x127040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x127044: 0x2463eb40  addiu       $v1, $v1, -0x14C0
    ctx->pc = 0x127044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961984));
    // 0x127048: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12704c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127050: 0x400008  jr          $v0
    ctx->pc = 0x127050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127058u: goto label_127058;
            case 0x127060u: goto label_127060;
            case 0x127068u: goto label_127068;
            case 0x127070u: goto label_127070;
            case 0x127078u: goto label_127078;
            case 0x127080u: goto label_127080;
            case 0x127088u: goto label_127088;
            case 0x127090u: goto label_127090;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127050u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x127058u;
label_127058:
    // 0x127058: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x127058u;
    {
        const bool branch_taken_0x127058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127058u;
        // 0x12705c: 0xe7b700c0  swc1        $f23, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127058) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127060u;
label_127060:
    // 0x127060: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x127060u;
    {
        const bool branch_taken_0x127060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127060u;
        // 0x127064: 0xe7b700c4  swc1        $f23, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127060) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127068u;
label_127068:
    // 0x127068: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x127068u;
    {
        const bool branch_taken_0x127068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127068u;
        // 0x12706c: 0xe7b700c8  swc1        $f23, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127068) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127070u;
label_127070:
    // 0x127070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x127070u;
    {
        const bool branch_taken_0x127070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127070u;
        // 0x127074: 0xe7d70000  swc1        $f23, 0x0($fp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127070) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127078u;
label_127078:
    // 0x127078: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x127078u;
    {
        const bool branch_taken_0x127078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127078u;
        // 0x12707c: 0xe7b700d4  swc1        $f23, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127078) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127080u;
label_127080:
    // 0x127080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x127080u;
    {
        const bool branch_taken_0x127080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127080u;
        // 0x127084: 0xe7b700d8  swc1        $f23, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127080) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127088u;
label_127088:
    // 0x127088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127088u;
    {
        const bool branch_taken_0x127088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127088u;
        // 0x12708c: 0xe6f70000  swc1        $f23, 0x0($s7) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127088) {
            ctx->pc = 0x127094u;
            goto label_127094;
        }
    }
    ctx->pc = 0x127090u;
label_127090:
    // 0x127090: 0xe6d70000  swc1        $f23, 0x0($s6)
    ctx->pc = 0x127090u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_127094:
    // 0x127094: 0x0  nop
    ctx->pc = 0x127094u;
    // NOP
    // 0x127098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x127098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12709c: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x12709cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1270a0: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x1270A0u;
    {
        const bool branch_taken_0x1270a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270A0u;
        // 0x1270a4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270a0) {
            ctx->pc = 0x126E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126e08;
        }
    }
    ctx->pc = 0x1270A8u;
label_1270a8:
    // 0x1270a8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1270a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1270ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1270acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1270b0: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x1270b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x1270b4: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x1270b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1270b8: 0x7e830010  sq          $v1, 0x10($s4)
    ctx->pc = 0x1270b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 3));
    // 0x1270bc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1270bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1270c0: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1270c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x1270c4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1270c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1270c8: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x1270c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x1270cc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1270ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1270d0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1270d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1270d4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1270d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1270d8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1270d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1270dc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1270dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1270e0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1270e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1270e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1270e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1270e8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1270e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1270ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1270ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1270f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1270f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1270f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1270f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1270f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1270f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1270fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1270fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127100: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x127100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x127104: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x127104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127108: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x127108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12710c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12710cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127110: 0x3e00008  jr          $ra
    ctx->pc = 0x127110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127110u;
        // 0x127114: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127118u;
}
