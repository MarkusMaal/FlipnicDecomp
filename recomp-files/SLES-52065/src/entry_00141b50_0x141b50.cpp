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

// Function: entry_00141b50
// Address: 0x141b50 - 0x141b94
void entry_00141b50_0x141b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141b50_0x141b50");
#endif

    switch (ctx->pc) {
        case 0x141b58u: goto label_141b58;
        case 0x141b8cu: goto label_141b8c;
        default: break;
    }

    ctx->pc = 0x141b50u;

label_141b50:
    // 0x141b50: 0xc0802aa  jal         func_200AA8
label_141b54:
    if (ctx->pc == 0x141B54u) {
        ctx->pc = 0x141B58u;
        goto label_141b58;
    }
    ctx->pc = 0x141B50u;
    SET_GPR_U32(ctx, 31, 0x141B58u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x141B50u, 0x141B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141B58u;
label_141b58:
    // 0x141b58: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x141b58u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_141b5c:
    // 0x141b5c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x141b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_141b60:
    // 0x141b60: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x141b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_141b64:
    // 0x141b64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141b68:
    // 0x141b68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x141b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_141b6c:
    // 0x141b6c: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x141b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_141b70:
    // 0x141b70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x141b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_141b74:
    // 0x141b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_141b78:
    // 0x141b78: 0x1810  mfhi        $v1
    ctx->pc = 0x141b78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_141b7c:
    // 0x141b7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x141b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_141b80:
    // 0x141b80: 0x80450004  lb          $a1, 0x4($v0)
    ctx->pc = 0x141b80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_141b84:
    // 0x141b84: 0x320f809  jalr        $t9
label_141b88:
    if (ctx->pc == 0x141B88u) {
        ctx->pc = 0x141B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B84u;
        // 0x141b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x141B8Cu;
        goto label_141b8c;
    }
    ctx->pc = 0x141B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141B8Cu);
        ctx->pc = 0x141B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B84u;
        // 0x141b88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B84u, 0x141B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141B8Cu;
label_141b8c:
    // 0x141b8c: 0x1000000e  b           . + 4 + (0xE << 2)
label_141b90:
    if (ctx->pc == 0x141B90u) {
        ctx->pc = 0x141B94u;
        goto label_fallthrough_0x141b8c;
    }
    ctx->pc = 0x141B8Cu;
    {
        const bool branch_taken_0x141b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b8c) {
            ctx->pc = 0x141BC8u;
            return;
        }
    }
label_fallthrough_0x141b8c:
    ctx->pc = 0x141B94u;
}
