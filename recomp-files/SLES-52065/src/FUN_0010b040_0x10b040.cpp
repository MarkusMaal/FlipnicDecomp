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

// Function: FUN_0010b040
// Address: 0x10b040 - 0x10b180
void FUN_0010b040_0x10b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010b040_0x10b040");
#endif

    switch (ctx->pc) {
        case 0x10b074u: goto label_10b074;
        case 0x10b0d8u: goto label_10b0d8;
        default: break;
    }

    ctx->pc = 0x10b040u;

    // 0x10b040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10b04c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10b050: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b054: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x10B054u;
    {
        const bool branch_taken_0x10b054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B054u;
        // 0x10b058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b054) {
            ctx->pc = 0x10B11Cu;
            goto label_10b11c;
        }
    }
    ctx->pc = 0x10B05Cu;
    // 0x10b05c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x10b05cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10b060: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x10b060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x10b064: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x10B064u;
    {
        const bool branch_taken_0x10b064 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b064) {
            ctx->pc = 0x10B15Cu;
            goto label_10b15c;
        }
    }
    ctx->pc = 0x10B06Cu;
    // 0x10b06c: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10B06Cu;
    SET_GPR_U32(ctx, 31, 0x10B074u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10B06Cu, 0x10B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B074u;
label_10b074:
    // 0x10b074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b078: 0x0  nop
    ctx->pc = 0x10b078u;
    // NOP
    // 0x10b07c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x10b07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x10b080: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10b084: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x10b084u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b088: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10b088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b08c: 0x0  nop
    ctx->pc = 0x10b08cu;
    // NOP
    // 0x10b090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b094: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10b094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x10b098: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10b098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10b09c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10b09cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10b0a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10b0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b0a4: 0x0  nop
    ctx->pc = 0x10b0a4u;
    // NOP
    // 0x10b0a8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x10b0a8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x10b0ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10b0acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10b0b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b0b4: 0x0  nop
    ctx->pc = 0x10b0b4u;
    // NOP
    // 0x10b0b8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x10b0b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10b0bc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x10B0BCu;
    {
        const bool branch_taken_0x10b0bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b0bc) {
            ctx->pc = 0x10B15Cu;
            goto label_10b15c;
        }
    }
    ctx->pc = 0x10B0C4u;
    // 0x10b0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b0c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10b0cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10b0d0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10B0D0u;
    SET_GPR_U32(ctx, 31, 0x10B0D8u);
    ctx->pc = 0x10B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0D0u;
    // 0x10b0d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10B0D0u, 0x10B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0D8u;
label_10b0d8:
    // 0x10b0d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10b0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b0dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x10b0e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10b0e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10b0e4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x10b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x10b0e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b0ec: 0x0  nop
    ctx->pc = 0x10b0ecu;
    // NOP
    // 0x10b0f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10b0f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10b0f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x10b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10b0f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10b0f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b0fc: 0x0  nop
    ctx->pc = 0x10b0fcu;
    // NOP
    // 0x10b100: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10b100u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10b104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10b104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10b108: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10b108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b10c: 0x0  nop
    ctx->pc = 0x10b10cu;
    // NOP
    // 0x10b110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b114: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10B114u;
    {
        const bool branch_taken_0x10b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B114u;
        // 0x10b118: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b114) {
            ctx->pc = 0x10B15Cu;
            goto label_10b15c;
        }
    }
    ctx->pc = 0x10B11Cu;
label_10b11c:
    // 0x10b11c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10b120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10b124: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10b124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10b128: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10b12c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10B12Cu;
    {
        const bool branch_taken_0x10b12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b12c) {
            ctx->pc = 0x10B15Cu;
            goto label_10b15c;
        }
    }
    ctx->pc = 0x10B134u;
    // 0x10b134: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10b138: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10b138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x10b13c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b140: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10b144: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x10b144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x10b148: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b14c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B14Cu;
    {
        const bool branch_taken_0x10b14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b14c) {
            ctx->pc = 0x10B15Cu;
            goto label_10b15c;
        }
    }
    ctx->pc = 0x10B154u;
    // 0x10b154: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10b154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10b158: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10b158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_10b15c:
    // 0x10b15c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10b15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10b160: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10b164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b170: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x10b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10b174: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10b174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10b178: 0x3e00008  jr          $ra
    ctx->pc = 0x10B178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B178u;
        // 0x10b17c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B180u;
}
