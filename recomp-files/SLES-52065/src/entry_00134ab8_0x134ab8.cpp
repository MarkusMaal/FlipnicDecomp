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

// Function: entry_00134ab8
// Address: 0x134ab8 - 0x134bec
void entry_00134ab8_0x134ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134ab8_0x134ab8");
#endif

    switch (ctx->pc) {
        case 0x134ac0u: goto label_134ac0;
        case 0x134accu: goto label_134acc;
        case 0x134ad4u: goto label_134ad4;
        case 0x134ae0u: goto label_134ae0;
        case 0x134af0u: goto label_134af0;
        case 0x134af8u: goto label_134af8;
        case 0x134b08u: goto label_134b08;
        case 0x134b14u: goto label_134b14;
        case 0x134b1cu: goto label_134b1c;
        case 0x134b30u: goto label_134b30;
        case 0x134b44u: goto label_134b44;
        case 0x134b74u: goto label_134b74;
        case 0x134b90u: goto label_134b90;
        case 0x134ba0u: goto label_134ba0;
        case 0x134bb4u: goto label_134bb4;
        case 0x134bc8u: goto label_134bc8;
        case 0x134be4u: goto label_134be4;
        default: break;
    }

    ctx->pc = 0x134ab8u;

label_134ab8:
    // 0x134ab8: 0xc080702  jal         func_201C08
label_134abc:
    if (ctx->pc == 0x134ABCu) {
        ctx->pc = 0x134ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AB8u;
        // 0x134abc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AC0u;
        goto label_134ac0;
    }
    ctx->pc = 0x134AB8u;
    SET_GPR_U32(ctx, 31, 0x134AC0u);
    ctx->pc = 0x134ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AB8u;
    // 0x134abc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134AB8u, 0x134AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AC0u;
label_134ac0:
    // 0x134ac0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_134ac4:
    // 0x134ac4: 0xc048920  jal         func_122480
label_134ac8:
    if (ctx->pc == 0x134AC8u) {
        ctx->pc = 0x134AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AC4u;
        // 0x134ac8: 0x27a5040c  addiu       $a1, $sp, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134ACCu;
        goto label_134acc;
    }
    ctx->pc = 0x134AC4u;
    SET_GPR_U32(ctx, 31, 0x134ACCu);
    ctx->pc = 0x134AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AC4u;
    // 0x134ac8: 0x27a5040c  addiu       $a1, $sp, 0x40C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x134AC4u, 0x134ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ACCu;
label_134acc:
    // 0x134acc: 0xc04c254  jal         func_130950
label_134ad0:
    if (ctx->pc == 0x134AD0u) {
        ctx->pc = 0x134AD4u;
        goto label_134ad4;
    }
    ctx->pc = 0x134ACCu;
    SET_GPR_U32(ctx, 31, 0x134AD4u);
    ctx->pc = 0x130950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130950u, 0x134ACCu, 0x134AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AD4u;
label_134ad4:
    // 0x134ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134ad8:
    // 0x134ad8: 0xc080748  jal         func_201D20
label_134adc:
    if (ctx->pc == 0x134ADCu) {
        ctx->pc = 0x134ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AD8u;
        // 0x134adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AE0u;
        goto label_134ae0;
    }
    ctx->pc = 0x134AD8u;
    SET_GPR_U32(ctx, 31, 0x134AE0u);
    ctx->pc = 0x134ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AD8u;
    // 0x134adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x134AD8u, 0x134AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AE0u;
label_134ae0:
    // 0x134ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134ae4:
    // 0x134ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x134ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134ae8:
    // 0x134ae8: 0xc048884  jal         func_122210
label_134aec:
    if (ctx->pc == 0x134AECu) {
        ctx->pc = 0x134AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AE8u;
        // 0x134aec: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AF0u;
        goto label_134af0;
    }
    ctx->pc = 0x134AE8u;
    SET_GPR_U32(ctx, 31, 0x134AF0u);
    ctx->pc = 0x134AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AE8u;
    // 0x134aec: 0x27a40400  addiu       $a0, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x134AE8u, 0x134AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AF0u;
label_134af0:
    // 0x134af0: 0xc080748  jal         func_201D20
label_134af4:
    if (ctx->pc == 0x134AF4u) {
        ctx->pc = 0x134AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AF0u;
        // 0x134af4: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134AF8u;
        goto label_134af8;
    }
    ctx->pc = 0x134AF0u;
    SET_GPR_U32(ctx, 31, 0x134AF8u);
    ctx->pc = 0x134AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AF0u;
    // 0x134af4: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x134AF0u, 0x134AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AF8u;
label_134af8:
    // 0x134af8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x134af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134afc:
    // 0x134afc: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x134afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_134b00:
    // 0x134b00: 0xc049c74  jal         func_1271D0
label_134b04:
    if (ctx->pc == 0x134B04u) {
        ctx->pc = 0x134B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B00u;
        // 0x134b04: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B08u;
        goto label_134b08;
    }
    ctx->pc = 0x134B00u;
    SET_GPR_U32(ctx, 31, 0x134B08u);
    ctx->pc = 0x134B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B00u;
    // 0x134b04: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x134B00u, 0x134B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B08u;
