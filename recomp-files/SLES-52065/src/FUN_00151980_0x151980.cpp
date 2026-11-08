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

// Function: FUN_00151980
// Address: 0x151980 - 0x151a7c
void FUN_00151980_0x151980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151980_0x151980");
#endif

    switch (ctx->pc) {
        case 0x151980u: goto label_151980;
        case 0x151984u: goto label_151984;
        case 0x151988u: goto label_151988;
        case 0x15198cu: goto label_15198c;
        case 0x151990u: goto label_151990;
        case 0x151994u: goto label_151994;
        case 0x151998u: goto label_151998;
        case 0x15199cu: goto label_15199c;
        case 0x1519a0u: goto label_1519a0;
        case 0x1519a4u: goto label_1519a4;
        case 0x1519a8u: goto label_1519a8;
        case 0x1519acu: goto label_1519ac;
        case 0x1519b0u: goto label_1519b0;
        case 0x1519b4u: goto label_1519b4;
        case 0x1519b8u: goto label_1519b8;
        case 0x1519bcu: goto label_1519bc;
        case 0x1519c0u: goto label_1519c0;
        case 0x1519c4u: goto label_1519c4;
        case 0x1519c8u: goto label_1519c8;
        case 0x1519ccu: goto label_1519cc;
        case 0x1519d0u: goto label_1519d0;
        case 0x1519d4u: goto label_1519d4;
        case 0x1519d8u: goto label_1519d8;
        case 0x1519dcu: goto label_1519dc;
        case 0x1519e0u: goto label_1519e0;
        case 0x1519e4u: goto label_1519e4;
        case 0x1519e8u: goto label_1519e8;
        case 0x1519ecu: goto label_1519ec;
        case 0x1519f0u: goto label_1519f0;
        case 0x1519f4u: goto label_1519f4;
        case 0x1519f8u: goto label_1519f8;
        case 0x1519fcu: goto label_1519fc;
        case 0x151a00u: goto label_151a00;
        case 0x151a04u: goto label_151a04;
        case 0x151a08u: goto label_151a08;
        case 0x151a0cu: goto label_151a0c;
        case 0x151a10u: goto label_151a10;
        case 0x151a14u: goto label_151a14;
        case 0x151a18u: goto label_151a18;
        case 0x151a1cu: goto label_151a1c;
        case 0x151a20u: goto label_151a20;
        case 0x151a24u: goto label_151a24;
        case 0x151a28u: goto label_151a28;
        case 0x151a2cu: goto label_151a2c;
        case 0x151a30u: goto label_151a30;
        case 0x151a34u: goto label_151a34;
        case 0x151a38u: goto label_151a38;
        case 0x151a3cu: goto label_151a3c;
        case 0x151a40u: goto label_151a40;
        case 0x151a44u: goto label_151a44;
        case 0x151a48u: goto label_151a48;
        case 0x151a4cu: goto label_151a4c;
        case 0x151a50u: goto label_151a50;
        case 0x151a54u: goto label_151a54;
        case 0x151a58u: goto label_151a58;
        case 0x151a5cu: goto label_151a5c;
        case 0x151a60u: goto label_151a60;
        case 0x151a64u: goto label_151a64;
        case 0x151a68u: goto label_151a68;
        case 0x151a6cu: goto label_151a6c;
        case 0x151a70u: goto label_151a70;
        case 0x151a74u: goto label_151a74;
        case 0x151a78u: goto label_151a78;
        default: break;
    }

    ctx->pc = 0x151980u;

label_151980:
    // 0x151980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_151984:
    // 0x151984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_151988:
    // 0x151988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15198c:
    // 0x15198c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151990:
    // 0x151990: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_151994:
    // 0x151994: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x151994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_151998:
    // 0x151998: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15199c:
    // 0x15199c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1519a0:
    if (ctx->pc == 0x1519A0u) {
        ctx->pc = 0x1519A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15199Cu;
        // 0x1519a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519A4u;
        goto label_1519a4;
    }
    ctx->pc = 0x15199Cu;
    {
        const bool branch_taken_0x15199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15199Cu;
        // 0x1519a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15199c) {
            ctx->pc = 0x1519B4u;
            goto label_1519b4;
        }
    }
    ctx->pc = 0x1519A4u;
