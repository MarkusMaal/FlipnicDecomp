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

// Function: entry_00115c68
// Address: 0x115c68 - 0x115c94
void entry_00115c68_0x115c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c68_0x115c68");
#endif

    switch (ctx->pc) {
        case 0x115c78u: goto label_115c78;
        default: break;
    }

    ctx->pc = 0x115c68u;

    // 0x115c68: 0x501000a  bgez        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x115C68u;
    {
        const bool branch_taken_0x115c68 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x115C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C68u;
        // 0x115c6c: 0x328200ff  andi        $v0, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c68) {
            ctx->pc = 0x115C94u;
            return;
        }
    }
    ctx->pc = 0x115C70u;
    // 0x115c70: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x115C70u;
    SET_GPR_U32(ctx, 31, 0x115C78u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x115C70u, 0x115C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C78u;
label_115c78:
    // 0x115c78: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x115c78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x115c7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x115c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115c80: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x115c80u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x115c84: 0x0  nop
    ctx->pc = 0x115c84u;
    // NOP
    // 0x115c88: 0x0  nop
    ctx->pc = 0x115c88u;
    // NOP
    // 0x115c8c: 0x4010  mfhi        $t0
    ctx->pc = 0x115c8cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x115c90: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x115c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x115c94u;
}
