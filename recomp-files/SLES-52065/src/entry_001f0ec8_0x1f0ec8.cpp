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

// Function: entry_001f0ec8
// Address: 0x1f0ec8 - 0x1f0f4c
void entry_001f0ec8_0x1f0ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0ec8_0x1f0ec8");
#endif

    switch (ctx->pc) {
        case 0x1f0ee0u: goto label_1f0ee0;
        case 0x1f0f2cu: goto label_1f0f2c;
        case 0x1f0f3cu: goto label_1f0f3c;
        case 0x1f0f44u: goto label_1f0f44;
        default: break;
    }

    ctx->pc = 0x1f0ec8u;

    // 0x1f0ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ecc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f0ed0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0ed4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0ed8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0ED8u;
    SET_GPR_U32(ctx, 31, 0x1F0EE0u);
    ctx->pc = 0x1F0EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0ED8u;
    // 0x1f0edc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0ED8u, 0x1F0EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EE0u;
label_1f0ee0:
    // 0x1f0ee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ee4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0ee8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f0eec: 0xae71e200  sw          $s1, -0x1E00($s3)
    ctx->pc = 0x1f0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294959616), GPR_U32(ctx, 17));
    // 0x1f0ef0: 0x2452ee40  addiu       $s2, $v0, -0x11C0
    ctx->pc = 0x1f0ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1f0ef4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f0ef8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0efc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1f0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1f0f00: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f0f04: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1f0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1f0f08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f0f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f0f10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f18: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1f0f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f0f1c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1f0f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f20: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0f24: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0F24u;
    SET_GPR_U32(ctx, 31, 0x1F0F2Cu);
    ctx->pc = 0x1F0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F24u;
    // 0x1f0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0F24u, 0x1F0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F2Cu;
label_1f0f2c:
    // 0x1f0f2c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0F2Cu;
    {
        const bool branch_taken_0x1f0f2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F2Cu;
        // 0x1f0f30: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f2c) {
            ctx->pc = 0x1F0F4Cu;
            return;
        }
    }
    ctx->pc = 0x1F0F34u;
    // 0x1f0f34: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0F34u;
    SET_GPR_U32(ctx, 31, 0x1F0F3Cu);
    ctx->pc = 0x1F0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F34u;
    // 0x1f0f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0F34u, 0x1F0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F3Cu;
label_1f0f3c:
    // 0x1f0f3c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F44u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0F3Cu, 0x1F0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F44u;
label_1f0f44:
    // 0x1f0f44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0F44u;
    {
        const bool branch_taken_0x1f0f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F44u;
        // 0x1f0f48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f44) {
            ctx->pc = 0x1F0F84u;
            return;
        }
    }
    ctx->pc = 0x1F0F4Cu;
}
