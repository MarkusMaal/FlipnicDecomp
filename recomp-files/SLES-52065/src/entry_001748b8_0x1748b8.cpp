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

// Function: entry_001748b8
// Address: 0x1748b8 - 0x174954
void entry_001748b8_0x1748b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001748b8_0x1748b8");
#endif

    switch (ctx->pc) {
        case 0x1748ccu: goto label_1748cc;
        case 0x174918u: goto label_174918;
        case 0x174950u: goto label_174950;
        default: break;
    }

    ctx->pc = 0x1748b8u;

label_1748b8:
    // 0x1748b8: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1748b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1748bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1748bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1748c0: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x1748c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x1748c4: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1748C4u;
    SET_GPR_U32(ctx, 31, 0x1748CCu);
    ctx->pc = 0x1748C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1748C4u;
    // 0x1748c8: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1748C4u, 0x1748CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748CCu;
label_1748cc:
    // 0x1748cc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1748ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1748d0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1748d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1748d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1748d8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1748dc: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x1748dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1748e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1748e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1748e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1748e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1748e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1748e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1748ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1748ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1748f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1748f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1748f4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1748f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1748f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1748f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1748fc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1748fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x174900: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x174900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174904: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x174904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x174908: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x174908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17490c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x17490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x174910: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x174910u;
    SET_GPR_U32(ctx, 31, 0x174918u);
    ctx->pc = 0x174914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174910u;
    // 0x174914: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x174910u, 0x174918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174918u;
label_174918:
    // 0x174918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17491c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x17491cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x174920: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x174920u;
    {
        const bool branch_taken_0x174920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174920u;
        // 0x174924: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174920) {
            ctx->pc = 0x1748B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1748b8;
        }
    }
    ctx->pc = 0x174928u;
    // 0x174928: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x174928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17492c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x174930: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x174930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x174934: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x174934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x174938: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174938u;
    {
        const bool branch_taken_0x174938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174938u;
        // 0x17493c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174938) {
            ctx->pc = 0x174954u;
            return;
        }
    }
    ctx->pc = 0x174940u;
    // 0x174940: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x174940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x174944: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x174944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x174948: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174948u;
    SET_GPR_U32(ctx, 31, 0x174950u);
    ctx->pc = 0x17494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174948u;
    // 0x17494c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174948u, 0x174950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174950u;
label_174950:
    // 0x174950: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x174950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->pc = 0x174954u;
}
