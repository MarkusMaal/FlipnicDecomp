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

// Function: entry_001838b0
// Address: 0x1838b0 - 0x1838e0
void entry_001838b0_0x1838b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001838b0_0x1838b0");
#endif

    switch (ctx->pc) {
        case 0x1838c4u: goto label_1838c4;
        default: break;
    }

    ctx->pc = 0x1838b0u;

    // 0x1838b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1838b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1838b8: 0x24a58e90  addiu       $a1, $a1, -0x7170
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938256));
    // 0x1838bc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1838BCu;
    SET_GPR_U32(ctx, 31, 0x1838C4u);
    ctx->pc = 0x1838C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838BCu;
    // 0x1838c0: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1838BCu, 0x1838C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838C4u;
label_1838c4:
    // 0x1838c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1838c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1838c8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1838cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1838ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1838d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1838d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1838d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1838d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1838D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1838DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838D8u;
        // 0x1838dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1838D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1838E0u;
}
