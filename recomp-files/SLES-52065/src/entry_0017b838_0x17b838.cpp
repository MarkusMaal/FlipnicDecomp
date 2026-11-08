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

// Function: entry_0017b838
// Address: 0x17b838 - 0x17b854
void entry_0017b838_0x17b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b838_0x17b838");
#endif

    ctx->pc = 0x17b838u;

    // 0x17b838: 0x8e0201d4  lw          $v0, 0x1D4($s0)
    ctx->pc = 0x17b838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x17b83c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17b840: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17b840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b848: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17b84c: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17B84Cu;
    SET_GPR_U32(ctx, 31, 0x17B854u);
    ctx->pc = 0x17B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B84Cu;
    // 0x17b850: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17B84Cu, 0x17B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B854u;
}
