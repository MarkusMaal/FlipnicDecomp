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

// Function: entry_0017dbb0
// Address: 0x17dbb0 - 0x17dc30
void entry_0017dbb0_0x17dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dbb0_0x17dbb0");
#endif

    switch (ctx->pc) {
        case 0x17dbe4u: goto label_17dbe4;
        case 0x17dbecu: goto label_17dbec;
        case 0x17dc04u: goto label_17dc04;
        case 0x17dc1cu: goto label_17dc1c;
        default: break;
    }

    ctx->pc = 0x17dbb0u;

label_17dbb0:
    // 0x17dbb0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17dbb4:
    // 0x17dbb4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_17dbb8:
    if (ctx->pc == 0x17DBB8u) {
        ctx->pc = 0x17DBBCu;
        goto label_17dbbc;
    }
    ctx->pc = 0x17DBB4u;
    {
        const bool branch_taken_0x17dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dbb4) {
            ctx->pc = 0x17DC30u;
            return;
        }
    }
    ctx->pc = 0x17DBBCu;
label_17dbbc:
    // 0x17dbbc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17dbc0:
    // 0x17dbc0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_17dbc4:
    if (ctx->pc == 0x17DBC4u) {
        ctx->pc = 0x17DBC8u;
        goto label_17dbc8;
    }
    ctx->pc = 0x17DBC0u;
    {
        const bool branch_taken_0x17dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dbc0) {
            ctx->pc = 0x17DC30u;
            return;
        }
    }
    ctx->pc = 0x17DBC8u;
label_17dbc8:
    // 0x17dbc8: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17dbcc:
    // 0x17dbcc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17dbd0:
    // 0x17dbd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17dbd4:
    // 0x17dbd4: 0x24a5f930  addiu       $a1, $a1, -0x6D0
    ctx->pc = 0x17dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
label_17dbd8:
    // 0x17dbd8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17dbdc:
    // 0x17dbdc: 0xc0805c8  jal         func_201720
label_17dbe0:
    if (ctx->pc == 0x17DBE0u) {
        ctx->pc = 0x17DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBDCu;
        // 0x17dbe0: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBE4u;
        goto label_17dbe4;
    }
    ctx->pc = 0x17DBDCu;
    SET_GPR_U32(ctx, 31, 0x17DBE4u);
    ctx->pc = 0x17DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBDCu;
    // 0x17dbe0: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DBDCu, 0x17DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBE4u;
label_17dbe4:
    // 0x17dbe4: 0xc0512c8  jal         func_144B20
label_17dbe8:
    if (ctx->pc == 0x17DBE8u) {
        ctx->pc = 0x17DBECu;
        goto label_17dbec;
    }
    ctx->pc = 0x17DBE4u;
    SET_GPR_U32(ctx, 31, 0x17DBECu);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x17DBE4u, 0x17DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBECu;
label_17dbec:
    // 0x17dbec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17dbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17dbf0:
    // 0x17dbf0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17dbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dbf4:
    // 0x17dbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dbf8:
    // 0x17dbf8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17dbfc:
    // 0x17dbfc: 0xc051248  jal         func_144920
label_17dc00:
    if (ctx->pc == 0x17DC00u) {
        ctx->pc = 0x17DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBFCu;
        // 0x17dc00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC04u;
        goto label_17dc04;
    }
    ctx->pc = 0x17DBFCu;
    SET_GPR_U32(ctx, 31, 0x17DC04u);
    ctx->pc = 0x17DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBFCu;
    // 0x17dc00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144920u, 0x17DBFCu, 0x17DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC04u;
label_17dc04:
    // 0x17dc04: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17dc08:
    // 0x17dc08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17dc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dc0c:
    // 0x17dc0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17dc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17dc10:
    // 0x17dc10: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_17dc14:
    // 0x17dc14: 0x320f809  jalr        $t9
label_17dc18:
    if (ctx->pc == 0x17DC18u) {
        ctx->pc = 0x17DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC14u;
        // 0x17dc18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC1Cu;
        goto label_17dc1c;
    }
    ctx->pc = 0x17DC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17DC1Cu);
        ctx->pc = 0x17DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC14u;
        // 0x17dc18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC14u, 0x17DC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DC1Cu;
label_17dc1c:
    // 0x17dc1c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x17dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17dc20:
    // 0x17dc20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17dc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17dc24:
    // 0x17dc24: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x17dc24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_17dc28:
    // 0x17dc28: 0x320f809  jalr        $t9
label_17dc2c:
    if (ctx->pc == 0x17DC2Cu) {
        ctx->pc = 0x17DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC28u;
        // 0x17dc2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC30u;
        goto label_fallthrough_0x17dc28;
    }
    ctx->pc = 0x17DC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17DC30u);
        ctx->pc = 0x17DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC28u;
        // 0x17dc2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC28u, 0x17DC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x17dc28:
    ctx->pc = 0x17DC30u;
}
