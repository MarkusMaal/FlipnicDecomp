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

// Function: entry_00101058
// Address: 0x101058 - 0x1010ec
void entry_00101058_0x101058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101058_0x101058");
#endif

    switch (ctx->pc) {
        case 0x101078u: goto label_101078;
        case 0x101080u: goto label_101080;
        case 0x101088u: goto label_101088;
        case 0x101090u: goto label_101090;
        case 0x101098u: goto label_101098;
        case 0x1010a0u: goto label_1010a0;
        case 0x1010a8u: goto label_1010a8;
        case 0x1010b0u: goto label_1010b0;
        case 0x1010b8u: goto label_1010b8;
        case 0x1010c0u: goto label_1010c0;
        case 0x1010c8u: goto label_1010c8;
        case 0x1010d0u: goto label_1010d0;
        default: break;
    }

    ctx->pc = 0x101058u;

    // 0x101058: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x101058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10105c: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x10105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x101060: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x101064: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x101064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x101068: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x101068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10106c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10106cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x101070: 0xc057210  jal         func_15C840
    ctx->pc = 0x101070u;
    SET_GPR_U32(ctx, 31, 0x101078u);
    ctx->pc = 0x101074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101070u;
    // 0x101074: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C840u, 0x101070u, 0x101078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101078u;
label_101078:
    // 0x101078: 0xc040320  jal         func_100C80
    ctx->pc = 0x101078u;
    SET_GPR_U32(ctx, 31, 0x101080u);
    ctx->pc = 0x10107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101078u;
    // 0x10107c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C80u, 0x101078u, 0x101080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101080u;
label_101080:
    // 0x101080: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x101080u;
    SET_GPR_U32(ctx, 31, 0x101088u);
    ctx->pc = 0x101084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101080u;
    // 0x101084: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x101080u, 0x101088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101088u;
label_101088:
    // 0x101088: 0xc057ecc  jal         func_15FB30
    ctx->pc = 0x101088u;
    SET_GPR_U32(ctx, 31, 0x101090u);
    ctx->pc = 0x10108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101088u;
    // 0x10108c: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FB30u, 0x101088u, 0x101090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101090u;
label_101090:
    // 0x101090: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x101090u;
    SET_GPR_U32(ctx, 31, 0x101098u);
    ctx->pc = 0x101094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101090u;
    // 0x101094: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x101090u, 0x101098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101098u;
label_101098:
    // 0x101098: 0xc057ecc  jal         func_15FB30
    ctx->pc = 0x101098u;
    SET_GPR_U32(ctx, 31, 0x1010A0u);
    ctx->pc = 0x10109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101098u;
    // 0x10109c: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FB30u, 0x101098u, 0x1010A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010A0u;
label_1010a0:
    // 0x1010a0: 0xc057608  jal         func_15D820
    ctx->pc = 0x1010A0u;
    SET_GPR_U32(ctx, 31, 0x1010A8u);
    ctx->pc = 0x1010A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010A0u;
    // 0x1010a4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D820u, 0x1010A0u, 0x1010A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010A8u;
label_1010a8:
    // 0x1010a8: 0xc0573d4  jal         func_15CF50
    ctx->pc = 0x1010A8u;
    SET_GPR_U32(ctx, 31, 0x1010B0u);
    ctx->pc = 0x1010ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010A8u;
    // 0x1010ac: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF50u, 0x1010A8u, 0x1010B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010B0u;
label_1010b0:
    // 0x1010b0: 0xc0579f4  jal         func_15E7D0
    ctx->pc = 0x1010B0u;
    SET_GPR_U32(ctx, 31, 0x1010B8u);
    ctx->pc = 0x1010B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010B0u;
    // 0x1010b4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E7D0u, 0x1010B0u, 0x1010B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010B8u;
label_1010b8:
    // 0x1010b8: 0xc057920  jal         func_15E480
    ctx->pc = 0x1010B8u;
    SET_GPR_U32(ctx, 31, 0x1010C0u);
    ctx->pc = 0x1010BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010B8u;
    // 0x1010bc: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E480u, 0x1010B8u, 0x1010C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010C0u;
label_1010c0:
    // 0x1010c0: 0xc04647c  jal         func_1191F0
    ctx->pc = 0x1010C0u;
    SET_GPR_U32(ctx, 31, 0x1010C8u);
    ctx->pc = 0x1191F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191F0u, 0x1010C0u, 0x1010C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010C8u;
label_1010c8:
    // 0x1010c8: 0xc0421e0  jal         func_108780
    ctx->pc = 0x1010C8u;
    SET_GPR_U32(ctx, 31, 0x1010D0u);
    ctx->pc = 0x1010CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010C8u;
    // 0x1010cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x1010C8u, 0x1010D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010D0u;
label_1010d0:
    // 0x1010d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1010d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1010d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1010d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1010d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1010d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1010dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1010dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1010e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1010e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1010e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1010E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1010E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010E4u;
        // 0x1010e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1010E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1010ECu;
}
