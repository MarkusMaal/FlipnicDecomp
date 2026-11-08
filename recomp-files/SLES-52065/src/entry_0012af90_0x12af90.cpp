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

// Function: entry_0012af90
// Address: 0x12af90 - 0x12b17c
void entry_0012af90_0x12af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012af90_0x12af90");
#endif

    switch (ctx->pc) {
        case 0x12afd0u: goto label_12afd0;
        case 0x12aff4u: goto label_12aff4;
        case 0x12b018u: goto label_12b018;
        case 0x12b038u: goto label_12b038;
        case 0x12b04cu: goto label_12b04c;
        case 0x12b078u: goto label_12b078;
        case 0x12b08cu: goto label_12b08c;
        case 0x12b0a8u: goto label_12b0a8;
        case 0x12b0c4u: goto label_12b0c4;
        case 0x12b0e0u: goto label_12b0e0;
        case 0x12b0f4u: goto label_12b0f4;
        case 0x12b110u: goto label_12b110;
        case 0x12b124u: goto label_12b124;
        case 0x12b140u: goto label_12b140;
        case 0x12b15cu: goto label_12b15c;
        case 0x12b178u: goto label_12b178;
        default: break;
    }

    ctx->pc = 0x12af90u;

    // 0x12af90: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12af94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12af94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12af98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12af98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12af9c: 0x26d700c0  addiu       $s7, $s6, 0xC0
    ctx->pc = 0x12af9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x12afa0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afa4: 0x26c20080  addiu       $v0, $s6, 0x80
    ctx->pc = 0x12afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x12afa8: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x12afa8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x12afac: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x12afacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x12afb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12afb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12afb8: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x12afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12afbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12afbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12afc0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x12afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x12afc4: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x12afc4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x12afc8: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12AFC8u;
    SET_GPR_U32(ctx, 31, 0x12AFD0u);
    ctx->pc = 0x12AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFC8u;
    // 0x12afcc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AFC8u, 0x12AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFD0u;
label_12afd0:
    // 0x12afd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12afd4: 0x26d500d0  addiu       $s5, $s6, 0xD0
    ctx->pc = 0x12afd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
    // 0x12afd8: 0x26de0090  addiu       $fp, $s6, 0x90
    ctx->pc = 0x12afd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x12afdc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12afdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afe0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12afe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afe4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12afe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x12afe8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12afec: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12AFECu;
    SET_GPR_U32(ctx, 31, 0x12AFF4u);
    ctx->pc = 0x12AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AFECu;
    // 0x12aff0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12AFECu, 0x12AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFF4u;
label_12aff4:
    // 0x12aff4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12aff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12aff8: 0x26c200a0  addiu       $v0, $s6, 0xA0
    ctx->pc = 0x12aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    // 0x12affc: 0x26c500e0  addiu       $a1, $s6, 0xE0
    ctx->pc = 0x12affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 224));
    // 0x12b000: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12b004: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x12b004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x12b008: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x12b008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12b00c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x12b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12b010: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12B010u;
    SET_GPR_U32(ctx, 31, 0x12B018u);
    ctx->pc = 0x12B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B010u;
    // 0x12b014: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B010u, 0x12B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B018u;
label_12b018:
    // 0x12b018: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x12b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12b01c: 0x26c500f0  addiu       $a1, $s6, 0xF0
    ctx->pc = 0x12b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 240));
    // 0x12b020: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b020u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12b024: 0x26d200b0  addiu       $s2, $s6, 0xB0
    ctx->pc = 0x12b024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
    // 0x12b028: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12b02c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12b02cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b030: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12B030u;
    SET_GPR_U32(ctx, 31, 0x12B038u);
    ctx->pc = 0x12B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B030u;
    // 0x12b034: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B030u, 0x12B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B038u;
label_12b038:
    // 0x12b038: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12b03c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b040: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b044: 0xc04eacc  jal         func_13AB30
    ctx->pc = 0x12B044u;
    SET_GPR_U32(ctx, 31, 0x12B04Cu);
    ctx->pc = 0x12B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B044u;
    // 0x12b048: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B044u, 0x12B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B04Cu;
label_12b04c:
    // 0x12b04c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x12b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x12b050: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b058: 0x0  nop
    ctx->pc = 0x12b058u;
    // NOP
    // 0x12b05c: 0x46140580  add.s       $f22, $f0, $f20
    ctx->pc = 0x12b05cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x12b060: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x12b064: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b064u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12b068: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x12b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12b06c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b070: 0xc04eab8  jal         func_13AAE0
    ctx->pc = 0x12B070u;
    SET_GPR_U32(ctx, 31, 0x12B078u);
    ctx->pc = 0x12B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B070u;
    // 0x12b074: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B070u, 0x12B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B078u;
