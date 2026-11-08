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

// Function: fmv_tutorial
// Address: 0x1cb8f0 - 0x1cb94c
void fmv_tutorial_0x1cb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fmv_tutorial_0x1cb8f0");
#endif

    switch (ctx->pc) {
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb940u: goto label_1cb940;
        default: break;
    }

    ctx->pc = 0x1cb8f0u;

    // 0x1cb8f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8f8: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1CB8F8u;
    SET_GPR_U32(ctx, 31, 0x1CB900u);
    ctx->pc = 0x1CB8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8F8u;
    // 0x1cb8fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1CB8F8u, 0x1CB900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB900u;
label_1cb900:
    // 0x1cb900: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cb900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cb904: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb908: 0x24a58050  addiu       $a1, $a1, -0x7FB0
    ctx->pc = 0x1cb908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934608));
    // 0x1cb90c: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CB90Cu;
    SET_GPR_U32(ctx, 31, 0x1CB914u);
    ctx->pc = 0x1CB910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB90Cu;
    // 0x1cb910: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CB90Cu, 0x1CB914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB914u;
label_1cb914:
    // 0x1cb914: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cb914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cb918: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cb91c: 0x8c23f940  lw          $v1, -0x6C0($at)
    ctx->pc = 0x1cb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F940u));
    // 0x1cb920: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x1cb920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x1cb924: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb92c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cb930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb934: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb938: 0xc060020  jal         func_180080
    ctx->pc = 0x1CB938u;
    SET_GPR_U32(ctx, 31, 0x1CB940u);
    ctx->pc = 0x1CB93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB938u;
    // 0x1cb93c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180080u, 0x1CB938u, 0x1CB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB940u;
label_1cb940:
    // 0x1cb940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb944: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB944u;
        // 0x1cb948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB94Cu;
}
