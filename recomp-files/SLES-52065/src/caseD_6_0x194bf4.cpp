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

// Function: caseD_6
// Address: 0x194bf4 - 0x194c44
void caseD_6_0x194bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x194bf4");
#endif

    switch (ctx->pc) {
        case 0x194c08u: goto label_194c08;
        case 0x194c10u: goto label_194c10;
        case 0x194c2cu: goto label_194c2c;
        case 0x194c3cu: goto label_194c3c;
        default: break;
    }

    ctx->pc = 0x194bf4u;

    // 0x194bf4: 0x0  nop
    ctx->pc = 0x194bf4u;
    // NOP
    // 0x194bf8: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194bfc: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194c00: 0xc058018  jal         func_160060
    ctx->pc = 0x194C00u;
    SET_GPR_U32(ctx, 31, 0x194C08u);
    ctx->pc = 0x194C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C00u;
    // 0x194c04: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x194C00u, 0x194C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C08u;
label_194c08:
    // 0x194c08: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x194C08u;
    SET_GPR_U32(ctx, 31, 0x194C10u);
    ctx->pc = 0x194C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C08u;
    // 0x194c0c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x194C08u, 0x194C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C10u;
label_194c10:
    // 0x194c10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x194c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194c14: 0x12230092  beq         $s1, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x194C14u;
    {
        const bool branch_taken_0x194c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x194c14) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194C1Cu;
    // 0x194c1c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x194c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x194c20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x194c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c24: 0xc057040  jal         func_15C100
    ctx->pc = 0x194C24u;
    SET_GPR_U32(ctx, 31, 0x194C2Cu);
    ctx->pc = 0x194C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C24u;
    // 0x194c28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x194C24u, 0x194C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C2Cu;
label_194c2c:
    // 0x194c2c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x194c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x194c30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c34: 0xc042360  jal         func_108D80
    ctx->pc = 0x194C34u;
    SET_GPR_U32(ctx, 31, 0x194C3Cu);
    ctx->pc = 0x194C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C34u;
    // 0x194c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108D80u, 0x194C34u, 0x194C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C3Cu;
label_194c3c:
    // 0x194c3c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x194C3Cu;
    {
        const bool branch_taken_0x194c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c3c) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194C44u;
}
