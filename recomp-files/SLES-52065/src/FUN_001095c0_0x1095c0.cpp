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

// Function: FUN_001095c0
// Address: 0x1095c0 - 0x1095f8
void FUN_001095c0_0x1095c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001095c0_0x1095c0");
#endif

    switch (ctx->pc) {
        case 0x1095c0u: goto label_1095c0;
        case 0x1095c4u: goto label_1095c4;
        case 0x1095c8u: goto label_1095c8;
        case 0x1095ccu: goto label_1095cc;
        case 0x1095d0u: goto label_1095d0;
        case 0x1095d4u: goto label_1095d4;
        case 0x1095d8u: goto label_1095d8;
        case 0x1095dcu: goto label_1095dc;
        case 0x1095e0u: goto label_1095e0;
        case 0x1095e4u: goto label_1095e4;
        case 0x1095e8u: goto label_1095e8;
        case 0x1095ecu: goto label_1095ec;
        case 0x1095f0u: goto label_1095f0;
        case 0x1095f4u: goto label_1095f4;
        default: break;
    }

    ctx->pc = 0x1095c0u;

label_1095c0:
    // 0x1095c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1095c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1095c4:
    // 0x1095c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1095c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1095c8:
    // 0x1095c8: 0xa08501d2  sb          $a1, 0x1D2($a0)
    ctx->pc = 0x1095c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 466), (uint8_t)GPR_U32(ctx, 5));
label_1095cc:
    // 0x1095cc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1095ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1095d0:
    // 0x1095d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1095d4:
    if (ctx->pc == 0x1095D4u) {
        ctx->pc = 0x1095D8u;
        goto label_1095d8;
    }
    ctx->pc = 0x1095D0u;
    {
        const bool branch_taken_0x1095d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1095d0) {
            ctx->pc = 0x1095ECu;
            goto label_1095ec;
        }
    }
    ctx->pc = 0x1095D8u;
label_1095d8:
    // 0x1095d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1095d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1095dc:
    // 0x1095dc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1095dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1095e0:
    // 0x1095e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1095e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1095e4:
    // 0x1095e4: 0x320f809  jalr        $t9
label_1095e8:
    if (ctx->pc == 0x1095E8u) {
        ctx->pc = 0x1095E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095E4u;
        // 0x1095e8: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095ECu;
        goto label_1095ec;
    }
    ctx->pc = 0x1095E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1095ECu);
        ctx->pc = 0x1095E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095E4u;
        // 0x1095e8: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095E4u, 0x1095ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1095ECu;
label_1095ec:
    // 0x1095ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1095ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1095f0:
    // 0x1095f0: 0x3e00008  jr          $ra
label_1095f4:
    if (ctx->pc == 0x1095F4u) {
        ctx->pc = 0x1095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095F0u;
        // 0x1095f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1095F8u;
        goto label_fallthrough_0x1095f0;
    }
    ctx->pc = 0x1095F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1095F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1095F0u;
        // 0x1095f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1095F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1095f0:
    ctx->pc = 0x1095F8u;
}
