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

// Function: entry_001de8fc
// Address: 0x1de8fc - 0x1de938
void entry_001de8fc_0x1de8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de8fc_0x1de8fc");
#endif

    ctx->pc = 0x1de8fcu;

    // 0x1de8fc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1de8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x1de900: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1de900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de904: 0x97001a  div         $zero, $a0, $s7
    ctx->pc = 0x1de904u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de908: 0x1010  mfhi        $v0
    ctx->pc = 0x1de908u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1de90c: 0x2012  mflo        $a0
    ctx->pc = 0x1de90cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1de910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1de914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1de918: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1de918u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1de91c: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x1de91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x1de920: 0x1012  mflo        $v0
    ctx->pc = 0x1de920u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1de924: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE924u;
    {
        const bool branch_taken_0x1de924 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DE928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE924u;
        // 0x1de928: 0x1445021  addu        $t2, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de924) {
            ctx->pc = 0x1DE948u;
            return;
        }
    }
    ctx->pc = 0x1DE92Cu;
    // 0x1de92c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE92Cu;
    {
        const bool branch_taken_0x1de92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE92Cu;
        // 0x1de930: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de92c) {
            ctx->pc = 0x1DE948u;
            return;
        }
    }
    ctx->pc = 0x1DE934u;
    // 0x1de934: 0x0  nop
    ctx->pc = 0x1de934u;
    // NOP
    ctx->pc = 0x1de938u;
}
