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

// Function: FUN_0010dbb0
// Address: 0x10dbb0 - 0x10dc40
void FUN_0010dbb0_0x10dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010dbb0_0x10dbb0");
#endif

    switch (ctx->pc) {
        case 0x10dc10u: goto label_10dc10;
        case 0x10dc28u: goto label_10dc28;
        default: break;
    }

    ctx->pc = 0x10dbb0u;

    // 0x10dbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10dbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10dbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10dbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10dbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10dbc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10dbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbc4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10DBC4u;
    {
        const bool branch_taken_0x10dbc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBC4u;
        // 0x10dbc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbc4) {
            ctx->pc = 0x10DC28u;
            goto label_10dc28;
        }
    }
    ctx->pc = 0x10DBCCu;
    // 0x10dbcc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10dbd0: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x10dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x10dbd4: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x10DBD4u;
    {
        const bool branch_taken_0x10dbd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBD4u;
        // 0x10dbd8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbd4) {
            ctx->pc = 0x10DC10u;
            goto label_10dc10;
        }
    }
    ctx->pc = 0x10DBDCu;
    // 0x10dbdc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10dbe0: 0x244281d0  addiu       $v0, $v0, -0x7E30
    ctx->pc = 0x10dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934992));
    // 0x10dbe4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10DBE4u;
    {
        const bool branch_taken_0x10dbe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE4u;
        // 0x10dbe8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbe4) {
            ctx->pc = 0x10DC10u;
            goto label_10dc10;
        }
    }
    ctx->pc = 0x10DBECu;
    // 0x10dbec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10dbf0: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x10dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x10dbf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DBF4u;
    {
        const bool branch_taken_0x10dbf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF4u;
        // 0x10dbf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbf4) {
            ctx->pc = 0x10DC10u;
            goto label_10dc10;
        }
    }
    ctx->pc = 0x10DBFCu;
    // 0x10dbfc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10dc00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10dc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc04: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x10dc08: 0xc0418ec  jal         func_1063B0
    ctx->pc = 0x10DC08u;
    SET_GPR_U32(ctx, 31, 0x10DC10u);
    ctx->pc = 0x10DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC08u;
    // 0x10dc0c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1063B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1063B0u, 0x10DC08u, 0x10DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC10u;
label_10dc10:
    // 0x10dc10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x10dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x10dc14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10dc14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10dc18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DC18u;
    {
        const bool branch_taken_0x10dc18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC18u;
        // 0x10dc1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc18) {
            ctx->pc = 0x10DC2Cu;
            goto label_10dc2c;
        }
    }
    ctx->pc = 0x10DC20u;
    // 0x10dc20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x10DC20u;
    SET_GPR_U32(ctx, 31, 0x10DC28u);
    ctx->pc = 0x10DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC20u;
    // 0x10dc24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x10DC20u, 0x10DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC28u;
label_10dc28:
    // 0x10dc28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10dc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dc2c:
    // 0x10dc2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dc30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10dc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dc34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10dc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dc38: 0x3e00008  jr          $ra
    ctx->pc = 0x10DC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC38u;
        // 0x10dc3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DC40u;
}
