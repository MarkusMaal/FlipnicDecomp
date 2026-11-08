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

// Function: FUN_00117ed0
// Address: 0x117ed0 - 0x117f2c
void FUN_00117ed0_0x117ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117ed0_0x117ed0");
#endif

    switch (ctx->pc) {
        case 0x117ee0u: goto label_117ee0;
        case 0x117ee8u: goto label_117ee8;
        case 0x117ef0u: goto label_117ef0;
        case 0x117ef8u: goto label_117ef8;
        case 0x117f00u: goto label_117f00;
        default: break;
    }

    ctx->pc = 0x117ed0u;

    // 0x117ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117ed8: 0xc04c29c  jal         func_130A70
    ctx->pc = 0x117ED8u;
    SET_GPR_U32(ctx, 31, 0x117EE0u);
    ctx->pc = 0x130A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A70u, 0x117ED8u, 0x117EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EE0u;
label_117ee0:
    // 0x117ee0: 0xc04c2b4  jal         func_130AD0
    ctx->pc = 0x117EE0u;
    SET_GPR_U32(ctx, 31, 0x117EE8u);
    ctx->pc = 0x130AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AD0u, 0x117EE0u, 0x117EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EE8u;
label_117ee8:
    // 0x117ee8: 0xc04c2a8  jal         func_130AA0
    ctx->pc = 0x117EE8u;
    SET_GPR_U32(ctx, 31, 0x117EF0u);
    ctx->pc = 0x130AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130AA0u, 0x117EE8u, 0x117EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EF0u;
label_117ef0:
    // 0x117ef0: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x117EF0u;
    SET_GPR_U32(ctx, 31, 0x117EF8u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x117EF0u, 0x117EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EF8u;
label_117ef8:
    // 0x117ef8: 0xc04a07c  jal         func_1281F0
    ctx->pc = 0x117EF8u;
    SET_GPR_U32(ctx, 31, 0x117F00u);
    ctx->pc = 0x117EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EF8u;
    // 0x117efc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281F0u, 0x117EF8u, 0x117F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F00u;
label_117f00:
    // 0x117f00: 0xdf828390  ld          $v0, -0x7C70($gp)
    ctx->pc = 0x117f00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x117f04: 0x6401ffff  daddiu      $at, $zero, -0x1
    ctx->pc = 0x117f04u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4294967295);
    // 0x117f08: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x117f08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x117f0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x117F0Cu;
    {
        const bool branch_taken_0x117f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f0c) {
            ctx->pc = 0x117F1Cu;
            goto label_117f1c;
        }
    }
    ctx->pc = 0x117F14u;
    // 0x117f14: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x117f14u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x117f18: 0xff828390  sd          $v0, -0x7C70($gp)
    ctx->pc = 0x117f18u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U64(ctx, 2));
label_117f1c:
    // 0x117f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117f20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f24: 0x3e00008  jr          $ra
    ctx->pc = 0x117F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F24u;
        // 0x117f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F2Cu;
}
