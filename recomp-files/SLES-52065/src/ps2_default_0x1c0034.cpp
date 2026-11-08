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

// Function: default
// Address: 0x1c0034 - 0x1c00e8
void ps2_default_0x1c0034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1c0034");
#endif

    switch (ctx->pc) {
        case 0x1c0044u: goto label_1c0044;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c0094u: goto label_1c0094;
        case 0x1c00a0u: goto label_1c00a0;
        case 0x1c00acu: goto label_1c00ac;
        case 0x1c00c0u: goto label_1c00c0;
        case 0x1c00d4u: goto label_1c00d4;
        default: break;
    }

    ctx->pc = 0x1c0034u;

    // 0x1c0034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c0034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0038: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c003c: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1C003Cu;
    SET_GPR_U32(ctx, 31, 0x1C0044u);
    ctx->pc = 0x1C0040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C003Cu;
    // 0x1c0040: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1C003Cu, 0x1C0044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0044u;
label_1c0044:
    // 0x1c0044: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1c0044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1c0048: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1c0048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c004c: 0x25083e60  addiu       $t0, $t0, 0x3E60
    ctx->pc = 0x1c004cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15968));
    // 0x1c0050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0054: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1c0054u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x213E60u));
    // 0x1c0058: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1c0058u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x213E70u));
    // 0x1c005c: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1c005cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x213E80u));
    // 0x1c0060: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1c0060u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x213E90u));
    // 0x1c0064: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c0064u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c0068: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c0068u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c006c: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1c006cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1c0070: 0x7ce20030  sq          $v0, 0x30($a3)
    ctx->pc = 0x1c0070u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
    // 0x1c0074: 0x79030040  lq          $v1, 0x40($t0)
    ctx->pc = 0x1c0074u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x213EA0u));
    // 0x1c0078: 0x79020050  lq          $v0, 0x50($t0)
    ctx->pc = 0x1c0078u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x213EB0u));
    // 0x1c007c: 0x7ce30040  sq          $v1, 0x40($a3)
    ctx->pc = 0x1c007cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 3));
    // 0x1c0080: 0xc070044  jal         func_1C0110
    ctx->pc = 0x1C0080u;
    SET_GPR_U32(ctx, 31, 0x1C0088u);
    ctx->pc = 0x1C0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0080u;
    // 0x1c0084: 0x7ce20050  sq          $v0, 0x50($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0110u, 0x1C0080u, 0x1C0088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0088u;
label_1c0088:
    // 0x1c0088: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1c0088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1c008c: 0xc070064  jal         func_1C0190
    ctx->pc = 0x1C008Cu;
    SET_GPR_U32(ctx, 31, 0x1C0094u);
    ctx->pc = 0x1C0090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C008Cu;
    // 0x1c0090: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0190u, 0x1C008Cu, 0x1C0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0094u;
label_1c0094:
    // 0x1c0094: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1c0094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1c0098: 0xc07007c  jal         func_1C01F0
    ctx->pc = 0x1C0098u;
    SET_GPR_U32(ctx, 31, 0x1C00A0u);
    ctx->pc = 0x1C009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0098u;
    // 0x1c009c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C01F0u, 0x1C0098u, 0x1C00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00A0u;
label_1c00a0:
    // 0x1c00a0: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1c00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x1c00a4: 0xc07009c  jal         func_1C0270
    ctx->pc = 0x1C00A4u;
    SET_GPR_U32(ctx, 31, 0x1C00ACu);
    ctx->pc = 0x1C00A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00A4u;
    // 0x1c00a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0270u, 0x1C00A4u, 0x1C00ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00ACu;
label_1c00ac:
    // 0x1c00ac: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1c00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1c00b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c00b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c00b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c00b8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C00B8u;
    SET_GPR_U32(ctx, 31, 0x1C00C0u);
    ctx->pc = 0x1C00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00B8u;
    // 0x1c00bc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C00B8u, 0x1C00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00C0u;
label_1c00c0:
    // 0x1c00c0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c00c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c00c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c00c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c8: 0x24a53bb0  addiu       $a1, $a1, 0x3BB0
    ctx->pc = 0x1c00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15280));
    // 0x1c00cc: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1C00CCu;
    SET_GPR_U32(ctx, 31, 0x1C00D4u);
    ctx->pc = 0x1C00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00CCu;
    // 0x1c00d0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1C00CCu, 0x1C00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00D4u;
label_1c00d4:
    // 0x1c00d4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c00d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c00d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00dc: 0x24a53d80  addiu       $a1, $a1, 0x3D80
    ctx->pc = 0x1c00dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
    // 0x1c00e0: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1C00E0u;
    SET_GPR_U32(ctx, 31, 0x1C00E8u);
    ctx->pc = 0x1C00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00E0u;
    // 0x1c00e4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1C00E0u, 0x1C00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00E8u;
}
