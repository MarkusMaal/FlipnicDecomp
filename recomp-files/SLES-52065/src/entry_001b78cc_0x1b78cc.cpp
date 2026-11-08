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

// Function: entry_001b78cc
// Address: 0x1b78cc - 0x1b7944
void entry_001b78cc_0x1b78cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b78cc_0x1b78cc");
#endif

    switch (ctx->pc) {
        case 0x1b7920u: goto label_1b7920;
        case 0x1b792cu: goto label_1b792c;
        case 0x1b7938u: goto label_1b7938;
        default: break;
    }

    ctx->pc = 0x1b78ccu;

    // 0x1b78cc: 0x2352021  addu        $a0, $s1, $s5
    ctx->pc = 0x1b78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1b78d0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1b78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b78d4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1b78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b78d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b78d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b78dc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1b78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b78e0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1b78e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78e4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1b78e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78e8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1b78e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1b78ec: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1b78ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b78f0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1b78f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b78f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1b78f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b78f8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1b78f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78fc: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1b78fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7900: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x1b7900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1b7904: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1b7904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1b7908: 0x8fb40074  lw          $s4, 0x74($sp)
    ctx->pc = 0x1b7908u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1b790c: 0x16820021  bne         $s4, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B790Cu;
    {
        const bool branch_taken_0x1b790c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b790c) {
            ctx->pc = 0x1B7994u;
            return;
        }
    }
    ctx->pc = 0x1B7914u;
    // 0x1b7914: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b7914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b7918: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1B7918u;
    SET_GPR_U32(ctx, 31, 0x1B7920u);
    ctx->pc = 0x1B791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7918u;
    // 0x1b791c: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1B7918u, 0x1B7920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7920u;
label_1b7920:
    // 0x1b7920: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1b7920u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7924: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1B7924u;
    SET_GPR_U32(ctx, 31, 0x1B792Cu);
    ctx->pc = 0x1B7928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7924u;
    // 0x1b7928: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1B7924u, 0x1B792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B792Cu;
label_1b792c:
    // 0x1b792c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7930: 0xc06de80  jal         func_1B7A00
    ctx->pc = 0x1B7930u;
    SET_GPR_U32(ctx, 31, 0x1B7938u);
    ctx->pc = 0x1B7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7930u;
    // 0x1b7934: 0x27a40098  addiu       $a0, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A00u, 0x1B7930u, 0x1B7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7938u;
label_1b7938:
    // 0x1b7938: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b793c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B793Cu;
    {
        const bool branch_taken_0x1b793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B793Cu;
        // 0x1b7940: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b793c) {
            ctx->pc = 0x1B7968u;
            return;
        }
    }
    ctx->pc = 0x1B7944u;
}
