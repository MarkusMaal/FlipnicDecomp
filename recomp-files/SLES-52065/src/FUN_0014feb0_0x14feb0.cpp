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

// Function: FUN_0014feb0
// Address: 0x14feb0 - 0x15012c
void FUN_0014feb0_0x14feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014feb0_0x14feb0");
#endif

    switch (ctx->pc) {
        case 0x14fed0u: goto label_14fed0;
        case 0x14ff04u: goto label_14ff04;
        case 0x14ff10u: goto label_14ff10;
        case 0x14ff1cu: goto label_14ff1c;
        case 0x14ff28u: goto label_14ff28;
        case 0x1500ecu: goto label_1500ec;
        case 0x150100u: goto label_150100;
        case 0x15010cu: goto label_15010c;
        case 0x150118u: goto label_150118;
        default: break;
    }

    ctx->pc = 0x14feb0u;

    // 0x14feb0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x14feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x14feb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14feb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14feb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14febc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14febcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14fec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14fec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fec4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14fec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fec8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14fecc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14feccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14fed0:
    // 0x14fed0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x14fed0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14fed4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14fed8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x14fed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14fedc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14fee0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x14fee4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x14fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x14fee8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14FEE8u;
    {
        const bool branch_taken_0x14fee8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x14FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEE8u;
        // 0x14feec: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fee8) {
            ctx->pc = 0x14FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fed0;
        }
    }
    ctx->pc = 0x14FEF0u;
    // 0x14fef0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14FEF0u;
    {
        const bool branch_taken_0x14fef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEF0u;
        // 0x14fef4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fef0) {
            ctx->pc = 0x14FF14u;
            goto label_14ff14;
        }
    }
    ctx->pc = 0x14FEF8u;
    // 0x14fef8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x14fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14fefc: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14FEFCu;
    SET_GPR_U32(ctx, 31, 0x14FF04u);
    ctx->pc = 0x14FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEFCu;
    // 0x14ff00: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14FEFCu, 0x14FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF04u;
label_14ff04:
    // 0x14ff04: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14ff08: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x14FF08u;
    SET_GPR_U32(ctx, 31, 0x14FF10u);
    ctx->pc = 0x14FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF08u;
    // 0x14ff0c: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x14FF08u, 0x14FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF10u;
label_14ff10:
    // 0x14ff10: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x14ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_14ff14:
    // 0x14ff14: 0xc080702  jal         func_201C08
    ctx->pc = 0x14FF14u;
    SET_GPR_U32(ctx, 31, 0x14FF1Cu);
    ctx->pc = 0x14FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF14u;
    // 0x14ff18: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x14FF14u, 0x14FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF1Cu;
