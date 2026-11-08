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

// Function: getFpbSectionAddress
// Address: 0x116d00 - 0x116ec4
void getFpbSectionAddress_0x116d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getFpbSectionAddress_0x116d00");
#endif

    switch (ctx->pc) {
        case 0x116d20u: goto label_116d20;
        case 0x116d38u: goto label_116d38;
        case 0x116d70u: goto label_116d70;
        case 0x116d8cu: goto label_116d8c;
        case 0x116dccu: goto label_116dcc;
        case 0x116de4u: goto label_116de4;
        case 0x116e04u: goto label_116e04;
        case 0x116e48u: goto label_116e48;
        default: break;
    }

    ctx->pc = 0x116d00u;

    // 0x116d00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x116d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x116d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x116d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x116d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x116d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d18: 0xc045bb4  jal         func_116ED0
    ctx->pc = 0x116D18u;
    SET_GPR_U32(ctx, 31, 0x116D20u);
    ctx->pc = 0x116D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D18u;
    // 0x116d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116ED0u, 0x116D18u, 0x116D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D20u;
label_116d20:
    // 0x116d20: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x116d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x116d24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x116d24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x116d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x116d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d30: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x116D30u;
    {
        const bool branch_taken_0x116d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D30u;
        // 0x116d34: 0x2408002f  addiu       $t0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d30) {
            ctx->pc = 0x116E98u;
            goto label_116e98;
        }
    }
    ctx->pc = 0x116D38u;
label_116d38:
    // 0x116d38: 0x94a50020  lhu         $a1, 0x20($a1)
    ctx->pc = 0x116d38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x116d3c: 0x14a20054  bne         $a1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x116D3Cu;
    {
        const bool branch_taken_0x116d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x116D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D3Cu;
        // 0x116d40: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d3c) {
            ctx->pc = 0x116E90u;
            goto label_116e90;
        }
    }
    ctx->pc = 0x116D44u;
    // 0x116d44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x116d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x116d48: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x116d48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116d4c: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x116d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116d50: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x116d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x116d54: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x116d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x116d58: 0x94a50022  lhu         $a1, 0x22($a1)
    ctx->pc = 0x116d58u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x116d5c: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x116d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x116d60: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x116d64: 0x2526000c  addiu       $a2, $t1, 0xC
    ctx->pc = 0x116d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x116d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116D68u;
    {
        const bool branch_taken_0x116d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D68u;
        // 0x116d6c: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d68) {
            ctx->pc = 0x116D78u;
            goto label_116d78;
        }
    }
    ctx->pc = 0x116D70u;
label_116d70:
    // 0x116d70: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x116d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x116d74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x116d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_116d78:
    // 0x116d78: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x116d78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x116d7c: 0x14a0fffc  bnez        $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x116D7Cu;
    {
        const bool branch_taken_0x116d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x116d7c) {
            ctx->pc = 0x116D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116d70;
        }
    }
    ctx->pc = 0x116D84u;
    // 0x116d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116D84u;
    {
        const bool branch_taken_0x116d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D84u;
        // 0x116d88: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d84) {
            ctx->pc = 0x116D9Cu;
            goto label_116d9c;
        }
    }
    ctx->pc = 0x116D8Cu;
label_116d8c:
    // 0x116d8c: 0x0  nop
    ctx->pc = 0x116d8cu;
    // NOP
    // 0x116d90: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x116d90u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x116d94: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x116d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x116d98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_116d9c:
    // 0x116d9c: 0x0  nop
    ctx->pc = 0x116d9cu;
    // NOP
    // 0x116da0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x116da0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116da4: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116DA4u;
    {
        const bool branch_taken_0x116da4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x116da4) {
            ctx->pc = 0x116D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116d8c;
        }
    }
    ctx->pc = 0x116DACu;
    // 0x116dac: 0x95260002  lhu         $a2, 0x2($t1)
    ctx->pc = 0x116dacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x116db0: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x116DB0u;
    {
        const bool branch_taken_0x116db0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x116db0) {
            ctx->pc = 0x116E40u;
            goto label_116e40;
        }
    }
    ctx->pc = 0x116DB8u;
    // 0x116db8: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116dbc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x116dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x116dc0: 0x8d470018  lw          $a3, 0x18($t2)
    ctx->pc = 0x116dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x116dc4: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x116dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x116dc8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x116dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_116dcc:
    // 0x116dcc: 0x0  nop
    ctx->pc = 0x116dccu;
    // NOP
    // 0x116dd0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x116dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x116dd4: 0x24ea0008  addiu       $t2, $a3, 0x8
    ctx->pc = 0x116dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x116dd8: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x116dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x116ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116DDCu;
    {
        const bool branch_taken_0x116ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DDCu;
        // 0x116de0: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ddc) {
            ctx->pc = 0x116DF0u;
            goto label_116df0;
        }
    }
    ctx->pc = 0x116DE4u;
