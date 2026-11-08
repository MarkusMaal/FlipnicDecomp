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

// Function: entry_0012e18c
// Address: 0x12e18c - 0x12e228
void entry_0012e18c_0x12e18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e18c_0x12e18c");
#endif

    switch (ctx->pc) {
        case 0x12e1acu: goto label_12e1ac;
        case 0x12e1bcu: goto label_12e1bc;
        case 0x12e1d0u: goto label_12e1d0;
        case 0x12e1dcu: goto label_12e1dc;
        default: break;
    }

    ctx->pc = 0x12e18cu;

    // 0x12e18c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x12e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e190: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x12e194: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x12e194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x12e198: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x12e198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x12e19c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12e19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a0: 0x27a60104  addiu       $a2, $sp, 0x104
    ctx->pc = 0x12e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x12e1a4: 0xc04b924  jal         func_12E490
    ctx->pc = 0x12E1A4u;
    SET_GPR_U32(ctx, 31, 0x12E1ACu);
    ctx->pc = 0x12E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1A4u;
    // 0x12e1a8: 0xafa30104  sw          $v1, 0x104($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E490u, 0x12E1A4u, 0x12E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1ACu;
label_12e1ac:
    // 0x12e1ac: 0x8fb10100  lw          $s1, 0x100($sp)
    ctx->pc = 0x12e1acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12e1b0: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x12e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x12e1b4: 0xc04b8e4  jal         func_12E390
    ctx->pc = 0x12E1B4u;
    SET_GPR_U32(ctx, 31, 0x12E1BCu);
    ctx->pc = 0x12E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1B4u;
    // 0x12e1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E390u, 0x12E1B4u, 0x12E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1BCu;
label_12e1bc:
    // 0x12e1bc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x12e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x12e1c0: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E1C0u;
    {
        const bool branch_taken_0x12e1c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1C0u;
        // 0x12e1c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1c0) {
            ctx->pc = 0x12E228u;
            return;
        }
    }
    ctx->pc = 0x12E1C8u;
    // 0x12e1c8: 0xc04b8e0  jal         func_12E380
    ctx->pc = 0x12E1C8u;
    SET_GPR_U32(ctx, 31, 0x12E1D0u);
    ctx->pc = 0x12E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E380u, 0x12E1C8u, 0x12E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1D0u;
label_12e1d0:
    // 0x12e1d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12e1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12e1d4: 0xc04b8dc  jal         func_12E370
    ctx->pc = 0x12E1D4u;
    SET_GPR_U32(ctx, 31, 0x12E1DCu);
    ctx->pc = 0x12E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1D4u;
    // 0x12e1d8: 0x27a400f8  addiu       $a0, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E370u, 0x12E1D4u, 0x12E1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1DCu;
label_12e1dc:
    // 0x12e1dc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x12e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x12e1e0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x12e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12e1e4: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x12e1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e1e8: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x12e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e1ec: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x12e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e1f0: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x12e1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e1f4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x12e1f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12e1f8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x12e1f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12e1fc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x12e1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12e200: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x12e200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x12e204: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x12e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12e208: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x12e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12e20c: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x12e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12e210: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x12e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e214: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x12e214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x12e218: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x12e218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x12e21c: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x12e21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x12e220: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12E220u;
    {
        const bool branch_taken_0x12e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E220u;
        // 0x12e224: 0xe440001c  swc1        $f0, 0x1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e220) {
            ctx->pc = 0x12E26Cu;
            return;
        }
    }
    ctx->pc = 0x12E228u;
}