label_134b08:
    // 0x134b08: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_134b0c:
    // 0x134b0c: 0xc04619c  jal         func_118670
label_134b10:
    if (ctx->pc == 0x134B10u) {
        ctx->pc = 0x134B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B0Cu;
        // 0x134b10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B14u;
        goto label_134b14;
    }
    ctx->pc = 0x134B0Cu;
    SET_GPR_U32(ctx, 31, 0x134B14u);
    ctx->pc = 0x134B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B0Cu;
    // 0x134b10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x134B0Cu, 0x134B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B14u;
label_134b14:
    // 0x134b14: 0xc04c0e0  jal         func_130380
label_134b18:
    if (ctx->pc == 0x134B18u) {
        ctx->pc = 0x134B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B14u;
        // 0x134b18: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B1Cu;
        goto label_134b1c;
    }
    ctx->pc = 0x134B14u;
    SET_GPR_U32(ctx, 31, 0x134B1Cu);
    ctx->pc = 0x134B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B14u;
    // 0x134b18: 0x27a402a0  addiu       $a0, $sp, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x134B14u, 0x134B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B1Cu;
label_134b1c:
    // 0x134b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134b20:
    // 0x134b20: 0x12000055  beqz        $s0, . + 4 + (0x55 << 2)
label_134b24:
    if (ctx->pc == 0x134B24u) {
        ctx->pc = 0x134B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B20u;
        // 0x134b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B28u;
        goto label_134b28;
    }
    ctx->pc = 0x134B20u;
    {
        const bool branch_taken_0x134b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B20u;
        // 0x134b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b20) {
            ctx->pc = 0x134C78u;
            return;
        }
    }
    ctx->pc = 0x134B28u;
label_134b28:
    // 0x134b28: 0xc04c558  jal         func_131560
label_134b2c:
    if (ctx->pc == 0x134B2Cu) {
        ctx->pc = 0x134B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B28u;
        // 0x134b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B30u;
        goto label_134b30;
    }
    ctx->pc = 0x134B28u;
    SET_GPR_U32(ctx, 31, 0x134B30u);
    ctx->pc = 0x134B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B28u;
    // 0x134b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x134B28u, 0x134B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B30u;
label_134b30:
    // 0x134b30: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x134b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_134b34:
    // 0x134b34: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x134b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_134b38:
    // 0x134b38: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x134b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_134b3c:
    // 0x134b3c: 0xc080702  jal         func_201C08
label_134b40:
    if (ctx->pc == 0x134B40u) {
        ctx->pc = 0x134B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B3Cu;
        // 0x134b40: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B44u;
        goto label_134b44;
    }
    ctx->pc = 0x134B3Cu;
    SET_GPR_U32(ctx, 31, 0x134B44u);
    ctx->pc = 0x134B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B3Cu;
    // 0x134b40: 0x27a403a0  addiu       $a0, $sp, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134B3Cu, 0x134B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B44u;
label_134b44:
    // 0x134b44: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x134b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_134b48:
    // 0x134b48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134b4c:
    // 0x134b4c: 0x2442eee0  addiu       $v0, $v0, -0x1120
    ctx->pc = 0x134b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962912));
label_134b50:
    // 0x134b50: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_134b54:
    // 0x134b54: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x134b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_134b58:
    // 0x134b58: 0x24a5eee8  addiu       $a1, $a1, -0x1118
    ctx->pc = 0x134b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
label_134b5c:
    // 0x134b5c: 0xae5000a4  sw          $s0, 0xA4($s2)
    ctx->pc = 0x134b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 16));
label_134b60:
    // 0x134b60: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x134b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134b64:
    // 0x134b64: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134b68:
    // 0x134b68: 0x8c630170  lw          $v1, 0x170($v1)
    ctx->pc = 0x134b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
label_134b6c:
    // 0x134b6c: 0xc080874  jal         func_2021D0
label_134b70:
    if (ctx->pc == 0x134B70u) {
        ctx->pc = 0x134B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B6Cu;
        // 0x134b70: 0xac430170  sw          $v1, 0x170($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B74u;
        goto label_134b74;
    }
    ctx->pc = 0x134B6Cu;
    SET_GPR_U32(ctx, 31, 0x134B74u);
    ctx->pc = 0x134B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B6Cu;
    // 0x134b70: 0xac430170  sw          $v1, 0x170($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134B6Cu, 0x134B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B74u;
label_134b74:
    // 0x134b74: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_134b78:
    if (ctx->pc == 0x134B78u) {
        ctx->pc = 0x134B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B74u;
        // 0x134b78: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B7Cu;
        goto label_134b7c;
    }
    ctx->pc = 0x134B74u;
    {
        const bool branch_taken_0x134b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B74u;
        // 0x134b78: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b74) {
            ctx->pc = 0x134C1Cu;
            return;
        }
    }
    ctx->pc = 0x134B7Cu;
