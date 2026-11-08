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

// Function: entry_00198730
// Address: 0x198730 - 0x198788
void entry_00198730_0x198730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198730_0x198730");
#endif

    ctx->pc = 0x198730u;

    // 0x198730: 0x8f868714  lw          $a2, -0x78EC($gp)
    ctx->pc = 0x198730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x198734: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x198734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x198738: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x19873c: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x19873cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x198740: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x198740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x198744: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x198744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19874c: 0x8cc8284c  lw          $t0, 0x284C($a2)
    ctx->pc = 0x19874cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10316)));
    // 0x198750: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x198750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x198754: 0x837c2  srl         $a2, $t0, 31
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x198758: 0x0  nop
    ctx->pc = 0x198758u;
    // NOP
    // 0x19875c: 0x2810  mfhi        $a1
    ctx->pc = 0x19875cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x198760: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x198760u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x198764: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x198768: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x198768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19876c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x198770: 0xaea40670  sw          $a0, 0x670($s5)
    ctx->pc = 0x198770u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1648), GPR_U32(ctx, 4));
    // 0x198774: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x198774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x198778: 0x2810  mfhi        $a1
    ctx->pc = 0x198778u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x19877c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19877Cu;
    {
        const bool branch_taken_0x19877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19877Cu;
        // 0x198780: 0xac85284c  sw          $a1, 0x284C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10316), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19877c) {
            ctx->pc = 0x1987E0u;
            return;
        }
    }
    ctx->pc = 0x198784u;
    // 0x198784: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->pc = 0x198788u;
}
