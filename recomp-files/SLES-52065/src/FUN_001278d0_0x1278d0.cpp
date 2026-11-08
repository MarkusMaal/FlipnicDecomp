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

// Function: FUN_001278d0
// Address: 0x1278d0 - 0x127920
void FUN_001278d0_0x1278d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001278d0_0x1278d0");
#endif

    switch (ctx->pc) {
        case 0x1278ecu: goto label_1278ec;
        case 0x127904u: goto label_127904;
        default: break;
    }

    ctx->pc = 0x1278d0u;

    // 0x1278d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1278d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1278d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1278d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1278d8: 0x83828438  lb          $v0, -0x7BC8($gp)
    ctx->pc = 0x1278d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935608)));
    // 0x1278dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1278DCu;
    {
        const bool branch_taken_0x1278dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1278E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278DCu;
        // 0x1278e0: 0x3c04002b  lui         $a0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1278dc) {
            ctx->pc = 0x12790Cu;
            goto label_12790c;
        }
    }
    ctx->pc = 0x1278E4u;
    // 0x1278e4: 0xc049d58  jal         func_127560
    ctx->pc = 0x1278E4u;
    SET_GPR_U32(ctx, 31, 0x1278ECu);
    ctx->pc = 0x1278E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278E4u;
    // 0x1278e8: 0x24842d60  addiu       $a0, $a0, 0x2D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127560u, 0x1278E4u, 0x1278ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278ECu;
label_1278ec:
    // 0x1278ec: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1278ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x1278f0: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1278f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1278f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1278f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278f8: 0x24a57770  addiu       $a1, $a1, 0x7770
    ctx->pc = 0x1278f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30576));
    // 0x1278fc: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1278FCu;
    SET_GPR_U32(ctx, 31, 0x127904u);
    ctx->pc = 0x127900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278FCu;
    // 0x127900: 0x24c62d50  addiu       $a2, $a2, 0x2D50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1278FCu, 0x127904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127904u;
label_127904:
    // 0x127904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127908: 0xa3828438  sb          $v0, -0x7BC8($gp)
    ctx->pc = 0x127908u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935608), (uint8_t)GPR_U32(ctx, 2));
label_12790c:
    // 0x12790c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127910: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x127910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x127914: 0x24422d60  addiu       $v0, $v0, 0x2D60
    ctx->pc = 0x127914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11616));
    // 0x127918: 0x3e00008  jr          $ra
    ctx->pc = 0x127918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127918u;
        // 0x12791c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127920u;
}
