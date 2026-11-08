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

// Function: append_menu_index_to_stack
// Address: 0x1b7890 - 0x1b79fc
void append_menu_index_to_stack_0x1b7890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("append_menu_index_to_stack_0x1b7890");
#endif

    switch (ctx->pc) {
        case 0x1b78ccu: goto label_1b78cc;
        case 0x1b7920u: goto label_1b7920;
        case 0x1b792cu: goto label_1b792c;
        case 0x1b7938u: goto label_1b7938;
        case 0x1b7944u: goto label_1b7944;
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7968u: goto label_1b7968;
        case 0x1b7970u: goto label_1b7970;
        case 0x1b797cu: goto label_1b797c;
        case 0x1b79a4u: goto label_1b79a4;
        case 0x1b79b0u: goto label_1b79b0;
        case 0x1b79c8u: goto label_1b79c8;
        default: break;
    }

    ctx->pc = 0x1b7890u;

    // 0x1b7890: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b7890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b7894: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b7894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b7898: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b7898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b789c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b78a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b78a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b78a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b78a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b78a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b78a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b78acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b78b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b78b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b78b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b78b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b78b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b78bc: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1b78bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b78c0: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x1B78C0u;
    {
        const bool branch_taken_0x1b78c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78C0u;
        // 0x1b78c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78c0) {
            ctx->pc = 0x1B79D8u;
            goto label_1b79d8;
        }
    }
    ctx->pc = 0x1B78C8u;
    // 0x1b78c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b78c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b78cc:
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
            goto label_1b7994;
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
            goto label_1b7968;
        }
    }
    ctx->pc = 0x1B7944u;
label_1b7944:
    // 0x1b7944: 0x0  nop
    ctx->pc = 0x1b7944u;
    // NOP
    // 0x1b7948: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1b7948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b794c: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1b794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7950: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1b7950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7954: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x1b7954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1b7958: 0xc06e990  jal         func_1BA640
    ctx->pc = 0x1B7958u;
    SET_GPR_U32(ctx, 31, 0x1B7960u);
    ctx->pc = 0x1B795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7958u;
    // 0x1b795c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA640u, 0x1B7958u, 0x1B7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7960u;
label_1b7960:
    // 0x1b7960: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1B7960u;
    SET_GPR_U32(ctx, 31, 0x1B7968u);
    ctx->pc = 0x1B7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7960u;
    // 0x1b7964: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1B7960u, 0x1B7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7968u;
label_1b7968:
    // 0x1b7968: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B7968u;
    SET_GPR_U32(ctx, 31, 0x1B7970u);
    ctx->pc = 0x1B796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7968u;
    // 0x1b796c: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B7968u, 0x1B7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7970u;
label_1b7970:
    // 0x1b7970: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1b7970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1b7974: 0xc06de80  jal         func_1B7A00
    ctx->pc = 0x1B7974u;
    SET_GPR_U32(ctx, 31, 0x1B797Cu);
    ctx->pc = 0x1B7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7974u;
    // 0x1b7978: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A00u, 0x1B7974u, 0x1B797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B797Cu;
label_1b797c:
    // 0x1b797c: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x1b797cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1b7980: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x1b7980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1b7984: 0x1483ffef  bne         $a0, $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B7984u;
    {
        const bool branch_taken_0x1b7984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7984) {
            ctx->pc = 0x1B7944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7944;
        }
    }
    ctx->pc = 0x1B798Cu;
    // 0x1b798c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B798Cu;
    {
        const bool branch_taken_0x1b798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b798c) {
            ctx->pc = 0x1B79C8u;
            goto label_1b79c8;
        }
    }
    ctx->pc = 0x1B7994u;
label_1b7994:
    // 0x1b7994: 0x0  nop
    ctx->pc = 0x1b7994u;
    // NOP
    // 0x1b7998: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b7998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b799c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1B799Cu;
    SET_GPR_U32(ctx, 31, 0x1B79A4u);
    ctx->pc = 0x1B79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B799Cu;
    // 0x1b79a0: 0x26440030  addiu       $a0, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1B799Cu, 0x1B79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79A4u;
label_1b79a4:
    // 0x1b79a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b79a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b79a8: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1B79A8u;
    SET_GPR_U32(ctx, 31, 0x1B79B0u);
    ctx->pc = 0x1B79ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79A8u;
    // 0x1b79ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1B79A8u, 0x1B79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79B0u;
label_1b79b0:
    // 0x1b79b0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1b79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b79b4: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1b79b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b79b8: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1b79b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b79bc: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x1b79bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1b79c0: 0xc06e990  jal         func_1BA640
    ctx->pc = 0x1B79C0u;
    SET_GPR_U32(ctx, 31, 0x1B79C8u);
    ctx->pc = 0x1B79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B79C0u;
    // 0x1b79c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA640u, 0x1B79C0u, 0x1B79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B79C8u;
label_1b79c8:
    // 0x1b79c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b79c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b79cc: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x1b79ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b79d0: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1B79D0u;
    {
        const bool branch_taken_0x1b79d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D0u;
        // 0x1b79d4: 0x26b50018  addiu       $s5, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79d0) {
            ctx->pc = 0x1B78CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b78cc;
        }
    }
    ctx->pc = 0x1B79D8u;
label_1b79d8:
    // 0x1b79d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b79d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b79dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b79dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b79e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b79e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b79e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b79e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b79e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b79e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b79ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b79ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b79f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b79f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b79f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B79F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F4u;
        // 0x1b79f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B79F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B79FCu;
}
