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

// Function: entry_001a3144
// Address: 0x1a3144 - 0x1a318c
void entry_001a3144_0x1a3144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3144_0x1a3144");
#endif

    switch (ctx->pc) {
        case 0x1a3168u: goto label_1a3168;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3184u: goto label_1a3184;
        default: break;
    }

    ctx->pc = 0x1a3144u;

label_1a3144:
    // 0x1a3144: 0x8e230684  lw          $v1, 0x684($s1)
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a3148:
    // 0x1a3148: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a314c:
    // 0x1a314c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a314cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a3150:
    // 0x1a3150: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a3150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a3154:
    // 0x1a3154: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a3154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a3158:
    // 0x1a3158: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a3158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a315c:
    // 0x1a315c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1a315cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1a3160:
    // 0x1a3160: 0x320f809  jalr        $t9
label_1a3164:
    if (ctx->pc == 0x1A3164u) {
        ctx->pc = 0x1A3168u;
        goto label_1a3168;
    }
    ctx->pc = 0x1A3160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3168u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3160u, 0x1A3168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3168u;
label_1a3168:
    // 0x1a3168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a316c:
    // 0x1a316c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1a3170:
    if (ctx->pc == 0x1A3170u) {
        ctx->pc = 0x1A3174u;
        goto label_1a3174;
    }
    ctx->pc = 0x1A316Cu;
    {
        const bool branch_taken_0x1a316c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a316c) {
            ctx->pc = 0x1A31B8u;
            return;
        }
    }
    ctx->pc = 0x1A3174u;
label_1a3174:
    // 0x1a3174: 0xc069a9c  jal         func_1A6A70
label_1a3178:
    if (ctx->pc == 0x1A3178u) {
        ctx->pc = 0x1A3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3174u;
        // 0x1a3178: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A317Cu;
        goto label_1a317c;
    }
    ctx->pc = 0x1A3174u;
    SET_GPR_U32(ctx, 31, 0x1A317Cu);
    ctx->pc = 0x1A3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3174u;
    // 0x1a3178: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A3174u, 0x1A317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A317Cu;
label_1a317c:
    // 0x1a317c: 0xc063e14  jal         func_18F850
label_1a3180:
    if (ctx->pc == 0x1A3180u) {
        ctx->pc = 0x1A3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A317Cu;
        // 0x1a3180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3184u;
        goto label_1a3184;
    }
    ctx->pc = 0x1A317Cu;
    SET_GPR_U32(ctx, 31, 0x1A3184u);
    ctx->pc = 0x1A3180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A317Cu;
    // 0x1a3180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A317Cu, 0x1A3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3184u;
label_1a3184:
    // 0x1a3184: 0x1000000c  b           . + 4 + (0xC << 2)
label_1a3188:
    if (ctx->pc == 0x1A3188u) {
        ctx->pc = 0x1A318Cu;
        goto label_fallthrough_0x1a3184;
    }
    ctx->pc = 0x1A3184u;
    {
        const bool branch_taken_0x1a3184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3184) {
            ctx->pc = 0x1A31B8u;
            return;
        }
    }
label_fallthrough_0x1a3184:
    ctx->pc = 0x1A318Cu;
}
