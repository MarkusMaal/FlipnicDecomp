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

// Function: entry_001c9b4c
// Address: 0x1c9b4c - 0x1c9bd0
void entry_001c9b4c_0x1c9b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9b4c_0x1c9b4c");
#endif

    switch (ctx->pc) {
        case 0x1c9b98u: goto label_1c9b98;
        case 0x1c9bb8u: goto label_1c9bb8;
        case 0x1c9bccu: goto label_1c9bcc;
        default: break;
    }

    ctx->pc = 0x1c9b4cu;

    // 0x1c9b4c: 0x0  nop
    ctx->pc = 0x1c9b4cu;
    // NOP
    // 0x1c9b50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b54: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1c9b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9b58: 0x8c25f8e0  lw          $a1, -0x720($at)
    ctx->pc = 0x1c9b58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F8E0u));
    // 0x1c9b5c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1c9b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b60: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9b64: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x1c9b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9b68: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x1c9b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c9b6c: 0xc44e0048  lwc1        $f14, 0x48($v0)
    ctx->pc = 0x1c9b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c9b70: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x1c9b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c9b74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9b74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c9b78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9b7c: 0x8c23f8f0  lw          $v1, -0x710($at)
    ctx->pc = 0x1c9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8F0u));
    // 0x1c9b80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c9b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c9b84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c9b88: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c9b8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c9b8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c9b90: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C9B90u;
    SET_GPR_U32(ctx, 31, 0x1C9B98u);
    ctx->pc = 0x1C9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B90u;
    // 0x1c9b94: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C9B90u, 0x1C9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B98u;
label_1c9b98:
    // 0x1c9b98: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c9b98u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9b9c: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9ba0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1c9ba0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ba4: 0x0  nop
    ctx->pc = 0x1c9ba4u;
    // NOP
    // 0x1c9ba8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c9ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c9bac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c9bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c9bb0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C9BB0u;
    SET_GPR_U32(ctx, 31, 0x1C9BB8u);
    ctx->pc = 0x1C9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BB0u;
    // 0x1c9bb4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C9BB0u, 0x1C9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BB8u;
label_1c9bb8:
    // 0x1c9bb8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c9bbc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c9bc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c9bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bc4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C9BC4u;
    SET_GPR_U32(ctx, 31, 0x1C9BCCu);
    ctx->pc = 0x1C9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9BC4u;
    // 0x1c9bc8: 0x24a52740  addiu       $a1, $a1, 0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C9BC4u, 0x1C9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BCCu;
label_1c9bcc:
    // 0x1c9bcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1c9bd0u;
}
