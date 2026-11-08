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

// Function: FUN_0012fa80
// Address: 0x12fa80 - 0x12fcd4
void FUN_0012fa80_0x12fa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012fa80_0x12fa80");
#endif

    switch (ctx->pc) {
        case 0x12fab4u: goto label_12fab4;
        case 0x12fac8u: goto label_12fac8;
        case 0x12faecu: goto label_12faec;
        case 0x12fb38u: goto label_12fb38;
        case 0x12fb4cu: goto label_12fb4c;
        case 0x12fb58u: goto label_12fb58;
        case 0x12fb70u: goto label_12fb70;
        case 0x12fc34u: goto label_12fc34;
        case 0x12fcb0u: goto label_12fcb0;
        default: break;
    }

    ctx->pc = 0x12fa80u;

    // 0x12fa80: 0x27bdfa90  addiu       $sp, $sp, -0x570
    ctx->pc = 0x12fa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965904));
    // 0x12fa84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12fa88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12fa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12fa8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12fa90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12fa90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12fa98: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12fa98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12faa0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12faa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12faa8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x12faa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12faac: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x12FAACu;
    SET_GPR_U32(ctx, 31, 0x12FAB4u);
    ctx->pc = 0x12FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FAACu;
    // 0x12fab0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x12FAACu, 0x12FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAB4u;
label_12fab4:
    // 0x12fab4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x12fab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12fab8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12fab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fabc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12fabcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fac0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x12FAC0u;
    {
        const bool branch_taken_0x12fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAC0u;
        // 0x12fac4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac0) {
            ctx->pc = 0x12FC7Cu;
            goto label_12fc7c;
        }
    }
    ctx->pc = 0x12FAC8u;
label_12fac8:
    // 0x12fac8: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x12FAC8u;
    {
        const bool branch_taken_0x12fac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAC8u;
        // 0x12facc: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac8) {
            ctx->pc = 0x12FC64u;
            goto label_12fc64;
        }
    }
    ctx->pc = 0x12FAD0u;
    // 0x12fad0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12fad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12fad4: 0xa3a20370  sb          $v0, 0x370($sp)
    ctx->pc = 0x12fad4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 880), (uint8_t)GPR_U32(ctx, 2));
    // 0x12fad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fadc: 0x113040  sll         $a2, $s1, 1
    ctx->pc = 0x12fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x12fae0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x12fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x12fae4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FAE4u;
    {
        const bool branch_taken_0x12fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAE4u;
        // 0x12fae8: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fae4) {
            ctx->pc = 0x12FB04u;
            goto label_12fb04;
        }
    }
    ctx->pc = 0x12FAECu;
label_12faec:
    // 0x12faec: 0x0  nop
    ctx->pc = 0x12faecu;
    // NOP
    // 0x12faf0: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x12faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x12faf4: 0xa0870370  sb          $a3, 0x370($a0)
    ctx->pc = 0x12faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 880), (uint8_t)GPR_U32(ctx, 7));
    // 0x12faf8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x12faf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x12fafc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12fafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12fb00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_12fb04:
    // 0x12fb04: 0x0  nop
    ctx->pc = 0x12fb04u;
    // NOP
    // 0x12fb08: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x12fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x12fb0c: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x12fb0cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12fb10: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FB10u;
    {
        const bool branch_taken_0x12fb10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fb10) {
            ctx->pc = 0x12FB20u;
            goto label_12fb20;
        }
    }
    ctx->pc = 0x12FB18u;
    // 0x12fb18: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FB18u;
    {
        const bool branch_taken_0x12fb18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fb18) {
            ctx->pc = 0x12FAECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12faec;
        }
    }
    ctx->pc = 0x12FB20u;
label_12fb20:
    // 0x12fb20: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x12fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x12fb24: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12fb28: 0x24440370  addiu       $a0, $v0, 0x370
    ctx->pc = 0x12fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x12fb2c: 0x24a5ed58  addiu       $a1, $a1, -0x12A8
    ctx->pc = 0x12fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962520));
    // 0x12fb30: 0xc080702  jal         func_201C08
    ctx->pc = 0x12FB30u;
    SET_GPR_U32(ctx, 31, 0x12FB38u);
    ctx->pc = 0x12FB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB30u;
    // 0x12fb34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12FB30u, 0x12FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB38u;
