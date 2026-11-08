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

// Function: entry_001d0d48
// Address: 0x1d0d48 - 0x1d0d74
void entry_001d0d48_0x1d0d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0d48_0x1d0d48");
#endif

    switch (ctx->pc) {
        case 0x1d0d5cu: goto label_1d0d5c;
        default: break;
    }

    ctx->pc = 0x1d0d48u;

    // 0x1d0d48: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1d0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d0d4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d50: 0x3051000f  andi        $s1, $v0, 0xF
    ctx->pc = 0x1d0d50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d0d54: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D0D54u;
    SET_GPR_U32(ctx, 31, 0x1D0D5Cu);
    ctx->pc = 0x1D0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D54u;
    // 0x1d0d58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D0D54u, 0x1D0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D5Cu;
label_1d0d5c:
    // 0x1d0d5c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d0d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0d60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d68: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1d0d6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d0d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0d70: 0x24843200  addiu       $a0, $a0, 0x3200
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12800));
    ctx->pc = 0x1d0d74u;
}
