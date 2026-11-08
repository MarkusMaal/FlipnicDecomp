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

// Function: entry_0013599c
// Address: 0x13599c - 0x1359bc
void entry_0013599c_0x13599c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013599c_0x13599c");
#endif

    ctx->pc = 0x13599cu;

    // 0x13599c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1359a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1359a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1359a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1359A4u;
    {
        const bool branch_taken_0x1359a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359a4) {
            ctx->pc = 0x1359BCu;
            return;
        }
    }
    ctx->pc = 0x1359ACu;
    // 0x1359ac: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1359acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1359b0: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x1359b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1359b4: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x1359B4u;
    SET_GPR_U32(ctx, 31, 0x1359BCu);
    ctx->pc = 0x1359B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359B4u;
    // 0x1359b8: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871D0u, 0x1359B4u, 0x1359BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359BCu;
}
