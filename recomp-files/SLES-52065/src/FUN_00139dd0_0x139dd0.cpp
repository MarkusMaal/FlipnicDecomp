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

// Function: FUN_00139dd0
// Address: 0x139dd0 - 0x139f94
void FUN_00139dd0_0x139dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00139dd0_0x139dd0");
#endif

    switch (ctx->pc) {
        case 0x139df8u: goto label_139df8;
        case 0x139e08u: goto label_139e08;
        case 0x139e58u: goto label_139e58;
        case 0x139e9cu: goto label_139e9c;
        default: break;
    }

    ctx->pc = 0x139dd0u;

    // 0x139dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139dd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139ddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139de0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139de4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x139de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x139de8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x139DE8u;
    {
        const bool branch_taken_0x139de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DE8u;
        // 0x139dec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139de8) {
            ctx->pc = 0x139E10u;
            goto label_139e10;
        }
    }
    ctx->pc = 0x139DF0u;
    // 0x139df0: 0xc040168  jal         func_1005A0
    ctx->pc = 0x139DF0u;
    SET_GPR_U32(ctx, 31, 0x139DF8u);
    ctx->pc = 0x139DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DF0u;
    // 0x139df4: 0x32180  sll         $a0, $v1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x139DF0u, 0x139DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DF8u;
label_139df8:
    // 0x139df8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x139df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x139dfc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x139dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x139e00: 0xc040168  jal         func_1005A0
    ctx->pc = 0x139E00u;
    SET_GPR_U32(ctx, 31, 0x139E08u);
    ctx->pc = 0x139E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E00u;
    // 0x139e04: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x139E00u, 0x139E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E08u;
label_139e08:
    // 0x139e08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x139E08u;
    {
        const bool branch_taken_0x139e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E08u;
        // 0x139e0c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e08) {
            ctx->pc = 0x139E18u;
            goto label_139e18;
        }
    }
    ctx->pc = 0x139E10u;
label_139e10:
    // 0x139e10: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x139e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x139e14: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x139e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_139e18:
    // 0x139e18: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x139e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x139e1c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x139e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x139e20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x139e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139e24: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x139e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x139e28: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x139e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x139e2c: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x139e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x139e30: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x139e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x139e34: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x139e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x139e38: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x139E38u;
    {
        const bool branch_taken_0x139e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x139E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E38u;
        // 0x139e3c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e38) {
            ctx->pc = 0x139E68u;
            goto label_139e68;
        }
    }
    ctx->pc = 0x139E40u;
    // 0x139e40: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139E40u;
    {
        const bool branch_taken_0x139e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x139e40) {
            ctx->pc = 0x139E50u;
            goto label_139e50;
        }
    }
    ctx->pc = 0x139E48u;
    // 0x139e48: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x139E48u;
    {
        const bool branch_taken_0x139e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e48) {
            ctx->pc = 0x139F7Cu;
            goto label_139f7c;
        }
    }
    ctx->pc = 0x139E50u;
label_139e50:
    // 0x139e50: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x139E50u;
    SET_GPR_U32(ctx, 31, 0x139E58u);
    ctx->pc = 0x139E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139E50u;
    // 0x139e54: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x139E50u, 0x139E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E58u;
label_139e58:
    // 0x139e58: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x139e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x139e5c: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x139e60: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x139E60u;
    {
        const bool branch_taken_0x139e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E60u;
        // 0x139e64: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e60) {
            ctx->pc = 0x139F7Cu;
            goto label_139f7c;
        }
    }
    ctx->pc = 0x139E68u;
