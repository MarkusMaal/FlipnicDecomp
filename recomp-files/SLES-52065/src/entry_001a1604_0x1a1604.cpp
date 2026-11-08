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

// Function: entry_001a1604
// Address: 0x1a1604 - 0x1a1638
void entry_001a1604_0x1a1604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1604_0x1a1604");
#endif

    switch (ctx->pc) {
        case 0x1a160cu: goto label_1a160c;
        default: break;
    }

    ctx->pc = 0x1a1604u;

    // 0x1a1604: 0xc045ae8  jal         func_116BA0
    ctx->pc = 0x1A1604u;
    SET_GPR_U32(ctx, 31, 0x1A160Cu);
    ctx->pc = 0x1A1608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1604u;
    // 0x1a1608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1A1604u, 0x1A160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A160Cu;
label_1a160c:
    // 0x1a160c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1a160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a1610: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a1614: 0x762818  mult        $a1, $v1, $s6
    ctx->pc = 0x1a1614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1a1618: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1a1618u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a161c: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x1a161cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1a1620: 0x0  nop
    ctx->pc = 0x1a1620u;
    // NOP
    // 0x1a1624: 0x2012  mflo        $a0
    ctx->pc = 0x1a1624u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1a1628: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1628u;
    {
        const bool branch_taken_0x1a1628 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1A162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1628u;
        // 0x1a162c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1628) {
            ctx->pc = 0x1A1638u;
            return;
        }
    }
    ctx->pc = 0x1A1630u;
    // 0x1a1630: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1a1630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1634: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1a1634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1a1638u;
}
