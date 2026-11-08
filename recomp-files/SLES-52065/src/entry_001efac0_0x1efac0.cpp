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

// Function: entry_001efac0
// Address: 0x1efac0 - 0x1efb5c
void entry_001efac0_0x1efac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efac0_0x1efac0");
#endif

    switch (ctx->pc) {
        case 0x1efaf0u: goto label_1efaf0;
        case 0x1efb3cu: goto label_1efb3c;
        case 0x1efb4cu: goto label_1efb4c;
        case 0x1efb54u: goto label_1efb54;
        default: break;
    }

    ctx->pc = 0x1efac0u;

    // 0x1efac0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1efac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1efac4: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x1efac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
    // 0x1efac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1efac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efacc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1efaccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1efad0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1efad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1efad4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1efad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1efad8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1efad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1efadc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1efadcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1efae0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efae4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1efae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1efae8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1EFAE8u;
    SET_GPR_U32(ctx, 31, 0x1EFAF0u);
    ctx->pc = 0x1EFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFAE8u;
    // 0x1efaec: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1EFAE8u, 0x1EFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAF0u;
label_1efaf0:
    // 0x1efaf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1efaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efaf4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1efaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1efaf8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1efaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1efafc: 0xae91e200  sw          $s1, -0x1E00($s4)
    ctx->pc = 0x1efafcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294959616), GPR_U32(ctx, 17));
    // 0x1efb00: 0x2453ee40  addiu       $s3, $v0, -0x11C0
    ctx->pc = 0x1efb00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1efb04: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1efb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1efb08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1efb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efb0c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1efb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1efb10: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1efb10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1efb14: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1efb18: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1efb18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1efb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efb20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1efb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1efb24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb28: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1efb2c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1efb2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb30: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1efb30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efb34: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EFB34u;
    SET_GPR_U32(ctx, 31, 0x1EFB3Cu);
    ctx->pc = 0x1EFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB34u;
    // 0x1efb38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EFB34u, 0x1EFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB3Cu;
label_1efb3c:
    // 0x1efb3c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFB3Cu;
    {
        const bool branch_taken_0x1efb3c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1efb3c) {
            ctx->pc = 0x1EFB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB3Cu;
            // 0x1efb40: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFB5Cu;
            return;
        }
    }
    ctx->pc = 0x1EFB44u;
    // 0x1efb44: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFB44u;
    SET_GPR_U32(ctx, 31, 0x1EFB4Cu);
    ctx->pc = 0x1EFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB44u;
    // 0x1efb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFB44u, 0x1EFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB4Cu;
label_1efb4c:
    // 0x1efb4c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB54u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFB4Cu, 0x1EFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB54u;
label_1efb54:
    // 0x1efb54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EFB54u;
    {
        const bool branch_taken_0x1efb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB54u;
        // 0x1efb58: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb54) {
            ctx->pc = 0x1EFBA4u;
            return;
        }
    }
    ctx->pc = 0x1EFB5Cu;
}
