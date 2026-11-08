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

// Function: entry_00204220
// Address: 0x204220 - 0x204258
void entry_00204220_0x204220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204220_0x204220");
#endif

    switch (ctx->pc) {
        case 0x204250u: goto label_204250;
        default: break;
    }

    ctx->pc = 0x204220u;

    // 0x204220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204224: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x204224u;
    {
        const bool branch_taken_0x204224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x204228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204224u;
        // 0x204228: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204224) {
            ctx->pc = 0x2042A4u;
            return;
        }
    }
    ctx->pc = 0x20422Cu;
    // 0x20422c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x20422Cu;
    {
        const bool branch_taken_0x20422c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20422Cu;
        // 0x204230: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20422c) {
            ctx->pc = 0x204258u;
            return;
        }
    }
    ctx->pc = 0x204234u;
    // 0x204234: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x204234u;
    {
        const bool branch_taken_0x204234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x204238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204234u;
        // 0x204238: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204234) {
            ctx->pc = 0x204314u;
            return;
        }
    }
    ctx->pc = 0x20423Cu;
    // 0x20423c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204240: 0x245351e8  addiu       $s3, $v0, 0x51E8
    ctx->pc = 0x204240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 20968));
    // 0x204244: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x204244u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x204248: 0xc080748  jal         func_201D20
    ctx->pc = 0x204248u;
    SET_GPR_U32(ctx, 31, 0x204250u);
    ctx->pc = 0x20424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204248u;
    // 0x20424c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x204248u, 0x204250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204250u;
label_204250:
    // 0x204250: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x204250u;
    {
        const bool branch_taken_0x204250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204250u;
        // 0x204254: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204250) {
            ctx->pc = 0x204380u;
            return;
        }
    }
    ctx->pc = 0x204258u;
}
