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

// Function: entry_001cb0ac
// Address: 0x1cb0ac - 0x1cb2bc
void entry_001cb0ac_0x1cb0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb0ac_0x1cb0ac");
#endif

    switch (ctx->pc) {
        case 0x1cb0b8u: goto label_1cb0b8;
        case 0x1cb0c4u: goto label_1cb0c4;
        case 0x1cb114u: goto label_1cb114;
        case 0x1cb120u: goto label_1cb120;
        case 0x1cb170u: goto label_1cb170;
        case 0x1cb198u: goto label_1cb198;
        case 0x1cb1a8u: goto label_1cb1a8;
        case 0x1cb1c4u: goto label_1cb1c4;
        case 0x1cb1d4u: goto label_1cb1d4;
        case 0x1cb1f0u: goto label_1cb1f0;
        case 0x1cb200u: goto label_1cb200;
        case 0x1cb228u: goto label_1cb228;
        case 0x1cb288u: goto label_1cb288;
        case 0x1cb298u: goto label_1cb298;
        case 0x1cb2a4u: goto label_1cb2a4;
        case 0x1cb2b0u: goto label_1cb2b0;
        default: break;
    }

    ctx->pc = 0x1cb0acu;

    // 0x1cb0ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb0b0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB0B0u;
    SET_GPR_U32(ctx, 31, 0x1CB0B8u);
    ctx->pc = 0x1CB0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0B0u;
    // 0x1cb0b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB0B0u, 0x1CB0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0B8u;
label_1cb0b8:
    // 0x1cb0b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0bc: 0xc06eb30  jal         func_1BACC0
    ctx->pc = 0x1CB0BCu;
    SET_GPR_U32(ctx, 31, 0x1CB0C4u);
    ctx->pc = 0x1CB0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0BCu;
    // 0x1cb0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BACC0u, 0x1CB0BCu, 0x1CB0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0C4u;
label_1cb0c4:
    // 0x1cb0c4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cb0c8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cb0d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb0d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb0dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb0e0: 0x0  nop
    ctx->pc = 0x1cb0e0u;
    // NOP
    // 0x1cb0e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb0e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb0ec: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1cb0f0: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cb0f4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1cb0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0f8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb0fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb100: 0x0  nop
    ctx->pc = 0x1cb100u;
    // NOP
    // 0x1cb104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb10c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB10Cu;
    SET_GPR_U32(ctx, 31, 0x1CB114u);
    ctx->pc = 0x1CB110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB10Cu;
    // 0x1cb110: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB10Cu, 0x1CB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB114u;
label_1cb114:
    // 0x1cb114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb118: 0xc06eb30  jal         func_1BACC0
    ctx->pc = 0x1CB118u;
    SET_GPR_U32(ctx, 31, 0x1CB120u);
    ctx->pc = 0x1CB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB118u;
    // 0x1cb11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BACC0u, 0x1CB118u, 0x1CB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB120u;
label_1cb120:
    // 0x1cb120: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1cb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1cb124: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb12c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb130: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1cb130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cb134: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb13c: 0x0  nop
    ctx->pc = 0x1cb13cu;
    // NOP
    // 0x1cb140: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb148: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1cb148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1cb14c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1cb150: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x1cb150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb154: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cb154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cb158: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb15c: 0x0  nop
    ctx->pc = 0x1cb15cu;
    // NOP
    // 0x1cb160: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb164: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb168: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB168u;
    SET_GPR_U32(ctx, 31, 0x1CB170u);
    ctx->pc = 0x1CB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB168u;
    // 0x1cb16c: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB168u, 0x1CB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB170u;
label_1cb170:
    // 0x1cb170: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cb174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb178: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cb17c: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1cb17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1cb180: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1cb180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1cb184: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1cb184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1cb188: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cb188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cb18c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb190: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB190u;
    SET_GPR_U32(ctx, 31, 0x1CB198u);
    ctx->pc = 0x1CB194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB190u;
    // 0x1cb194: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB190u, 0x1CB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB198u;
label_1cb198:
    // 0x1cb198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb19c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb1a0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB1A0u;
    SET_GPR_U32(ctx, 31, 0x1CB1A8u);
    ctx->pc = 0x1CB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1A0u;
    // 0x1cb1a4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB1A0u, 0x1CB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1A8u;