label_134b7c:
    // 0x134b7c: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_134b80:
    // 0x134b80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x134b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134b84:
    // 0x134b84: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x134b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_134b88:
    // 0x134b88: 0x320f809  jalr        $t9
label_134b8c:
    if (ctx->pc == 0x134B8Cu) {
        ctx->pc = 0x134B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B88u;
        // 0x134b8c: 0x8e4500a4  lw          $a1, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134B90u;
        goto label_134b90;
    }
    ctx->pc = 0x134B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x134B90u);
        ctx->pc = 0x134B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B88u;
        // 0x134b8c: 0x8e4500a4  lw          $a1, 0xA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B88u, 0x134B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134B90u;
label_134b90:
    // 0x134b90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134b94:
    // 0x134b94: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_134b98:
    // 0x134b98: 0xc080874  jal         func_2021D0
label_134b9c:
    if (ctx->pc == 0x134B9Cu) {
        ctx->pc = 0x134B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B98u;
        // 0x134b9c: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BA0u;
        goto label_134ba0;
    }
    ctx->pc = 0x134B98u;
    SET_GPR_U32(ctx, 31, 0x134BA0u);
    ctx->pc = 0x134B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B98u;
    // 0x134b9c: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134B98u, 0x134BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BA0u;
label_134ba0:
    // 0x134ba0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_134ba4:
    if (ctx->pc == 0x134BA4u) {
        ctx->pc = 0x134BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BA0u;
        // 0x134ba4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BA8u;
        goto label_134ba8;
    }
    ctx->pc = 0x134BA0u;
    {
        const bool branch_taken_0x134ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BA0u;
        // 0x134ba4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ba0) {
            ctx->pc = 0x134C04u;
            return;
        }
    }
    ctx->pc = 0x134BA8u;
label_134ba8:
    // 0x134ba8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x134ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_134bac:
    // 0x134bac: 0xc080874  jal         func_2021D0
label_134bb0:
    if (ctx->pc == 0x134BB0u) {
        ctx->pc = 0x134BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BACu;
        // 0x134bb0: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BB4u;
        goto label_134bb4;
    }
    ctx->pc = 0x134BACu;
    SET_GPR_U32(ctx, 31, 0x134BB4u);
    ctx->pc = 0x134BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BACu;
    // 0x134bb0: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134BACu, 0x134BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BB4u;
label_134bb4:
    // 0x134bb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_134bb8:
    // 0x134bb8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x134bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_134bbc:
    // 0x134bbc: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x134bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
label_134bc0:
    // 0x134bc0: 0xc0805e6  jal         func_201798
label_134bc4:
    if (ctx->pc == 0x134BC4u) {
        ctx->pc = 0x134BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BC0u;
        // 0x134bc4: 0x27a60404  addiu       $a2, $sp, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BC8u;
        goto label_134bc8;
    }
    ctx->pc = 0x134BC0u;
    SET_GPR_U32(ctx, 31, 0x134BC8u);
    ctx->pc = 0x134BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BC0u;
    // 0x134bc4: 0x27a60404  addiu       $a2, $sp, 0x404 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x134BC0u, 0x134BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BC8u;
label_134bc8:
    // 0x134bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134bcc:
    // 0x134bcc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_134bd0:
    if (ctx->pc == 0x134BD0u) {
        ctx->pc = 0x134BD4u;
        goto label_134bd4;
    }
    ctx->pc = 0x134BCCu;
    {
        const bool branch_taken_0x134bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x134bcc) {
            ctx->pc = 0x134BECu;
            return;
        }
    }
    ctx->pc = 0x134BD4u;
label_134bd4:
    // 0x134bd4: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x134bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_134bd8:
    // 0x134bd8: 0x8fa60404  lw          $a2, 0x404($sp)
    ctx->pc = 0x134bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_134bdc:
    // 0x134bdc: 0xc04f75c  jal         func_13DD70
label_134be0:
    if (ctx->pc == 0x134BE0u) {
        ctx->pc = 0x134BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BDCu;
        // 0x134be0: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BE4u;
        goto label_134be4;
    }
    ctx->pc = 0x134BDCu;
    SET_GPR_U32(ctx, 31, 0x134BE4u);
    ctx->pc = 0x134BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BDCu;
    // 0x134be0: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD70u, 0x134BDCu, 0x134BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BE4u;
label_134be4:
    // 0x134be4: 0x10000026  b           . + 4 + (0x26 << 2)
label_134be8:
    if (ctx->pc == 0x134BE8u) {
        ctx->pc = 0x134BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BE4u;
        // 0x134be8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134BECu;
        goto label_fallthrough_0x134be4;
    }
    ctx->pc = 0x134BE4u;
    {
        const bool branch_taken_0x134be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BE4u;
        // 0x134be8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134be4) {
            ctx->pc = 0x134C80u;
            return;
        }
    }
label_fallthrough_0x134be4:
    ctx->pc = 0x134BECu;
}
