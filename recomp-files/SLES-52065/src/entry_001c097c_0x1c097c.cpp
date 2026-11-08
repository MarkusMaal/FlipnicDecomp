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

// Function: entry_001c097c
// Address: 0x1c097c - 0x1c0a00
void entry_001c097c_0x1c097c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c097c_0x1c097c");
#endif

    switch (ctx->pc) {
        case 0x1c09c8u: goto label_1c09c8;
        case 0x1c09e8u: goto label_1c09e8;
        case 0x1c09fcu: goto label_1c09fc;
        default: break;
    }

    ctx->pc = 0x1c097cu;

    // 0x1c097c: 0x0  nop
    ctx->pc = 0x1c097cu;
    // NOP
    // 0x1c0980: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0984: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1c0984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0988: 0x8c25f560  lw          $a1, -0xAA0($at)
    ctx->pc = 0x1c0988u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36F560u));
    // 0x1c098c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1c098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0990: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c0990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c0994: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x1c0994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0998: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x1c0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c099c: 0xc44e0048  lwc1        $f14, 0x48($v0)
    ctx->pc = 0x1c099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1c09a0: 0xc44f004c  lwc1        $f15, 0x4C($v0)
    ctx->pc = 0x1c09a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c09a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c09a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c09a8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c09a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c09ac: 0x8c23f570  lw          $v1, -0xA90($at)
    ctx->pc = 0x1c09acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F570u));
    // 0x1c09b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c09b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c09b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c09b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c09b8: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1c09b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c09bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c09bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c09c0: 0xc062860  jal         func_18A180
    ctx->pc = 0x1C09C0u;
    SET_GPR_U32(ctx, 31, 0x1C09C8u);
    ctx->pc = 0x1C09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09C0u;
    // 0x1c09c4: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1C09C0u, 0x1C09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09C8u;
label_1c09c8:
    // 0x1c09c8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1c09c8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c09cc: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c09ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c09d0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1c09d0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c09d4: 0x0  nop
    ctx->pc = 0x1c09d4u;
    // NOP
    // 0x1c09d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c09d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c09dc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c09dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c09e0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1C09E0u;
    SET_GPR_U32(ctx, 31, 0x1C09E8u);
    ctx->pc = 0x1C09E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09E0u;
    // 0x1c09e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1C09E0u, 0x1C09E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09E8u;
label_1c09e8:
    // 0x1c09e8: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1c09ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c09ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c09f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c09f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c09f4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1C09F4u;
    SET_GPR_U32(ctx, 31, 0x1C09FCu);
    ctx->pc = 0x1C09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09F4u;
    // 0x1c09f8: 0x24a517c8  addiu       $a1, $a1, 0x17C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1C09F4u, 0x1C09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09FCu;
label_1c09fc:
    // 0x1c09fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c09fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1c0a00u;
}
