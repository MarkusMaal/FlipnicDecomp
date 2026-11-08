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

// Function: entry_0016ba60
// Address: 0x16ba60 - 0x16ba8c
void entry_0016ba60_0x16ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba60_0x16ba60");
#endif

    ctx->pc = 0x16ba60u;

    // 0x16ba60: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16ba64: 0xaf8385fc  sw          $v1, -0x7A04($gp)
    ctx->pc = 0x16ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936060), GPR_U32(ctx, 3));
    // 0x16ba68: 0x8f8385fc  lw          $v1, -0x7A04($gp)
    ctx->pc = 0x16ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x16ba6c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x16ba6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16ba70: 0x0  nop
    ctx->pc = 0x16ba70u;
    // NOP
    // 0x16ba74: 0x0  nop
    ctx->pc = 0x16ba74u;
    // NOP
    // 0x16ba78: 0x8010  mfhi        $s0
    ctx->pc = 0x16ba78u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x16ba7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BA7Cu;
    {
        const bool branch_taken_0x16ba7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BA7Cu;
        // 0x16ba80: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ba7c) {
            ctx->pc = 0x16BA8Cu;
            return;
        }
    }
    ctx->pc = 0x16BA84u;
    // 0x16ba84: 0x16020015  bne         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BADCu;
            return;
        }
    }
    ctx->pc = 0x16BA8Cu;
}
