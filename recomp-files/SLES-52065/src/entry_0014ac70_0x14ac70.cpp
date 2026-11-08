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

// Function: entry_0014ac70
// Address: 0x14ac70 - 0x14acb8
void entry_0014ac70_0x14ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac70_0x14ac70");
#endif

    switch (ctx->pc) {
        case 0x14ac90u: goto label_14ac90;
        default: break;
    }

    ctx->pc = 0x14ac70u;

    // 0x14ac70: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x14ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14ac74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac78: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ac78u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ac7c: 0x0  nop
    ctx->pc = 0x14ac7cu;
    // NOP
    // 0x14ac80: 0x0  nop
    ctx->pc = 0x14ac80u;
    // NOP
    // 0x14ac84: 0x1012  mflo        $v0
    ctx->pc = 0x14ac84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x14ac88: 0xc050184  jal         func_140610
    ctx->pc = 0x14AC88u;
    SET_GPR_U32(ctx, 31, 0x14AC90u);
    ctx->pc = 0x14AC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC88u;
    // 0x14ac8c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140610u, 0x14AC88u, 0x14AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC90u;
label_14ac90:
    // 0x14ac90: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x14ac90u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14ac94: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14ac98: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x14ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x14ac9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14aca0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14aca4: 0x1810  mfhi        $v1
    ctx->pc = 0x14aca4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14aca8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14acac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14acb0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x14acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x14acb4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x14acb8u;
}
