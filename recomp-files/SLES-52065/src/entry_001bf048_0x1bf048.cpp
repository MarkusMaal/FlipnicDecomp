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

// Function: entry_001bf048
// Address: 0x1bf048 - 0x1bf134
void entry_001bf048_0x1bf048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf048_0x1bf048");
#endif

    switch (ctx->pc) {
        case 0x1bf058u: goto label_1bf058;
        case 0x1bf078u: goto label_1bf078;
        case 0x1bf0a4u: goto label_1bf0a4;
        default: break;
    }

    ctx->pc = 0x1bf048u;

label_1bf048:
    // 0x1bf048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf050: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF050u;
    SET_GPR_U32(ctx, 31, 0x1BF058u);
    ctx->pc = 0x1BF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF050u;
    // 0x1bf054: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF050u, 0x1BF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF058u;
label_1bf058:
    // 0x1bf058: 0x213a021  addu        $s4, $s0, $s3
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1bf05c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bf05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf060: 0xc681006c  lwc1        $f1, 0x6C($s4)
    ctx->pc = 0x1bf060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf064: 0x2695006c  addiu       $s5, $s4, 0x6C
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
    // 0x1bf068: 0xc6800074  lwc1        $f0, 0x74($s4)
    ctx->pc = 0x1bf068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf06c: 0x26970074  addiu       $s7, $s4, 0x74
    ctx->pc = 0x1bf06cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
    // 0x1bf070: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1BF070u;
    SET_GPR_U32(ctx, 31, 0x1BF078u);
    ctx->pc = 0x1BF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF070u;
    // 0x1bf074: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1BF070u, 0x1BF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF078u;
label_1bf078:
    // 0x1bf078: 0xc6820068  lwc1        $f2, 0x68($s4)
    ctx->pc = 0x1bf078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf07c: 0x3c024278  lui         $v0, 0x4278
    ctx->pc = 0x1bf07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17016 << 16));
    // 0x1bf080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf084: 0x26960068  addiu       $s6, $s4, 0x68
    ctx->pc = 0x1bf084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x1bf088: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bf088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bf08c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bf090: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1bf094: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x1bf094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf098: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1bf098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf09c: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1BF09Cu;
    SET_GPR_U32(ctx, 31, 0x1BF0A4u);
    ctx->pc = 0x1BF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF09Cu;
    // 0x1bf0a0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1BF09Cu, 0x1BF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0A4u;
label_1bf0a4:
    // 0x1bf0a4: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x1bf0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf0a8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1bf0ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bf0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf0b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bf0b4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1bf0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1bf0b8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1bf0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1bf0bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1bf0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf0c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bf0c4: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x1bf0c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bf0c8: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1bf0cc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1bf0d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1bf0d4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1bf0d8: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1bf0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1bf0e0: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1bf0e4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0e8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1bf0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1bf0ec: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x1bf0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1bf0f0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0f4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1bf0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1bf0f8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1BF0F8u;
    {
        const bool branch_taken_0x1bf0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0F8u;
        // 0x1bf0fc: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0f8) {
            ctx->pc = 0x1BF048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf048;
        }
    }
    ctx->pc = 0x1BF100u;
    // 0x1bf100: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bf100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf104: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1bf104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bf108: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1bf108u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf10c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1bf10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf110: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1bf110u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf114: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1bf114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf118: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1bf118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf11c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1bf11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf120: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bf120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bf124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf128: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf12c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF12Cu;
        // 0x1bf130: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF134u;
}