label_139e68:
    // 0x139e68: 0x8e2d0058  lw          $t5, 0x58($s1)
    ctx->pc = 0x139e68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x139e6c: 0xd082b  sltu        $at, $zero, $t5
    ctx->pc = 0x139e6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x139e70: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x139E70u;
    {
        const bool branch_taken_0x139e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E70u;
        // 0x139e74: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e70) {
            ctx->pc = 0x139F7Cu;
            goto label_139f7c;
        }
    }
    ctx->pc = 0x139E78u;
    // 0x139e78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x139e78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e7c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x139e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x139e80: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x139e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x139e84: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x139e84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x139e88: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x139e88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x139e8c: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x139e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x139e90: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x139e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x139e94: 0x34a58120  ori         $a1, $a1, 0x8120
    ctx->pc = 0x139e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33056);
    // 0x139e98: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x139e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_139e9c:
    // 0x139e9c: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x139e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x139ea0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x139ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x139ea4: 0x18d302b  sltu        $a2, $t4, $t5
    ctx->pc = 0x139ea4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x139ea8: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x139ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x139eac: 0x8cf00088  lw          $s0, 0x88($a3)
    ctx->pc = 0x139eacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x139eb0: 0xa20b0003  sb          $t3, 0x3($s0)
    ctx->pc = 0x139eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x139eb4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x139eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139eb8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x139eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x139ebc: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x139ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139ec0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x139ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x139ec4: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x139ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x139ec8: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x139ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x139ecc: 0x8e2e000c  lw          $t6, 0xC($s1)
    ctx->pc = 0x139eccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x139ed0: 0x77880  sll         $t7, $a3, 2
    ctx->pc = 0x139ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x139ed4: 0xa2090013  sb          $t1, 0x13($s0)
    ctx->pc = 0x139ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 9));
    // 0x139ed8: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x139ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
    // 0x139edc: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x139edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x139ee0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x139ee0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x139ee4: 0xae0e0014  sw          $t6, 0x14($s0)
    ctx->pc = 0x139ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
    // 0x139ee8: 0xa60f0010  sh          $t7, 0x10($s0)
    ctx->pc = 0x139ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 15));
    // 0x139eec: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x139eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x139ef0: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x139ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x139ef4: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x139ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x139ef8: 0xa2080023  sb          $t0, 0x23($s0)
    ctx->pc = 0x139ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 8));
    // 0x139efc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x139efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x139f00: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x139f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x139f04: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x139f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x139f08: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x139f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x139f0c: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x139f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x139f10: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x139f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x139f14: 0x8cf0008c  lw          $s0, 0x8C($a3)
    ctx->pc = 0x139f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x139f18: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x139f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x139f1c: 0xa20b0003  sb          $t3, 0x3($s0)
    ctx->pc = 0x139f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 11));
    // 0x139f20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x139f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x139f24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x139f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x139f28: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x139f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x139f2c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x139f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x139f30: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x139f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x139f34: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x139f38: 0x8e2e0010  lw          $t6, 0x10($s1)
    ctx->pc = 0x139f38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x139f3c: 0x77880  sll         $t7, $a3, 2
    ctx->pc = 0x139f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x139f40: 0xa2090013  sb          $t1, 0x13($s0)
    ctx->pc = 0x139f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 9));
    // 0x139f44: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x139f44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
    // 0x139f48: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x139f48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x139f4c: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x139f4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x139f50: 0xae0e0014  sw          $t6, 0x14($s0)
    ctx->pc = 0x139f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
    // 0x139f54: 0xa60f0010  sh          $t7, 0x10($s0)
    ctx->pc = 0x139f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 15));
    // 0x139f58: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x139f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x139f5c: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x139f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x139f60: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x139f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x139f64: 0xa2080023  sb          $t0, 0x23($s0)
    ctx->pc = 0x139f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 8));
    // 0x139f68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x139f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x139f6c: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x139f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x139f70: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x139f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x139f74: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x139F74u;
    {
        const bool branch_taken_0x139f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x139F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F74u;
        // 0x139f78: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f74) {
            ctx->pc = 0x139E9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_139e9c;
        }
    }
    ctx->pc = 0x139F7Cu;
label_139f7c:
    // 0x139f7c: 0x0  nop
    ctx->pc = 0x139f7cu;
    // NOP
    // 0x139f80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139f84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x139F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F8Cu;
        // 0x139f90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139F94u;
}
