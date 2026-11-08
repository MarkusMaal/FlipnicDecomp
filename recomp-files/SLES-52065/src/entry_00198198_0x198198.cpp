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

// Function: entry_00198198
// Address: 0x198198 - 0x198204
void entry_00198198_0x198198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198198_0x198198");
#endif

    switch (ctx->pc) {
        case 0x1981b0u: goto label_1981b0;
        case 0x1981e0u: goto label_1981e0;
        default: break;
    }

    ctx->pc = 0x198198u;

    // 0x198198: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x198198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
    // 0x19819c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19819cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1981a0: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x1981A0u;
    {
        const bool branch_taken_0x1981a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981A0u;
        // 0x1981a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981a0) {
            ctx->pc = 0x198258u;
            return;
        }
    }
    ctx->pc = 0x1981A8u;
    // 0x1981a8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1981A8u;
    SET_GPR_U32(ctx, 31, 0x1981B0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1981A8u, 0x1981B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981B0u;
label_1981b0:
    // 0x1981b0: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x1981b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1981b4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1981b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1981b8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1981b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1981bc: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x1981bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x1981c0: 0x0  nop
    ctx->pc = 0x1981c0u;
    // NOP
    // 0x1981c4: 0x2010  mfhi        $a0
    ctx->pc = 0x1981c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1981c8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1981c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1981cc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1981ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1981d0: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1981D0u;
    {
        const bool branch_taken_0x1981d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1981d0) {
            ctx->pc = 0x19824Cu;
            return;
        }
    }
    ctx->pc = 0x1981D8u;
    // 0x1981d8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1981D8u;
    SET_GPR_U32(ctx, 31, 0x1981E0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1981D8u, 0x1981E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1981E0u;
label_1981e0:
    // 0x1981e0: 0x8ea70678  lw          $a3, 0x678($s5)
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x1981e4: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1981e8: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x1981e8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1981ec: 0x0  nop
    ctx->pc = 0x1981ecu;
    // NOP
    // 0x1981f0: 0x0  nop
    ctx->pc = 0x1981f0u;
    // NOP
    // 0x1981f4: 0x3010  mfhi        $a2
    ctx->pc = 0x1981f4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1981f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1981F8u;
    {
        const bool branch_taken_0x1981f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981F8u;
        // 0x1981fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981f8) {
            ctx->pc = 0x19823Cu;
            return;
        }
    }
    ctx->pc = 0x198200u;
    // 0x198200: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x198200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->pc = 0x198204u;
}
