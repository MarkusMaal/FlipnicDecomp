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

// Function: FUN_00190120
// Address: 0x190120 - 0x190190
void FUN_00190120_0x190120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190120_0x190120");
#endif

    switch (ctx->pc) {
        case 0x190120u: goto label_190120;
        case 0x190124u: goto label_190124;
        case 0x190128u: goto label_190128;
        case 0x19012cu: goto label_19012c;
        case 0x190130u: goto label_190130;
        case 0x190134u: goto label_190134;
        case 0x190138u: goto label_190138;
        case 0x19013cu: goto label_19013c;
        case 0x190140u: goto label_190140;
        case 0x190144u: goto label_190144;
        case 0x190148u: goto label_190148;
        case 0x19014cu: goto label_19014c;
        case 0x190150u: goto label_190150;
        case 0x190154u: goto label_190154;
        case 0x190158u: goto label_190158;
        case 0x19015cu: goto label_19015c;
        case 0x190160u: goto label_190160;
        case 0x190164u: goto label_190164;
        case 0x190168u: goto label_190168;
        case 0x19016cu: goto label_19016c;
        case 0x190170u: goto label_190170;
        case 0x190174u: goto label_190174;
        case 0x190178u: goto label_190178;
        case 0x19017cu: goto label_19017c;
        case 0x190180u: goto label_190180;
        case 0x190184u: goto label_190184;
        case 0x190188u: goto label_190188;
        case 0x19018cu: goto label_19018c;
        default: break;
    }

    ctx->pc = 0x190120u;

label_190120:
    // 0x190120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_190124:
    // 0x190124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_190128:
    // 0x190128: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19012c:
    // 0x19012c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x19012cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_190130:
    // 0x190130: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x190130u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_190134:
    // 0x190134: 0x1000000f  b           . + 4 + (0xF << 2)
label_190138:
    if (ctx->pc == 0x190138u) {
        ctx->pc = 0x190138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190134u;
        // 0x190138: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19013Cu;
        goto label_19013c;
    }
    ctx->pc = 0x190134u;
    {
        const bool branch_taken_0x190134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190134u;
        // 0x190138: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190134) {
            ctx->pc = 0x190174u;
            goto label_190174;
        }
    }
    ctx->pc = 0x19013Cu;
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
            goto label_190174;
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
        goto label_190174;
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
            goto label_190188;
        }
    }
    ctx->pc = 0x190174u;
label_190174:
    // 0x190174: 0x0  nop
    ctx->pc = 0x190174u;
    // NOP
label_190178:
    // 0x190178: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_19017c:
    // 0x19017c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_190180:
    if (ctx->pc == 0x190180u) {
        ctx->pc = 0x190180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19017Cu;
        // 0x190180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190184u;
        goto label_190184;
    }
    ctx->pc = 0x19017Cu;
    {
        const bool branch_taken_0x19017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19017Cu;
        // 0x190180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19017c) {
            ctx->pc = 0x19013Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19013c;
        }
    }
    ctx->pc = 0x190184u;
label_190184:
    // 0x190184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190188:
    // 0x190188: 0x3e00008  jr          $ra
label_19018c:
    if (ctx->pc == 0x19018Cu) {
        ctx->pc = 0x19018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190188u;
        // 0x19018c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190190u;
        goto label_fallthrough_0x190188;
    }
    ctx->pc = 0x190188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190188u;
        // 0x19018c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x190188:
    ctx->pc = 0x190190u;
}
