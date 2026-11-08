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

// Function: entry_001a90f4
// Address: 0x1a90f4 - 0x1a9120
void entry_001a90f4_0x1a90f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a90f4_0x1a90f4");
#endif

    ctx->pc = 0x1a90f4u;

    // 0x1a90f4: 0x0  nop
    ctx->pc = 0x1a90f4u;
    // NOP
    // 0x1a90f8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1a90f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1a90fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A90FCu;
    {
        const bool branch_taken_0x1a90fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a90fc) {
            ctx->pc = 0x1A9120u;
            return;
        }
    }
    ctx->pc = 0x1A9104u;
    // 0x1a9104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9108: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a9108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a910c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9110: 0x26840a90  addiu       $a0, $s4, 0xA90
    ctx->pc = 0x1a9110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
    // 0x1a9114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a9114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9118: 0xc069bec  jal         func_1A6FB0
    ctx->pc = 0x1A9118u;
    SET_GPR_U32(ctx, 31, 0x1A9120u);
    ctx->pc = 0x1A911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9118u;
    // 0x1a911c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A9118u, 0x1A9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9120u;
}
