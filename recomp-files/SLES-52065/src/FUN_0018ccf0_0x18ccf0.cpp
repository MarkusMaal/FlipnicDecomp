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

// Function: FUN_0018ccf0
// Address: 0x18ccf0 - 0x18ce9c
void FUN_0018ccf0_0x18ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ccf0_0x18ccf0");
#endif

    switch (ctx->pc) {
        case 0x18ce20u: goto label_18ce20;
        case 0x18ce38u: goto label_18ce38;
        case 0x18ce40u: goto label_18ce40;
        case 0x18ce50u: goto label_18ce50;
        default: break;
    }

    ctx->pc = 0x18ccf0u;

    // 0x18ccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ccf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ccf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ccfc: 0x8c820464  lw          $v0, 0x464($a0)
    ctx->pc = 0x18ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1124)));
    // 0x18cd00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18cd04: 0xac820464  sw          $v0, 0x464($a0)
    ctx->pc = 0x18cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1124), GPR_U32(ctx, 2));
    // 0x18cd08: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x18cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x18cd0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18CD0Cu;
    {
        const bool branch_taken_0x18cd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD0Cu;
        // 0x18cd10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd0c) {
            ctx->pc = 0x18CD4Cu;
            goto label_18cd4c;
        }
    }
    ctx->pc = 0x18CD14u;
    // 0x18cd14: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x18cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x18cd18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18cd1c: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x18cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x18cd20: 0x8e020464  lw          $v0, 0x464($s0)
    ctx->pc = 0x18cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x18cd24: 0x2841001e  slti        $at, $v0, 0x1E
    ctx->pc = 0x18cd24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x18cd28: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CD28u;
    {
        const bool branch_taken_0x18cd28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd28) {
            ctx->pc = 0x18CD4Cu;
            goto label_18cd4c;
        }
    }
    ctx->pc = 0x18CD30u;
    // 0x18cd30: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x18cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x18cd34: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x18cd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18cd38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CD38u;
    {
        const bool branch_taken_0x18cd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD38u;
        // 0x18cd3c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd38) {
            ctx->pc = 0x18CD4Cu;
            goto label_18cd4c;
        }
    }
    ctx->pc = 0x18CD40u;
    // 0x18cd40: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x18cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x18cd44: 0xae032710  sw          $v1, 0x2710($s0)
    ctx->pc = 0x18cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10000), GPR_U32(ctx, 3));
    // 0x18cd48: 0xae020468  sw          $v0, 0x468($s0)
    ctx->pc = 0x18cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 2));
label_18cd4c:
    // 0x18cd4c: 0x8e03046c  lw          $v1, 0x46C($s0)
    ctx->pc = 0x18cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x18cd50: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CD50u;
    {
        const bool branch_taken_0x18cd50 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18cd50) {
            ctx->pc = 0x18CD64u;
            goto label_18cd64;
        }
    }
    ctx->pc = 0x18CD58u;
    // 0x18cd58: 0x8e020468  lw          $v0, 0x468($s0)
    ctx->pc = 0x18cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x18cd5c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18CD5Cu;
    {
        const bool branch_taken_0x18cd5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cd5c) {
            ctx->pc = 0x18CDB0u;
            goto label_18cdb0;
        }
    }
    ctx->pc = 0x18CD64u;
label_18cd64:
    // 0x18cd64: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CD64u;
    {
        const bool branch_taken_0x18cd64 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18cd64) {
            ctx->pc = 0x18CD88u;
            goto label_18cd88;
        }
    }
    ctx->pc = 0x18CD6Cu;
    // 0x18cd6c: 0x8e02046c  lw          $v0, 0x46C($s0)
    ctx->pc = 0x18cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x18cd70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cd74: 0xae02046c  sw          $v0, 0x46C($s0)
    ctx->pc = 0x18cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1132), GPR_U32(ctx, 2));
    // 0x18cd78: 0x8e02046c  lw          $v0, 0x46C($s0)
    ctx->pc = 0x18cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x18cd7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CD7Cu;
    {
        const bool branch_taken_0x18cd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cd7c) {
            ctx->pc = 0x18CD88u;
            goto label_18cd88;
        }
    }
    ctx->pc = 0x18CD84u;
    // 0x18cd84: 0xae002714  sw          $zero, 0x2714($s0)
    ctx->pc = 0x18cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10004), GPR_U32(ctx, 0));
