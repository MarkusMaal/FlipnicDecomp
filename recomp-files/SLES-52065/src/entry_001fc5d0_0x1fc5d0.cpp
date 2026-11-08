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

// Function: entry_001fc5d0
// Address: 0x1fc5d0 - 0x1fc600
void entry_001fc5d0_0x1fc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc5d0_0x1fc5d0");
#endif

    ctx->pc = 0x1fc5d0u;

label_1fc5d0:
    // 0x1fc5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc5d4:
    // 0x1fc5d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1fc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1fc5d8:
    // 0x1fc5d8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1fc5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1fc5dc:
    // 0x1fc5dc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1fc5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1fc5e0:
    // 0x1fc5e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1fc5e4:
    if (ctx->pc == 0x1FC5E4u) {
        ctx->pc = 0x1FC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5E0u;
        // 0x1fc5e4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC5E8u;
        goto label_1fc5e8;
    }
    ctx->pc = 0x1FC5E0u;
    {
        const bool branch_taken_0x1fc5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5E0u;
        // 0x1fc5e4: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5e0) {
            ctx->pc = 0x1FC664u;
            return;
        }
    }
    ctx->pc = 0x1FC5E8u;
label_1fc5e8:
    // 0x1fc5e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fc5ec:
    // 0x1fc5ec: 0x24424f20  addiu       $v0, $v0, 0x4F20
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20256));
label_1fc5f0:
    // 0x1fc5f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fc5f4:
    // 0x1fc5f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fc5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fc5f8:
    // 0x1fc5f8: 0x800008  jr          $a0
label_1fc5fc:
    if (ctx->pc == 0x1FC5FCu) {
        ctx->pc = 0x1FC600u;
        goto label_fallthrough_0x1fc5f8;
    }
    ctx->pc = 0x1FC5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1fc5f8:
    ctx->pc = 0x1FC600u;
}
