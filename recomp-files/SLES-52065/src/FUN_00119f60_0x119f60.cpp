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

// Function: FUN_00119f60
// Address: 0x119f60 - 0x11a008
void FUN_00119f60_0x119f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119f60_0x119f60");
#endif

    switch (ctx->pc) {
        case 0x119f78u: goto label_119f78;
        case 0x119f88u: goto label_119f88;
        case 0x119f94u: goto label_119f94;
        case 0x119fa4u: goto label_119fa4;
        case 0x119fb0u: goto label_119fb0;
        case 0x119fb8u: goto label_119fb8;
        case 0x119fc0u: goto label_119fc0;
        case 0x119fc8u: goto label_119fc8;
        case 0x119fdcu: goto label_119fdc;
        case 0x119fe8u: goto label_119fe8;
        default: break;
    }

    ctx->pc = 0x119f60u;

    // 0x119f60: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x119f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x119f64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119f6c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x119f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x119f70: 0xc080702  jal         func_201C08
    ctx->pc = 0x119F70u;
    SET_GPR_U32(ctx, 31, 0x119F78u);
    ctx->pc = 0x119F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F70u;
    // 0x119f74: 0x24a5e6a0  addiu       $a1, $a1, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x119F70u, 0x119F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F78u;
label_119f78:
    // 0x119f78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119f7c: 0x27a402d8  addiu       $a0, $sp, 0x2D8
    ctx->pc = 0x119f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    // 0x119f80: 0xc080702  jal         func_201C08
    ctx->pc = 0x119F80u;
    SET_GPR_U32(ctx, 31, 0x119F88u);
    ctx->pc = 0x119F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F80u;
    // 0x119f84: 0x24a5e6b8  addiu       $a1, $a1, -0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x119F80u, 0x119F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F88u;
label_119f88:
    // 0x119f88: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x119f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x119f8c: 0xc080702  jal         func_201C08
    ctx->pc = 0x119F8Cu;
    SET_GPR_U32(ctx, 31, 0x119F94u);
    ctx->pc = 0x119F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F8Cu;
    // 0x119f90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x119F8Cu, 0x119F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F94u;
label_119f94:
    // 0x119f94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x119f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x119f98: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x119f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x119f9c: 0xc080664  jal         func_201990
    ctx->pc = 0x119F9Cu;
    SET_GPR_U32(ctx, 31, 0x119FA4u);
    ctx->pc = 0x119FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F9Cu;
    // 0x119fa0: 0x24a5e6c0  addiu       $a1, $a1, -0x1940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x119F9Cu, 0x119FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FA4u;
label_119fa4:
    // 0x119fa4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x119fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x119fa8: 0xc080664  jal         func_201990
    ctx->pc = 0x119FA8u;
    SET_GPR_U32(ctx, 31, 0x119FB0u);
    ctx->pc = 0x119FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FA8u;
    // 0x119fac: 0x27a502d8  addiu       $a1, $sp, 0x2D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x119FA8u, 0x119FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FB0u;
label_119fb0:
    // 0x119fb0: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x119FB0u;
    SET_GPR_U32(ctx, 31, 0x119FB8u);
    ctx->pc = 0x119FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FB0u;
    // 0x119fb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x119FB0u, 0x119FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FB8u;
label_119fb8:
    // 0x119fb8: 0xc07dea4  jal         func_1F7A90
    ctx->pc = 0x119FB8u;
    SET_GPR_U32(ctx, 31, 0x119FC0u);
    ctx->pc = 0x119FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FB8u;
    // 0x119fbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7A90u, 0x119FB8u, 0x119FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FC0u;
label_119fc0:
    // 0x119fc0: 0xc07ce72  jal         func_1F39C8
    ctx->pc = 0x119FC0u;
    SET_GPR_U32(ctx, 31, 0x119FC8u);
    ctx->pc = 0x119FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FC0u;
    // 0x119fc4: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F39C8u, 0x119FC0u, 0x119FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FC8u;
label_119fc8:
    // 0x119fc8: 0x0  nop
    ctx->pc = 0x119fc8u;
    // NOP
    // 0x119fcc: 0x0  nop
    ctx->pc = 0x119fccu;
    // NOP
    // 0x119fd0: 0x0  nop
    ctx->pc = 0x119fd0u;
    // NOP
    // 0x119fd4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119FD4u;
    {
        const bool branch_taken_0x119fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119fd4) {
            ctx->pc = 0x119FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119fc0;
        }
    }
    ctx->pc = 0x119FDCu;
label_119fdc:
    // 0x119fdc: 0x0  nop
    ctx->pc = 0x119fdcu;
    // NOP
    // 0x119fe0: 0xc07ce64  jal         func_1F3990
    ctx->pc = 0x119FE0u;
    SET_GPR_U32(ctx, 31, 0x119FE8u);
    ctx->pc = 0x1F3990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3990u, 0x119FE0u, 0x119FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FE8u;
label_119fe8:
    // 0x119fe8: 0x0  nop
    ctx->pc = 0x119fe8u;
    // NOP
    // 0x119fec: 0x0  nop
    ctx->pc = 0x119fecu;
    // NOP
    // 0x119ff0: 0x0  nop
    ctx->pc = 0x119ff0u;
    // NOP
    // 0x119ff4: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x119FF4u;
    {
        const bool branch_taken_0x119ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ff4) {
            ctx->pc = 0x119FDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119fdc;
        }
    }
    ctx->pc = 0x119FFCu;
    // 0x119ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a000: 0x3e00008  jr          $ra
    ctx->pc = 0x11A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A000u;
        // 0x11a004: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A008u;
}
