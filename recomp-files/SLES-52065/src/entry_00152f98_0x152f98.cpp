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

// Function: entry_00152f98
// Address: 0x152f98 - 0x15305c
void entry_00152f98_0x152f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152f98_0x152f98");
#endif

    switch (ctx->pc) {
        case 0x152fb0u: goto label_152fb0;
        default: break;
    }

    ctx->pc = 0x152f98u;

    // 0x152f98: 0x26c70010  addiu       $a3, $s6, 0x10
    ctx->pc = 0x152f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152f9c: 0x26c60020  addiu       $a2, $s6, 0x20
    ctx->pc = 0x152f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x152fa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152fa8: 0xc055254  jal         func_154950
    ctx->pc = 0x152FA8u;
    SET_GPR_U32(ctx, 31, 0x152FB0u);
    ctx->pc = 0x152FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FA8u;
    // 0x152fac: 0x26d60030  addiu       $s6, $s6, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154950u, 0x152FA8u, 0x152FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FB0u;
label_152fb0:
    // 0x152fb0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x152fb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152fb4: 0x0  nop
    ctx->pc = 0x152fb4u;
    // NOP
    // 0x152fb8: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x152FB8u;
    {
        const bool branch_taken_0x152fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152fb8) {
            ctx->pc = 0x15305Cu;
            return;
        }
    }
    ctx->pc = 0x152FC0u;
    // 0x152fc0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x152fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152fc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152fc8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x152fc8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x152fcc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x152fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152fd0: 0x0  nop
    ctx->pc = 0x152fd0u;
    // NOP
    // 0x152fd4: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x152FD4u;
    {
        const bool branch_taken_0x152fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152fd4) {
            ctx->pc = 0x15305Cu;
            return;
        }
    }
    ctx->pc = 0x152FDCu;
    // 0x152fdc: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x152fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152fe0: 0x3c02bdb8  lui         $v0, 0xBDB8
    ctx->pc = 0x152fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48568 << 16));
    // 0x152fe4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x152fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x152fe8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x152fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x152fec: 0x0  nop
    ctx->pc = 0x152fecu;
    // NOP
    // 0x152ff0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x152ff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152ff4: 0x0  nop
    ctx->pc = 0x152ff4u;
    // NOP
    // 0x152ff8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x152FF8u;
    {
        const bool branch_taken_0x152ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FF8u;
        // 0x152ffc: 0x3c023f8b  lui         $v0, 0x3F8B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ff8) {
            ctx->pc = 0x15305Cu;
            return;
        }
    }
    ctx->pc = 0x153000u;
    // 0x153000: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x153000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x153004: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153008: 0x0  nop
    ctx->pc = 0x153008u;
    // NOP
    // 0x15300c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x15300cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153010: 0x0  nop
    ctx->pc = 0x153010u;
    // NOP
    // 0x153014: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x153014u;
    {
        const bool branch_taken_0x153014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153014) {
            ctx->pc = 0x15305Cu;
            return;
        }
    }
    ctx->pc = 0x15301Cu;
    // 0x15301c: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x15301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153020: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x153020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153024: 0x0  nop
    ctx->pc = 0x153024u;
    // NOP
    // 0x153028: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x153028u;
    {
        const bool branch_taken_0x153028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153028) {
            ctx->pc = 0x15305Cu;
            return;
        }
    }
    ctx->pc = 0x153030u;
    // 0x153030: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x153030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153034: 0x0  nop
    ctx->pc = 0x153034u;
    // NOP
    // 0x153038: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x153038u;
    {
        const bool branch_taken_0x153038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x153038) {
            ctx->pc = 0x15305Cu;
            return;
        }
    }
    ctx->pc = 0x153040u;
    // 0x153040: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x153040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x153044: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x153044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153048: 0x0  nop
    ctx->pc = 0x153048u;
    // NOP
    // 0x15304c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15304Cu;
    {
        const bool branch_taken_0x15304c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15304c) {
            ctx->pc = 0x15305Cu;
            return;
        }
    }
    ctx->pc = 0x153054u;
    // 0x153054: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x153054u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x153058: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x153058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15305cu;
}
