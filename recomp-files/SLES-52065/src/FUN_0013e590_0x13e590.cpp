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

// Function: FUN_0013e590
// Address: 0x13e590 - 0x13e5ec
void FUN_0013e590_0x13e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013e590_0x13e590");
#endif

    switch (ctx->pc) {
        case 0x13e590u: goto label_13e590;
        case 0x13e594u: goto label_13e594;
        case 0x13e598u: goto label_13e598;
        case 0x13e59cu: goto label_13e59c;
        case 0x13e5a0u: goto label_13e5a0;
        case 0x13e5a4u: goto label_13e5a4;
        case 0x13e5a8u: goto label_13e5a8;
        case 0x13e5acu: goto label_13e5ac;
        case 0x13e5b0u: goto label_13e5b0;
        case 0x13e5b4u: goto label_13e5b4;
        case 0x13e5b8u: goto label_13e5b8;
        case 0x13e5bcu: goto label_13e5bc;
        case 0x13e5c0u: goto label_13e5c0;
        case 0x13e5c4u: goto label_13e5c4;
        case 0x13e5c8u: goto label_13e5c8;
        case 0x13e5ccu: goto label_13e5cc;
        case 0x13e5d0u: goto label_13e5d0;
        case 0x13e5d4u: goto label_13e5d4;
        case 0x13e5d8u: goto label_13e5d8;
        case 0x13e5dcu: goto label_13e5dc;
        case 0x13e5e0u: goto label_13e5e0;
        case 0x13e5e4u: goto label_13e5e4;
        case 0x13e5e8u: goto label_13e5e8;
        default: break;
    }

    ctx->pc = 0x13e590u;

label_13e590:
    // 0x13e590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13e594:
    // 0x13e594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13e598:
    // 0x13e598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13e59c:
    // 0x13e59c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13e5a0:
    // 0x13e5a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13e5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e5a4:
    // 0x13e5a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e5a8:
    // 0x13e5a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13e5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13e5ac:
    // 0x13e5ac: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13e5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13e5b0:
    // 0x13e5b0: 0x320f809  jalr        $t9
label_13e5b4:
    if (ctx->pc == 0x13E5B4u) {
        ctx->pc = 0x13E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5B0u;
        // 0x13e5b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5B8u;
        goto label_13e5b8;
    }
    ctx->pc = 0x13E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E5B8u);
        ctx->pc = 0x13E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5B0u;
        // 0x13e5b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5B0u, 0x13E5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E5B8u;
label_13e5b8:
    // 0x13e5b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e5bc:
    // 0x13e5bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e5c0:
    // 0x13e5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e5c4:
    // 0x13e5c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13e5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13e5c8:
    // 0x13e5c8: 0x320f809  jalr        $t9
label_13e5cc:
    if (ctx->pc == 0x13E5CCu) {
        ctx->pc = 0x13E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5C8u;
        // 0x13e5cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5D0u;
        goto label_13e5d0;
    }
    ctx->pc = 0x13E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E5D0u);
        ctx->pc = 0x13E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5C8u;
        // 0x13e5cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5C8u, 0x13E5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E5D0u;
label_13e5d0:
    // 0x13e5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e5d4:
    // 0x13e5d4: 0xa223018b  sb          $v1, 0x18B($s1)
    ctx->pc = 0x13e5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 395), (uint8_t)GPR_U32(ctx, 3));
label_13e5d8:
    // 0x13e5d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13e5dc:
    // 0x13e5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e5e0:
    // 0x13e5e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e5e4:
    // 0x13e5e4: 0x3e00008  jr          $ra
label_13e5e8:
    if (ctx->pc == 0x13E5E8u) {
        ctx->pc = 0x13E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5E4u;
        // 0x13e5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E5ECu;
        goto label_fallthrough_0x13e5e4;
    }
    ctx->pc = 0x13E5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5E4u;
        // 0x13e5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e5e4:
    ctx->pc = 0x13E5ECu;
}