label_12b078:
    // 0x12b078: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12b07c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b080: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b084: 0xc04eacc  jal         func_13AB30
    ctx->pc = 0x12B084u;
    SET_GPR_U32(ctx, 31, 0x12B08Cu);
    ctx->pc = 0x12B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B084u;
    // 0x12b088: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B084u, 0x12B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B08Cu;
label_12b08c:
    // 0x12b08c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x12b090: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b094: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b094u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12b098: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12b09c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b0a0: 0xc04eab8  jal         func_13AAE0
    ctx->pc = 0x12B0A0u;
    SET_GPR_U32(ctx, 31, 0x12B0A8u);
    ctx->pc = 0x12B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0A0u;
    // 0x12b0a4: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B0A0u, 0x12B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0A8u;
label_12b0a8:
    // 0x12b0a8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x12b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x12b0ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12b0acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x12b0b0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x12b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12b0b4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x12b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12b0b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12b0bc: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12B0BCu;
    SET_GPR_U32(ctx, 31, 0x12B0C4u);
    ctx->pc = 0x12B0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0BCu;
    // 0x12b0c0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B0BCu, 0x12B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0C4u;
label_12b0c4:
    // 0x12b0c4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x12b0c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12b0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0cc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x12b0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12b0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x12b0d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12b0d8: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12B0D8u;
    SET_GPR_U32(ctx, 31, 0x12B0E0u);
    ctx->pc = 0x12B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0D8u;
    // 0x12b0dc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B0D8u, 0x12B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0E0u;
label_12b0e0:
    // 0x12b0e0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12b0e4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b0e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b0ec: 0xc04eacc  jal         func_13AB30
    ctx->pc = 0x12B0ECu;
    SET_GPR_U32(ctx, 31, 0x12B0F4u);
    ctx->pc = 0x12B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0ECu;
    // 0x12b0f0: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B0ECu, 0x12B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0F4u;
label_12b0f4:
    // 0x12b0f4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x12b0f8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b0fc: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b0fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12b100: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12b104: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b108: 0xc04eab8  jal         func_13AAE0
    ctx->pc = 0x12B108u;
    SET_GPR_U32(ctx, 31, 0x12B110u);
    ctx->pc = 0x12B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B108u;
    // 0x12b10c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B108u, 0x12B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B110u;
label_12b110:
    // 0x12b110: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x12b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x12b114: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b118: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b11c: 0xc04eacc  jal         func_13AB30
    ctx->pc = 0x12B11Cu;
    SET_GPR_U32(ctx, 31, 0x12B124u);
    ctx->pc = 0x12B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B11Cu;
    // 0x12b120: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x12B11Cu, 0x12B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B124u;
label_12b124:
    // 0x12b124: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x12b128: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12b128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12b12c: 0xe4560000  swc1        $f22, 0x0($v0)
    ctx->pc = 0x12b12cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12b130: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x12b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x12b134: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12b138: 0xc04eab8  jal         func_13AAE0
    ctx->pc = 0x12B138u;
    SET_GPR_U32(ctx, 31, 0x12B140u);
    ctx->pc = 0x12B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B138u;
    // 0x12b13c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x12B138u, 0x12B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B140u;
label_12b140:
    // 0x12b140: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x12b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12b144: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12b144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b148: 0x26c50100  addiu       $a1, $s6, 0x100
    ctx->pc = 0x12b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
    // 0x12b14c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b14cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12b150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12b154: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12B154u;
    SET_GPR_U32(ctx, 31, 0x12B15Cu);
    ctx->pc = 0x12B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B154u;
    // 0x12b158: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B154u, 0x12B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B15Cu;
label_12b15c:
    // 0x12b15c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x12b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12b160: 0x26c50110  addiu       $a1, $s6, 0x110
    ctx->pc = 0x12b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 272));
    // 0x12b164: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12b164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b168: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12b168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12b16c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12b170: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x12B170u;
    SET_GPR_U32(ctx, 31, 0x12B178u);
    ctx->pc = 0x12B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B170u;
    // 0x12b174: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x12B170u, 0x12B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B178u;
label_12b178:
    // 0x12b178: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x12b178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->pc = 0x12b17cu;
}
