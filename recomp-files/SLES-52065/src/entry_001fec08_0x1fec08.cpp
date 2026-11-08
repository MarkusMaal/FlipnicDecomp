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

// Function: entry_001fec08
// Address: 0x1fec08 - 0x1fec14
void entry_001fec08_0x1fec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec08_0x1fec08");
#endif

    switch (ctx->pc) {
        case 0x1fec10u: goto label_1fec10;
        default: break;
    }

    ctx->pc = 0x1fec08u;

    // 0x1fec08: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FEC08u;
    SET_GPR_U32(ctx, 31, 0x1FEC10u);
    ctx->pc = 0x1FEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC08u;
    // 0x1fec0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FEC08u, 0x1FEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC10u;
label_1fec10:
    // 0x1fec10: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1fec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->pc = 0x1fec14u;
}
