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

// Function: entry_001a5960
// Address: 0x1a5960 - 0x1a5990
void entry_001a5960_0x1a5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5960_0x1a5960");
#endif

    ctx->pc = 0x1a5960u;

label_1a5960:
    // 0x1a5960: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x1a5960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_1a5964:
    // 0x1a5964: 0x8c6500b0  lw          $a1, 0xB0($v1)
    ctx->pc = 0x1a5964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_1a5968:
    // 0x1a5968: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x1a5968u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1a596c:
    // 0x1a596c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1a5970:
    if (ctx->pc == 0x1A5970u) {
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A596Cu;
        // 0x1a5970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5974u;
        goto label_1a5974;
    }
    ctx->pc = 0x1A596Cu;
    {
        const bool branch_taken_0x1a596c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A596Cu;
        // 0x1a5970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a596c) {
            ctx->pc = 0x1A59C4u;
            return;
        }
    }
    ctx->pc = 0x1A5974u;
label_1a5974:
    // 0x1a5974: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1a5974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1a5978:
    // 0x1a5978: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a5978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a597c:
    // 0x1a597c: 0x24840530  addiu       $a0, $a0, 0x530
    ctx->pc = 0x1a597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1328));
label_1a5980:
    // 0x1a5980: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a5984:
    // 0x1a5984: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5988:
    // 0x1a5988: 0x600008  jr          $v1
label_1a598c:
    if (ctx->pc == 0x1A598Cu) {
        ctx->pc = 0x1A5990u;
        goto label_fallthrough_0x1a5988;
    }
    ctx->pc = 0x1A5988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5988u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1a5988:
    ctx->pc = 0x1A5990u;
}
