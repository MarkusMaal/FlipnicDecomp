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

// Function: entry_0016d380
// Address: 0x16d380 - 0x16d3e0
void entry_0016d380_0x16d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d380_0x16d380");
#endif

    switch (ctx->pc) {
        case 0x16d3b4u: goto label_16d3b4;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3d4u: goto label_16d3d4;
        default: break;
    }

    ctx->pc = 0x16d380u;

label_16d380:
    // 0x16d380: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16d380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d384:
    // 0x16d384: 0x0  nop
    ctx->pc = 0x16d384u;
    // NOP
label_16d388:
    // 0x16d388: 0x0  nop
    ctx->pc = 0x16d388u;
    // NOP
label_16d38c:
    // 0x16d38c: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
label_16d390:
    if (ctx->pc == 0x16D390u) {
        ctx->pc = 0x16D394u;
        goto label_16d394;
    }
    ctx->pc = 0x16D38Cu;
    {
        const bool branch_taken_0x16d38c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d38c) {
            ctx->pc = 0x16D37Cu;
            return;
        }
    }
    ctx->pc = 0x16D394u;
label_16d394:
    // 0x16d394: 0xc6210228  lwc1        $f1, 0x228($s1)
    ctx->pc = 0x16d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d398:
    // 0x16d398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d39c:
    // 0x16d39c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16d39cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16d3a0:
    // 0x16d3a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16d3a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16d3a4:
    // 0x16d3a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16d3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16d3a8:
    // 0x16d3a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16d3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16d3ac:
    // 0x16d3ac: 0xc055c40  jal         func_157100
label_16d3b0:
    if (ctx->pc == 0x16D3B0u) {
        ctx->pc = 0x16D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3ACu;
        // 0x16d3b0: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3B4u;
        goto label_16d3b4;
    }
    ctx->pc = 0x16D3ACu;
    SET_GPR_U32(ctx, 31, 0x16D3B4u);
    ctx->pc = 0x16D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3ACu;
    // 0x16d3b0: 0xe6200224  swc1        $f0, 0x224($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16D3ACu, 0x16D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3B4u;
label_16d3b4:
    // 0x16d3b4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d3b8:
    // 0x16d3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d3bc:
    // 0x16d3bc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16d3bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16d3c0:
    // 0x16d3c0: 0x320f809  jalr        $t9
label_16d3c4:
    if (ctx->pc == 0x16D3C4u) {
        ctx->pc = 0x16D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3C0u;
        // 0x16d3c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3C8u;
        goto label_16d3c8;
    }
    ctx->pc = 0x16D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D3C8u);
        ctx->pc = 0x16D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3C0u;
        // 0x16d3c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D3C0u, 0x16D3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D3C8u;
label_16d3c8:
    // 0x16d3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d3cc:
    // 0x16d3cc: 0xc042118  jal         func_108460
label_16d3d0:
    if (ctx->pc == 0x16D3D0u) {
        ctx->pc = 0x16D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3CCu;
        // 0x16d3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3D4u;
        goto label_16d3d4;
    }
    ctx->pc = 0x16D3CCu;
    SET_GPR_U32(ctx, 31, 0x16D3D4u);
    ctx->pc = 0x16D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3CCu;
    // 0x16d3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16D3CCu, 0x16D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3D4u;
label_16d3d4:
    // 0x16d3d4: 0xae300230  sw          $s0, 0x230($s1)
    ctx->pc = 0x16d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
label_16d3d8:
    // 0x16d3d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_16d3dc:
    if (ctx->pc == 0x16D3DCu) {
        ctx->pc = 0x16D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D8u;
        // 0x16d3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D3E0u;
        goto label_fallthrough_0x16d3d8;
    }
    ctx->pc = 0x16D3D8u;
    {
        const bool branch_taken_0x16d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D8u;
        // 0x16d3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3d8) {
            ctx->pc = 0x16D3FCu;
            return;
        }
    }
label_fallthrough_0x16d3d8:
    ctx->pc = 0x16D3E0u;
}
