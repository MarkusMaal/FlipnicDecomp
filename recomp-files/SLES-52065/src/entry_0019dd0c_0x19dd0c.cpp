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

// Function: entry_0019dd0c
// Address: 0x19dd0c - 0x19dd3c
void entry_0019dd0c_0x19dd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd0c_0x19dd0c");
#endif

    switch (ctx->pc) {
        case 0x19dd20u: goto label_19dd20;
        default: break;
    }

    ctx->pc = 0x19dd0cu;

    // 0x19dd0c: 0x8ea30328  lw          $v1, 0x328($s5)
    ctx->pc = 0x19dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    // 0x19dd10: 0x106000e2  beqz        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x19DD10u;
    {
        const bool branch_taken_0x19dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dd10) {
            ctx->pc = 0x19E09Cu;
            return;
        }
    }
    ctx->pc = 0x19DD18u;
    // 0x19dd18: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x19DD18u;
    SET_GPR_U32(ctx, 31, 0x19DD20u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x19DD18u, 0x19DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DD20u;
label_19dd20:
    // 0x19dd20: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19dd20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19dd24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19dd28: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x19dd28u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19dd2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19dd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dd30: 0x0  nop
    ctx->pc = 0x19dd30u;
    // NOP
    // 0x19dd34: 0x3010  mfhi        $a2
    ctx->pc = 0x19dd34u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x19dd38: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x19dd3cu;
}
