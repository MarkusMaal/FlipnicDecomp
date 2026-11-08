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

// Function: entry_0019013c
// Address: 0x19013c - 0x190174
void entry_0019013c_0x19013c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019013c_0x19013c");
#endif

    switch (ctx->pc) {
        case 0x19016cu: goto label_19016c;
        default: break;
    }

    ctx->pc = 0x19013cu;

label_19013c:
    // 0x19013c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x19013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_190140:
    // 0x190140: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x190140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_190144:
    // 0x190144: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x190144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_190148:
    // 0x190148: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x190148u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_19014c:
    // 0x19014c: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x19014cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_190150:
    // 0x190150: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x190150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
label_190154:
    // 0x190154: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x190154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_190158:
    // 0x190158: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19015c:
    if (ctx->pc == 0x19015Cu) {
        ctx->pc = 0x190160u;
        goto label_190160;
    }
    ctx->pc = 0x190158u;
    {
        const bool branch_taken_0x190158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190158) {
            ctx->pc = 0x190174u;
            return;
        }
    }
    ctx->pc = 0x190160u;
label_190160:
    // 0x190160: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x190160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_190164:
    // 0x190164: 0x40f809  jalr        $v0
label_190168:
    if (ctx->pc == 0x190168u) {
        ctx->pc = 0x190168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190164u;
        // 0x190168: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19016Cu;
        goto label_19016c;
    }
    ctx->pc = 0x190164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19016Cu);
        ctx->pc = 0x190168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190164u;
        // 0x190168: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190164u, 0x19016Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19016Cu;
label_19016c:
    // 0x19016c: 0x10000006  b           . + 4 + (0x6 << 2)
label_190170:
    if (ctx->pc == 0x190170u) {
        ctx->pc = 0x190170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19016Cu;
        // 0x190170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190174u;
        goto label_fallthrough_0x19016c;
    }
    ctx->pc = 0x19016Cu;
    {
        const bool branch_taken_0x19016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19016Cu;
        // 0x190170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19016c) {
            ctx->pc = 0x190188u;
            return;
        }
    }
label_fallthrough_0x19016c:
    ctx->pc = 0x190174u;
}
