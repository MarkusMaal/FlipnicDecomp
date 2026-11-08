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

// Function: FUN_0013ff00
// Address: 0x13ff00 - 0x140150
void FUN_0013ff00_0x13ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ff00_0x13ff00");
#endif

    switch (ctx->pc) {
        case 0x13ff38u: goto label_13ff38;
        case 0x13ff44u: goto label_13ff44;
        case 0x13ff64u: goto label_13ff64;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ff90u: goto label_13ff90;
        case 0x13ffa4u: goto label_13ffa4;
        case 0x13ffd8u: goto label_13ffd8;
        case 0x13fffcu: goto label_13fffc;
        case 0x140038u: goto label_140038;
        case 0x140044u: goto label_140044;
        case 0x14007cu: goto label_14007c;
        case 0x140088u: goto label_140088;
        case 0x1400b4u: goto label_1400b4;
        case 0x140100u: goto label_140100;
        default: break;
    }

    ctx->pc = 0x13ff00u;

    // 0x13ff00: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x13ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x13ff04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13ff08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13ff0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13ff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13ff10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13ff10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13ff14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13ff18: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13ff18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ff20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13ff20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ff28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ff2c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x13ff2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13ff30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff34: 0x2258823  subu        $s1, $s1, $a1
    ctx->pc = 0x13ff34u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_13ff38:
    // 0x13ff38: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13ff3c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13FF3Cu;
    SET_GPR_U32(ctx, 31, 0x13FF44u);
    ctx->pc = 0x13FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF3Cu;
    // 0x13ff40: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13FF3Cu, 0x13FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF44u;
label_13ff44:
    // 0x13ff44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13ff44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff48: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FF48u;
    {
        const bool branch_taken_0x13ff48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF48u;
        // 0x13ff4c: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff48) {
            ctx->pc = 0x13FF6Cu;
            goto label_13ff6c;
        }
    }
    ctx->pc = 0x13FF50u;
    // 0x13ff50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13ff54: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x13ff58: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13ff5c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13FF5Cu;
    SET_GPR_U32(ctx, 31, 0x13FF64u);
    ctx->pc = 0x13FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF5Cu;
    // 0x13ff60: 0x24a5f050  addiu       $a1, $a1, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13FF5Cu, 0x13FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF64u;
label_13ff64:
    // 0x13ff64: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13FF64u;
    SET_GPR_U32(ctx, 31, 0x13FF6Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13FF64u, 0x13FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF6Cu;
label_13ff6c:
    // 0x13ff6c: 0x0  nop
    ctx->pc = 0x13ff6cu;
    // NOP
    // 0x13ff70: 0x16000050  bnez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x13FF70u;
    {
        const bool branch_taken_0x13ff70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ff70) {
            ctx->pc = 0x1400B4u;
            goto label_1400b4;
        }
    }
    ctx->pc = 0x13FF78u;
    // 0x13ff78: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13ff7c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13ff80: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x13FF80u;
    {
        const bool branch_taken_0x13ff80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF80u;
        // 0x13ff84: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff80) {
            ctx->pc = 0x1400B4u;
            goto label_1400b4;
        }
    }
    ctx->pc = 0x13FF88u;
    // 0x13ff88: 0xc05023c  jal         func_1408F0
    ctx->pc = 0x13FF88u;
    SET_GPR_U32(ctx, 31, 0x13FF90u);
    ctx->pc = 0x13FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF88u;
    // 0x13ff8c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1408F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1408F0u, 0x13FF88u, 0x13FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FF90u;
label_13ff90:
    // 0x13ff90: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x13ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ff94: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x13ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x13ff98: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x13ff98u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13ff9c: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x13FF9Cu;
    SET_GPR_U32(ctx, 31, 0x13FFA4u);
    ctx->pc = 0x13FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FF9Cu;
    // 0x13ffa0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x13FF9Cu, 0x13FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFA4u;
label_13ffa4:
    // 0x13ffa4: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13ffa8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13ffac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ffb0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ffb4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x13ffb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13ffb8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FFB8u;
    {
        const bool branch_taken_0x13ffb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffb8) {
            ctx->pc = 0x13FFE0u;
            goto label_13ffe0;
        }
    }
    ctx->pc = 0x13FFC0u;
    // 0x13ffc0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ffc4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13ffc8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13ffcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13ffccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ffd0: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13FFD0u;
    SET_GPR_U32(ctx, 31, 0x13FFD8u);
    ctx->pc = 0x13FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFD0u;
    // 0x13ffd4: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13FFD0u, 0x13FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFD8u;
