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

// Function: FUN_00177a10
// Address: 0x177a10 - 0x177c80
void FUN_00177a10_0x177a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00177a10_0x177a10");
#endif

    switch (ctx->pc) {
        case 0x177a38u: goto label_177a38;
        case 0x177a44u: goto label_177a44;
        case 0x177a4cu: goto label_177a4c;
        case 0x177a58u: goto label_177a58;
        case 0x177a94u: goto label_177a94;
        case 0x177a9cu: goto label_177a9c;
        case 0x177aa4u: goto label_177aa4;
        case 0x177ae0u: goto label_177ae0;
        case 0x177af8u: goto label_177af8;
        case 0x177b08u: goto label_177b08;
        case 0x177b20u: goto label_177b20;
        case 0x177b30u: goto label_177b30;
        case 0x177bd8u: goto label_177bd8;
        default: break;
    }

    ctx->pc = 0x177a10u;

    // 0x177a10: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x177a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x177a14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x177a18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x177a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x177a1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x177a20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x177a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x177a28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x177a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x177a2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x177a2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x177a30: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x177A30u;
    SET_GPR_U32(ctx, 31, 0x177A38u);
    ctx->pc = 0x177A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A30u;
    // 0x177a34: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x177A30u, 0x177A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A38u;
label_177a38:
    // 0x177a38: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x177a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x177a3c: 0xc05c550  jal         func_171540
    ctx->pc = 0x177A3Cu;
    SET_GPR_U32(ctx, 31, 0x177A44u);
    ctx->pc = 0x177A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A3Cu;
    // 0x177a40: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x177A3Cu, 0x177A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A44u;
label_177a44:
    // 0x177a44: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x177A44u;
    SET_GPR_U32(ctx, 31, 0x177A4Cu);
    ctx->pc = 0x177A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A44u;
    // 0x177a48: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x177A44u, 0x177A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A4Cu;
label_177a4c:
    // 0x177a4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x177a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x177a50: 0xc05c550  jal         func_171540
    ctx->pc = 0x177A50u;
    SET_GPR_U32(ctx, 31, 0x177A58u);
    ctx->pc = 0x177A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A50u;
    // 0x177a54: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x177A50u, 0x177A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A58u;
label_177a58:
    // 0x177a58: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x177a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x177a5c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x177a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x177a60: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x177a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x177a64: 0x3c0340f0  lui         $v1, 0x40F0
    ctx->pc = 0x177a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16624 << 16));
    // 0x177a68: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x177a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x177a6c: 0x3c02c0f0  lui         $v0, 0xC0F0
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49392 << 16));
    // 0x177a70: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x177a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177a74: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177a78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a7c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x177a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x177a80: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x177a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x177a84: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x177a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x177a88: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x177a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x177a8c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x177A8Cu;
    SET_GPR_U32(ctx, 31, 0x177A94u);
    ctx->pc = 0x177A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A8Cu;
    // 0x177a90: 0xafa000e8  sw          $zero, 0xE8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x177A8Cu, 0x177A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A94u;
label_177a94:
    // 0x177a94: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x177A94u;
    {
        const bool branch_taken_0x177a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A94u;
        // 0x177a98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a94) {
            ctx->pc = 0x177C4Cu;
            goto label_177c4c;
        }
    }
    ctx->pc = 0x177A9Cu;
label_177a9c:
    // 0x177a9c: 0xc05c550  jal         func_171540
    ctx->pc = 0x177A9Cu;
    SET_GPR_U32(ctx, 31, 0x177AA4u);
    ctx->pc = 0x177AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A9Cu;
    // 0x177aa0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x177A9Cu, 0x177AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AA4u;
label_177aa4:
    // 0x177aa4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x177aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x177aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x177aac: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x177AACu;
    {
        const bool branch_taken_0x177aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x177AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AACu;
        // 0x177ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177aac) {
            ctx->pc = 0x177B10u;
            goto label_177b10;
        }
    }
    ctx->pc = 0x177AB4u;
    // 0x177ab4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x177AB4u;
    {
        const bool branch_taken_0x177ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x177ab4) {
            ctx->pc = 0x177AE8u;
            goto label_177ae8;
        }
    }
    ctx->pc = 0x177ABCu;
    // 0x177abc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177ABCu;
    {
        const bool branch_taken_0x177abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177abc) {
            ctx->pc = 0x177ACCu;
            goto label_177acc;
        }
    }
    ctx->pc = 0x177AC4u;
    // 0x177ac4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x177AC4u;
    {
        const bool branch_taken_0x177ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ac4) {
            ctx->pc = 0x177B30u;
            goto label_177b30;
        }
    }
    ctx->pc = 0x177ACCu;
label_177acc:
    // 0x177acc: 0x0  nop
    ctx->pc = 0x177accu;
    // NOP
    // 0x177ad0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177ad4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x177ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x177ad8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177AD8u;
    SET_GPR_U32(ctx, 31, 0x177AE0u);
    ctx->pc = 0x177ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AD8u;
    // 0x177adc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177AD8u, 0x177AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AE0u;
