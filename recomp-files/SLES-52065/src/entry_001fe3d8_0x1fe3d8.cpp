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

// Function: entry_001fe3d8
// Address: 0x1fe3d8 - 0x1fe414
void entry_001fe3d8_0x1fe3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe3d8_0x1fe3d8");
#endif

    switch (ctx->pc) {
        case 0x1fe3ecu: goto label_1fe3ec;
        default: break;
    }

    ctx->pc = 0x1fe3d8u;

label_1fe3d8:
    // 0x1fe3d8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1fe3dc:
    // 0x1fe3dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fe3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3e0:
    // 0x1fe3e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3e4:
    // 0x1fe3e4: 0x60f809  jalr        $v1
label_1fe3e8:
    if (ctx->pc == 0x1FE3E8u) {
        ctx->pc = 0x1FE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E4u;
        // 0x1fe3e8: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3ECu;
        goto label_1fe3ec;
    }
    ctx->pc = 0x1FE3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FE3ECu);
        ctx->pc = 0x1FE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E4u;
        // 0x1fe3e8: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE3E4u, 0x1FE3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE3ECu;
label_1fe3ec:
    // 0x1fe3ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3f0:
    // 0x1fe3f0: 0x1a0000b4  blez        $s0, . + 4 + (0xB4 << 2)
label_1fe3f4:
    if (ctx->pc == 0x1FE3F4u) {
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F8u;
        goto label_1fe3f8;
    }
    ctx->pc = 0x1FE3F0u;
    {
        const bool branch_taken_0x1fe3f0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3f0) {
            ctx->pc = 0x1FE6C4u;
            return;
        }
    }
    ctx->pc = 0x1FE3F8u;
label_1fe3f8:
    // 0x1fe3f8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1fe3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1fe3fc:
    // 0x1fe3fc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1fe3fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1fe400:
    // 0x1fe400: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1fe404:
    // 0x1fe404: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1fe408:
    if (ctx->pc == 0x1FE408u) {
        ctx->pc = 0x1FE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE404u;
        // 0x1fe408: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE40Cu;
        goto label_1fe40c;
    }
    ctx->pc = 0x1FE404u;
    {
        const bool branch_taken_0x1fe404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE404u;
        // 0x1fe408: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe404) {
            ctx->pc = 0x1FE3A8u;
            return;
        }
    }
    ctx->pc = 0x1FE40Cu;
label_1fe40c:
    // 0x1fe40c: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1fe410:
    if (ctx->pc == 0x1FE410u) {
        ctx->pc = 0x1FE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE40Cu;
        // 0x1fe410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE414u;
        goto label_fallthrough_0x1fe40c;
    }
    ctx->pc = 0x1FE40Cu;
    {
        const bool branch_taken_0x1fe40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE40Cu;
        // 0x1fe410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe40c) {
            ctx->pc = 0x1FE6D4u;
            return;
        }
    }
label_fallthrough_0x1fe40c:
    ctx->pc = 0x1FE414u;
}
