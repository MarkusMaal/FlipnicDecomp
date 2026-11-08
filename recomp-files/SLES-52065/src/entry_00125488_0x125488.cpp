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

// Function: entry_00125488
// Address: 0x125488 - 0x1254c4
void entry_00125488_0x125488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125488_0x125488");
#endif

    switch (ctx->pc) {
        case 0x125490u: goto label_125490;
        case 0x125498u: goto label_125498;
        case 0x1254bcu: goto label_1254bc;
        default: break;
    }

    ctx->pc = 0x125488u;

    // 0x125488: 0xc080702  jal         func_201C08
    ctx->pc = 0x125488u;
    SET_GPR_U32(ctx, 31, 0x125490u);
    ctx->pc = 0x12548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125488u;
    // 0x12548c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x125488u, 0x125490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125490u;
label_125490:
    // 0x125490: 0xc047a50  jal         func_11E940
    ctx->pc = 0x125490u;
    SET_GPR_U32(ctx, 31, 0x125498u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x125490u, 0x125498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125498u;
label_125498:
    // 0x125498: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x125498u;
    {
        const bool branch_taken_0x125498 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125498u;
        // 0x12549c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125498) {
            ctx->pc = 0x1254C4u;
            return;
        }
    }
    ctx->pc = 0x1254A0u;
    // 0x1254a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1254a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254a4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1254a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1254a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1254a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1254ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1254acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1254b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254b4: 0xc047580  jal         func_11D600
    ctx->pc = 0x1254B4u;
    SET_GPR_U32(ctx, 31, 0x1254BCu);
    ctx->pc = 0x1254B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254B4u;
    // 0x1254b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D600u, 0x1254B4u, 0x1254BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1254BCu;
label_1254bc:
    // 0x1254bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1254BCu;
    {
        const bool branch_taken_0x1254bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1254C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1254BCu;
        // 0x1254c0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1254bc) {
            ctx->pc = 0x1254E0u;
            return;
        }
    }
    ctx->pc = 0x1254C4u;
}
