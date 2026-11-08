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

// Function: entry_00146300
// Address: 0x146300 - 0x146354
void entry_00146300_0x146300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146300_0x146300");
#endif

    switch (ctx->pc) {
        case 0x146324u: goto label_146324;
        default: break;
    }

    ctx->pc = 0x146300u;

    // 0x146300: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x146300u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x146304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146308: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x146308u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14630c: 0x0  nop
    ctx->pc = 0x14630cu;
    // NOP
    // 0x146310: 0x0  nop
    ctx->pc = 0x146310u;
    // NOP
    // 0x146314: 0x1012  mflo        $v0
    ctx->pc = 0x146314u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x146318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14631c: 0xc050184  jal         func_140610
    ctx->pc = 0x14631Cu;
    SET_GPR_U32(ctx, 31, 0x146324u);
    ctx->pc = 0x146320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14631Cu;
    // 0x146320: 0x22823  negu        $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14631Cu, 0x146324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146324u;
label_146324:
    // 0x146324: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x146324u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x146328: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x146328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14632c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x14632cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x146330: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146338: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x146338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x14633c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x146340: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x146340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x146344: 0x1010  mfhi        $v0
    ctx->pc = 0x146344u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x146348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14634c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14634cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146350: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x146350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x146354u;
}
