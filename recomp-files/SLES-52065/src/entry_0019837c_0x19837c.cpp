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

// Function: entry_0019837c
// Address: 0x19837c - 0x1983a0
void entry_0019837c_0x19837c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019837c_0x19837c");
#endif

    ctx->pc = 0x19837cu;

    // 0x19837c: 0x0  nop
    ctx->pc = 0x19837cu;
    // NOP
    // 0x198380: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x198380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x198384: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x198384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x198388: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19838c: 0xac6201c0  sw          $v0, 0x1C0($v1)
    ctx->pc = 0x19838cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 2));
    // 0x198390: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x198390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x198394: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x198394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x198398: 0xc04231c  jal         func_108C70
    ctx->pc = 0x198398u;
    SET_GPR_U32(ctx, 31, 0x1983A0u);
    ctx->pc = 0x19839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198398u;
    // 0x19839c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C70u, 0x198398u, 0x1983A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1983A0u;
}
