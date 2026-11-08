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

// Function: FUN_00118d40
// Address: 0x118d40 - 0x118e9c
void FUN_00118d40_0x118d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118d40_0x118d40");
#endif

    switch (ctx->pc) {
        case 0x118d84u: goto label_118d84;
        case 0x118d98u: goto label_118d98;
        case 0x118dacu: goto label_118dac;
        case 0x118dc4u: goto label_118dc4;
        case 0x118ddcu: goto label_118ddc;
        case 0x118de8u: goto label_118de8;
        case 0x118e14u: goto label_118e14;
        case 0x118e2cu: goto label_118e2c;
        case 0x118e3cu: goto label_118e3c;
        case 0x118e4cu: goto label_118e4c;
        case 0x118e70u: goto label_118e70;
        default: break;
    }

    ctx->pc = 0x118d40u;

    // 0x118d40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x118d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x118d44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118d48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x118d4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x118d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x118d50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x118d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x118d54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x118d58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x118d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x118d5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x118d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118d64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x118d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118d6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x118d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118d74: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x118D74u;
    {
        const bool branch_taken_0x118d74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x118D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D74u;
        // 0x118d78: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d74) {
            ctx->pc = 0x118DDCu;
            goto label_118ddc;
        }
    }
    ctx->pc = 0x118D7Cu;
    // 0x118d7c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118D7Cu;
    SET_GPR_U32(ctx, 31, 0x118D84u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118D7Cu, 0x118D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D84u;
label_118d84:
    // 0x118d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x118d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d90: 0xc062c88  jal         func_18B220
    ctx->pc = 0x118D90u;
    SET_GPR_U32(ctx, 31, 0x118D98u);
    ctx->pc = 0x118D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D90u;
    // 0x118d94: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B220u, 0x118D90u, 0x118D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D98u;
label_118d98:
    // 0x118d98: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x118d98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118da0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x118da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118da4: 0xc062c88  jal         func_18B220
    ctx->pc = 0x118DA4u;
    SET_GPR_U32(ctx, 31, 0x118DACu);
    ctx->pc = 0x118DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DA4u;
    // 0x118da8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B220u, 0x118DA4u, 0x118DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DACu;
label_118dac:
    // 0x118dac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x118dacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118db4: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118DB4u;
    {
        const bool branch_taken_0x118db4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x118DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DB4u;
        // 0x118db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118db4) {
            ctx->pc = 0x118DC4u;
            goto label_118dc4;
        }
    }
    ctx->pc = 0x118DBCu;
    // 0x118dbc: 0xc062c30  jal         func_18B0C0
    ctx->pc = 0x118DBCu;
    SET_GPR_U32(ctx, 31, 0x118DC4u);
    ctx->pc = 0x118DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DBCu;
    // 0x118dc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0C0u, 0x118DBCu, 0x118DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DC4u;
label_118dc4:
    // 0x118dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118dc8: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118DC8u;
    {
        const bool branch_taken_0x118dc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x118DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DC8u;
        // 0x118dcc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118dc8) {
            ctx->pc = 0x118DE0u;
            goto label_118de0;
        }
    }
    ctx->pc = 0x118DD0u;
    // 0x118dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118dd4: 0xc062c30  jal         func_18B0C0
    ctx->pc = 0x118DD4u;
    SET_GPR_U32(ctx, 31, 0x118DDCu);
    ctx->pc = 0x118DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DD4u;
    // 0x118dd8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0C0u, 0x118DD4u, 0x118DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DDCu;
label_118ddc:
    // 0x118ddc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x118ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_118de0:
    // 0x118de0: 0xc045c98  jal         func_117260
    ctx->pc = 0x118DE0u;
    SET_GPR_U32(ctx, 31, 0x118DE8u);
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x118DE0u, 0x118DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DE8u;
label_118de8:
    // 0x118de8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x118de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118dec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118df0: 0x24638650  addiu       $v1, $v1, -0x79B0
    ctx->pc = 0x118df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936144));
    // 0x118df4: 0x27b0008c  addiu       $s0, $sp, 0x8C
    ctx->pc = 0x118df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x118df8: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x118df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x118dfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118e00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x118e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x118e08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118e0c: 0xc0462a4  jal         func_118A90
    ctx->pc = 0x118E0Cu;
    SET_GPR_U32(ctx, 31, 0x118E14u);
    ctx->pc = 0x118E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E0Cu;
    // 0x118e10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A90u, 0x118E0Cu, 0x118E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E14u;
label_118e14:
    // 0x118e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x118e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118e18: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x118E18u;
    {
        const bool branch_taken_0x118e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x118E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E18u;
        // 0x118e1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e18) {
            ctx->pc = 0x118E44u;
            goto label_118e44;
        }
    }
    ctx->pc = 0x118E20u;
    // 0x118e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e24: 0xc046400  jal         func_119000
    ctx->pc = 0x118E24u;
    SET_GPR_U32(ctx, 31, 0x118E2Cu);
    ctx->pc = 0x118E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E24u;
    // 0x118e28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119000u, 0x118E24u, 0x118E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E2Cu;
label_118e2c:
    // 0x118e2c: 0xaf82802c  sw          $v0, -0x7FD4($gp)
    ctx->pc = 0x118e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 2));
    // 0x118e30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x118e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e34: 0xc054660  jal         func_151980
    ctx->pc = 0x118E34u;
    SET_GPR_U32(ctx, 31, 0x118E3Cu);
    ctx->pc = 0x118E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E34u;
    // 0x118e38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x118E34u, 0x118E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E3Cu;
label_118e3c:
    // 0x118e3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118E3Cu;
    {
        const bool branch_taken_0x118e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118e3c) {
            ctx->pc = 0x118E4Cu;
            goto label_118e4c;
        }
    }
    ctx->pc = 0x118E44u;
label_118e44:
    // 0x118e44: 0xc0546a0  jal         func_151A80
    ctx->pc = 0x118E44u;
    SET_GPR_U32(ctx, 31, 0x118E4Cu);
    ctx->pc = 0x118E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E44u;
    // 0x118e48: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151A80u, 0x118E44u, 0x118E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E4Cu;
label_118e4c:
    // 0x118e4c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x118e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x118e50: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x118e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x118e54: 0x24638770  addiu       $v1, $v1, -0x7890
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936432));
    // 0x118e58: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x118e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x118e5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118e60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x118e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x118e64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x118e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x118e68: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x118E68u;
    SET_GPR_U32(ctx, 31, 0x118E70u);
    ctx->pc = 0x118E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118E68u;
    // 0x118e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x118E68u, 0x118E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E70u;
label_118e70:
    // 0x118e70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x118e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x118e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118e7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x118e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118e80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x118e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x118e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e94: 0x3e00008  jr          $ra
    ctx->pc = 0x118E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E94u;
        // 0x118e98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E9Cu;
}
