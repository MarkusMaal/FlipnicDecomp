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

// Function: FUN_0018b540
// Address: 0x18b540 - 0x18b590
void FUN_0018b540_0x18b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018b540_0x18b540");
#endif

    switch (ctx->pc) {
        case 0x18b55cu: goto label_18b55c;
        case 0x18b574u: goto label_18b574;
        default: break;
    }

    ctx->pc = 0x18b540u;

    // 0x18b540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18b544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b548: 0x838286ec  lb          $v0, -0x7914($gp)
    ctx->pc = 0x18b548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936300)));
    // 0x18b54c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18B54Cu;
    {
        const bool branch_taken_0x18b54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B54Cu;
        // 0x18b550: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b54c) {
            ctx->pc = 0x18B57Cu;
            goto label_18b57c;
        }
    }
    ctx->pc = 0x18B554u;
    // 0x18b554: 0xc0629d8  jal         func_18A760
    ctx->pc = 0x18B554u;
    SET_GPR_U32(ctx, 31, 0x18B55Cu);
    ctx->pc = 0x18B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B554u;
    // 0x18b558: 0x2484a6b0  addiu       $a0, $a0, -0x5950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A760u, 0x18B554u, 0x18B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B55Cu;
label_18b55c:
    // 0x18b55c: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x18b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x18b560: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x18b560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x18b564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b568: 0x24a5a890  addiu       $a1, $a1, -0x5770
    ctx->pc = 0x18b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944912));
    // 0x18b56c: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x18B56Cu;
    SET_GPR_U32(ctx, 31, 0x18B574u);
    ctx->pc = 0x18B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B56Cu;
    // 0x18b570: 0x24c6a6a0  addiu       $a2, $a2, -0x5960 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x18B56Cu, 0x18B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B574u;
label_18b574:
    // 0x18b574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b578: 0xa38286ec  sb          $v0, -0x7914($gp)
    ctx->pc = 0x18b578u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936300), (uint8_t)GPR_U32(ctx, 2));
label_18b57c:
    // 0x18b57c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b580: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x18b584: 0x2442a6b0  addiu       $v0, $v0, -0x5950
    ctx->pc = 0x18b584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944432));
    // 0x18b588: 0x3e00008  jr          $ra
    ctx->pc = 0x18B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B588u;
        // 0x18b58c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B590u;
}
