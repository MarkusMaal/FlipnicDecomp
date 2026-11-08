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

// Function: entry_001cfa20
// Address: 0x1cfa20 - 0x1cfa5c
void entry_001cfa20_0x1cfa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfa20_0x1cfa20");
#endif

    switch (ctx->pc) {
        case 0x1cfa38u: goto label_1cfa38;
        default: break;
    }

    ctx->pc = 0x1cfa20u;

    // 0x1cfa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfa24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfa28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cfa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cfa2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cfa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cfa30: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1CFA30u;
    SET_GPR_U32(ctx, 31, 0x1CFA38u);
    ctx->pc = 0x1CFA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA30u;
    // 0x1cfa34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1CFA30u, 0x1CFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFA38u;
label_1cfa38:
    // 0x1cfa38: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1cfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cfa3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfa3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa40: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1cfa40u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cfa44: 0x0  nop
    ctx->pc = 0x1cfa44u;
    // NOP
    // 0x1cfa48: 0x0  nop
    ctx->pc = 0x1cfa48u;
    // NOP
    // 0x1cfa4c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cfa4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1cfa50: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1cfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1cfa54: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1cfa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1cfa58: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x1cfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x1cfa5cu;
}
