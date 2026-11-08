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

// Function: open_menu
// Address: 0x1b80a0 - 0x1b80e4
void open_menu_0x1b80a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("open_menu_0x1b80a0");
#endif

    switch (ctx->pc) {
        case 0x1b80c8u: goto label_1b80c8;
        case 0x1b80d8u: goto label_1b80d8;
        default: break;
    }

    ctx->pc = 0x1b80a0u;

    // 0x1b80a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b80a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b80a4: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x1b80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1b80a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b80a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b80ac: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x1b80acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x1b80b0: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x1b80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x1b80b4: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x1b80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x1b80b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b80bc: 0xa0800041  sb          $zero, 0x41($a0)
    ctx->pc = 0x1b80bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b80c0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B80C0u;
    SET_GPR_U32(ctx, 31, 0x1B80C8u);
    ctx->pc = 0x1B80C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80C0u;
    // 0x1b80c4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B80C0u, 0x1B80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80C8u;
label_1b80c8:
    // 0x1b80c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b80c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80cc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b80d0: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1B80D0u;
    SET_GPR_U32(ctx, 31, 0x1B80D8u);
    ctx->pc = 0x1B80D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80D0u;
    // 0x1b80d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1B80D0u, 0x1B80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80D8u;
label_1b80d8:
    // 0x1b80d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b80d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b80dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B80DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80DCu;
        // 0x1b80e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B80DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B80E4u;
}