label_18cd88:
    // 0x18cd88: 0x8e020468  lw          $v0, 0x468($s0)
    ctx->pc = 0x18cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x18cd8c: 0x18400037  blez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x18CD8Cu;
    {
        const bool branch_taken_0x18cd8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cd8c) {
            ctx->pc = 0x18CE6Cu;
            goto label_18ce6c;
        }
    }
    ctx->pc = 0x18CD94u;
    // 0x18cd94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cd98: 0xae020468  sw          $v0, 0x468($s0)
    ctx->pc = 0x18cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 2));
    // 0x18cd9c: 0x8e020468  lw          $v0, 0x468($s0)
    ctx->pc = 0x18cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x18cda0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18CDA0u;
    {
        const bool branch_taken_0x18cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cda0) {
            ctx->pc = 0x18CE6Cu;
            goto label_18ce6c;
        }
    }
    ctx->pc = 0x18CDA8u;
    // 0x18cda8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18CDA8u;
    {
        const bool branch_taken_0x18cda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDA8u;
        // 0x18cdac: 0xae002710  sw          $zero, 0x2710($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cda8) {
            ctx->pc = 0x18CE6Cu;
            goto label_18ce6c;
        }
    }
    ctx->pc = 0x18CDB0u;
label_18cdb0:
    // 0x18cdb0: 0x8e02045c  lw          $v0, 0x45C($s0)
    ctx->pc = 0x18cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1116)));
    // 0x18cdb4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x18CDB4u;
    {
        const bool branch_taken_0x18cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdb4) {
            ctx->pc = 0x18CE64u;
            goto label_18ce64;
        }
    }
    ctx->pc = 0x18CDBCu;
    // 0x18cdbc: 0x8e03271c  lw          $v1, 0x271C($s0)
    ctx->pc = 0x18cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10012)));
    // 0x18cdc0: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x18cdc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CDC4u;
    {
        const bool branch_taken_0x18cdc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18cdc4) {
            ctx->pc = 0x18CDE8u;
            goto label_18cde8;
        }
    }
    ctx->pc = 0x18CDCCu;
    // 0x18cdcc: 0x8e020474  lw          $v0, 0x474($s0)
    ctx->pc = 0x18cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x18cdd0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CDD0u;
    {
        const bool branch_taken_0x18cdd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cdd0) {
            ctx->pc = 0x18CDE0u;
            goto label_18cde0;
        }
    }
    ctx->pc = 0x18CDD8u;
    // 0x18cdd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cddc: 0xae020474  sw          $v0, 0x474($s0)
    ctx->pc = 0x18cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1140), GPR_U32(ctx, 2));
label_18cde0:
    // 0x18cde0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18CDE0u;
    {
        const bool branch_taken_0x18cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDE0u;
        // 0x18cde4: 0x8e020474  lw          $v0, 0x474($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cde0) {
            ctx->pc = 0x18CE04u;
            goto label_18ce04;
        }
    }
    ctx->pc = 0x18CDE8u;
label_18cde8:
    // 0x18cde8: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x18cdec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CDECu;
    {
        const bool branch_taken_0x18cdec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cdec) {
            ctx->pc = 0x18CDFCu;
            goto label_18cdfc;
        }
    }
    ctx->pc = 0x18CDF4u;
    // 0x18cdf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cdf8: 0xae020470  sw          $v0, 0x470($s0)
    ctx->pc = 0x18cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 2));
label_18cdfc:
    // 0x18cdfc: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x18cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x18ce00: 0x0  nop
    ctx->pc = 0x18ce00u;
    // NOP
