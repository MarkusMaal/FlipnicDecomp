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

// Function: FUN_00178700
// Address: 0x178700 - 0x178808
void FUN_00178700_0x178700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00178700_0x178700");
#endif

    switch (ctx->pc) {
        case 0x17871cu: goto label_17871c;
        case 0x178744u: goto label_178744;
        case 0x178770u: goto label_178770;
        case 0x1787a0u: goto label_1787a0;
        case 0x1787a8u: goto label_1787a8;
        case 0x1787b0u: goto label_1787b0;
        case 0x1787c8u: goto label_1787c8;
        default: break;
    }

    ctx->pc = 0x178700u;

    // 0x178700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178708: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x178708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17870c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17870cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178714: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178714u;
    SET_GPR_U32(ctx, 31, 0x17871Cu);
    ctx->pc = 0x178718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178714u;
    // 0x178718: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178714u, 0x17871Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17871Cu;
label_17871c:
    // 0x17871c: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x17871cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x178720: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x178720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x178724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x178724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178728: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17872c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17872cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178730: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x178730u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x178734: 0x0  nop
    ctx->pc = 0x178734u;
    // NOP
    // 0x178738: 0x0  nop
    ctx->pc = 0x178738u;
    // NOP
    // 0x17873c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17873Cu;
    SET_GPR_U32(ctx, 31, 0x178744u);
    ctx->pc = 0x178740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17873Cu;
    // 0x178740: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17873Cu, 0x178744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178744u;
label_178744:
    // 0x178744: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x178744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x178748: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x178748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17874c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17874cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x178750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178754: 0x0  nop
    ctx->pc = 0x178754u;
    // NOP
    // 0x178758: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17875c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17875cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x178760: 0x0  nop
    ctx->pc = 0x178760u;
    // NOP
    // 0x178764: 0x0  nop
    ctx->pc = 0x178764u;
    // NOP
    // 0x178768: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178768u;
    SET_GPR_U32(ctx, 31, 0x178770u);
    ctx->pc = 0x17876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178768u;
    // 0x17876c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178768u, 0x178770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178770u;
label_178770:
    // 0x178770: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x178770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x178774: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x178774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x178778: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17877c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17877cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178780: 0x0  nop
    ctx->pc = 0x178780u;
    // NOP
    // 0x178784: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178788: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17878c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17878cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x178790: 0x0  nop
    ctx->pc = 0x178790u;
    // NOP
    // 0x178794: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x178794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x178798: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178798u;
    SET_GPR_U32(ctx, 31, 0x1787A0u);
    ctx->pc = 0x17879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178798u;
    // 0x17879c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178798u, 0x1787A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787A0u;
label_1787a0:
    // 0x1787a0: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1787A0u;
    SET_GPR_U32(ctx, 31, 0x1787A8u);
    ctx->pc = 0x1787A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787A0u;
    // 0x1787a4: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1787A0u, 0x1787A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787A8u;
label_1787a8:
    // 0x1787a8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1787A8u;
    SET_GPR_U32(ctx, 31, 0x1787B0u);
    ctx->pc = 0x1787ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787A8u;
    // 0x1787ac: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1787A8u, 0x1787B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787B0u;
label_1787b0:
    // 0x1787b0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1787b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1787b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1787b8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1787b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1787bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1787bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787c0: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1787C0u;
    SET_GPR_U32(ctx, 31, 0x1787C8u);
    ctx->pc = 0x1787C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787C0u;
    // 0x1787c4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1787C0u, 0x1787C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787C8u;
label_1787c8:
    // 0x1787c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1787c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1787cc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1787ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1787d0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1787d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1787d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1787d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1787d8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1787d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1787dc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1787dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1787e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1787e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1787e4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1787e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1787e8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1787e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1787ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1787ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1787f0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1787f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1787f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1787f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1787f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1787f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1787fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1787fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178800: 0x3e00008  jr          $ra
    ctx->pc = 0x178800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178800u;
        // 0x178804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178808u;
}
