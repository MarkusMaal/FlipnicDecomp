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

// Function: FUN_0013a130
// Address: 0x13a130 - 0x13a22c
void FUN_0013a130_0x13a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013a130_0x13a130");
#endif

    switch (ctx->pc) {
        case 0x13a164u: goto label_13a164;
        case 0x13a174u: goto label_13a174;
        default: break;
    }

    ctx->pc = 0x13a130u;

    // 0x13a130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13a134: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13a138: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a13c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a140: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13a140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a144: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a148: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13a148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a14c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a150: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13a150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13a158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a15c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13A15Cu;
    {
        const bool branch_taken_0x13a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A15Cu;
        // 0x13a160: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a15c) {
            ctx->pc = 0x13A1F4u;
            goto label_13a1f4;
        }
    }
    ctx->pc = 0x13A164u;
label_13a164:
    // 0x13a164: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a168: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13a168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a16c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x13A16Cu;
    SET_GPR_U32(ctx, 31, 0x13A174u);
    ctx->pc = 0x13A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A16Cu;
    // 0x13a170: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x13A16Cu, 0x13A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A174u;
label_13a174:
    // 0x13a174: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a178: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x13a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x13a17c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13a180: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x13a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x13a184: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x13a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x13a188: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x13a188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x13a18c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x13A18Cu;
    {
        const bool branch_taken_0x13a18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a18c) {
            ctx->pc = 0x13A1E4u;
            goto label_13a1e4;
        }
    }
    ctx->pc = 0x13A194u;
    // 0x13a194: 0x90830080  lbu         $v1, 0x80($a0)
    ctx->pc = 0x13a194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x13a198: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A198u;
    {
        const bool branch_taken_0x13a198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a198) {
            ctx->pc = 0x13A1E4u;
            goto label_13a1e4;
        }
    }
    ctx->pc = 0x13A1A0u;
    // 0x13a1a0: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a1a4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x13a1a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13a1a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a1ac: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x13a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x13a1b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a1b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x13a1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x13a1bc: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a1c0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13a1c4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a1cc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x13a1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13a1d0: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a1d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13a1d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x13a1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a1dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a1e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13a1e4:
    // 0x13a1e4: 0x0  nop
    ctx->pc = 0x13a1e4u;
    // NOP
    // 0x13a1e8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x13a1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13a1ec: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x13a1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x13a1f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13a1f4:
    // 0x13a1f4: 0x0  nop
    ctx->pc = 0x13a1f4u;
    // NOP
    // 0x13a1f8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a1fc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x13a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x13a200: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x13a200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13a204: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x13A204u;
    {
        const bool branch_taken_0x13a204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a204) {
            ctx->pc = 0x13A164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a164;
        }
    }
    ctx->pc = 0x13A20Cu;
    // 0x13a20c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a210: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a210u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a214: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a218: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a21c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a224: 0x3e00008  jr          $ra
    ctx->pc = 0x13A224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A224u;
        // 0x13a228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A22Cu;
}
