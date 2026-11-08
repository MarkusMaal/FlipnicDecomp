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

// Function: entry_001bed90
// Address: 0x1bed90 - 0x1bee18
void entry_001bed90_0x1bed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bed90_0x1bed90");
#endif

    switch (ctx->pc) {
        case 0x1beda4u: goto label_1beda4;
        case 0x1bedccu: goto label_1bedcc;
        case 0x1bedf4u: goto label_1bedf4;
        case 0x1bee00u: goto label_1bee00;
        case 0x1bee14u: goto label_1bee14;
        default: break;
    }

    ctx->pc = 0x1bed90u;

    // 0x1bed90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bed94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed98: 0x8c22f4e8  lw          $v0, -0xB18($at)
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bed9c: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BED9Cu;
    SET_GPR_U32(ctx, 31, 0x1BEDA4u);
    ctx->pc = 0x1BEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED9Cu;
    // 0x1beda0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BED9Cu, 0x1BEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDA4u;
label_1beda4:
    // 0x1beda4: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1beda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bedacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bedb0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bedb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bedb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedb8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1bedb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bedbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bedbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bedc0: 0x254af4e8  addiu       $t2, $t2, -0xB18
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964456));
    // 0x1bedc4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BEDC4u;
    SET_GPR_U32(ctx, 31, 0x1BEDCCu);
    ctx->pc = 0x1BEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDC4u;
    // 0x1bedc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BEDC4u, 0x1BEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDCCu;
label_1bedcc:
    // 0x1bedcc: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1bedd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bedd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1bedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bedd8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1bedd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1beddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1beddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bede0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1bede0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bede4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bede4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bede8: 0x254af4e8  addiu       $t2, $t2, -0xB18
    ctx->pc = 0x1bede8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964456));
    // 0x1bedec: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BEDECu;
    SET_GPR_U32(ctx, 31, 0x1BEDF4u);
    ctx->pc = 0x1BEDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDECu;
    // 0x1bedf0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BEDECu, 0x1BEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDF4u;
label_1bedf4:
    // 0x1bedf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bedf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedf8: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BEDF8u;
    SET_GPR_U32(ctx, 31, 0x1BEE00u);
    ctx->pc = 0x1BEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDF8u;
    // 0x1bedfc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BEDF8u, 0x1BEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE00u;
label_1bee00:
    // 0x1bee00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEE00u;
    {
        const bool branch_taken_0x1bee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE00u;
        // 0x1bee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee00) {
            ctx->pc = 0x1BEE18u;
            return;
        }
    }
    ctx->pc = 0x1BEE08u;
    // 0x1bee08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee0c: 0xc06fd00  jal         func_1BF400
    ctx->pc = 0x1BEE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BEE14u);
    ctx->pc = 0x1BEE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE0Cu;
    // 0x1bee10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF400u, 0x1BEE0Cu, 0x1BEE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE14u;
label_1bee14:
    // 0x1bee14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bee18u;
}
