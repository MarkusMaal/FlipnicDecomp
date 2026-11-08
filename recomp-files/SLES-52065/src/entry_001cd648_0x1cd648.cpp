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

// Function: entry_001cd648
// Address: 0x1cd648 - 0x1cd6a4
void entry_001cd648_0x1cd648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd648_0x1cd648");
#endif

    switch (ctx->pc) {
        case 0x1cd678u: goto label_1cd678;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd69cu: goto label_1cd69c;
        default: break;
    }

    ctx->pc = 0x1cd648u;

    // 0x1cd648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cd64c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1cd64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cd650: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CD650u;
    {
        const bool branch_taken_0x1cd650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD650u;
        // 0x1cd654: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd650) {
            ctx->pc = 0x1CD628u;
            return;
        }
    }
    ctx->pc = 0x1CD658u;
    // 0x1cd658: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1cd658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cd65c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1cd65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd660: 0x1453001a  bne         $v0, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CD660u;
    {
        const bool branch_taken_0x1cd660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1cd660) {
            ctx->pc = 0x1CD6CCu;
            return;
        }
    }
    ctx->pc = 0x1CD668u;
    // 0x1cd668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd66c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd670: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD670u;
    SET_GPR_U32(ctx, 31, 0x1CD678u);
    ctx->pc = 0x1CD674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD670u;
    // 0x1cd674: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD670u, 0x1CD678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD678u;
label_1cd678:
    // 0x1cd678: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CD678u;
    {
        const bool branch_taken_0x1cd678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD678u;
        // 0x1cd67c: 0xa0530008  sb          $s3, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd678) {
            ctx->pc = 0x1CD6A4u;
            return;
        }
    }
    ctx->pc = 0x1CD680u;
    // 0x1cd680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cd680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd684: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd688: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CD688u;
    SET_GPR_U32(ctx, 31, 0x1CD690u);
    ctx->pc = 0x1CD68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD688u;
    // 0x1cd68c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CD688u, 0x1CD690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD690u;
label_1cd690:
    // 0x1cd690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd694: 0xc06e764  jal         func_1B9D90
    ctx->pc = 0x1CD694u;
    SET_GPR_U32(ctx, 31, 0x1CD69Cu);
    ctx->pc = 0x1CD698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD694u;
    // 0x1cd698: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9D90u, 0x1CD694u, 0x1CD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD69Cu;
label_1cd69c:
    // 0x1cd69c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CD69Cu;
    {
        const bool branch_taken_0x1cd69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd69c) {
            ctx->pc = 0x1CD6E4u;
            return;
        }
    }
    ctx->pc = 0x1CD6A4u;
}
