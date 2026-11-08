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

// Function: FUN_0015b790
// Address: 0x15b790 - 0x15b810
void FUN_0015b790_0x15b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015b790_0x15b790");
#endif

    switch (ctx->pc) {
        case 0x15b7a4u: goto label_15b7a4;
        default: break;
    }

    ctx->pc = 0x15b790u;

    // 0x15b790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15b798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b79c: 0xc056d78  jal         func_15B5E0
    ctx->pc = 0x15B79Cu;
    SET_GPR_U32(ctx, 31, 0x15B7A4u);
    ctx->pc = 0x15B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B79Cu;
    // 0x15b7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B5E0u, 0x15B79Cu, 0x15B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B7A4u;
label_15b7a4:
    // 0x15b7a4: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15b7a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15b7a8: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x15B7A8u;
    {
        const bool branch_taken_0x15b7a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b7a8) {
            ctx->pc = 0x15B7FCu;
            goto label_15b7fc;
        }
    }
    ctx->pc = 0x15B7B0u;
    // 0x15b7b0: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x15b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x15b7b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b7b8: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x15b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x15b7bc: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x15b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x15b7c0: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x15b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x15b7c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b7c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b7cc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x15b7ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15b7d0: 0x0  nop
    ctx->pc = 0x15b7d0u;
    // NOP
    // 0x15b7d4: 0x0  nop
    ctx->pc = 0x15b7d4u;
    // NOP
    // 0x15b7d8: 0x1810  mfhi        $v1
    ctx->pc = 0x15b7d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15b7dc: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x15b7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x15b7e0: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x15b7e4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x15b7e8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B7E8u;
    {
        const bool branch_taken_0x15b7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7E8u;
        // 0x15b7ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7e8) {
            ctx->pc = 0x15B7F4u;
            goto label_15b7f4;
        }
    }
    ctx->pc = 0x15B7F0u;
    // 0x15b7f0: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x15b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
label_15b7f4:
    // 0x15b7f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B7F4u;
    {
        const bool branch_taken_0x15b7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B7F4u;
        // 0x15b7f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b7f4) {
            ctx->pc = 0x15B804u;
            goto label_15b804;
        }
    }
    ctx->pc = 0x15B7FCu;
label_15b7fc:
    // 0x15b7fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15b800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b804:
    // 0x15b804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b808: 0x3e00008  jr          $ra
    ctx->pc = 0x15B808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B808u;
        // 0x15b80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B810u;
}
