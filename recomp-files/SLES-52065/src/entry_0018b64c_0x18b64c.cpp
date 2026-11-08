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

// Function: entry_0018b64c
// Address: 0x18b64c - 0x18b694
void entry_0018b64c_0x18b64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b64c_0x18b64c");
#endif

    switch (ctx->pc) {
        case 0x18b660u: goto label_18b660;
        case 0x18b674u: goto label_18b674;
        case 0x18b684u: goto label_18b684;
        default: break;
    }

    ctx->pc = 0x18b64cu;

label_18b64c:
    // 0x18b64c: 0x8ea60024  lw          $a2, 0x24($s5)
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x18b650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b654: 0x8ea70020  lw          $a3, 0x20($s5)
    ctx->pc = 0x18b654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b658: 0xc0532f0  jal         func_14CBC0
    ctx->pc = 0x18B658u;
    SET_GPR_U32(ctx, 31, 0x18B660u);
    ctx->pc = 0x18B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B658u;
    // 0x18b65c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBC0u, 0x18B658u, 0x18B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B660u;
label_18b660:
    // 0x18b660: 0xc6ac0028  lwc1        $f12, 0x28($s5)
    ctx->pc = 0x18b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b664: 0x8ea50024  lw          $a1, 0x24($s5)
    ctx->pc = 0x18b664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x18b668: 0x8ea60020  lw          $a2, 0x20($s5)
    ctx->pc = 0x18b668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b66c: 0xc053444  jal         func_14D110
    ctx->pc = 0x18B66Cu;
    SET_GPR_U32(ctx, 31, 0x18B674u);
    ctx->pc = 0x18B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B66Cu;
    // 0x18b670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D110u, 0x18B66Cu, 0x18B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B674u;
label_18b674:
    // 0x18b674: 0xc6ac002c  lwc1        $f12, 0x2C($s5)
    ctx->pc = 0x18b674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b678: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x18b678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18b67c: 0xc053428  jal         func_14D0A0
    ctx->pc = 0x18B67Cu;
    SET_GPR_U32(ctx, 31, 0x18B684u);
    ctx->pc = 0x18B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B67Cu;
    // 0x18b680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0A0u, 0x18B67Cu, 0x18B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B684u;
label_18b684:
    // 0x18b684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18b684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18b688: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x18b688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b68c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18B68Cu;
    {
        const bool branch_taken_0x18b68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B68Cu;
        // 0x18b690: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b68c) {
            ctx->pc = 0x18B64Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b64c;
        }
    }
    ctx->pc = 0x18B694u;
}
