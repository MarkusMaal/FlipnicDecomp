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

// Function: entry_0010ef24
// Address: 0x10ef24 - 0x10ef54
void entry_0010ef24_0x10ef24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef24_0x10ef24");
#endif

    ctx->pc = 0x10ef24u;

label_10ef24:
    // 0x10ef24: 0x92230231  lbu         $v1, 0x231($s1)
    ctx->pc = 0x10ef24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 561)));
label_10ef28:
    // 0x10ef28: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x10ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
label_10ef2c:
    // 0x10ef2c: 0x31f3e  dsrl32      $v1, $v1, 28
    ctx->pc = 0x10ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 28));
label_10ef30:
    // 0x10ef30: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x10ef30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_10ef34:
    // 0x10ef34: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
label_10ef38:
    if (ctx->pc == 0x10EF38u) {
        ctx->pc = 0x10EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF34u;
        // 0x10ef38: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EF3Cu;
        goto label_10ef3c;
    }
    ctx->pc = 0x10EF34u;
    {
        const bool branch_taken_0x10ef34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF34u;
        // 0x10ef38: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef34) {
            ctx->pc = 0x10F10Cu;
            return;
        }
    }
    ctx->pc = 0x10EF3Cu;
label_10ef3c:
    // 0x10ef3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10ef40:
    // 0x10ef40: 0x2484e390  addiu       $a0, $a0, -0x1C70
    ctx->pc = 0x10ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960016));
label_10ef44:
    // 0x10ef44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10ef48:
    // 0x10ef48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10ef4c:
    // 0x10ef4c: 0x600008  jr          $v1
label_10ef50:
    if (ctx->pc == 0x10EF50u) {
        ctx->pc = 0x10EF54u;
        goto label_fallthrough_0x10ef4c;
    }
    ctx->pc = 0x10EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x10ef4c:
    ctx->pc = 0x10EF54u;
}
