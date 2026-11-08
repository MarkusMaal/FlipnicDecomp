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

// Function: entry_00115008
// Address: 0x115008 - 0x1150e4
void entry_00115008_0x115008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115008_0x115008");
#endif

    switch (ctx->pc) {
        case 0x115024u: goto label_115024;
        case 0x115058u: goto label_115058;
        case 0x115084u: goto label_115084;
        case 0x11509cu: goto label_11509c;
        case 0x1150b0u: goto label_1150b0;
        case 0x1150c8u: goto label_1150c8;
        default: break;
    }

    ctx->pc = 0x115008u;

label_115008:
    // 0x115008: 0x938282a8  lbu         $v0, -0x7D58($gp)
    ctx->pc = 0x115008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935208)));
label_11500c:
    // 0x11500c: 0x27a30134  addiu       $v1, $sp, 0x134
    ctx->pc = 0x11500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_115010:
    // 0x115010: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115014:
    // 0x115014: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115018:
    // 0x115018: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x115018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_11501c:
    // 0x11501c: 0x320f809  jalr        $t9
label_115020:
    if (ctx->pc == 0x115020u) {
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11501Cu;
        // 0x115020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115024u;
        goto label_115024;
    }
    ctx->pc = 0x11501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115024u);
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11501Cu;
        // 0x115020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11501Cu, 0x115024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115024u;
label_115024:
    // 0x115024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115028:
    // 0x115028: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x115028u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_11502c:
    // 0x11502c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x11502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_115030:
    // 0x115030: 0x104002d3  beqz        $v0, . + 4 + (0x2D3 << 2)
label_115034:
    if (ctx->pc == 0x115034u) {
        ctx->pc = 0x115038u;
        goto label_115038;
    }
    ctx->pc = 0x115030u;
    {
        const bool branch_taken_0x115030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115030) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x115038u;
label_115038:
    // 0x115038: 0x938282ac  lbu         $v0, -0x7D54($gp)
    ctx->pc = 0x115038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935212)));
label_11503c:
    // 0x11503c: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x11503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_115040:
    // 0x115040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115044:
    // 0x115044: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115048:
    // 0x115048: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11504c:
    // 0x11504c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x11504cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115050:
    // 0x115050: 0x320f809  jalr        $t9
label_115054:
    if (ctx->pc == 0x115054u) {
        ctx->pc = 0x115054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115050u;
        // 0x115054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115058u;
        goto label_115058;
    }
    ctx->pc = 0x115050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115058u);
        ctx->pc = 0x115054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115050u;
        // 0x115054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115050u, 0x115058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115058u;
label_115058:
    // 0x115058: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x115058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_11505c:
    // 0x11505c: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x11505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_115060:
    // 0x115060: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x115060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_115064:
    // 0x115064: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_115068:
    if (ctx->pc == 0x115068u) {
        ctx->pc = 0x11506Cu;
        goto label_11506c;
    }
    ctx->pc = 0x115064u;
    {
        const bool branch_taken_0x115064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115064) {
            ctx->pc = 0x1150E4u;
            return;
        }
    }
    ctx->pc = 0x11506Cu;
label_11506c:
    // 0x11506c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x11506cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_115070:
    // 0x115070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115074:
    // 0x115074: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x115074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_115078:
    // 0x115078: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x115078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_11507c:
    // 0x11507c: 0x320f809  jalr        $t9
label_115080:
    if (ctx->pc == 0x115080u) {
        ctx->pc = 0x115080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11507Cu;
        // 0x115080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115084u;
        goto label_115084;
    }
    ctx->pc = 0x11507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115084u);
        ctx->pc = 0x115080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11507Cu;
        // 0x115080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11507Cu, 0x115084u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115084u;
label_115084:
    // 0x115084: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x115084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115088:
    // 0x115088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11508c:
    // 0x11508c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115090:
    // 0x115090: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x115090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_115094:
    // 0x115094: 0x320f809  jalr        $t9
label_115098:
    if (ctx->pc == 0x115098u) {
        ctx->pc = 0x115098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115094u;
        // 0x115098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11509Cu;
        goto label_11509c;
    }
    ctx->pc = 0x115094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11509Cu);
        ctx->pc = 0x115098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115094u;
        // 0x115098: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115094u, 0x11509Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11509Cu;
label_11509c:
    // 0x11509c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x11509cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1150a0:
    // 0x1150a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1150a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1150a4:
    // 0x1150a4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1150a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1150a8:
    // 0x1150a8: 0x320f809  jalr        $t9
label_1150ac:
    if (ctx->pc == 0x1150ACu) {
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1150B0u;
        goto label_1150b0;
    }
    ctx->pc = 0x1150A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1150B0u);
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1150A8u, 0x1150B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1150B0u;
label_1150b0:
    // 0x1150b0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1150b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1150b4:
    // 0x1150b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1150b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1150b8:
    // 0x1150b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1150b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1150bc:
    // 0x1150bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1150bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1150c0:
    // 0x1150c0: 0x320f809  jalr        $t9
label_1150c4:
    if (ctx->pc == 0x1150C4u) {
        ctx->pc = 0x1150C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150C0u;
        // 0x1150c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1150C8u;
        goto label_1150c8;
    }
    ctx->pc = 0x1150C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1150C8u);
        ctx->pc = 0x1150C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150C0u;
        // 0x1150c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1150C0u, 0x1150C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1150C8u;
label_1150c8:
    // 0x1150c8: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x1150c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_1150cc:
    // 0x1150cc: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x1150ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1150d0:
    // 0x1150d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1150d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1150d4:
    // 0x1150d4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1150d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1150d8:
    // 0x1150d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1150d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1150dc:
    // 0x1150dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1150dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1150e0:
    // 0x1150e0: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x1150e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1150e4u;
}
