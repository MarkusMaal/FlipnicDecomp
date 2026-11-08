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

// Function: entry_0013a9a4
// Address: 0x13a9a4 - 0x13a9e4
void entry_0013a9a4_0x13a9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a9a4_0x13a9a4");
#endif

    ctx->pc = 0x13a9a4u;

    // 0x13a9a4: 0x0  nop
    ctx->pc = 0x13a9a4u;
    // NOP
    // 0x13a9a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13a9ac: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x13a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x13a9b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a9b4: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x13a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13a9b8: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x13a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x13a9bc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13a9c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A9C0u;
    {
        const bool branch_taken_0x13a9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9c0) {
            ctx->pc = 0x13A9E4u;
            return;
        }
    }
    ctx->pc = 0x13A9C8u;
    // 0x13a9c8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13a9cc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x13a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13a9d0: 0x8f858588  lw          $a1, -0x7A78($gp)
    ctx->pc = 0x13a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
    // 0x13a9d4: 0x27a600dc  addiu       $a2, $sp, 0xDC
    ctx->pc = 0x13a9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x13a9d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x13a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13a9dc: 0xc04eb84  jal         func_13AE10
    ctx->pc = 0x13A9DCu;
    SET_GPR_U32(ctx, 31, 0x13A9E4u);
    ctx->pc = 0x13A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A9DCu;
    // 0x13a9e0: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AE10u, 0x13A9DCu, 0x13A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9E4u;
}
