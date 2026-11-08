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

// Function: entry_001d1258
// Address: 0x1d1258 - 0x1d127c
void entry_001d1258_0x1d1258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1258_0x1d1258");
#endif

    switch (ctx->pc) {
        case 0x1d126cu: goto label_1d126c;
        default: break;
    }

    ctx->pc = 0x1d1258u;

    // 0x1d1258: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d125c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d1260: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1d1260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1264: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1D1264u;
    SET_GPR_U32(ctx, 31, 0x1D126Cu);
    ctx->pc = 0x1D1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1264u;
    // 0x1d1268: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1D1264u, 0x1D126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D126Cu;
label_1d126c:
    // 0x1d126c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1270: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d1270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1d1274: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1d1274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1278: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1d1278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1d127cu;
}
