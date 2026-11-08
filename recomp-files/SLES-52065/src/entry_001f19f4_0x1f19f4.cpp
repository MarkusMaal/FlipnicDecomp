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

// Function: entry_001f19f4
// Address: 0x1f19f4 - 0x1f1a70
void entry_001f19f4_0x1f19f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f19f4_0x1f19f4");
#endif

    switch (ctx->pc) {
        case 0x1f1a14u: goto label_1f1a14;
        case 0x1f1a50u: goto label_1f1a50;
        case 0x1f1a60u: goto label_1f1a60;
        case 0x1f1a68u: goto label_1f1a68;
        default: break;
    }

    ctx->pc = 0x1f19f4u;

    // 0x1f19f4: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x1f19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x1f19f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f19fc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f1a00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1a04: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f1a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f1a08: 0x2673ee40  addiu       $s3, $s3, -0x11C0
    ctx->pc = 0x1f1a08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962752));
    // 0x1f1a0c: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A14u);
    ctx->pc = 0x1F1A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A0Cu;
    // 0x1f1a10: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F1A0Cu, 0x1F1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A14u;
label_1f1a14:
    // 0x1f1a14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a18: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1f1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1f1a1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1a20: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1f1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1f1a24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f1a28: 0x2684f900  addiu       $a0, $s4, -0x700
    ctx->pc = 0x1f1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965504));
    // 0x1f1a2c: 0x26c7e200  addiu       $a3, $s6, -0x1E00
    ctx->pc = 0x1f1a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959616));
    // 0x1f1a30: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1f1a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f1a34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1a38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a3c: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f1a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f1a40: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1f1a40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a44: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1a48: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1A48u;
    SET_GPR_U32(ctx, 31, 0x1F1A50u);
    ctx->pc = 0x1F1A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A48u;
    // 0x1f1a4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1A48u, 0x1F1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A50u;
label_1f1a50:
    // 0x1f1a50: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1A50u;
    {
        const bool branch_taken_0x1f1a50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A50u;
        // 0x1f1a54: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a50) {
            ctx->pc = 0x1F1A70u;
            return;
        }
    }
    ctx->pc = 0x1F1A58u;
    // 0x1f1a58: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1A58u;
    SET_GPR_U32(ctx, 31, 0x1F1A60u);
    ctx->pc = 0x1F1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1A58u;
    // 0x1f1a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1A58u, 0x1F1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A60u;
label_1f1a60:
    // 0x1f1a60: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1A60u;
    SET_GPR_U32(ctx, 31, 0x1F1A68u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1A60u, 0x1F1A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A68u;
label_1f1a68:
    // 0x1f1a68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1A68u;
    {
        const bool branch_taken_0x1f1a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1A68u;
        // 0x1f1a6c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a68) {
            ctx->pc = 0x1F1AA8u;
            return;
        }
    }
    ctx->pc = 0x1F1A70u;
}
