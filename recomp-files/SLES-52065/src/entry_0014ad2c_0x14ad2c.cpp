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

// Function: entry_0014ad2c
// Address: 0x14ad2c - 0x14ad80
void entry_0014ad2c_0x14ad2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ad2c_0x14ad2c");
#endif

    switch (ctx->pc) {
        case 0x14ad50u: goto label_14ad50;
        default: break;
    }

    ctx->pc = 0x14ad2cu;

    // 0x14ad2c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14ad2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14ad30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ad30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad34: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ad34u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ad38: 0x0  nop
    ctx->pc = 0x14ad38u;
    // NOP
    // 0x14ad3c: 0x0  nop
    ctx->pc = 0x14ad3cu;
    // NOP
    // 0x14ad40: 0x1012  mflo        $v0
    ctx->pc = 0x14ad40u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14ad44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14ad48: 0xc050184  jal         func_140610
    ctx->pc = 0x14AD48u;
    SET_GPR_U32(ctx, 31, 0x14AD50u);
    ctx->pc = 0x14AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AD48u;
    // 0x14ad4c: 0x22823  negu        $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14AD48u, 0x14AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AD50u;
label_14ad50:
    // 0x14ad50: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ad50u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ad54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x14ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ad58: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ad5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ad60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ad64: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x14ad68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ad6c: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x14ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x14ad70: 0x1010  mfhi        $v0
    ctx->pc = 0x14ad70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14ad74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14ad78: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ad7c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x14ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x14ad80u;
}
