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

// Function: FUN_001706c0
// Address: 0x1706c0 - 0x1709a4
void FUN_001706c0_0x1706c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001706c0_0x1706c0");
#endif

    switch (ctx->pc) {
        case 0x170770u: goto label_170770;
        case 0x170784u: goto label_170784;
        case 0x17092cu: goto label_17092c;
        default: break;
    }

    ctx->pc = 0x1706c0u;

    // 0x1706c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1706c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1706c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1706c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1706c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1706cc: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x1706ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x1706d0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1706d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1706d4: 0x102000a9  beqz        $at, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1706D4u;
    {
        const bool branch_taken_0x1706d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706D4u;
        // 0x1706d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706d4) {
            ctx->pc = 0x17097Cu;
            goto label_17097c;
        }
    }
    ctx->pc = 0x1706DCu;
    // 0x1706dc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1706dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1706e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1706e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1706e4: 0x2463f530  addiu       $v1, $v1, -0xAD0
    ctx->pc = 0x1706e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964528));
    // 0x1706e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1706e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1706ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1706ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1706f0: 0x400008  jr          $v0
    ctx->pc = 0x1706F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1706F8u: goto label_1706f8;
            case 0x170720u: goto label_170720;
            case 0x170954u: goto label_170954;
            case 0x170964u: goto label_170964;
            case 0x170974u: goto label_170974;
            case 0x17097Cu: goto label_17097c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1706F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1706F8u;
label_1706f8:
    // 0x1706f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1706f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1706fc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x170700: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x170700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x170704: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x170704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170708: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x170708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x17070c: 0xc601025c  lwc1        $f1, 0x25C($s0)
    ctx->pc = 0x17070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170710: 0xc6000244  lwc1        $f0, 0x244($s0)
    ctx->pc = 0x170710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170714: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x170714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x170718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x170718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17071c: 0xe6000244  swc1        $f0, 0x244($s0)
    ctx->pc = 0x17071cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
label_170720:
    // 0x170720: 0xc602024c  lwc1        $f2, 0x24C($s0)
    ctx->pc = 0x170720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170728: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x170728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17072c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x17072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170730: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x170730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x170734: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x170734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x170738: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x170738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17073c: 0x0  nop
    ctx->pc = 0x17073cu;
    // NOP
    // 0x170740: 0x46022800  add.s       $f0, $f5, $f2
    ctx->pc = 0x170740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x170744: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x170744u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170748: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x170748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17074c: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x17074cu;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[6]); }
    // 0x170750: 0x0  nop
    ctx->pc = 0x170750u;
    // NOP
    // 0x170754: 0x0  nop
    ctx->pc = 0x170754u;
    // NOP
    // 0x170758: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x170758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17075c: 0x0  nop
    ctx->pc = 0x17075cu;
    // NOP
    // 0x170760: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x170760u;
    {
        const bool branch_taken_0x170760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x170760) {
            ctx->pc = 0x170770u;
            goto label_170770;
        }
    }
    ctx->pc = 0x170768u;
    // 0x170768: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x170768u;
    {
        const bool branch_taken_0x170768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170768u;
        // 0x17076c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170768) {
            ctx->pc = 0x170784u;
            goto label_170784;
        }
    }
    ctx->pc = 0x170770u;
label_170770:
    // 0x170770: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x170770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170774: 0x0  nop
    ctx->pc = 0x170774u;
    // NOP
    // 0x170778: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x170778u;
    {
        const bool branch_taken_0x170778 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170778u;
        // 0x17077c: 0x3c0241b8  lui         $v0, 0x41B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170778) {
            ctx->pc = 0x170788u;
            goto label_170788;
        }
    }
    ctx->pc = 0x170780u;
    // 0x170780: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x170780u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_170784:
    // 0x170784: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x170784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_170788:
    // 0x170788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x170788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17078c: 0x0  nop
    ctx->pc = 0x17078cu;
    // NOP
    // 0x170790: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x170790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x170794: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170798: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x170798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17079c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17079cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1707a0: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x1707a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1707a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1707A4u;
    {
        const bool branch_taken_0x1707a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1707A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707A4u;
        // 0x1707a8: 0x46000901  sub.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707a4) {
            ctx->pc = 0x1707B8u;
            goto label_1707b8;
        }
    }
    ctx->pc = 0x1707ACu;
    // 0x1707ac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1707acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1707b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1707B0u;
    {
        const bool branch_taken_0x1707b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1707B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707B0u;
        // 0x1707b4: 0xc424f4ec  lwc1        $f4, -0xB14($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1707b0) {
            ctx->pc = 0x1707F0u;
            goto label_1707f0;
        }
    }
    ctx->pc = 0x1707B8u;
