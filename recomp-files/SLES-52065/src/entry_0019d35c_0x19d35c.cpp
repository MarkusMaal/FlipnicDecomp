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

// Function: entry_0019d35c
// Address: 0x19d35c - 0x19d388
void entry_0019d35c_0x19d35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d35c_0x19d35c");
#endif

    ctx->pc = 0x19d35cu;

    // 0x19d35c: 0x0  nop
    ctx->pc = 0x19d35cu;
    // NOP
    // 0x19d360: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x19d360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19d364: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x19d364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19d368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d36c: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x19d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x19d370: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d374: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x19d374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x19d378: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19d378u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d37c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19d37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d380: 0xc064cb4  jal         func_1932D0
    ctx->pc = 0x19D380u;
    SET_GPR_U32(ctx, 31, 0x19D388u);
    ctx->pc = 0x19D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D380u;
    // 0x19d384: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932D0u, 0x19D380u, 0x19D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D388u;
}
