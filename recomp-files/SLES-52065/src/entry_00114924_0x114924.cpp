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

// Function: entry_00114924
// Address: 0x114924 - 0x114948
void entry_00114924_0x114924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114924_0x114924");
#endif

    switch (ctx->pc) {
        case 0x11492cu: goto label_11492c;
        default: break;
    }

    ctx->pc = 0x114924u;

    // 0x114924: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x114924u;
    SET_GPR_U32(ctx, 31, 0x11492Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x114924u, 0x11492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11492Cu;
label_11492c:
    // 0x11492c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x11492cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x114930: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x114930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114934: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x114934u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x114938: 0x0  nop
    ctx->pc = 0x114938u;
    // NOP
    // 0x11493c: 0x0  nop
    ctx->pc = 0x11493cu;
    // NOP
    // 0x114940: 0x1010  mfhi        $v0
    ctx->pc = 0x114940u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x114944: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x114944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
    ctx->pc = 0x114948u;
}