label_1707b8:
    // 0x1707b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1707b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1707bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1707bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1707c0: 0x2442f494  addiu       $v0, $v0, -0xB6C
    ctx->pc = 0x1707c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964372));
    // 0x1707c4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1707c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1707c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1707c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1707cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1707ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1707d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1707d4: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x1707d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1707d8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1707d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1707dc: 0x2442f490  addiu       $v0, $v0, -0xB70
    ctx->pc = 0x1707dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964368));
    // 0x1707e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1707e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1707e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1707e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1707e8: 0x4602201a  mula.s      $f4, $f2
    ctx->pc = 0x1707e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x1707ec: 0x4600091c  madd.s      $f4, $f1, $f0
    ctx->pc = 0x1707ecu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_1707f0:
    // 0x1707f0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1707f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1707f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1707f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1707f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1707fc: 0x0  nop
    ctx->pc = 0x1707fcu;
    // NOP
    // 0x170800: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x170800u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x170804: 0x0  nop
    ctx->pc = 0x170804u;
    // NOP
    // 0x170808: 0x0  nop
    ctx->pc = 0x170808u;
    // NOP
    // 0x17080c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17080cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170810: 0x0  nop
    ctx->pc = 0x170810u;
    // NOP
    // 0x170814: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x170814u;
    {
        const bool branch_taken_0x170814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170814u;
        // 0x170818: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170814) {
            ctx->pc = 0x170824u;
            goto label_170824;
        }
    }
    ctx->pc = 0x17081Cu;
    // 0x17081c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17081Cu;
    {
        const bool branch_taken_0x17081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17081Cu;
        // 0x170820: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17081c) {
            ctx->pc = 0x170840u;
            goto label_170840;
        }
    }
    ctx->pc = 0x170824u;
label_170824:
    // 0x170824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170828: 0x0  nop
    ctx->pc = 0x170828u;
    // NOP
    // 0x17082c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17082cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170830: 0x0  nop
    ctx->pc = 0x170830u;
    // NOP
    // 0x170834: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x170834u;
    {
        const bool branch_taken_0x170834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170834) {
            ctx->pc = 0x170840u;
            goto label_170840;
        }
    }
    ctx->pc = 0x17083Cu;
    // 0x17083c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x17083cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_170840:
    // 0x170840: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x170840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x170844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170848: 0x0  nop
    ctx->pc = 0x170848u;
    // NOP
    // 0x17084c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17084cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170850: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170850u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170854: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x170854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x170858: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x170858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17085c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x17085cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x170860: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170860u;
    {
        const bool branch_taken_0x170860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170860u;
        // 0x170864: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170860) {
            ctx->pc = 0x170874u;
            goto label_170874;
        }
    }
    ctx->pc = 0x170868u;
    // 0x170868: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x170868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x17086c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17086Cu;
    {
        const bool branch_taken_0x17086c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17086Cu;
        // 0x170870: 0xc420f4ec  lwc1        $f0, -0xB14($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17086c) {
            ctx->pc = 0x1708ACu;
            goto label_1708ac;
        }
    }
    ctx->pc = 0x170874u;
label_170874:
    // 0x170874: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170878: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17087c: 0x2442f494  addiu       $v0, $v0, -0xB6C
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964372));
    // 0x170880: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17088c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x17088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170890: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x170890u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x170894: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x170898: 0x2442f490  addiu       $v0, $v0, -0xB70
    ctx->pc = 0x170898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964368));
    // 0x17089c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1708a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1708a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708a4: 0x4602181a  mula.s      $f3, $f2
    ctx->pc = 0x1708a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1708a8: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x1708a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_1708ac:
    // 0x1708ac: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x1708acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1708b0: 0xc600025c  lwc1        $f0, 0x25C($s0)
    ctx->pc = 0x1708b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1708b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1708b8: 0xe6000250  swc1        $f0, 0x250($s0)
    ctx->pc = 0x1708b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    // 0x1708bc: 0x93828610  lbu         $v0, -0x79F0($gp)
    ctx->pc = 0x1708bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x1708c0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1708C0u;
    {
        const bool branch_taken_0x1708c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1708c0) {
            ctx->pc = 0x17092Cu;
            goto label_17092c;
        }
    }
    ctx->pc = 0x1708C8u;
    // 0x1708c8: 0x8e02022c  lw          $v0, 0x22C($s0)
    ctx->pc = 0x1708c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1708cc: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1708ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1708d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1708D0u;
    {
        const bool branch_taken_0x1708d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708D0u;
        // 0x1708d4: 0x24c6f4f8  addiu       $a2, $a2, -0xB08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708d0) {
            ctx->pc = 0x1708E0u;
            goto label_1708e0;
        }
    }
    ctx->pc = 0x1708D8u;
    // 0x1708d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1708D8u;
    {
        const bool branch_taken_0x1708d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708D8u;
        // 0x1708dc: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708d8) {
            ctx->pc = 0x1708E8u;
            goto label_1708e8;
        }
    }
    ctx->pc = 0x1708E0u;
