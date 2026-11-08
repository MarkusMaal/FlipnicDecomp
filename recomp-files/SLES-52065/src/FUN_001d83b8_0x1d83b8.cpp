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

// Function: FUN_001d83b8
// Address: 0x1d83b8 - 0x1d83f0
void FUN_001d83b8_0x1d83b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d83b8_0x1d83b8");
#endif

    switch (ctx->pc) {
        case 0x1d83b8u: goto label_1d83b8;
        case 0x1d83bcu: goto label_1d83bc;
        case 0x1d83c0u: goto label_1d83c0;
        case 0x1d83c4u: goto label_1d83c4;
        case 0x1d83c8u: goto label_1d83c8;
        case 0x1d83ccu: goto label_1d83cc;
        case 0x1d83d0u: goto label_1d83d0;
        case 0x1d83d4u: goto label_1d83d4;
        case 0x1d83d8u: goto label_1d83d8;
        case 0x1d83dcu: goto label_1d83dc;
        case 0x1d83e0u: goto label_1d83e0;
        case 0x1d83e4u: goto label_1d83e4;
        case 0x1d83e8u: goto label_1d83e8;
        case 0x1d83ecu: goto label_1d83ec;
        default: break;
    }

    ctx->pc = 0x1d83b8u;

label_1d83b8:
    // 0x1d83b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d83b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d83bc:
    // 0x1d83bc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1d83c0:
    // 0x1d83c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d83c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d83c4:
    // 0x1d83c4: 0x8c64054c  lw          $a0, 0x54C($v1)
    ctx->pc = 0x1d83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1356)));
label_1d83c8:
    // 0x1d83c8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1d83c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1d83cc:
    // 0x1d83cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d83d0:
    // 0x1d83d0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1d83d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1d83d4:
    // 0x1d83d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d83d8:
    // 0x1d83d8: 0x8c639c98  lw          $v1, -0x6368($v1)
    ctx->pc = 0x1d83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941848)));
label_1d83dc:
    // 0x1d83dc: 0x60f809  jalr        $v1
label_1d83e0:
    if (ctx->pc == 0x1D83E0u) {
        ctx->pc = 0x1D83E4u;
        goto label_1d83e4;
    }
    ctx->pc = 0x1D83DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D83E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83DCu, 0x1D83E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D83E4u;
label_1d83e4:
    // 0x1d83e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d83e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d83e8:
    // 0x1d83e8: 0x3e00008  jr          $ra
label_1d83ec:
    if (ctx->pc == 0x1D83ECu) {
        ctx->pc = 0x1D83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83E8u;
        // 0x1d83ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83F0u;
        goto label_fallthrough_0x1d83e8;
    }
    ctx->pc = 0x1D83E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83E8u;
        // 0x1d83ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d83e8:
    ctx->pc = 0x1D83F0u;
}
