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

// Function: entry_001ba778
// Address: 0x1ba778 - 0x1ba7a0
void entry_001ba778_0x1ba778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba778_0x1ba778");
#endif

    ctx->pc = 0x1ba778u;

label_1ba778:
    // 0x1ba778: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_1ba77c:
    // 0x1ba77c: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1ba77cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1ba780:
    // 0x1ba780: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_1ba784:
    if (ctx->pc == 0x1BA784u) {
        ctx->pc = 0x1BA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA780u;
        // 0x1ba784: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA788u;
        goto label_1ba788;
    }
    ctx->pc = 0x1BA780u;
    {
        const bool branch_taken_0x1ba780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA780u;
        // 0x1ba784: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba780) {
            ctx->pc = 0x1BA8BCu;
            return;
        }
    }
    ctx->pc = 0x1BA788u;
label_1ba788:
    // 0x1ba788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1ba78c:
    // 0x1ba78c: 0x24a51050  addiu       $a1, $a1, 0x1050
    ctx->pc = 0x1ba78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4176));
label_1ba790:
    // 0x1ba790: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ba790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ba794:
    // 0x1ba794: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba798:
    // 0x1ba798: 0x600008  jr          $v1
label_1ba79c:
    if (ctx->pc == 0x1BA79Cu) {
        ctx->pc = 0x1BA7A0u;
        goto label_fallthrough_0x1ba798;
    }
    ctx->pc = 0x1BA798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA798u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ba798:
    ctx->pc = 0x1BA7A0u;
}
