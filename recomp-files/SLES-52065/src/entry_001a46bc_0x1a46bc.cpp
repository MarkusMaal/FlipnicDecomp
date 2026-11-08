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

// Function: entry_001a46bc
// Address: 0x1a46bc - 0x1a46ec
void entry_001a46bc_0x1a46bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a46bc_0x1a46bc");
#endif

    switch (ctx->pc) {
        case 0x1a46c4u: goto label_1a46c4;
        default: break;
    }

    ctx->pc = 0x1a46bcu;

    // 0x1a46bc: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1A46BCu;
    SET_GPR_U32(ctx, 31, 0x1A46C4u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1A46BCu, 0x1A46C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46C4u;
label_1a46c4:
    // 0x1a46c4: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1a46c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1a46c8: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x1a46cc: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1a46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a46d0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1a46d0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a46d4: 0x0  nop
    ctx->pc = 0x1a46d4u;
    // NOP
    // 0x1a46d8: 0x0  nop
    ctx->pc = 0x1a46d8u;
    // NOP
    // 0x1a46dc: 0x1810  mfhi        $v1
    ctx->pc = 0x1a46dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a46e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1A46E0u;
    {
        const bool branch_taken_0x1a46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46E0u;
        // 0x1a46e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46e0) {
            ctx->pc = 0x1A4784u;
            return;
        }
    }
    ctx->pc = 0x1A46E8u;
    // 0x1a46e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    ctx->pc = 0x1a46ecu;
}
