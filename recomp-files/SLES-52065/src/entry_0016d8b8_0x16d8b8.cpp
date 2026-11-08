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

// Function: entry_0016d8b8
// Address: 0x16d8b8 - 0x16d8d8
void entry_0016d8b8_0x16d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d8b8_0x16d8b8");
#endif

    ctx->pc = 0x16d8b8u;

    // 0x16d8b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D8B8u;
    {
        const bool branch_taken_0x16d8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d8b8) {
            ctx->pc = 0x16D8D8u;
            return;
        }
    }
    ctx->pc = 0x16D8C0u;
    // 0x16d8c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16d8c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16d8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16d8cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16d8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d8d0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x16D8D0u;
    SET_GPR_U32(ctx, 31, 0x16D8D8u);
    ctx->pc = 0x16D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8D0u;
    // 0x16d8d4: 0xa060002b  sb          $zero, 0x2B($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x16D8D0u, 0x16D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8D8u;
}
