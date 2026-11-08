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

// Function: FUN_0015c560
// Address: 0x15c560 - 0x15c668
void FUN_0015c560_0x15c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015c560_0x15c560");
#endif

    switch (ctx->pc) {
        case 0x15c594u: goto label_15c594;
        case 0x15c5f4u: goto label_15c5f4;
        default: break;
    }

    ctx->pc = 0x15c560u;

    // 0x15c560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15c564: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15c568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15c568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15c56c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15c56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15c570: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15c570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c574: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c578: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15c578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c57c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x15c57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c584: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c588: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15c588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c58c: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x15C58Cu;
    SET_GPR_U32(ctx, 31, 0x15C594u);
    ctx->pc = 0x15C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C58Cu;
    // 0x15c590: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x15C58Cu, 0x15C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C594u;
label_15c594:
    // 0x15c594: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x15c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c598: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x15c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c59c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c59cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c5a0: 0x0  nop
    ctx->pc = 0x15c5a0u;
    // NOP
    // 0x15c5a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C5A4u;
    {
        const bool branch_taken_0x15c5a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A4u;
        // 0x15c5a8: 0x27b00064  addiu       $s0, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5a4) {
            ctx->pc = 0x15C5B0u;
            goto label_15c5b0;
        }
    }
    ctx->pc = 0x15C5ACu;
    // 0x15c5ac: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x15c5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_15c5b0:
    // 0x15c5b0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x15c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5b4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c5bc: 0x0  nop
    ctx->pc = 0x15c5bcu;
    // NOP
    // 0x15c5c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C5C0u;
    {
        const bool branch_taken_0x15c5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5C0u;
        // 0x15c5c4: 0x27b10068  addiu       $s1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5c0) {
            ctx->pc = 0x15C5CCu;
            goto label_15c5cc;
        }
    }
    ctx->pc = 0x15C5C8u;
    // 0x15c5c8: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x15c5c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_15c5cc:
    // 0x15c5cc: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x15c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5d0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x15c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15c5d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c5d8: 0x0  nop
    ctx->pc = 0x15c5d8u;
    // NOP
    // 0x15c5dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C5DCu;
    {
        const bool branch_taken_0x15c5dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5DCu;
        // 0x15c5e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5dc) {
            ctx->pc = 0x15C5E8u;
            goto label_15c5e8;
        }
    }
    ctx->pc = 0x15C5E4u;
    // 0x15c5e4: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x15c5e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_15c5e8:
    // 0x15c5e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15c5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c5ec: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x15C5ECu;
    SET_GPR_U32(ctx, 31, 0x15C5F4u);
    ctx->pc = 0x15C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5ECu;
    // 0x15c5f0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x15C5ECu, 0x15C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5F4u;
label_15c5f4:
    // 0x15c5f4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x15c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c5f8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x15c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c5fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c5fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c600: 0x0  nop
    ctx->pc = 0x15c600u;
    // NOP
    // 0x15c604: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C604u;
    {
        const bool branch_taken_0x15c604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c604) {
            ctx->pc = 0x15C610u;
            goto label_15c610;
        }
    }
    ctx->pc = 0x15C60Cu;
    // 0x15c60c: 0xe6810010  swc1        $f1, 0x10($s4)
    ctx->pc = 0x15c60cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_15c610:
    // 0x15c610: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c614: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x15c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c618: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c61c: 0x0  nop
    ctx->pc = 0x15c61cu;
    // NOP
    // 0x15c620: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C620u;
    {
        const bool branch_taken_0x15c620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c620) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C628u;
    // 0x15c628: 0xe6810014  swc1        $f1, 0x14($s4)
    ctx->pc = 0x15c628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
label_15c62c:
    // 0x15c62c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x15c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c630: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x15c630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c634: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c638: 0x0  nop
    ctx->pc = 0x15c638u;
    // NOP
    // 0x15c63c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C63Cu;
    {
        const bool branch_taken_0x15c63c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c63c) {
            ctx->pc = 0x15C648u;
            goto label_15c648;
        }
    }
    ctx->pc = 0x15C644u;
    // 0x15c644: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x15c644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_15c648:
    // 0x15c648: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15c648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c64c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15c64cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c650: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15c650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c654: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c65c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c660: 0x3e00008  jr          $ra
    ctx->pc = 0x15C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C660u;
        // 0x15c664: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C668u;
}
