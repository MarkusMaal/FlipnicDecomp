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

// Function: entry_001d3e3c
// Address: 0x1d3e3c - 0x1d3ea8
void entry_001d3e3c_0x1d3e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e3c_0x1d3e3c");
#endif

    ctx->pc = 0x1d3e3cu;

    // 0x1d3e3c: 0x8c480240  lw          $t0, 0x240($v0)
    ctx->pc = 0x1d3e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x1d3e40: 0x246c0478  addiu       $t4, $v1, 0x478
    ctx->pc = 0x1d3e40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1144));
    // 0x1d3e44: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1d3e48: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1d3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d3e4c: 0x8d460244  lw          $a2, 0x244($t2)
    ctx->pc = 0x1d3e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 580)));
    // 0x1d3e50: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1d3e50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e54: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x1d3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x1d3e58: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1d3e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e5c: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x1d3e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d3e60: 0x24083fff  addiu       $t0, $zero, 0x3FFF
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1d3e64: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1d3e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3e68: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3e6c: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x1d3e6cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d3e70: 0x7047001a  div1        $zero, $v0, $a3
    ctx->pc = 0x1d3e70u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1d3e74: 0x2012  mflo        $a0
    ctx->pc = 0x1d3e74u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3e78: 0x70001012  mflo1       $v0
    ctx->pc = 0x1d3e78u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x1d3e7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d3e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e84: 0x28a34000  slti        $v1, $a1, 0x4000
    ctx->pc = 0x1d3e84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1d3e88: 0x28e24000  slti        $v0, $a3, 0x4000
    ctx->pc = 0x1d3e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1d3e8c: 0x103280a  movz        $a1, $t0, $v1
    ctx->pc = 0x1d3e8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x1d3e90: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3E90u;
    {
        const bool branch_taken_0x1d3e90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E90u;
        // 0x1d3e94: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e90) {
            ctx->pc = 0x1D3EA8u;
            return;
        }
    }
    ctx->pc = 0x1D3E98u;
    // 0x1d3e98: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3ea0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3EA0u;
    {
        const bool branch_taken_0x1d3ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EA0u;
        // 0x1d3ea4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ea0) {
            ctx->pc = 0x1D3EF0u;
            return;
        }
    }
    ctx->pc = 0x1D3EA8u;
}
