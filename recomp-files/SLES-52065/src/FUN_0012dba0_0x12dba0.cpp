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

// Function: FUN_0012dba0
// Address: 0x12dba0 - 0x12dc20
void FUN_0012dba0_0x12dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012dba0_0x12dba0");
#endif

    switch (ctx->pc) {
        case 0x12dbd8u: goto label_12dbd8;
        case 0x12dbf0u: goto label_12dbf0;
        case 0x12dc08u: goto label_12dc08;
        default: break;
    }

    ctx->pc = 0x12dba0u;

    // 0x12dba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12dba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12dba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12dba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12dbac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12dbb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12dbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbb4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12DBB4u;
    {
        const bool branch_taken_0x12dbb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBB4u;
        // 0x12dbb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbb4) {
            ctx->pc = 0x12DC08u;
            goto label_12dc08;
        }
    }
    ctx->pc = 0x12DBBCu;
    // 0x12dbbc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x12dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x12dbc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DBC0u;
    {
        const bool branch_taken_0x12dbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dbc0) {
            ctx->pc = 0x12DBD8u;
            goto label_12dbd8;
        }
    }
    ctx->pc = 0x12DBC8u;
    // 0x12dbc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DBC8u;
    {
        const bool branch_taken_0x12dbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dbc8) {
            ctx->pc = 0x12DBD8u;
            goto label_12dbd8;
        }
    }
    ctx->pc = 0x12DBD0u;
    // 0x12dbd0: 0xc048414  jal         func_121050
    ctx->pc = 0x12DBD0u;
    SET_GPR_U32(ctx, 31, 0x12DBD8u);
    ctx->pc = 0x12DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBD0u;
    // 0x12dbd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x12DBD0u, 0x12DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBD8u;
label_12dbd8:
    // 0x12dbd8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12dbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12dbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbe0: 0x24a5db00  addiu       $a1, $a1, -0x2500
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957824));
    // 0x12dbe4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12dbe8: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x12DBE8u;
    SET_GPR_U32(ctx, 31, 0x12DBF0u);
    ctx->pc = 0x12DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DBE8u;
    // 0x12dbec: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x12DBE8u, 0x12DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBF0u;
label_12dbf0:
    // 0x12dbf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12dbf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12dbf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12dbf8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DBF8u;
    {
        const bool branch_taken_0x12dbf8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBF8u;
        // 0x12dbfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbf8) {
            ctx->pc = 0x12DC0Cu;
            goto label_12dc0c;
        }
    }
    ctx->pc = 0x12DC00u;
    // 0x12dc00: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12DC00u;
    SET_GPR_U32(ctx, 31, 0x12DC08u);
    ctx->pc = 0x12DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DC00u;
    // 0x12dc04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12DC00u, 0x12DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC08u;
label_12dc08:
    // 0x12dc08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12dc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12dc0c:
    // 0x12dc0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12dc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12dc10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12dc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12dc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dc18: 0x3e00008  jr          $ra
    ctx->pc = 0x12DC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC18u;
        // 0x12dc1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DC20u;
}
