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

// Function: entry_001def18
// Address: 0x1def18 - 0x1def48
void entry_001def18_0x1def18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001def18_0x1def18");
#endif

    switch (ctx->pc) {
        case 0x1def20u: goto label_1def20;
        case 0x1def30u: goto label_1def30;
        default: break;
    }

    ctx->pc = 0x1def18u;

    // 0x1def18: 0xc076352  jal         func_1D8D48
    ctx->pc = 0x1DEF18u;
    SET_GPR_U32(ctx, 31, 0x1DEF20u);
    ctx->pc = 0x1DEF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF18u;
    // 0x1def1c: 0x26300001  addiu       $s0, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D48u, 0x1DEF18u, 0x1DEF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF20u;
label_1def20:
    // 0x1def20: 0x26a53818  addiu       $a1, $s5, 0x3818
    ctx->pc = 0x1def20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 14360));
    // 0x1def24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1def24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def28: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1DEF28u;
    SET_GPR_U32(ctx, 31, 0x1DEF30u);
    ctx->pc = 0x1DEF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF28u;
    // 0x1def2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1DEF28u, 0x1DEF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF30u;
label_1def30:
    // 0x1def30: 0x26853820  addiu       $a1, $s4, 0x3820
    ctx->pc = 0x1def30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 14368));
    // 0x1def34: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x1def34u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1def38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1def38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1def3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def40: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DEF40u;
    {
        const bool branch_taken_0x1def40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1def40) {
            ctx->pc = 0x1DEF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEF40u;
            // 0x1def44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF48u;
            return;
        }
    }
    ctx->pc = 0x1DEF48u;
}
