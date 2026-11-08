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

// Function: caseD_8
// Address: 0x111974 - 0x1119bc
void caseD_8_0x111974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x111974");
#endif

    switch (ctx->pc) {
        case 0x1119b4u: goto label_1119b4;
        default: break;
    }

    ctx->pc = 0x111974u;

    // 0x111974: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x111974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111978: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x111978u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11197c: 0x0  nop
    ctx->pc = 0x11197cu;
    // NOP
    // 0x111980: 0x0  nop
    ctx->pc = 0x111980u;
    // NOP
    // 0x111984: 0x1010  mfhi        $v0
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x111988: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x111988u;
    {
        const bool branch_taken_0x111988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111988) {
            ctx->pc = 0x1119C0u;
            return;
        }
    }
    ctx->pc = 0x111990u;
    // 0x111990: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x111990u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x111994: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x111994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111998: 0x0  nop
    ctx->pc = 0x111998u;
    // NOP
    // 0x11199c: 0x2812  mflo        $a1
    ctx->pc = 0x11199cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1119a0: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1119a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1119a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1119A4u;
    {
        const bool branch_taken_0x1119a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119A4u;
        // 0x1119a8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119a4) {
            ctx->pc = 0x1119BCu;
            return;
        }
    }
    ctx->pc = 0x1119ACu;
    // 0x1119ac: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x1119ACu;
    SET_GPR_U32(ctx, 31, 0x1119B4u);
    ctx->pc = 0x1119B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1119ACu;
    // 0x1119b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x1119ACu, 0x1119B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119B4u;
label_1119b4:
    // 0x1119b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1119B4u;
    {
        const bool branch_taken_0x1119b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119B4u;
        // 0x1119b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119b4) {
            ctx->pc = 0x1119C4u;
            return;
        }
    }
    ctx->pc = 0x1119BCu;
}
