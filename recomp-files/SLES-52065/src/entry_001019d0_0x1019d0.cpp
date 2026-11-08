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

// Function: entry_001019d0
// Address: 0x1019d0 - 0x101a5c
void entry_001019d0_0x1019d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001019d0_0x1019d0");
#endif

    switch (ctx->pc) {
        case 0x1019d8u: goto label_1019d8;
        case 0x1019f4u: goto label_1019f4;
        case 0x1019fcu: goto label_1019fc;
        case 0x101a14u: goto label_101a14;
        case 0x101a34u: goto label_101a34;
        default: break;
    }

    ctx->pc = 0x1019d0u;

label_1019d0:
    // 0x1019d0: 0xc04c0e0  jal         func_130380
label_1019d4:
    if (ctx->pc == 0x1019D4u) {
        ctx->pc = 0x1019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019D0u;
        // 0x1019d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019D8u;
        goto label_1019d8;
    }
    ctx->pc = 0x1019D0u;
    SET_GPR_U32(ctx, 31, 0x1019D8u);
    ctx->pc = 0x1019D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019D0u;
    // 0x1019d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1019D0u, 0x1019D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019D8u;
label_1019d8:
    // 0x1019d8: 0x2929821  addu        $s3, $s4, $s2
    ctx->pc = 0x1019d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1019dc:
    // 0x1019dc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1019dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1019e0:
    // 0x1019e0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1019e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1019e4:
    // 0x1019e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1019e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1019e8:
    // 0x1019e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1019e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1019ec:
    // 0x1019ec: 0x320f809  jalr        $t9
label_1019f0:
    if (ctx->pc == 0x1019F0u) {
        ctx->pc = 0x1019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019ECu;
        // 0x1019f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019F4u;
        goto label_1019f4;
    }
    ctx->pc = 0x1019ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1019F4u);
        ctx->pc = 0x1019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019ECu;
        // 0x1019f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1019ECu, 0x1019F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1019F4u;
label_1019f4:
    // 0x1019f4: 0xc04c0e0  jal         func_130380
label_1019f8:
    if (ctx->pc == 0x1019F8u) {
        ctx->pc = 0x1019F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019F4u;
        // 0x1019f8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019FCu;
        goto label_1019fc;
    }
    ctx->pc = 0x1019F4u;
    SET_GPR_U32(ctx, 31, 0x1019FCu);
    ctx->pc = 0x1019F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019F4u;
    // 0x1019f8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1019F4u, 0x1019FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019FCu;
label_1019fc:
    // 0x1019fc: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x1019fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_101a00:
    // 0x101a00: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x101a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_101a04:
    // 0x101a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101a08:
    // 0x101a08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x101a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_101a0c:
    // 0x101a0c: 0x320f809  jalr        $t9
label_101a10:
    if (ctx->pc == 0x101A10u) {
        ctx->pc = 0x101A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A0Cu;
        // 0x101a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A14u;
        goto label_101a14;
    }
    ctx->pc = 0x101A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101A14u);
        ctx->pc = 0x101A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A0Cu;
        // 0x101a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A0Cu, 0x101A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101A14u;
label_101a14:
    // 0x101a14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_101a18:
    // 0x101a18: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x101a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_101a1c:
    // 0x101a1c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_101a20:
    if (ctx->pc == 0x101A20u) {
        ctx->pc = 0x101A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A1Cu;
        // 0x101a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A24u;
        goto label_101a24;
    }
    ctx->pc = 0x101A1Cu;
    {
        const bool branch_taken_0x101a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A1Cu;
        // 0x101a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a1c) {
            ctx->pc = 0x1019D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1019d0;
        }
    }
    ctx->pc = 0x101A24u;
label_101a24:
    // 0x101a24: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_101a28:
    // 0x101a28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_101a2c:
    // 0x101a2c: 0xc06cf0c  jal         func_1B3C30
label_101a30:
    if (ctx->pc == 0x101A30u) {
        ctx->pc = 0x101A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A2Cu;
        // 0x101a30: 0x24a5dff0  addiu       $a1, $a1, -0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A34u;
        goto label_101a34;
    }
    ctx->pc = 0x101A2Cu;
    SET_GPR_U32(ctx, 31, 0x101A34u);
    ctx->pc = 0x101A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A2Cu;
    // 0x101a30: 0x24a5dff0  addiu       $a1, $a1, -0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101A2Cu, 0x101A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A34u;
label_101a34:
    // 0x101a34: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_101a38:
    if (ctx->pc == 0x101A38u) {
        ctx->pc = 0x101A3Cu;
        goto label_101a3c;
    }
    ctx->pc = 0x101A34u;
    {
        const bool branch_taken_0x101a34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x101a34) {
            ctx->pc = 0x101A5Cu;
            return;
        }
    }
    ctx->pc = 0x101A3Cu;
label_101a3c:
    // 0x101a3c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_101a40:
    // 0x101a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_101a44:
    // 0x101a44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101a48:
    // 0x101a48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101a4c:
    // 0x101a4c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x101a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_101a50:
    // 0x101a50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101a54:
    // 0x101a54: 0x10000002  b           . + 4 + (0x2 << 2)
label_101a58:
    if (ctx->pc == 0x101A58u) {
        ctx->pc = 0x101A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A54u;
        // 0x101a58: 0xae82005c  sw          $v0, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A5Cu;
        goto label_fallthrough_0x101a54;
    }
    ctx->pc = 0x101A54u;
    {
        const bool branch_taken_0x101a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A54u;
        // 0x101a58: 0xae82005c  sw          $v0, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a54) {
            ctx->pc = 0x101A60u;
            return;
        }
    }
label_fallthrough_0x101a54:
    ctx->pc = 0x101A5Cu;
}