label_18ce04:
    // 0x18ce04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CE04u;
    {
        const bool branch_taken_0x18ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE04u;
        // 0x18ce08: 0x28c10000  slti        $at, $a2, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce04) {
            ctx->pc = 0x18CE28u;
            goto label_18ce28;
        }
    }
    ctx->pc = 0x18CE0Cu;
    // 0x18ce0c: 0x28e10000  slti        $at, $a3, 0x0
    ctx->pc = 0x18ce0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x18ce10: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18CE10u;
    {
        const bool branch_taken_0x18ce10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE10u;
        // 0x18ce14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce10) {
            ctx->pc = 0x18CE38u;
            goto label_18ce38;
        }
    }
    ctx->pc = 0x18CE18u;
    // 0x18ce18: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18CE18u;
    SET_GPR_U32(ctx, 31, 0x18CE20u);
    ctx->pc = 0x18CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE18u;
    // 0x18ce1c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18CE18u, 0x18CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE20u;
label_18ce20:
    // 0x18ce20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CE20u;
    {
        const bool branch_taken_0x18ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce20) {
            ctx->pc = 0x18CE38u;
            goto label_18ce38;
        }
    }
    ctx->pc = 0x18CE28u;
label_18ce28:
    // 0x18ce28: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE28u;
    {
        const bool branch_taken_0x18ce28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE28u;
        // 0x18ce2c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce28) {
            ctx->pc = 0x18CE38u;
            goto label_18ce38;
        }
    }
    ctx->pc = 0x18CE30u;
    // 0x18ce30: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18CE30u;
    SET_GPR_U32(ctx, 31, 0x18CE38u);
    ctx->pc = 0x18CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE30u;
    // 0x18ce34: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18CE30u, 0x18CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE38u;
label_18ce38:
    // 0x18ce38: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18CE38u;
    SET_GPR_U32(ctx, 31, 0x18CE40u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18CE38u, 0x18CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE40u;
label_18ce40:
    // 0x18ce40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ce40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce44: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x18ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x18ce48: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18CE48u;
    SET_GPR_U32(ctx, 31, 0x18CE50u);
    ctx->pc = 0x18CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE48u;
    // 0x18ce4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18CE48u, 0x18CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE50u;
label_18ce50:
    // 0x18ce50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ce54: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x18ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18ce58: 0xae032714  sw          $v1, 0x2714($s0)
    ctx->pc = 0x18ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10004), GPR_U32(ctx, 3));
    // 0x18ce5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE5Cu;
    {
        const bool branch_taken_0x18ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE5Cu;
        // 0x18ce60: 0xae02046c  sw          $v0, 0x46C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce5c) {
            ctx->pc = 0x18CE6Cu;
            goto label_18ce6c;
        }
    }
    ctx->pc = 0x18CE64u;
label_18ce64:
    // 0x18ce64: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x18ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x18ce68: 0xae000464  sw          $zero, 0x464($s0)
    ctx->pc = 0x18ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 0));
label_18ce6c:
    // 0x18ce6c: 0x8e03271c  lw          $v1, 0x271C($s0)
    ctx->pc = 0x18ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10012)));
    // 0x18ce70: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x18ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x18ce74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE74u;
    {
        const bool branch_taken_0x18ce74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ce74) {
            ctx->pc = 0x18CE84u;
            goto label_18ce84;
        }
    }
    ctx->pc = 0x18CE7Cu;
    // 0x18ce7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE7Cu;
    {
        const bool branch_taken_0x18ce7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE7Cu;
        // 0x18ce80: 0x8e020474  lw          $v0, 0x474($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce7c) {
            ctx->pc = 0x18CE8Cu;
            goto label_18ce8c;
        }
    }
    ctx->pc = 0x18CE84u;
label_18ce84:
    // 0x18ce84: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x18ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x18ce88: 0x0  nop
    ctx->pc = 0x18ce88u;
    // NOP
label_18ce8c:
    // 0x18ce8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ce90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ce90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ce94: 0x3e00008  jr          $ra
    ctx->pc = 0x18CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE94u;
        // 0x18ce98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE9Cu;
}
