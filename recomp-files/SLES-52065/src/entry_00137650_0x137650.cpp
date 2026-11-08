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

// Function: entry_00137650
// Address: 0x137650 - 0x137688
void entry_00137650_0x137650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137650_0x137650");
#endif

    ctx->pc = 0x137650u;

    // 0x137650: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x137650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x137654: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x137654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x137658: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x137658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13765c: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x137660: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x137660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x137664: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x137664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x137668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137668u;
    {
        const bool branch_taken_0x137668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137668) {
            ctx->pc = 0x137688u;
            return;
        }
    }
    ctx->pc = 0x137670u;
    // 0x137670: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x137670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x137674: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x137674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x137678: 0x8f848588  lw          $a0, -0x7A78($gp)
    ctx->pc = 0x137678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x13767c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x137680: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x137680u;
    SET_GPR_U32(ctx, 31, 0x137688u);
    ctx->pc = 0x137684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137680u;
    // 0x137684: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x137680u, 0x137688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137688u;
}
