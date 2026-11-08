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

// Function: FUN_0018c730
// Address: 0x18c730 - 0x18c874
void FUN_0018c730_0x18c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c730_0x18c730");
#endif

    switch (ctx->pc) {
        case 0x18c750u: goto label_18c750;
        case 0x18c758u: goto label_18c758;
        case 0x18c764u: goto label_18c764;
        default: break;
    }

    ctx->pc = 0x18c730u;

    // 0x18c730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c738: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18c73c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18c73cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18c740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c744: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18c744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18c748: 0xc063154  jal         func_18C550
    ctx->pc = 0x18C748u;
    SET_GPR_U32(ctx, 31, 0x18C750u);
    ctx->pc = 0x18C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C748u;
    // 0x18c74c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C550u, 0x18C748u, 0x18C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C750u;
label_18c750:
    // 0x18c750: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18C750u;
    SET_GPR_U32(ctx, 31, 0x18C758u);
    ctx->pc = 0x18C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C750u;
    // 0x18c754: 0xc60c0570  lwc1        $f12, 0x570($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18C750u, 0x18C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C758u;
label_18c758:
    // 0x18c758: 0xc60c0574  lwc1        $f12, 0x574($s0)
    ctx->pc = 0x18c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18c75c: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18C75Cu;
    SET_GPR_U32(ctx, 31, 0x18C764u);
    ctx->pc = 0x18C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C75Cu;
    // 0x18c760: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18C75Cu, 0x18C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C764u;
label_18c764:
    // 0x18c764: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x18c764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c768: 0x0  nop
    ctx->pc = 0x18c768u;
    // NOP
    // 0x18c76c: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x18C76Cu;
    {
        const bool branch_taken_0x18c76c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c76c) {
            ctx->pc = 0x18C7ECu;
            goto label_18c7ec;
        }
    }
    ctx->pc = 0x18C774u;
    // 0x18c774: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x18c774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c778: 0x0  nop
    ctx->pc = 0x18c778u;
    // NOP
    // 0x18c77c: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x18C77Cu;
    {
        const bool branch_taken_0x18c77c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c77c) {
            ctx->pc = 0x18C85Cu;
            goto label_18c85c;
        }
    }
    ctx->pc = 0x18C784u;
    // 0x18c784: 0x0  nop
    ctx->pc = 0x18c784u;
    // NOP
    // 0x18c788: 0x0  nop
    ctx->pc = 0x18c788u;
    // NOP
    // 0x18c78c: 0x46150043  div.s       $f1, $f0, $f21
    ctx->pc = 0x18c78cu;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x18c790: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18c790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18c794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18c794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c798: 0x0  nop
    ctx->pc = 0x18c798u;
    // NOP
    // 0x18c79c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18c79cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18c7a0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18c7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x18c7a4: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x18c7a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x18c7a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c7a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c7ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18c7acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c7b0: 0x0  nop
    ctx->pc = 0x18c7b0u;
    // NOP
    // 0x18c7b4: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x18c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
    // 0x18c7b8: 0xc6010560  lwc1        $f1, 0x560($s0)
    ctx->pc = 0x18c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c7bc: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x18c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c7c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c7c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c7c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c7c8: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x18c7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x18c7cc: 0xc6010560  lwc1        $f1, 0x560($s0)
    ctx->pc = 0x18c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c7d0: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x18c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c7d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c7d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c7d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c7dc: 0x0  nop
    ctx->pc = 0x18c7dcu;
    // NOP
    // 0x18c7e0: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x18c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    // 0x18c7e4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18C7E4u;
    {
        const bool branch_taken_0x18c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7E4u;
        // 0x18c7e8: 0xe614057c  swc1        $f20, 0x57C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7e4) {
            ctx->pc = 0x18C85Cu;
            goto label_18c85c;
        }
    }
    ctx->pc = 0x18C7ECu;
label_18c7ec:
    // 0x18c7ec: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x18c7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c7f0: 0x0  nop
    ctx->pc = 0x18c7f0u;
    // NOP
    // 0x18c7f4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x18C7F4u;
    {
        const bool branch_taken_0x18c7f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c7f4) {
            ctx->pc = 0x18C85Cu;
            goto label_18c85c;
        }
    }
    ctx->pc = 0x18C7FCu;
    // 0x18c7fc: 0x0  nop
    ctx->pc = 0x18c7fcu;
    // NOP
    // 0x18c800: 0x0  nop
    ctx->pc = 0x18c800u;
    // NOP
    // 0x18c804: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x18c804u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x18c808: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18c808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18c80c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18c80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c810: 0x0  nop
    ctx->pc = 0x18c810u;
    // NOP
    // 0x18c814: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18c814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18c818: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x18c818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x18c81c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c81cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c820: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18c820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18c824: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18c824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18c828: 0x0  nop
    ctx->pc = 0x18c828u;
    // NOP
    // 0x18c82c: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x18c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
    // 0x18c830: 0xc6010560  lwc1        $f1, 0x560($s0)
    ctx->pc = 0x18c830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c834: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x18c834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c838: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c83c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c83cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c840: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x18c840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x18c844: 0xc6010560  lwc1        $f1, 0x560($s0)
    ctx->pc = 0x18c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18c848: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x18c848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c84c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c850: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18c850u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18c854: 0xe6000574  swc1        $f0, 0x574($s0)
    ctx->pc = 0x18c854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
    // 0x18c858: 0xe614057c  swc1        $f20, 0x57C($s0)
    ctx->pc = 0x18c858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1404), bits); }
label_18c85c:
    // 0x18c85c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c860: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18c860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18c864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c868: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18c86c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C86Cu;
        // 0x18c870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C874u;
}