label_116de4:
    // 0x116de4: 0x0  nop
    ctx->pc = 0x116de4u;
    // NOP
    // 0x116de8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x116de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x116dec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x116decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_116df0:
    // 0x116df0: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x116df0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116df4: 0x14c0fffb  bnez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116DF4u;
    {
        const bool branch_taken_0x116df4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x116df4) {
            ctx->pc = 0x116DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116de4;
        }
    }
    ctx->pc = 0x116DFCu;
    // 0x116dfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116DFCu;
    {
        const bool branch_taken_0x116dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DFCu;
        // 0x116e00: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dfc) {
            ctx->pc = 0x116E14u;
            goto label_116e14;
        }
    }
    ctx->pc = 0x116E04u;
label_116e04:
    // 0x116e04: 0x0  nop
    ctx->pc = 0x116e04u;
    // NOP
    // 0x116e08: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x116e08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x116e0c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x116e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x116e10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_116e14:
    // 0x116e14: 0x0  nop
    ctx->pc = 0x116e14u;
    // NOP
    // 0x116e18: 0x91660000  lbu         $a2, 0x0($t3)
    ctx->pc = 0x116e18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x116e1c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x116E1Cu;
    {
        const bool branch_taken_0x116e1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x116e1c) {
            ctx->pc = 0x116E04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e04;
        }
    }
    ctx->pc = 0x116E24u;
    // 0x116e24: 0x94e60004  lhu         $a2, 0x4($a3)
    ctx->pc = 0x116e24u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x116e28: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E28u;
    {
        const bool branch_taken_0x116e28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E28u;
        // 0x116e2c: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e28) {
            ctx->pc = 0x116E40u;
            goto label_116e40;
        }
    }
    ctx->pc = 0x116E30u;
    // 0x116e30: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x116e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116e34: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x116e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x116e38: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x116E38u;
    {
        const bool branch_taken_0x116e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E38u;
        // 0x116e3c: 0xe63821  addu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e38) {
            ctx->pc = 0x116DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116dcc;
        }
    }
    ctx->pc = 0x116E40u;
label_116e40:
    // 0x116e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116E40u;
    {
        const bool branch_taken_0x116e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E40u;
        // 0x116e44: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e40) {
            ctx->pc = 0x116E50u;
            goto label_116e50;
        }
    }
    ctx->pc = 0x116E48u;
label_116e48:
    // 0x116e48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x116e4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x116e4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_116e50:
    // 0x116e50: 0x90ab0000  lbu         $t3, 0x0($a1)
    ctx->pc = 0x116e50u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x116e54: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E54u;
    {
        const bool branch_taken_0x116e54 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x116e54) {
            ctx->pc = 0x116E6Cu;
            goto label_116e6c;
        }
    }
    ctx->pc = 0x116E5Cu;
    // 0x116e5c: 0x91460000  lbu         $a2, 0x0($t2)
    ctx->pc = 0x116e5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116e60: 0x316700ff  andi        $a3, $t3, 0xFF
    ctx->pc = 0x116e60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x116e64: 0x10e6fff8  beq         $a3, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x116E64u;
    {
        const bool branch_taken_0x116e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x116e64) {
            ctx->pc = 0x116E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e48;
        }
    }
    ctx->pc = 0x116E6Cu;
label_116e6c:
    // 0x116e6c: 0x0  nop
    ctx->pc = 0x116e6cu;
    // NOP
    // 0x116e70: 0x91450000  lbu         $a1, 0x0($t2)
    ctx->pc = 0x116e70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x116e74: 0x316600ff  andi        $a2, $t3, 0xFF
    ctx->pc = 0x116e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x116e78: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116E78u;
    {
        const bool branch_taken_0x116e78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x116e78) {
            ctx->pc = 0x116E90u;
            goto label_116e90;
        }
    }
    ctx->pc = 0x116E80u;
    // 0x116e80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x116e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116e84: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x116e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x116e88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x116E88u;
    {
        const bool branch_taken_0x116e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E88u;
        // 0x116e8c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e88) {
            ctx->pc = 0x116EB0u;
            goto label_116eb0;
        }
    }
    ctx->pc = 0x116E90u;
label_116e90:
    // 0x116e90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x116e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x116e94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x116e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_116e98:
    // 0x116e98: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x116e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116e9c: 0x94c50010  lhu         $a1, 0x10($a2)
    ctx->pc = 0x116e9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x116ea0: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x116ea0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x116ea4: 0x14a0ffa4  bnez        $a1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x116EA4u;
    {
        const bool branch_taken_0x116ea4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x116EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EA4u;
        // 0x116ea8: 0xc42821  addu        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ea4) {
            ctx->pc = 0x116D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116d38;
        }
    }
    ctx->pc = 0x116EACu;
    // 0x116eac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116eb0:
    // 0x116eb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x116eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x116EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EBCu;
        // 0x116ec0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116EC4u;
}