label_12fb38:
    // 0x12fb38: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x12fb3c: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x12fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x12fb40: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x12fb40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fb44: 0xc0805c8  jal         func_201720
    ctx->pc = 0x12FB44u;
    SET_GPR_U32(ctx, 31, 0x12FB4Cu);
    ctx->pc = 0x12FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB44u;
    // 0x12fb48: 0x27a50370  addiu       $a1, $sp, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x12FB44u, 0x12FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB4Cu;
label_12fb4c:
    // 0x12fb4c: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x12fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
    // 0x12fb50: 0xc080748  jal         func_201D20
    ctx->pc = 0x12FB50u;
    SET_GPR_U32(ctx, 31, 0x12FB58u);
    ctx->pc = 0x12FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB50u;
    // 0x12fb54: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x12FB50u, 0x12FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB58u;
label_12fb58:
    // 0x12fb58: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x12fb58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fb5c: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x12FB5Cu;
    {
        const bool branch_taken_0x12fb5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB5Cu;
        // 0x12fb60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb5c) {
            ctx->pc = 0x12FC7Cu;
            goto label_12fc7c;
        }
    }
    ctx->pc = 0x12FB64u;
    // 0x12fb64: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x12fb64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12fb68: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x12FB68u;
    {
        const bool branch_taken_0x12fb68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB68u;
        // 0x12fb6c: 0x2448fff8  addiu       $t0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb68) {
            ctx->pc = 0x12FC24u;
            goto label_12fc24;
        }
    }
    ctx->pc = 0x12FB70u;
label_12fb70:
    // 0x12fb70: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x12fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x12fb74: 0x24690470  addiu       $t1, $v1, 0x470
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1136));
    // 0x12fb78: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x12fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12fb7c: 0x912b0000  lbu         $t3, 0x0($t1)
    ctx->pc = 0x12fb7cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12fb80: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x12fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12fb84: 0x7d5021  addu        $t2, $v1, $sp
    ctx->pc = 0x12fb84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12fb88: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12fb8c: 0x9d3021  addu        $a2, $a0, $sp
    ctx->pc = 0x12fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x12fb90: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x12fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x12fb94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12fb98: 0x26440003  addiu       $a0, $s2, 0x3
    ctx->pc = 0x12fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x12fb9c: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x12fb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12fba0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x12fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x12fba4: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x12fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12fba8: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x12fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x12fbac: 0xa54b0170  sh          $t3, 0x170($t2)
    ctx->pc = 0x12fbacu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 368), (uint16_t)GPR_U32(ctx, 11));
    // 0x12fbb0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12fbb4: 0x912d0001  lbu         $t5, 0x1($t1)
    ctx->pc = 0x12fbb4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x12fbb8: 0x264b0005  addiu       $t3, $s2, 0x5
    ctx->pc = 0x12fbb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x12fbbc: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x12fbbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x12fbc0: 0x264a0006  addiu       $t2, $s2, 0x6
    ctx->pc = 0x12fbc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x12fbc4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x12fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x12fbc8: 0x17d6021  addu        $t4, $t3, $sp
    ctx->pc = 0x12fbc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 29)));
    // 0x12fbcc: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x12fbccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x12fbd0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x12fbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x12fbd4: 0x15d5821  addu        $t3, $t2, $sp
    ctx->pc = 0x12fbd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x12fbd8: 0x264a0007  addiu       $t2, $s2, 0x7
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x12fbdc: 0xa4cd0170  sh          $t5, 0x170($a2)
    ctx->pc = 0x12fbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 368), (uint16_t)GPR_U32(ctx, 13));
    // 0x12fbe0: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x12fbe0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x12fbe4: 0x912d0002  lbu         $t5, 0x2($t1)
    ctx->pc = 0x12fbe4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x12fbe8: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x12fbec: 0xe8302b  sltu        $a2, $a3, $t0
    ctx->pc = 0x12fbecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12fbf0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x12fbf4: 0xa4ad0170  sh          $t5, 0x170($a1)
    ctx->pc = 0x12fbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 368), (uint16_t)GPR_U32(ctx, 13));
    // 0x12fbf8: 0x91250003  lbu         $a1, 0x3($t1)
    ctx->pc = 0x12fbf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x12fbfc: 0xa4850170  sh          $a1, 0x170($a0)
    ctx->pc = 0x12fbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 368), (uint16_t)GPR_U32(ctx, 5));
    // 0x12fc00: 0x91240004  lbu         $a0, 0x4($t1)
    ctx->pc = 0x12fc00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x12fc04: 0xa4640170  sh          $a0, 0x170($v1)
    ctx->pc = 0x12fc04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 368), (uint16_t)GPR_U32(ctx, 4));
    // 0x12fc08: 0x91230005  lbu         $v1, 0x5($t1)
    ctx->pc = 0x12fc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x12fc0c: 0xa5830170  sh          $v1, 0x170($t4)
    ctx->pc = 0x12fc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc10: 0x91230006  lbu         $v1, 0x6($t1)
    ctx->pc = 0x12fc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x12fc14: 0xa5630170  sh          $v1, 0x170($t3)
    ctx->pc = 0x12fc14u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc18: 0x91230007  lbu         $v1, 0x7($t1)
    ctx->pc = 0x12fc18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x12fc1c: 0x14c0ffd4  bnez        $a2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x12FC1Cu;
    {
        const bool branch_taken_0x12fc1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC1Cu;
        // 0x12fc20: 0xa5430170  sh          $v1, 0x170($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 368), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc1c) {
            ctx->pc = 0x12FB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fb70;
        }
    }
    ctx->pc = 0x12FC24u;
