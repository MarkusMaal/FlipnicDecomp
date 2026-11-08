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

// Function: entry_001aef64
// Address: 0x1aef64 - 0x1aef9c
void entry_001aef64_0x1aef64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aef64_0x1aef64");
#endif

    switch (ctx->pc) {
        case 0x1aef80u: goto label_1aef80;
        default: break;
    }

    ctx->pc = 0x1aef64u;

label_1aef64:
    // 0x1aef64: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1aef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1aef68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1aef68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef6c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1aef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1aef70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1aef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1aef74: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1aef74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aef78: 0xc057090  jal         func_15C240
    ctx->pc = 0x1AEF78u;
    SET_GPR_U32(ctx, 31, 0x1AEF80u);
    ctx->pc = 0x1AEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF78u;
    // 0x1aef7c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C240u, 0x1AEF78u, 0x1AEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF80u;
label_1aef80:
    // 0x1aef80: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1aef84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aef84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1aef88: 0x235182a  slt         $v1, $s1, $s5
    ctx->pc = 0x1aef88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1aef8c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1aef90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aef94: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1AEF94u;
    {
        const bool branch_taken_0x1aef94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEF94u;
        // 0x1aef98: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef94) {
            ctx->pc = 0x1AEF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aef64;
        }
    }
    ctx->pc = 0x1AEF9Cu;
}
