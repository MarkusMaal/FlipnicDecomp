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

// Function: InitializeVideoMode
// Address: 0x209d08 - 0x209e98
void InitializeVideoMode_0x209d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitializeVideoMode_0x209d08");
#endif

    switch (ctx->pc) {
        case 0x209d7cu: goto label_209d7c;
        case 0x209db4u: goto label_209db4;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd8u: goto label_209dd8;
        case 0x209e28u: goto label_209e28;
        default: break;
    }

    ctx->pc = 0x209d08u;

    // 0x209d08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x209d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x209d0c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x209d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x209d10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x209d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x209d14: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x209d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x209d18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x209d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x209d1c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x209d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x209d20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x209d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x209d24: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x209d24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x209d28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x209d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x209d2c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x209d2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x209d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209d34: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x209d34u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x209d38: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x209d38u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x209d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d40: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x209D40u;
    {
        const bool branch_taken_0x209d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x209D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D40u;
        // 0x209d44: 0x79c03  sra         $s3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d40) {
            ctx->pc = 0x209E08u;
            goto label_209e08;
        }
    }
    ctx->pc = 0x209D48u;
    // 0x209d48: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x209d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x209d4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x209D4Cu;
    {
        const bool branch_taken_0x209d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209d4c) {
            ctx->pc = 0x209D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209D4Cu;
            // 0x209d50: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209D64u;
            goto label_209d64;
        }
    }
    ctx->pc = 0x209D54u;
    // 0x209d54: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209D54u;
    {
        const bool branch_taken_0x209d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D54u;
        // 0x209d58: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d54) {
            ctx->pc = 0x209D74u;
            goto label_209d74;
        }
    }
    ctx->pc = 0x209D5Cu;
    // 0x209d5c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x209D5Cu;
    {
        const bool branch_taken_0x209d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D5Cu;
        // 0x209d60: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d5c) {
            ctx->pc = 0x209E84u;
            goto label_209e84;
        }
    }
    ctx->pc = 0x209D64u;
label_209d64:
    // 0x209d64: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x209D64u;
    {
        const bool branch_taken_0x209d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x209D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D64u;
        // 0x209d68: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d64) {
            ctx->pc = 0x209E20u;
            goto label_209e20;
        }
    }
    ctx->pc = 0x209D6Cu;
    // 0x209d6c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x209D6Cu;
    {
        const bool branch_taken_0x209d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D6Cu;
        // 0x209d70: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d6c) {
            ctx->pc = 0x209E84u;
            goto label_209e84;
        }
    }
    ctx->pc = 0x209D74u;
label_209d74:
    // 0x209d74: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x209D74u;
    SET_GPR_U32(ctx, 31, 0x209D7Cu);
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x209D74u, 0x209D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D7Cu;
label_209d7c:
    // 0x209d7c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x209d80: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x209d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x209d84: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x209d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x209d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d8c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x209d8cu;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x209d90: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x209d90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x209d94: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x209d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x209d98: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x209d98u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x209d9c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x209d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x209da0: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x209da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x209da4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x209da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x209da8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x209da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x209dac: 0xc07ae58  jal         func_1EB960
    ctx->pc = 0x209DACu;
    SET_GPR_U32(ctx, 31, 0x209DB4u);
    ctx->pc = 0x209DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DACu;
    // 0x209db0: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB960u, 0x209DACu, 0x209DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DB4u;
label_209db4:
    // 0x209db4: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x209db4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x209db8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x209db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x209dbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209DBCu;
    {
        const bool branch_taken_0x209dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DBCu;
        // 0x209dc0: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dbc) {
            ctx->pc = 0x209DE0u;
            goto label_209de0;
        }
    }
    ctx->pc = 0x209DC4u;
    // 0x209dc4: 0xc07b040  jal         func_1EC100
    ctx->pc = 0x209DC4u;
    SET_GPR_U32(ctx, 31, 0x209DCCu);
    ctx->pc = 0x209DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DC4u;
    // 0x209dc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC100u, 0x209DC4u, 0x209DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DCCu;
label_209dcc:
    // 0x209dcc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x209dd0: 0xc07acc8  jal         func_1EB320
    ctx->pc = 0x209DD0u;
    SET_GPR_U32(ctx, 31, 0x209DD8u);
    ctx->pc = 0x209DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DD0u;
    // 0x209dd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB320u, 0x209DD0u, 0x209DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DD8u;
label_209dd8:
    // 0x209dd8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x209dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x209ddc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x209ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_209de0:
    // 0x209de0: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x209de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x209de4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x209de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x209de8: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x209de8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x209dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209df0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x209df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209df4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209df8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e00: 0x807ac88  j           func_1EB220
    ctx->pc = 0x209E00u;
    ctx->pc = 0x209E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E00u;
    // 0x209e04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB220u;
    SetGsCrt_0x1eb220(rdram, ctx, runtime); return;
    ctx->pc = 0x209E08u;
label_209e08:
    // 0x209e08: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x209e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x209e0c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x209e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x209e10: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x209e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x209e14: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x209e14u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 3));
    // 0x209e18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E80u;
            goto label_209e80;
        }
    }
    ctx->pc = 0x209E20u;
label_209e20:
    // 0x209e20: 0xc0827a6  jal         func_209E98
    ctx->pc = 0x209E20u;
    SET_GPR_U32(ctx, 31, 0x209E28u);
    ctx->pc = 0x209E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E98u, 0x209E20u, 0x209E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E28u;
label_209e28:
    // 0x209e28: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x209e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x209e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e30: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x209e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x209e34: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x209e34u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x209e38: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x209e38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209e3c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x209e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x209e40: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x209e40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x209e44: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x209e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x209e48: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x209e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x209e4c: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x209e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x209e50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x209e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x209e54: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x209e54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x209e58: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x209e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x209e5c: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x209e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x209e60: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x209e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x209e64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x209e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209e68: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x209e68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209e6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209e70: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e78: 0x807ac88  j           func_1EB220
    ctx->pc = 0x209E78u;
    ctx->pc = 0x209E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E78u;
    // 0x209e7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB220u;
    SetGsCrt_0x1eb220(rdram, ctx, runtime); return;
    ctx->pc = 0x209E80u;
label_209e80:
    // 0x209e80: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x209e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_209e84:
    // 0x209e84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x209e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209e88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x209e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e90: 0x3e00008  jr          $ra
    ctx->pc = 0x209E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E90u;
        // 0x209e94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209E98u;
}
