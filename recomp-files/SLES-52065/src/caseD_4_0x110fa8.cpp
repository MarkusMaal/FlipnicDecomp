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

// Function: caseD_4
// Address: 0x110fa8 - 0x110ff0
void caseD_4_0x110fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x110fa8");
#endif

    switch (ctx->pc) {
        case 0x110fe8u: goto label_110fe8;
        default: break;
    }

    ctx->pc = 0x110fa8u;

    // 0x110fa8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x110fac: 0x72001a  div         $zero, $v1, $s2
    ctx->pc = 0x110facu;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x110fb0: 0x0  nop
    ctx->pc = 0x110fb0u;
    // NOP
    // 0x110fb4: 0x0  nop
    ctx->pc = 0x110fb4u;
    // NOP
    // 0x110fb8: 0x1010  mfhi        $v0
    ctx->pc = 0x110fb8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x110fbc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x110FBCu;
    {
        const bool branch_taken_0x110fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110fbc) {
            ctx->pc = 0x110FF4u;
            return;
        }
    }
    ctx->pc = 0x110FC4u;
    // 0x110fc4: 0x72001a  div         $zero, $v1, $s2
    ctx->pc = 0x110fc4u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x110fc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110fcc: 0x0  nop
    ctx->pc = 0x110fccu;
    // NOP
    // 0x110fd0: 0x2812  mflo        $a1
    ctx->pc = 0x110fd0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x110fd4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x110fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110fd8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x110FD8u;
    {
        const bool branch_taken_0x110fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FD8u;
        // 0x110fdc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd8) {
            ctx->pc = 0x110FF0u;
            return;
        }
    }
    ctx->pc = 0x110FE0u;
    // 0x110fe0: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x110FE0u;
    SET_GPR_U32(ctx, 31, 0x110FE8u);
    ctx->pc = 0x110FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FE0u;
    // 0x110fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x110FE0u, 0x110FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FE8u;
label_110fe8:
    // 0x110fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x110FE8u;
    {
        const bool branch_taken_0x110fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE8u;
        // 0x110fec: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe8) {
            ctx->pc = 0x110FF8u;
            return;
        }
    }
    ctx->pc = 0x110FF0u;
}
