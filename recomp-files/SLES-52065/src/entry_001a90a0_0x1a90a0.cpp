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

// Function: entry_001a90a0
// Address: 0x1a90a0 - 0x1a90e0
void entry_001a90a0_0x1a90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a90a0_0x1a90a0");
#endif

    switch (ctx->pc) {
        case 0x1a90d0u: goto label_1a90d0;
        default: break;
    }

    ctx->pc = 0x1a90a0u;

    // 0x1a90a0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1a90a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a90a4: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A90A4u;
    {
        const bool branch_taken_0x1a90a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a90a4) {
            ctx->pc = 0x1A912Cu;
            return;
        }
    }
    ctx->pc = 0x1A90ACu;
    // 0x1a90ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a90b0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A90B0u;
    {
        const bool branch_taken_0x1a90b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a90b0) {
            ctx->pc = 0x1A90E0u;
            return;
        }
    }
    ctx->pc = 0x1A90B8u;
    // 0x1a90b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a90bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a90bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a90c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a90c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a90c4: 0x26840a90  addiu       $a0, $s4, 0xA90
    ctx->pc = 0x1a90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2704));
    // 0x1a90c8: 0xc069bec  jal         func_1A6FB0
    ctx->pc = 0x1A90C8u;
    SET_GPR_U32(ctx, 31, 0x1A90D0u);
    ctx->pc = 0x1A90CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A90C8u;
    // 0x1a90cc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB0u, 0x1A90C8u, 0x1A90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A90D0u;
label_1a90d0:
    // 0x1a90d0: 0x8e8209c0  lw          $v0, 0x9C0($s4)
    ctx->pc = 0x1a90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2496)));
    // 0x1a90d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a90d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A90D8u;
    {
        const bool branch_taken_0x1a90d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90D8u;
        // 0x1a90dc: 0xae8209c0  sw          $v0, 0x9C0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90d8) {
            ctx->pc = 0x1A912Cu;
            return;
        }
    }
    ctx->pc = 0x1A90E0u;
}
