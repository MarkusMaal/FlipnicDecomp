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

// Function: entry_001edd0c
// Address: 0x1edd0c - 0x1edd68
void entry_001edd0c_0x1edd0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edd0c_0x1edd0c");
#endif

    switch (ctx->pc) {
        case 0x1edd14u: goto label_1edd14;
        case 0x1edd60u: goto label_1edd60;
        default: break;
    }

    ctx->pc = 0x1edd0cu;

label_1edd0c:
    // 0x1edd0c: 0xc07ae84  jal         func_1EBA10
label_1edd10:
    if (ctx->pc == 0x1EDD10u) {
        ctx->pc = 0x1EDD14u;
        goto label_1edd14;
    }
    ctx->pc = 0x1EDD0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD14u);
    ctx->pc = 0x1EBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA10u, 0x1EDD0Cu, 0x1EDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD14u;
label_1edd14:
    // 0x1edd14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1edd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1edd18:
    // 0x1edd18: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
label_1edd1c:
    if (ctx->pc == 0x1EDD1Cu) {
        ctx->pc = 0x1EDD20u;
        goto label_1edd20;
    }
    ctx->pc = 0x1EDD18u;
    {
        const bool branch_taken_0x1edd18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1edd18) {
            ctx->pc = 0x1EDD68u;
            return;
        }
    }
    ctx->pc = 0x1EDD20u;
label_1edd20:
    // 0x1edd20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1edd24:
    // 0x1edd24: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1edd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1edd28:
    // 0x1edd28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1edd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1edd2c:
    // 0x1edd2c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1edd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1edd30:
    // 0x1edd30: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1edd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1edd34:
    // 0x1edd34: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1edd34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1edd38:
    // 0x1edd38: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1edd3c:
    if (ctx->pc == 0x1EDD3Cu) {
        ctx->pc = 0x1EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD38u;
        // 0x1edd3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD40u;
        goto label_1edd40;
    }
    ctx->pc = 0x1EDD38u;
    {
        const bool branch_taken_0x1edd38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD38u;
        // 0x1edd3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd38) {
            ctx->pc = 0x1EDD9Cu;
            return;
        }
    }
    ctx->pc = 0x1EDD40u;
label_1edd40:
    // 0x1edd40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1edd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1edd44:
    // 0x1edd44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1edd48:
    // 0x1edd48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1edd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1edd4c:
    // 0x1edd4c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_1edd50:
    if (ctx->pc == 0x1EDD50u) {
        ctx->pc = 0x1EDD54u;
        goto label_1edd54;
    }
    ctx->pc = 0x1EDD4Cu;
    {
        const bool branch_taken_0x1edd4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd4c) {
            ctx->pc = 0x1EDD9Cu;
            return;
        }
    }
    ctx->pc = 0x1EDD54u;
label_1edd54:
    // 0x1edd54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1edd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1edd58:
    // 0x1edd58: 0xc0f809  jalr        $a2
label_1edd5c:
    if (ctx->pc == 0x1EDD5Cu) {
        ctx->pc = 0x1EDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD58u;
        // 0x1edd5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDD60u;
        goto label_1edd60;
    }
    ctx->pc = 0x1EDD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EDD60u);
        ctx->pc = 0x1EDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD58u;
        // 0x1edd5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDD58u, 0x1EDD60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDD60u;
label_1edd60:
    // 0x1edd60: 0x1000000e  b           . + 4 + (0xE << 2)
label_1edd64:
    if (ctx->pc == 0x1EDD64u) {
        ctx->pc = 0x1EDD68u;
        goto label_fallthrough_0x1edd60;
    }
    ctx->pc = 0x1EDD60u;
    {
        const bool branch_taken_0x1edd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd60) {
            ctx->pc = 0x1EDD9Cu;
            return;
        }
    }
label_fallthrough_0x1edd60:
    ctx->pc = 0x1EDD68u;
}