label_12fc24:
    // 0x12fc24: 0x0  nop
    ctx->pc = 0x12fc24u;
    // NOP
    // 0x12fc28: 0xe2082b  sltu        $at, $a3, $v0
    ctx->pc = 0x12fc28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fc2c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x12FC2Cu;
    {
        const bool branch_taken_0x12fc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC2Cu;
        // 0x12fc30: 0x123040  sll         $a2, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc2c) {
            ctx->pc = 0x12FC7Cu;
            goto label_12fc7c;
        }
    }
    ctx->pc = 0x12FC34u;
label_12fc34:
    // 0x12fc34: 0x0  nop
    ctx->pc = 0x12fc34u;
    // NOP
    // 0x12fc38: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x12fc3c: 0x90650470  lbu         $a1, 0x470($v1)
    ctx->pc = 0x12fc3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1136)));
    // 0x12fc40: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x12fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x12fc44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12fc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12fc48: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x12fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x12fc4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12fc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12fc50: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x12fc50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fc54: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12FC54u;
    {
        const bool branch_taken_0x12fc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC54u;
        // 0x12fc58: 0xa4850170  sh          $a1, 0x170($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 368), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc54) {
            ctx->pc = 0x12FC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fc34;
        }
    }
    ctx->pc = 0x12FC5Cu;
    // 0x12fc5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FC5Cu;
    {
        const bool branch_taken_0x12fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc5c) {
            ctx->pc = 0x12FC7Cu;
            goto label_12fc7c;
        }
    }
    ctx->pc = 0x12FC64u;
label_12fc64:
    // 0x12fc64: 0x0  nop
    ctx->pc = 0x12fc64u;
    // NOP
    // 0x12fc68: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x12fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12fc6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x12fc70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12fc74: 0xa4430170  sh          $v1, 0x170($v0)
    ctx->pc = 0x12fc74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12fc78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12fc7c:
    // 0x12fc7c: 0x0  nop
    ctx->pc = 0x12fc7cu;
    // NOP
    // 0x12fc80: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x12fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x12fc84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12fc88: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x12fc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fc8c: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x12FC8Cu;
    {
        const bool branch_taken_0x12fc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC8Cu;
        // 0x12fc90: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc8c) {
            ctx->pc = 0x12FAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fac8;
        }
    }
    ctx->pc = 0x12FC94u;
    // 0x12fc94: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x12fc98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc9c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x12fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x12fca0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x12fca4: 0xa4400170  sh          $zero, 0x170($v0)
    ctx->pc = 0x12fca4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 368), (uint16_t)GPR_U32(ctx, 0));
    // 0x12fca8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x12FCA8u;
    SET_GPR_U32(ctx, 31, 0x12FCB0u);
    ctx->pc = 0x12FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCA8u;
    // 0x12fcac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x12FCA8u, 0x12FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCB0u;
label_12fcb0:
    // 0x12fcb0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12fcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fcb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12fcb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fcb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12fcb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fcbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12fcbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fcc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12fcc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fcc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12fcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fcc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12fcc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fccc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCCCu;
        // 0x12fcd0: 0x27bd0570  addiu       $sp, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FCD4u;
}
