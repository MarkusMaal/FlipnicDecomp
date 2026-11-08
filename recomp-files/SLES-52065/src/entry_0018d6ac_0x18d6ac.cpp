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

// Function: entry_0018d6ac
// Address: 0x18d6ac - 0x18d81c
void entry_0018d6ac_0x18d6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d6ac_0x18d6ac");
#endif

    switch (ctx->pc) {
        case 0x18d6b4u: goto label_18d6b4;
        case 0x18d6c0u: goto label_18d6c0;
        case 0x18d750u: goto label_18d750;
        case 0x18d780u: goto label_18d780;
        case 0x18d798u: goto label_18d798;
        case 0x18d7e4u: goto label_18d7e4;
        default: break;
    }

    ctx->pc = 0x18d6acu;

    // 0x18d6ac: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x18D6ACu;
    SET_GPR_U32(ctx, 31, 0x18D6B4u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x18D6ACu, 0x18D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6B4u;
label_18d6b4:
    // 0x18d6b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x18d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18d6b8: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x18D6B8u;
    SET_GPR_U32(ctx, 31, 0x18D6C0u);
    ctx->pc = 0x18D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D6B8u;
    // 0x18d6bc: 0x262505c0  addiu       $a1, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4CD0u, 0x18D6B8u, 0x18D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D6C0u;
label_18d6c0:
    // 0x18d6c0: 0x8e270450  lw          $a3, 0x450($s1)
    ctx->pc = 0x18d6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d6c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d6c8: 0x8e282724  lw          $t0, 0x2724($s1)
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d6cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18d6d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18d6d4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18d6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18d6d8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18d6dc: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x18d6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d6e0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x18d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18d6e4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x18d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d6e8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d6ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18d6f0: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x18d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d6f4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x18d6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18d6f8: 0x8e270450  lw          $a3, 0x450($s1)
    ctx->pc = 0x18d6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d6fc: 0x8e282724  lw          $t0, 0x2724($s1)
    ctx->pc = 0x18d6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d700: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18d704: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x18d704u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d708: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x18d708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18d70c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x18d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d710: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d714: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18d718: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x18d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d71c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x18d720: 0x8e270450  lw          $a3, 0x450($s1)
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d724: 0x8e282724  lw          $t0, 0x2724($s1)
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d728: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x18d728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18d72c: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x18d72cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d730: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18d734: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x18d734u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18d738: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d73c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x18d740: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x18d740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d744: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18d744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x18d748: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18D748u;
    SET_GPR_U32(ctx, 31, 0x18D750u);
    ctx->pc = 0x18D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D748u;
    // 0x18d74c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18D748u, 0x18D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D750u;
label_18d750:
    // 0x18d750: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d758: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18d758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d75c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d760: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d764: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d76c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d770: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18d774: 0xc44c006c  lwc1        $f12, 0x6C($v0)
    ctx->pc = 0x18d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d778: 0xc0630d4  jal         func_18C350
    ctx->pc = 0x18D778u;
    SET_GPR_U32(ctx, 31, 0x18D780u);
    ctx->pc = 0x18D77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D778u;
    // 0x18d77c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C350u, 0x18D778u, 0x18D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D780u;
label_18d780:
    // 0x18d780: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x18d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x18d784: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18d788: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18d788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x18d78c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18d790: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x18D790u;
    SET_GPR_U32(ctx, 31, 0x18D798u);
    ctx->pc = 0x18D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D790u;
    // 0x18d794: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x18D790u, 0x18D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D798u;
label_18d798:
    // 0x18d798: 0x8e230450  lw          $v1, 0x450($s1)
    ctx->pc = 0x18d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    // 0x18d79c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18d7a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18d7a4: 0x8e262724  lw          $a2, 0x2724($s1)
    ctx->pc = 0x18d7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18d7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7b0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x18d7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18d7b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d7b8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d7bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18d7c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d7c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d7c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18d7cc: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x18d7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d7d0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x18d7d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x18d7d4: 0x0  nop
    ctx->pc = 0x18d7d4u;
    // NOP
    // 0x18d7d8: 0x0  nop
    ctx->pc = 0x18d7d8u;
    // NOP
    // 0x18d7dc: 0xc0631cc  jal         func_18C730
    ctx->pc = 0x18D7DCu;
    SET_GPR_U32(ctx, 31, 0x18D7E4u);
    ctx->pc = 0x18C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C730u, 0x18D7DCu, 0x18D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D7E4u;
label_18d7e4:
    // 0x18d7e4: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x18d7e8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18D7E8u;
    {
        const bool branch_taken_0x18d7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d7e8) {
            ctx->pc = 0x18D81Cu;
            return;
        }
    }
    ctx->pc = 0x18D7F0u;
    // 0x18d7f0: 0xc62104e0  lwc1        $f1, 0x4E0($s1)
    ctx->pc = 0x18d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d7f4: 0xc6200570  lwc1        $f0, 0x570($s1)
    ctx->pc = 0x18d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d7f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d7fc: 0xe62004e0  swc1        $f0, 0x4E0($s1)
    ctx->pc = 0x18d7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1248), bits); }
    // 0x18d800: 0xc62104e4  lwc1        $f1, 0x4E4($s1)
    ctx->pc = 0x18d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18d804: 0xc6200574  lwc1        $f0, 0x574($s1)
    ctx->pc = 0x18d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18d808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18d808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18d80c: 0xe62004e4  swc1        $f0, 0x4E4($s1)
    ctx->pc = 0x18d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1252), bits); }
    // 0x18d810: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x18d810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x18d814: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18d818: 0xae230560  sw          $v1, 0x560($s1)
    ctx->pc = 0x18d818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 3));
    ctx->pc = 0x18d81cu;
}