label_13ffd8:
    // 0x13ffd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13FFD8u;
    {
        const bool branch_taken_0x13ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffd8) {
            ctx->pc = 0x13FFFCu;
            goto label_13fffc;
        }
    }
    ctx->pc = 0x13FFE0u;
label_13ffe0:
    // 0x13ffe0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ffe4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ffe8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13ffec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13fff0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13fff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fff4: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13FFF4u;
    SET_GPR_U32(ctx, 31, 0x13FFFCu);
    ctx->pc = 0x13FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFF4u;
    // 0x13fff8: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13FFF4u, 0x13FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFFCu;
label_13fffc:
    // 0x13fffc: 0x0  nop
    ctx->pc = 0x13fffcu;
    // NOP
    // 0x140000: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x140004: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x140008: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x140008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x14000c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x14000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x140010: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x140010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140018: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x140018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x14001c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x14001cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x140020: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x140020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x140024: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x140024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x140028: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x140028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x14002c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14002cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140030: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x140030u;
    SET_GPR_U32(ctx, 31, 0x140038u);
    ctx->pc = 0x140034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140030u;
    // 0x140034: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x140030u, 0x140038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140038u;
label_140038:
    // 0x140038: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x140038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14003c: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14003Cu;
    SET_GPR_U32(ctx, 31, 0x140044u);
    ctx->pc = 0x140040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14003Cu;
    // 0x140040: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14003Cu, 0x140044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140044u;
label_140044:
    // 0x140044: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x140044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x140048: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x14004c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x14004cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x140050: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x140050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140054: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x140054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x140058: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x140058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14005c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x14005cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x140060: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x140060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x140064: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x140064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x140068: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x140068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14006c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140070: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x140070u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x140074: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x140074u;
    SET_GPR_U32(ctx, 31, 0x14007Cu);
    ctx->pc = 0x140078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140074u;
    // 0x140078: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x140074u, 0x14007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14007Cu;
label_14007c:
    // 0x14007c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x140080: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x140080u;
    SET_GPR_U32(ctx, 31, 0x140088u);
    ctx->pc = 0x140084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140080u;
    // 0x140084: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x140080u, 0x140088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140088u;
label_140088:
    // 0x140088: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x140088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14008c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x14008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x140090: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x140090u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140094: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x140094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x140098: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x140098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14009c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14009cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1400a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1400a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1400a4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1400a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1400a8: 0x83a7011c  lb          $a3, 0x11C($sp)
    ctx->pc = 0x1400a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1400ac: 0xc050198  jal         func_140660
    ctx->pc = 0x1400ACu;
    SET_GPR_U32(ctx, 31, 0x1400B4u);
    ctx->pc = 0x1400B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400ACu;
    // 0x1400b0: 0x26a40004  addiu       $a0, $s5, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140660u, 0x1400ACu, 0x1400B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1400B4u;
label_1400b4:
    // 0x1400b4: 0x0  nop
    ctx->pc = 0x1400b4u;
    // NOP
    // 0x1400b8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1400b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1400bc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1400bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1400c0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1400c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1400c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1400c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1400cc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1400ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1400d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1400D0u;
    {
        const bool branch_taken_0x1400d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1400d0) {
            ctx->pc = 0x1400DCu;
            goto label_1400dc;
        }
    }
    ctx->pc = 0x1400D8u;
    // 0x1400d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1400d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1400dc:
    // 0x1400dc: 0x0  nop
    ctx->pc = 0x1400dcu;
    // NOP
    // 0x1400e0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1400e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1400e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1400e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1400e8: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x1400e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1400ec: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1400ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1400f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1400f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1400f4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1400f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1400f8: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1400F8u;
    SET_GPR_U32(ctx, 31, 0x140100u);
    ctx->pc = 0x1400FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400F8u;
    // 0x1400fc: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1400F8u, 0x140100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140100u;
label_140100:
    // 0x140100: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x140100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x140104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140108: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x140108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x14010c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x140110: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x140110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x140114: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x140114u;
    {
        const bool branch_taken_0x140114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140114) {
            ctx->pc = 0x140124u;
            goto label_140124;
        }
    }
    ctx->pc = 0x14011Cu;
    // 0x14011c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x14011Cu;
    {
        const bool branch_taken_0x14011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14011Cu;
        // 0x140120: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14011c) {
            ctx->pc = 0x13FF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ff38;
        }
    }
    ctx->pc = 0x140124u;
label_140124:
    // 0x140124: 0x0  nop
    ctx->pc = 0x140124u;
    // NOP
    // 0x140128: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x140128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14012c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14012cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140130: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140134: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140134u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140138: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14013c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14013cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140148: 0x3e00008  jr          $ra
    ctx->pc = 0x140148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140148u;
        // 0x14014c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140150u;
}