label_177ae0:
    // 0x177ae0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x177AE0u;
    {
        const bool branch_taken_0x177ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ae0) {
            ctx->pc = 0x177B30u;
            goto label_177b30;
        }
    }
    ctx->pc = 0x177AE8u;
label_177ae8:
    // 0x177ae8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177aec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177af0: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177AF0u;
    SET_GPR_U32(ctx, 31, 0x177AF8u);
    ctx->pc = 0x177AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AF0u;
    // 0x177af4: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177AF0u, 0x177AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AF8u;
label_177af8:
    // 0x177af8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177afc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x177afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x177b00: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177B00u;
    SET_GPR_U32(ctx, 31, 0x177B08u);
    ctx->pc = 0x177B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B00u;
    // 0x177b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177B00u, 0x177B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B08u;
label_177b08:
    // 0x177b08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x177B08u;
    {
        const bool branch_taken_0x177b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177b08) {
            ctx->pc = 0x177B30u;
            goto label_177b30;
        }
    }
    ctx->pc = 0x177B10u;
label_177b10:
    // 0x177b10: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177b14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x177b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177b18: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177B18u;
    SET_GPR_U32(ctx, 31, 0x177B20u);
    ctx->pc = 0x177B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B18u;
    // 0x177b1c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177B18u, 0x177B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B20u;
label_177b20:
    // 0x177b20: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x177b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177b24: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x177b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x177b28: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x177B28u;
    SET_GPR_U32(ctx, 31, 0x177B30u);
    ctx->pc = 0x177B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B28u;
    // 0x177b2c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x177B28u, 0x177B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B30u;
label_177b30:
    // 0x177b30: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x177b34: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x177b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x177b38: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x177b3c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x177b3cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177b40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x177b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177b44: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x177b44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x177b48: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x177b48u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x177b4c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x177b4cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x177b50: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x177b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x177b54: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x177b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x177b58: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x177b58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x177b5c: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x177b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x177b60: 0xf8a80000  sqc2        $vf8, 0x0($a1)
    ctx->pc = 0x177b60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x177b64: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x177b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177b68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x177b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x177b6c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x177b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177b70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x177b70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177b74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177b78: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x177b78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177b7c: 0x0  nop
    ctx->pc = 0x177b7cu;
    // NOP
    // 0x177b80: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x177B80u;
    {
        const bool branch_taken_0x177b80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B80u;
        // 0x177b84: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b80) {
            ctx->pc = 0x177BD0u;
            goto label_177bd0;
        }
    }
    ctx->pc = 0x177B88u;
    // 0x177b88: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x177b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177b90: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x177b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177b94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177b98: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177b9c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x177b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x177ba0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x177ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177ba4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x177ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177ba8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177bac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177bb0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x177bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x177bb4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x177bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177bb8: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x177bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177bbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x177bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x177bc0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x177bc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x177bc4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x177bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x177bc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x177BC8u;
    {
        const bool branch_taken_0x177bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BC8u;
        // 0x177bcc: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bc8) {
            ctx->pc = 0x177BD8u;
            goto label_177bd8;
        }
    }
    ctx->pc = 0x177BD0u;
label_177bd0:
    // 0x177bd0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x177BD0u;
    SET_GPR_U32(ctx, 31, 0x177BD8u);
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x177BD0u, 0x177BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BD8u;
label_177bd8:
    // 0x177bd8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x177bdc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x177be0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x177be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177be4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x177be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x177be8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x177bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x177becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177bf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177bf8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x177bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x177bfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x177bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x177c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c04: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x177c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177c08: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x177c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x177c0c: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x177c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x177c10: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x177c10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x177c14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x177c14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177c18: 0x0  nop
    ctx->pc = 0x177c18u;
    // NOP
    // 0x177c1c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x177C1Cu;
    {
        const bool branch_taken_0x177c1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C1Cu;
        // 0x177c20: 0xe7a100dc  swc1        $f1, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c1c) {
            ctx->pc = 0x177C2Cu;
            goto label_177c2c;
        }
    }
    ctx->pc = 0x177C24u;
    // 0x177c24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x177c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x177c28: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x177c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_177c2c:
    // 0x177c2c: 0x0  nop
    ctx->pc = 0x177c2cu;
    // NOP
    // 0x177c30: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x177c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x177c34: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x177c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177c38: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x177c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x177c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x177c40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x177c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x177c44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x177c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x177c48: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x177c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_177c4c:
    // 0x177c4c: 0x0  nop
    ctx->pc = 0x177c4cu;
    // NOP
    // 0x177c50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x177c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x177c54: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x177c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177c58: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x177C58u;
    {
        const bool branch_taken_0x177c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C58u;
        // 0x177c5c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c58) {
            ctx->pc = 0x177A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177a9c;
        }
    }
    ctx->pc = 0x177C60u;
    // 0x177c60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x177c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177c68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x177c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177c6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x177c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177c70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x177c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177c74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177c78: 0x3e00008  jr          $ra
    ctx->pc = 0x177C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C78u;
        // 0x177c7c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177C80u;
}
