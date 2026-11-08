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

// Function: entry_001a3114
// Address: 0x1a3114 - 0x1a3144
void entry_001a3114_0x1a3114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3114_0x1a3114");
#endif

    switch (ctx->pc) {
        case 0x1a3128u: goto label_1a3128;
        case 0x1a3130u: goto label_1a3130;
        case 0x1a313cu: goto label_1a313c;
        default: break;
    }

    ctx->pc = 0x1a3114u;

    // 0x1a3114: 0x9223067c  lbu         $v1, 0x67C($s1)
    ctx->pc = 0x1a3114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1660)));
    // 0x1a3118: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A3118u;
    {
        const bool branch_taken_0x1a3118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3118) {
            ctx->pc = 0x1A31B8u;
            return;
        }
    }
    ctx->pc = 0x1A3120u;
    // 0x1a3120: 0xc069a9c  jal         func_1A6A70
    ctx->pc = 0x1A3120u;
    SET_GPR_U32(ctx, 31, 0x1A3128u);
    ctx->pc = 0x1A3124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3120u;
    // 0x1a3124: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A3120u, 0x1A3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3128u;
label_1a3128:
    // 0x1a3128: 0xc058018  jal         func_160060
    ctx->pc = 0x1A3128u;
    SET_GPR_U32(ctx, 31, 0x1A3130u);
    ctx->pc = 0x1A312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3128u;
    // 0x1a312c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x1A3128u, 0x1A3130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3130u;
label_1a3130:
    // 0x1a3130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3134: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A3134u;
    SET_GPR_U32(ctx, 31, 0x1A313Cu);
    ctx->pc = 0x1A3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3134u;
    // 0x1a3138: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A3134u, 0x1A313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A313Cu;
label_1a313c:
    // 0x1a313c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A313Cu;
    {
        const bool branch_taken_0x1a313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a313c) {
            ctx->pc = 0x1A31B8u;
            return;
        }
    }
    ctx->pc = 0x1A3144u;
}
