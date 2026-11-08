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

// Function: entry_0017ecd0
// Address: 0x17ecd0 - 0x17ed34
void entry_0017ecd0_0x17ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ecd0_0x17ecd0");
#endif

    switch (ctx->pc) {
        case 0x17ed20u: goto label_17ed20;
        default: break;
    }

    ctx->pc = 0x17ecd0u;

    // 0x17ecd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17ecd4: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x17ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17ecd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17ecdc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x17ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17ece0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17ece4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17ece8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17ecec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ecf0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ecf4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17ecf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ecf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17ecfc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17ecfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ed04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17ed04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ed0c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17ed0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ed14: 0x8c47001c  lw          $a3, 0x1C($v0)
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x17ed18: 0xc05fb00  jal         func_17EC00
    ctx->pc = 0x17ED18u;
    SET_GPR_U32(ctx, 31, 0x17ED20u);
    ctx->pc = 0x17ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ED18u;
    // 0x17ed1c: 0x2451001c  addiu       $s1, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17ED18u, 0x17ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED20u;
label_17ed20:
    // 0x17ed20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ed20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed24: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17ED24u;
    {
        const bool branch_taken_0x17ed24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED24u;
        // 0x17ed28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed24) {
            ctx->pc = 0x17ED34u;
            return;
        }
    }
    ctx->pc = 0x17ED2Cu;
    // 0x17ed2c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x17ED2Cu;
    {
        const bool branch_taken_0x17ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED2Cu;
        // 0x17ed30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed2c) {
            ctx->pc = 0x17EDFCu;
            return;
        }
    }
    ctx->pc = 0x17ED34u;
}