label_1519a4:
    // 0x1519a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1519a8:
    // 0x1519a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1519a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1519ac:
    // 0x1519ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1519acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1519b0:
    // 0x1519b0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1519b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1519b4:
    // 0x1519b4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1519b8:
    if (ctx->pc == 0x1519B8u) {
        ctx->pc = 0x1519BCu;
        goto label_1519bc;
    }
    ctx->pc = 0x1519B4u;
    {
        const bool branch_taken_0x1519b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1519b4) {
            ctx->pc = 0x1519D8u;
            goto label_1519d8;
        }
    }
    ctx->pc = 0x1519BCu;
label_1519bc:
    // 0x1519bc: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x1519bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1519c0:
    // 0x1519c0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1519c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1519c4:
    // 0x1519c4: 0x320f809  jalr        $t9
label_1519c8:
    if (ctx->pc == 0x1519C8u) {
        ctx->pc = 0x1519C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519C4u;
        // 0x1519c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519CCu;
        goto label_1519cc;
    }
    ctx->pc = 0x1519C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1519CCu);
        ctx->pc = 0x1519C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519C4u;
        // 0x1519c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519C4u, 0x1519CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1519CCu;
label_1519cc:
    // 0x1519cc: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x1519ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1519d0:
    // 0x1519d0: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_1519d4:
    if (ctx->pc == 0x1519D4u) {
        ctx->pc = 0x1519D8u;
        goto label_1519d8;
    }
    ctx->pc = 0x1519D0u;
    {
        const bool branch_taken_0x1519d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1519d0) {
            ctx->pc = 0x1519BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519bc;
        }
    }
    ctx->pc = 0x1519D8u;
label_1519d8:
    // 0x1519d8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1519d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1519dc:
    // 0x1519dc: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1519e0:
    // 0x1519e0: 0x320f809  jalr        $t9
label_1519e4:
    if (ctx->pc == 0x1519E4u) {
        ctx->pc = 0x1519E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519E0u;
        // 0x1519e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519E8u;
        goto label_1519e8;
    }
    ctx->pc = 0x1519E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1519E8u);
        ctx->pc = 0x1519E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519E0u;
        // 0x1519e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519E0u, 0x1519E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1519E8u;
label_1519e8:
    // 0x1519e8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1519e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1519ec:
    // 0x1519ec: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1519ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1519f0:
    // 0x1519f0: 0x320f809  jalr        $t9
label_1519f4:
    if (ctx->pc == 0x1519F4u) {
        ctx->pc = 0x1519F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519F0u;
        // 0x1519f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1519F8u;
        goto label_1519f8;
    }
    ctx->pc = 0x1519F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1519F8u);
        ctx->pc = 0x1519F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519F0u;
        // 0x1519f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519F0u, 0x1519F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1519F8u;
label_1519f8:
    // 0x1519f8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1519fc:
    // 0x1519fc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_151a00:
    // 0x151a00: 0x320f809  jalr        $t9
label_151a04:
    if (ctx->pc == 0x151A04u) {
        ctx->pc = 0x151A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A00u;
        // 0x151a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A08u;
        goto label_151a08;
    }
    ctx->pc = 0x151A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151A08u);
        ctx->pc = 0x151A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A00u;
        // 0x151a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A00u, 0x151A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151A08u;
label_151a08:
    // 0x151a08: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x151a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_151a0c:
    // 0x151a0c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_151a10:
    if (ctx->pc == 0x151A10u) {
        ctx->pc = 0x151A14u;
        goto label_151a14;
    }
    ctx->pc = 0x151A0Cu;
    {
        const bool branch_taken_0x151a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a0c) {
            ctx->pc = 0x151A4Cu;
            goto label_151a4c;
        }
    }
    ctx->pc = 0x151A14u;