label_1cb1a8:
    // 0x1cb1a8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1cb1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cb1ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cb1b4: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1cb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1cb1b8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb1bc: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB1BCu;
    SET_GPR_U32(ctx, 31, 0x1CB1C4u);
    ctx->pc = 0x1CB1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1BCu;
    // 0x1cb1c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB1BCu, 0x1CB1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1C4u;
label_1cb1c4:
    // 0x1cb1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb1cc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB1CCu;
    SET_GPR_U32(ctx, 31, 0x1CB1D4u);
    ctx->pc = 0x1CB1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1CCu;
    // 0x1cb1d0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB1CCu, 0x1CB1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1D4u;
label_1cb1d4:
    // 0x1cb1d4: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x1cb1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cb1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cb1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cb1e0: 0x24428020  addiu       $v0, $v0, -0x7FE0
    ctx->pc = 0x1cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x1cb1e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb1e8: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB1E8u;
    SET_GPR_U32(ctx, 31, 0x1CB1F0u);
    ctx->pc = 0x1CB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1E8u;
    // 0x1cb1ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB1E8u, 0x1CB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1F0u;
label_1cb1f0:
    // 0x1cb1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb1f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb1f8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CB1F8u;
    SET_GPR_U32(ctx, 31, 0x1CB200u);
    ctx->pc = 0x1CB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB1F8u;
    // 0x1cb1fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CB1F8u, 0x1CB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB200u;
label_1cb200:
    // 0x1cb200: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cb204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb208: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cb208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1cb20c: 0x24638020  addiu       $v1, $v1, -0x7FE0
    ctx->pc = 0x1cb20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934560));
    // 0x1cb210: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1cb210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1cb214: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cb214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cb218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cb218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cb21c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cb220: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CB220u;
    SET_GPR_U32(ctx, 31, 0x1CB228u);
    ctx->pc = 0x1CB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB220u;
    // 0x1cb224: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CB220u, 0x1CB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB228u;
label_1cb228:
    // 0x1cb228: 0xc603006c  lwc1        $f3, 0x6C($s0)
    ctx->pc = 0x1cb228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cb22c: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x1cb22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
    // 0x1cb230: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x1cb230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb234: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x1cb234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb238: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1cb238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cb23c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x1cb23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb240: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1cb244: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1cb244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1cb248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb24c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cb24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cb250: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1cb250u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1cb254: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1cb254u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1cb258: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1cb25c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb260: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1cb260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cb264: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cb264u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1cb268: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x1cb268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1cb26c: 0x0  nop
    ctx->pc = 0x1cb26cu;
    // NOP
    // 0x1cb270: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cb274: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1cb274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1cb278: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB278u;
    {
        const bool branch_taken_0x1cb278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb278) {
            ctx->pc = 0x1CB2BCu;
            return;
        }
    }
    ctx->pc = 0x1CB280u;
    // 0x1cb280: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1CB280u;
    SET_GPR_U32(ctx, 31, 0x1CB288u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1CB280u, 0x1CB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB288u;
label_1cb288:
    // 0x1cb288: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x1cb288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1cb28c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cb28cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb290: 0xc062930  jal         func_18A4C0
    ctx->pc = 0x1CB290u;
    SET_GPR_U32(ctx, 31, 0x1CB298u);
    ctx->pc = 0x1CB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB290u;
    // 0x1cb294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A4C0u, 0x1CB290u, 0x1CB298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB298u;
label_1cb298:
    // 0x1cb298: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb29c: 0xc062948  jal         func_18A520
    ctx->pc = 0x1CB29Cu;
    SET_GPR_U32(ctx, 31, 0x1CB2A4u);
    ctx->pc = 0x1CB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB29Cu;
    // 0x1cb2a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1CB29Cu, 0x1CB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2A4u;
label_1cb2a4:
    // 0x1cb2a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb2a8: 0xc062994  jal         func_18A650
    ctx->pc = 0x1CB2A8u;
    SET_GPR_U32(ctx, 31, 0x1CB2B0u);
    ctx->pc = 0x1CB2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2A8u;
    // 0x1cb2ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x1CB2A8u, 0x1CB2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2B0u;
label_1cb2b0:
    // 0x1cb2b0: 0x8203007c  lb          $v1, 0x7C($s0)
    ctx->pc = 0x1cb2b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1cb2b4: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cb2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cb2b8: 0xa023c7f4  sb          $v1, -0x380C($at)
    ctx->pc = 0x1cb2b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x22C7F4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x22C7F4u, _value); } while (0);
    ctx->pc = 0x1cb2bcu;
}