label_1708e0:
    // 0x1708e0: 0x3c080022  lui         $t0, 0x22
    ctx->pc = 0x1708e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34 << 16));
    // 0x1708e4: 0x2508f500  addiu       $t0, $t0, -0xB00
    ctx->pc = 0x1708e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964480));
label_1708e8:
    // 0x1708e8: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x1708e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1708ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1708ECu;
    {
        const bool branch_taken_0x1708ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708ECu;
        // 0x1708f0: 0x3c070022  lui         $a3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708ec) {
            ctx->pc = 0x1708FCu;
            goto label_1708fc;
        }
    }
    ctx->pc = 0x1708F4u;
    // 0x1708f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1708F4u;
    {
        const bool branch_taken_0x1708f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1708F4u;
        // 0x1708f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708f4) {
            ctx->pc = 0x170900u;
            goto label_170900;
        }
    }
    ctx->pc = 0x1708FCu;
label_1708fc:
    // 0x1708fc: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x1708fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_170900:
    // 0x170900: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x170900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x170904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170904u;
    {
        const bool branch_taken_0x170904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170904) {
            ctx->pc = 0x170914u;
            goto label_170914;
        }
    }
    ctx->pc = 0x17090Cu;
    // 0x17090c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17090Cu;
    {
        const bool branch_taken_0x17090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17090c) {
            ctx->pc = 0x17091Cu;
            goto label_17091c;
        }
    }
    ctx->pc = 0x170914u;
label_170914:
    // 0x170914: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x170914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x170918: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x170918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_17091c:
    // 0x17091c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17091cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x170920: 0x26040280  addiu       $a0, $s0, 0x280
    ctx->pc = 0x170920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x170924: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x170924u;
    SET_GPR_U32(ctx, 31, 0x17092Cu);
    ctx->pc = 0x170928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170924u;
    // 0x170928: 0x24a5f510  addiu       $a1, $a1, -0xAF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x170924u, 0x17092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17092Cu;
label_17092c:
    // 0x17092c: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x17092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170930: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x170930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x170934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170938: 0x0  nop
    ctx->pc = 0x170938u;
    // NOP
    // 0x17093c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17093cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170940: 0x0  nop
    ctx->pc = 0x170940u;
    // NOP
    // 0x170944: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x170944u;
    {
        const bool branch_taken_0x170944 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x170948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170944u;
        // 0x170948: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170944) {
            ctx->pc = 0x17097Cu;
            goto label_17097c;
        }
    }
    ctx->pc = 0x17094Cu;
    // 0x17094c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17094Cu;
    {
        const bool branch_taken_0x17094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17094Cu;
        // 0x170950: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17094c) {
            ctx->pc = 0x17097Cu;
            goto label_17097c;
        }
    }
    ctx->pc = 0x170954u;
label_170954:
    // 0x170954: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x170954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x170958: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x170958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17095c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17095Cu;
    {
        const bool branch_taken_0x17095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17095Cu;
        // 0x170960: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17095c) {
            ctx->pc = 0x17097Cu;
            goto label_17097c;
        }
    }
    ctx->pc = 0x170964u;
label_170964:
    // 0x170964: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x170964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x170968: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x170968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17096c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17096Cu;
    {
        const bool branch_taken_0x17096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17096Cu;
        // 0x170970: 0xae0201d4  sw          $v0, 0x1D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17096c) {
            ctx->pc = 0x17097Cu;
            goto label_17097c;
        }
    }
    ctx->pc = 0x170974u;
label_170974:
    // 0x170974: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x170974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x170978: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x170978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_17097c:
    // 0x17097c: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x17097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17098c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17098cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x170990: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x170990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x170994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17099c: 0x3e00008  jr          $ra
    ctx->pc = 0x17099Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1709A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17099Cu;
        // 0x1709a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17099Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1709A4u;
}
