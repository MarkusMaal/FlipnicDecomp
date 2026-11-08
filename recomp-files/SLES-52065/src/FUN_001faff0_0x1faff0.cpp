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

// Function: FUN_001faff0
// Address: 0x1faff0 - 0x1fb0f4
void FUN_001faff0_0x1faff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001faff0_0x1faff0");
#endif

    ctx->pc = 0x1faff0u;

    // 0x1faff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1faff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faff4: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1faff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1faff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1faff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faffc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1faffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb004: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x1fb004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x1fb008: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fb008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fb00c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb010: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fb010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb014: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB014u;
    {
        const bool branch_taken_0x1fb014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb014) {
            ctx->pc = 0x1FB018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB014u;
            // 0x1fb018: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB038u;
            goto label_1fb038;
        }
    }
    ctx->pc = 0x1FB01Cu;
    // 0x1fb01c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb01cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb020: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fb020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb024: 0x0  nop
    ctx->pc = 0x1fb024u;
    // NOP
    // 0x1fb028: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB028u;
    {
        const bool branch_taken_0x1fb028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb028) {
            ctx->pc = 0x1FB02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB028u;
            // 0x1fb02c: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB038u;
            goto label_1fb038;
        }
    }
    ctx->pc = 0x1FB030u;
    // 0x1fb030: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB030u;
        // 0x1fb034: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB038u;
label_1fb038:
    // 0x1fb038: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x1fb038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x1fb03c: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x1fb03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x1fb040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb044: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x1fb044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x1fb048: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x1fb048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x1fb04c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb050: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x1fb050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x1fb054: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x1fb054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x1fb058: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb05c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb060: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x1fb060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x1fb064: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1fb064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1fb068: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fb068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fb06c: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x1fb06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x1fb070: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1fb070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1fb074: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fb074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fb078: 0x460c2982  mul.s       $f6, $f5, $f12
    ctx->pc = 0x1fb078u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x1fb07c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb080: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb084: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fb084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fb088: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb08c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1fb08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1fb090: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb094: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB094u;
    {
        const bool branch_taken_0x1fb094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB094u;
        // 0x1fb098: 0x46040040  add.s       $f1, $f0, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb094) {
            ctx->pc = 0x1FB0BCu;
            goto label_1fb0bc;
        }
    }
    ctx->pc = 0x1FB09Cu;
    // 0x1fb09c: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x1fb09cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1fb0a0: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x1fb0a4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1fb0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1fb0a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb0ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fb0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fb0b0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1fb0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1fb0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0B4u;
        // 0x1fb0b8: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0BCu;
label_1fb0bc:
    // 0x1fb0bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fb0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fb0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb0c4: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x1fb0c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fb0c8: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x1fb0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x1fb0cc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1fb0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1fb0d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb0d4: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1fb0d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1fb0d8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1fb0d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1fb0dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fb0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fb0e0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1fb0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1fb0e4: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x1fb0e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x1fb0e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fb0e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1fb0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0ECu;
        // 0x1fb0f0: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0F4u;
}
