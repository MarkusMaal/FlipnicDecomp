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

// Function: FUN_0018a1d0
// Address: 0x18a1d0 - 0x18a2fc
void FUN_0018a1d0_0x18a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a1d0_0x18a1d0");
#endif

    switch (ctx->pc) {
        case 0x18a1f4u: goto label_18a1f4;
        case 0x18a200u: goto label_18a200;
        case 0x18a260u: goto label_18a260;
        default: break;
    }

    ctx->pc = 0x18a1d0u;

    // 0x18a1d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18a1d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18a1d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18a1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18a1dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18a1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18a1e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18a1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18a1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18a1e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18a1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a1ec: 0xc04b7b4  jal         func_12DED0
    ctx->pc = 0x18A1ECu;
    SET_GPR_U32(ctx, 31, 0x18A1F4u);
    ctx->pc = 0x18A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1ECu;
    // 0x18a1f0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DED0u, 0x18A1ECu, 0x18A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A1F4u;
label_18a1f4:
    // 0x18a1f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x18a1f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18a1f8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x18A1F8u;
    {
        const bool branch_taken_0x18a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1F8u;
        // 0x18a1fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1f8) {
            ctx->pc = 0x18A2C0u;
            goto label_18a2c0;
        }
    }
    ctx->pc = 0x18A200u;
label_18a200:
    // 0x18a200: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x18a200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x18a204: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18a204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18a208: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18a20c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x18a210: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x18a210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a214: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18A214u;
    {
        const bool branch_taken_0x18a214 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A214u;
        // 0x18a218: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a214) {
            ctx->pc = 0x18A244u;
            goto label_18a244;
        }
    }
    ctx->pc = 0x18A21Cu;
    // 0x18a21c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a220: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18A220u;
    {
        const bool branch_taken_0x18a220 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A220u;
        // 0x18a224: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a220) {
            ctx->pc = 0x18A244u;
            goto label_18a244;
        }
    }
    ctx->pc = 0x18A228u;
    // 0x18a228: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A228u;
    {
        const bool branch_taken_0x18a228 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a228) {
            ctx->pc = 0x18A244u;
            goto label_18a244;
        }
    }
    ctx->pc = 0x18A230u;
    // 0x18a230: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18a234: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A234u;
    {
        const bool branch_taken_0x18a234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x18a234) {
            ctx->pc = 0x18A244u;
            goto label_18a244;
        }
    }
    ctx->pc = 0x18A23Cu;
    // 0x18a23c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A23Cu;
    {
        const bool branch_taken_0x18a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A23Cu;
        // 0x18a240: 0x8e460060  lw          $a2, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a23c) {
            ctx->pc = 0x18A254u;
            goto label_18a254;
        }
    }
    ctx->pc = 0x18A244u;
label_18a244:
    // 0x18a244: 0x0  nop
    ctx->pc = 0x18a244u;
    // NOP
    // 0x18a248: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x18a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a24c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18A24Cu;
    {
        const bool branch_taken_0x18a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A24Cu;
        // 0x18a250: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a24c) {
            ctx->pc = 0x18A2E0u;
            goto label_18a2e0;
        }
    }
    ctx->pc = 0x18A254u;
label_18a254:
    // 0x18a254: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18a254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18a258: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x18A258u;
    SET_GPR_U32(ctx, 31, 0x18A260u);
    ctx->pc = 0x18A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A258u;
    // 0x18a25c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x18A258u, 0x18A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A260u;
label_18a260:
    // 0x18a260: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18a264: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x18a264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x18a268: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x18a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18a26c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x18a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18a270: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x18a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18a274: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x18a274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18a278: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x18a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a280: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x18a280u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18a284: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x18a284u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18a288: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x18a288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18a28c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x18a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x18a290: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x18a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18a294: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x18a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18a298: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x18a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18a29c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x18a29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a2a0: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x18a2a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x18a2a4: 0xe4630014  swc1        $f3, 0x14($v1)
    ctx->pc = 0x18a2a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x18a2a8: 0xe4620018  swc1        $f2, 0x18($v1)
    ctx->pc = 0x18a2a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x18a2ac: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x18a2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x18a2b0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x18a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a2b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18a2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18a2b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18a2bc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18a2bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_18a2c0:
    // 0x18a2c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18a2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a2c4: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x18A2C4u;
    {
        const bool branch_taken_0x18a2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a2c4) {
            ctx->pc = 0x18A200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a200;
        }
    }
    ctx->pc = 0x18A2CCu;
    // 0x18a2cc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x18a2ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x18a2d0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x18A2D0u;
    {
        const bool branch_taken_0x18a2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a2d0) {
            ctx->pc = 0x18A200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a200;
        }
    }
    ctx->pc = 0x18A2D8u;
    // 0x18a2d8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x18a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a2dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18a2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18a2e0:
    // 0x18a2e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a2e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a2e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18a2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a2ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a2f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18a2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2F4u;
        // 0x18a2f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A2FCu;
}
