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

// Function: entry_001a30d0
// Address: 0x1a30d0 - 0x1a3114
void entry_001a30d0_0x1a30d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a30d0_0x1a30d0");
#endif

    switch (ctx->pc) {
        case 0x1a30f4u: goto label_1a30f4;
        case 0x1a3104u: goto label_1a3104;
        case 0x1a310cu: goto label_1a310c;
        default: break;
    }

    ctx->pc = 0x1a30d0u;

label_1a30d0:
    // 0x1a30d0: 0x8e230684  lw          $v1, 0x684($s1)
    ctx->pc = 0x1a30d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a30d4:
    // 0x1a30d4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1a30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a30d8:
    // 0x1a30d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a30d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a30dc:
    // 0x1a30dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a30e0:
    // 0x1a30e0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x1a30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1a30e4:
    // 0x1a30e4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1a30e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a30e8:
    // 0x1a30e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1a30e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1a30ec:
    // 0x1a30ec: 0x320f809  jalr        $t9
label_1a30f0:
    if (ctx->pc == 0x1A30F0u) {
        ctx->pc = 0x1A30F4u;
        goto label_1a30f4;
    }
    ctx->pc = 0x1A30ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A30F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A30ECu, 0x1A30F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A30F4u;
label_1a30f4:
    // 0x1a30f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a30f8:
    if (ctx->pc == 0x1A30F8u) {
        ctx->pc = 0x1A30FCu;
        goto label_1a30fc;
    }
    ctx->pc = 0x1A30F4u;
    {
        const bool branch_taken_0x1a30f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a30f4) {
            ctx->pc = 0x1A3114u;
            return;
        }
    }
    ctx->pc = 0x1A30FCu;
label_1a30fc:
    // 0x1a30fc: 0xc069a9c  jal         func_1A6A70
label_1a3100:
    if (ctx->pc == 0x1A3100u) {
        ctx->pc = 0x1A3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30FCu;
        // 0x1a3100: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3104u;
        goto label_1a3104;
    }
    ctx->pc = 0x1A30FCu;
    SET_GPR_U32(ctx, 31, 0x1A3104u);
    ctx->pc = 0x1A3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30FCu;
    // 0x1a3100: 0x26240670  addiu       $a0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A70u, 0x1A30FCu, 0x1A3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3104u;
label_1a3104:
    // 0x1a3104: 0xc063e14  jal         func_18F850
label_1a3108:
    if (ctx->pc == 0x1A3108u) {
        ctx->pc = 0x1A3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3104u;
        // 0x1a3108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A310Cu;
        goto label_1a310c;
    }
    ctx->pc = 0x1A3104u;
    SET_GPR_U32(ctx, 31, 0x1A310Cu);
    ctx->pc = 0x1A3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3104u;
    // 0x1a3108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A3104u, 0x1A310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A310Cu;
label_1a310c:
    // 0x1a310c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a3110:
    if (ctx->pc == 0x1A3110u) {
        ctx->pc = 0x1A3114u;
        goto label_fallthrough_0x1a310c;
    }
    ctx->pc = 0x1A310Cu;
    {
        const bool branch_taken_0x1a310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a310c) {
            ctx->pc = 0x1A31B8u;
            return;
        }
    }
label_fallthrough_0x1a310c:
    ctx->pc = 0x1A3114u;
}