label_14ff1c:
    // 0x14ff1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14ff1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14ff20: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x14ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14ff24: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_14ff28:
    // 0x14ff28: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x14ff28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14ff2c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14ff30: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x14ff30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x14ff34: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x14ff34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14ff38: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x14ff3c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x14ff3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ff40: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14FF40u;
    {
        const bool branch_taken_0x14ff40 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x14FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF40u;
        // 0x14ff44: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff40) {
            ctx->pc = 0x14FF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ff28;
        }
    }
    ctx->pc = 0x14FF48u;
    // 0x14ff48: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x14ff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ff4c: 0x27a900ac  addiu       $t1, $sp, 0xAC
    ctx->pc = 0x14ff4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x14ff50: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x14ff50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14ff54: 0x27a700c4  addiu       $a3, $sp, 0xC4
    ctx->pc = 0x14ff54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x14ff58: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x14ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14ff5c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x14ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14ff60: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x14ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14ff64: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x14ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14ff68: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x14ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14ff6c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x14ff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x14ff70: 0x8faa0074  lw          $t2, 0x74($sp)
    ctx->pc = 0x14ff70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x14ff74: 0xae2a0054  sw          $t2, 0x54($s1)
    ctx->pc = 0x14ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 10));
    // 0x14ff78: 0x8faa0078  lw          $t2, 0x78($sp)
    ctx->pc = 0x14ff78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x14ff7c: 0xae2a0058  sw          $t2, 0x58($s1)
    ctx->pc = 0x14ff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 10));
    // 0x14ff80: 0x8faa007c  lw          $t2, 0x7C($sp)
    ctx->pc = 0x14ff80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x14ff84: 0xae2a005c  sw          $t2, 0x5C($s1)
    ctx->pc = 0x14ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 10));
    // 0x14ff88: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x14ff88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14ff8c: 0xae2a0060  sw          $t2, 0x60($s1)
    ctx->pc = 0x14ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 10));
    // 0x14ff90: 0x8faa0084  lw          $t2, 0x84($sp)
    ctx->pc = 0x14ff90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x14ff94: 0xae2a0064  sw          $t2, 0x64($s1)
    ctx->pc = 0x14ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 10));
    // 0x14ff98: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x14ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ff9c: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x14ff9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x14ffa0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x14ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ffa4: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x14ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x14ffa8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x14ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ffac: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x14ffacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x14ffb0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x14ffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ffb4: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x14ffb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x14ffb8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x14ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ffbc: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x14ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x14ffc0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x14ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ffc4: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x14ffc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x14ffc8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x14ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ffcc: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x14ffccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x14ffd0: 0x8faa00a4  lw          $t2, 0xA4($sp)
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x14ffd4: 0xae2a0084  sw          $t2, 0x84($s1)
    ctx->pc = 0x14ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 10));
    // 0x14ffd8: 0x8faa00a8  lw          $t2, 0xA8($sp)
    ctx->pc = 0x14ffd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x14ffdc: 0xae2a0088  sw          $t2, 0x88($s1)
    ctx->pc = 0x14ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 10));
    // 0x14ffe0: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x14ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ffe4: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x14ffe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ffe8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x14ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ffec: 0xe622008c  swc1        $f2, 0x8C($s1)
    ctx->pc = 0x14ffecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x14fff0: 0xe6210090  swc1        $f1, 0x90($s1)
    ctx->pc = 0x14fff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x14fff4: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x14fff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x14fff8: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x14fff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fffc: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x14fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150000: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x150000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150004: 0xe6220098  swc1        $f2, 0x98($s1)
    ctx->pc = 0x150004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x150008: 0xe621009c  swc1        $f1, 0x9C($s1)
    ctx->pc = 0x150008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x15000c: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x15000cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x150010: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x150010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150014: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x150014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150018: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x150018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15001c: 0xe62200a4  swc1        $f2, 0xA4($s1)
    ctx->pc = 0x15001cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x150020: 0xe62100a8  swc1        $f1, 0xA8($s1)
    ctx->pc = 0x150020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x150024: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x150024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x150028: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x150028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15002c: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x15002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150030: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x150030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150034: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x150034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150038: 0xe62300b0  swc1        $f3, 0xB0($s1)
    ctx->pc = 0x150038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x15003c: 0xe62200b4  swc1        $f2, 0xB4($s1)
    ctx->pc = 0x15003cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x150040: 0xe62100b8  swc1        $f1, 0xB8($s1)
    ctx->pc = 0x150040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x150044: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x150044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    // 0x150048: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x150048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15004c: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x15004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150050: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x150050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150054: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x150054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150058: 0xe62300c0  swc1        $f3, 0xC0($s1)
    ctx->pc = 0x150058u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x15005c: 0xe62200c4  swc1        $f2, 0xC4($s1)
    ctx->pc = 0x15005cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x150060: 0xe62100c8  swc1        $f1, 0xC8($s1)
    ctx->pc = 0x150060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
    // 0x150064: 0xe62000cc  swc1        $f0, 0xCC($s1)
    ctx->pc = 0x150064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 204), bits); }
    // 0x150068: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x150068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15006c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x15006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150070: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x150070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150074: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x150074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150078: 0xe62300d0  swc1        $f3, 0xD0($s1)
    ctx->pc = 0x150078u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x15007c: 0xe62200d4  swc1        $f2, 0xD4($s1)
    ctx->pc = 0x15007cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x150080: 0xe62100d8  swc1        $f1, 0xD8($s1)
    ctx->pc = 0x150080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x150084: 0xe62000dc  swc1        $f0, 0xDC($s1)
    ctx->pc = 0x150084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x150088: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x150088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15008c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x15008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150090: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x150090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150094: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x150094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150098: 0xe62300e0  swc1        $f3, 0xE0($s1)
    ctx->pc = 0x150098u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x15009c: 0xe62200e4  swc1        $f2, 0xE4($s1)
    ctx->pc = 0x15009cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x1500a0: 0xe62100e8  swc1        $f1, 0xE8($s1)
    ctx->pc = 0x1500a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
    // 0x1500a4: 0xe62000ec  swc1        $f0, 0xEC($s1)
    ctx->pc = 0x1500a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x1500a8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1500a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1500ac: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1500acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1500b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1500b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1500b4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1500b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1500b8: 0xe62300f0  swc1        $f3, 0xF0($s1)
    ctx->pc = 0x1500b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x1500bc: 0xe62200f4  swc1        $f2, 0xF4($s1)
    ctx->pc = 0x1500bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
    // 0x1500c0: 0xe62100f8  swc1        $f1, 0xF8($s1)
    ctx->pc = 0x1500c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    // 0x1500c4: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x1500c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x1500c8: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1500c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1500cc: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1500ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1500d0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1500d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1500d4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1500d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1500d8: 0xe6230100  swc1        $f3, 0x100($s1)
    ctx->pc = 0x1500d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x1500dc: 0xe6220104  swc1        $f2, 0x104($s1)
    ctx->pc = 0x1500dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1500e0: 0xe6210108  swc1        $f1, 0x108($s1)
    ctx->pc = 0x1500e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x1500e4: 0xc080702  jal         func_201C08
    ctx->pc = 0x1500E4u;
    SET_GPR_U32(ctx, 31, 0x1500ECu);
    ctx->pc = 0x1500E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500E4u;
    // 0x1500e8: 0xe620010c  swc1        $f0, 0x10C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1500E4u, 0x1500ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500ECu;
label_1500ec:
    // 0x1500ec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1500ECu;
    {
        const bool branch_taken_0x1500ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500ECu;
        // 0x1500f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500ec) {
            ctx->pc = 0x150110u;
            goto label_150110;
        }
    }
    ctx->pc = 0x1500F4u;
    // 0x1500f4: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1500f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x1500f8: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1500F8u;
    SET_GPR_U32(ctx, 31, 0x150100u);
    ctx->pc = 0x1500FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500F8u;
    // 0x1500fc: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1500F8u, 0x150100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150100u;
label_150100:
    // 0x150100: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x150100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x150104: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x150104u;
    SET_GPR_U32(ctx, 31, 0x15010Cu);
    ctx->pc = 0x150108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150104u;
    // 0x150108: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x150104u, 0x15010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15010Cu;
label_15010c:
    // 0x15010c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150110:
    // 0x150110: 0xc053ed4  jal         func_14FB50
    ctx->pc = 0x150110u;
    SET_GPR_U32(ctx, 31, 0x150118u);
    ctx->pc = 0x14FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB50u, 0x150110u, 0x150118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150118u;
label_150118:
    // 0x150118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x150118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15011c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15011cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150124: 0x3e00008  jr          $ra
    ctx->pc = 0x150124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150124u;
        // 0x150128: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15012Cu;
}
