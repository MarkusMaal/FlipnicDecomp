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

// Function: SetOSDVisible
// Address: 0x1af670 - 0x1af6e0
void SetOSDVisible_0x1af670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetOSDVisible_0x1af670");
#endif

    switch (ctx->pc) {
        case 0x1af670u: goto label_1af670;
        case 0x1af674u: goto label_1af674;
        case 0x1af678u: goto label_1af678;
        case 0x1af67cu: goto label_1af67c;
        case 0x1af680u: goto label_1af680;
        case 0x1af684u: goto label_1af684;
        case 0x1af688u: goto label_1af688;
        case 0x1af68cu: goto label_1af68c;
        case 0x1af690u: goto label_1af690;
        case 0x1af694u: goto label_1af694;
        case 0x1af698u: goto label_1af698;
        case 0x1af69cu: goto label_1af69c;
        case 0x1af6a0u: goto label_1af6a0;
        case 0x1af6a4u: goto label_1af6a4;
        case 0x1af6a8u: goto label_1af6a8;
        case 0x1af6acu: goto label_1af6ac;
        case 0x1af6b0u: goto label_1af6b0;
        case 0x1af6b4u: goto label_1af6b4;
        case 0x1af6b8u: goto label_1af6b8;
        case 0x1af6bcu: goto label_1af6bc;
        case 0x1af6c0u: goto label_1af6c0;
        case 0x1af6c4u: goto label_1af6c4;
        case 0x1af6c8u: goto label_1af6c8;
        case 0x1af6ccu: goto label_1af6cc;
        case 0x1af6d0u: goto label_1af6d0;
        case 0x1af6d4u: goto label_1af6d4;
        case 0x1af6d8u: goto label_1af6d8;
        case 0x1af6dcu: goto label_1af6dc;
        default: break;
    }

    ctx->pc = 0x1af670u;

label_1af670:
    // 0x1af670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1af674:
    // 0x1af674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1af678:
    // 0x1af678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1af678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1af67c:
    // 0x1af67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af680:
    // 0x1af680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1af684:
    // 0x1af684: 0xa08502ed  sb          $a1, 0x2ED($a0)
    ctx->pc = 0x1af684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 749), (uint8_t)GPR_U32(ctx, 5));
label_1af688:
    // 0x1af688: 0x908302ed  lbu         $v1, 0x2ED($a0)
    ctx->pc = 0x1af688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 749)));
label_1af68c:
    // 0x1af68c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1af690:
    if (ctx->pc == 0x1AF690u) {
        ctx->pc = 0x1AF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF68Cu;
        // 0x1af690: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF694u;
        goto label_1af694;
    }
    ctx->pc = 0x1AF68Cu;
    {
        const bool branch_taken_0x1af68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF68Cu;
        // 0x1af690: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af68c) {
            ctx->pc = 0x1AF6C4u;
            goto label_1af6c4;
        }
    }
    ctx->pc = 0x1AF694u;
label_1af694:
    // 0x1af694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1af694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af698:
    // 0x1af698: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af69c:
    // 0x1af69c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1af69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1af6a0:
    // 0x1af6a0: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1af6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1af6a4:
    // 0x1af6a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1af6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af6a8:
    // 0x1af6a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1af6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1af6ac:
    // 0x1af6ac: 0x320f809  jalr        $t9
label_1af6b0:
    if (ctx->pc == 0x1AF6B0u) {
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ACu;
        // 0x1af6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6B4u;
        goto label_1af6b4;
    }
    ctx->pc = 0x1AF6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AF6B4u);
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ACu;
        // 0x1af6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF6ACu, 0x1AF6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF6B4u;
label_1af6b4:
    // 0x1af6b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af6b8:
    // 0x1af6b8: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1af6b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1af6bc:
    // 0x1af6bc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1af6c0:
    if (ctx->pc == 0x1AF6C0u) {
        ctx->pc = 0x1AF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6BCu;
        // 0x1af6c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6C4u;
        goto label_1af6c4;
    }
    ctx->pc = 0x1AF6BCu;
    {
        const bool branch_taken_0x1af6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6BCu;
        // 0x1af6c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6bc) {
            ctx->pc = 0x1AF69Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af69c;
        }
    }
    ctx->pc = 0x1AF6C4u;
label_1af6c4:
    // 0x1af6c4: 0x0  nop
    ctx->pc = 0x1af6c4u;
    // NOP
label_1af6c8:
    // 0x1af6c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af6cc:
    // 0x1af6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1af6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af6d0:
    // 0x1af6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af6d4:
    // 0x1af6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1af6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af6d8:
    // 0x1af6d8: 0x3e00008  jr          $ra
label_1af6dc:
    if (ctx->pc == 0x1AF6DCu) {
        ctx->pc = 0x1AF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6D8u;
        // 0x1af6dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6E0u;
        goto label_fallthrough_0x1af6d8;
    }
    ctx->pc = 0x1AF6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6D8u;
        // 0x1af6dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af6d8:
    ctx->pc = 0x1AF6E0u;
}
