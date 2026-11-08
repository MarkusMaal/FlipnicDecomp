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

// Function: entry_00128674
// Address: 0x128674 - 0x1286c0
void entry_00128674_0x128674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128674_0x128674");
#endif

    switch (ctx->pc) {
        case 0x128684u: goto label_128684;
        case 0x128690u: goto label_128690;
        default: break;
    }

    ctx->pc = 0x128674u;

    // 0x128674: 0xae83012c  sw          $v1, 0x12C($s4)
    ctx->pc = 0x128674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
    // 0x128678: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x128678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12867c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12867Cu;
    SET_GPR_U32(ctx, 31, 0x128684u);
    ctx->pc = 0x128680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12867Cu;
    // 0x128680: 0xae8200a8  sw          $v0, 0xA8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12867Cu, 0x128684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128684u;
label_128684:
    // 0x128684: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128688: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128688u;
    SET_GPR_U32(ctx, 31, 0x128690u);
    ctx->pc = 0x12868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128688u;
    // 0x12868c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128688u, 0x128690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128690u;
label_128690:
    // 0x128690: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x128690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x128694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128698: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x128698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12869c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1286a0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1286A0u;
    {
        const bool branch_taken_0x1286a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1286a0) {
            ctx->pc = 0x128748u;
            return;
        }
    }
    ctx->pc = 0x1286A8u;
    // 0x1286a8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1286A8u;
    {
        const bool branch_taken_0x1286a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286A8u;
        // 0x1286ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286a8) {
            ctx->pc = 0x128704u;
            return;
        }
    }
    ctx->pc = 0x1286B0u;
    // 0x1286b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1286B0u;
    {
        const bool branch_taken_0x1286b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1286b0) {
            ctx->pc = 0x1286C0u;
            return;
        }
    }
    ctx->pc = 0x1286B8u;
    // 0x1286b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1286B8u;
    {
        const bool branch_taken_0x1286b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286B8u;
        // 0x1286bc: 0x8e820138  lw          $v0, 0x138($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286b8) {
            ctx->pc = 0x128788u;
            return;
        }
    }
    ctx->pc = 0x1286C0u;
}
