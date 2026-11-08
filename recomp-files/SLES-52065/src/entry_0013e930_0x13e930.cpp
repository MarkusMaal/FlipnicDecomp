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

// Function: entry_0013e930
// Address: 0x13e930 - 0x13e96c
void entry_0013e930_0x13e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e930_0x13e930");
#endif

    switch (ctx->pc) {
        case 0x13e938u: goto label_13e938;
        default: break;
    }

    ctx->pc = 0x13e930u;

label_13e930:
    // 0x13e930: 0xc0802aa  jal         func_200AA8
label_13e934:
    if (ctx->pc == 0x13E934u) {
        ctx->pc = 0x13E938u;
        goto label_13e938;
    }
    ctx->pc = 0x13E930u;
    SET_GPR_U32(ctx, 31, 0x13E938u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x13E930u, 0x13E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E938u;
label_13e938:
    // 0x13e938: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x13e938u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_13e93c:
    // 0x13e93c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13e940:
    // 0x13e940: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_13e944:
    // 0x13e944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e948:
    // 0x13e948: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x13e948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_13e94c:
    // 0x13e94c: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x13e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_13e950:
    // 0x13e950: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13e954:
    // 0x13e954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e958:
    // 0x13e958: 0x1810  mfhi        $v1
    ctx->pc = 0x13e958u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_13e95c:
    // 0x13e95c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13e960:
    // 0x13e960: 0x80450004  lb          $a1, 0x4($v0)
    ctx->pc = 0x13e960u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_13e964:
    // 0x13e964: 0x320f809  jalr        $t9
label_13e968:
    if (ctx->pc == 0x13E968u) {
        ctx->pc = 0x13E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E964u;
        // 0x13e968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E96Cu;
        goto label_fallthrough_0x13e964;
    }
    ctx->pc = 0x13E964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E96Cu);
        ctx->pc = 0x13E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E964u;
        // 0x13e968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E964u, 0x13E96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13e964:
    ctx->pc = 0x13E96Cu;
}
