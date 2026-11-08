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

// Function: FUN_0014f440
// Address: 0x14f440 - 0x14f548
void FUN_0014f440_0x14f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014f440_0x14f440");
#endif

    switch (ctx->pc) {
        case 0x14f460u: goto label_14f460;
        case 0x14f538u: goto label_14f538;
        default: break;
    }

    ctx->pc = 0x14f440u;

    // 0x14f440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f44c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x14f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x14f450: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14F450u;
    {
        const bool branch_taken_0x14f450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F450u;
        // 0x14f454: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f450) {
            ctx->pc = 0x14F508u;
            goto label_14f508;
        }
    }
    ctx->pc = 0x14F458u;
    // 0x14f458: 0xc04c728  jal         func_131CA0
    ctx->pc = 0x14F458u;
    SET_GPR_U32(ctx, 31, 0x14F460u);
    ctx->pc = 0x14F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F458u;
    // 0x14f45c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CA0u, 0x14F458u, 0x14F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F460u;
label_14f460:
    // 0x14f460: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x14f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f464: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f468: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x14f468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14f46c: 0x0  nop
    ctx->pc = 0x14f46cu;
    // NOP
    // 0x14f470: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14f470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14f474: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f478: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x14f478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x14f47c: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x14f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f480: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x14f480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f484: 0x0  nop
    ctx->pc = 0x14f484u;
    // NOP
    // 0x14f488: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x14F488u;
    {
        const bool branch_taken_0x14f488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f488) {
            ctx->pc = 0x14F4CCu;
            goto label_14f4cc;
        }
    }
    ctx->pc = 0x14F490u;
    // 0x14f490: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x14f490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f494: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x14f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f498: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14f498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14f49c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14f49cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f4a0: 0x0  nop
    ctx->pc = 0x14f4a0u;
    // NOP
    // 0x14f4a4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x14F4A4u;
    {
        const bool branch_taken_0x14f4a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f4a4) {
            ctx->pc = 0x14F508u;
            goto label_14f508;
        }
    }
    ctx->pc = 0x14F4ACu;
    // 0x14f4ac: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x14f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x14f4b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F4B0u;
    {
        const bool branch_taken_0x14f4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4b0) {
            ctx->pc = 0x14F4C4u;
            goto label_14f4c4;
        }
    }
    ctx->pc = 0x14F4B8u;
    // 0x14f4b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14f4b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14f4bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14F4BCu;
    {
        const bool branch_taken_0x14f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4BCu;
        // 0x14f4c0: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4bc) {
            ctx->pc = 0x14F508u;
            goto label_14f508;
        }
    }
    ctx->pc = 0x14F4C4u;
label_14f4c4:
    // 0x14f4c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14F4C4u;
    {
        const bool branch_taken_0x14f4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4C4u;
        // 0x14f4c8: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4c4) {
            ctx->pc = 0x14F538u;
            goto label_14f538;
        }
    }
    ctx->pc = 0x14F4CCu;
label_14f4cc:
    // 0x14f4cc: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f4d0: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x14f4d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f4d4: 0x0  nop
    ctx->pc = 0x14f4d4u;
    // NOP
    // 0x14f4d8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x14F4D8u;
    {
        const bool branch_taken_0x14f4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f4d8) {
            ctx->pc = 0x14F508u;
            goto label_14f508;
        }
    }
    ctx->pc = 0x14F4E0u;
    // 0x14f4e0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x14f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x14f4e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F4E4u;
    {
        const bool branch_taken_0x14f4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4e4) {
            ctx->pc = 0x14F500u;
            goto label_14f500;
        }
    }
    ctx->pc = 0x14F4ECu;
    // 0x14f4ec: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x14f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f4f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14f4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14f4f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f4f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4F8u;
    {
        const bool branch_taken_0x14f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4F8u;
        // 0x14f4fc: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4f8) {
            ctx->pc = 0x14F508u;
            goto label_14f508;
        }
    }
    ctx->pc = 0x14F500u;
label_14f500:
    // 0x14f500: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F500u;
    {
        const bool branch_taken_0x14f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F500u;
        // 0x14f504: 0xe6030050  swc1        $f3, 0x50($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f500) {
            ctx->pc = 0x14F538u;
            goto label_14f538;
        }
    }
    ctx->pc = 0x14F508u;
label_14f508:
    // 0x14f508: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x14f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14f50c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x14f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x14f510: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x14f510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x14f514: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x14f514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    // 0x14f518: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x14f518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14f51c: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x14f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x14f520: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x14f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f524: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x14f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f52c: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x14f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x14f530: 0xc04eb5c  jal         func_13AD70
    ctx->pc = 0x14F530u;
    SET_GPR_U32(ctx, 31, 0x14F538u);
    ctx->pc = 0x14F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F530u;
    // 0x14f534: 0xe7a00020  swc1        $f0, 0x20($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD70u, 0x14F530u, 0x14F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F538u;
label_14f538:
    // 0x14f538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f53c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f540: 0x3e00008  jr          $ra
    ctx->pc = 0x14F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F540u;
        // 0x14f544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F548u;
}