label_151a14:
    // 0x151a14: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_151a18:
    if (ctx->pc == 0x151A18u) {
        ctx->pc = 0x151A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A14u;
        // 0x151a18: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A1Cu;
        goto label_151a1c;
    }
    ctx->pc = 0x151A14u;
    {
        const bool branch_taken_0x151a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A14u;
        // 0x151a18: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a14) {
            ctx->pc = 0x151A4Cu;
            goto label_151a4c;
        }
    }
    ctx->pc = 0x151A1Cu;
label_151a1c:
    // 0x151a1c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_151a20:
    if (ctx->pc == 0x151A20u) {
        ctx->pc = 0x151A24u;
        goto label_151a24;
    }
    ctx->pc = 0x151A1Cu;
    {
        const bool branch_taken_0x151a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a1c) {
            ctx->pc = 0x1519D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519d8;
        }
    }
    ctx->pc = 0x151A24u;
label_151a24:
    // 0x151a24: 0x0  nop
    ctx->pc = 0x151a24u;
    // NOP
label_151a28:
    // 0x151a28: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x151a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_151a2c:
    // 0x151a2c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x151a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_151a30:
    // 0x151a30: 0x320f809  jalr        $t9
label_151a34:
    if (ctx->pc == 0x151A34u) {
        ctx->pc = 0x151A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A30u;
        // 0x151a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A38u;
        goto label_151a38;
    }
    ctx->pc = 0x151A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151A38u);
        ctx->pc = 0x151A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A30u;
        // 0x151a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A30u, 0x151A38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151A38u;
label_151a38:
    // 0x151a38: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x151a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_151a3c:
    // 0x151a3c: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_151a40:
    if (ctx->pc == 0x151A40u) {
        ctx->pc = 0x151A44u;
        goto label_151a44;
    }
    ctx->pc = 0x151A3Cu;
    {
        const bool branch_taken_0x151a3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a3c) {
            ctx->pc = 0x151A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151a24;
        }
    }
    ctx->pc = 0x151A44u;
label_151a44:
    // 0x151a44: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_151a48:
    if (ctx->pc == 0x151A48u) {
        ctx->pc = 0x151A4Cu;
        goto label_151a4c;
    }
    ctx->pc = 0x151A44u;
    {
        const bool branch_taken_0x151a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a44) {
            ctx->pc = 0x1519D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519d8;
        }
    }
    ctx->pc = 0x151A4Cu;
label_151a4c:
    // 0x151a4c: 0x0  nop
    ctx->pc = 0x151a4cu;
    // NOP
label_151a50:
    // 0x151a50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x151a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_151a54:
    // 0x151a54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_151a58:
    if (ctx->pc == 0x151A58u) {
        ctx->pc = 0x151A5Cu;
        goto label_151a5c;
    }
    ctx->pc = 0x151A54u;
    {
        const bool branch_taken_0x151a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151a54) {
            ctx->pc = 0x151A64u;
            goto label_151a64;
        }
    }
    ctx->pc = 0x151A5Cu;
label_151a5c:
    // 0x151a5c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x151a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_151a60:
    // 0x151a60: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x151a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_151a64:
    // 0x151a64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x151a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_151a68:
    // 0x151a68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_151a6c:
    // 0x151a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151a70:
    // 0x151a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151a74:
    // 0x151a74: 0x3e00008  jr          $ra
label_151a78:
    if (ctx->pc == 0x151A78u) {
        ctx->pc = 0x151A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A74u;
        // 0x151a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151A7Cu;
        goto label_fallthrough_0x151a74;
    }
    ctx->pc = 0x151A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A74u;
        // 0x151a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x151a74:
    ctx->pc = 0x151A7Cu;
}
