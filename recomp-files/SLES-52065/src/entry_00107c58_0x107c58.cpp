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

// Function: entry_00107c58
// Address: 0x107c58 - 0x107cb0
void entry_00107c58_0x107c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107c58_0x107c58");
#endif

    switch (ctx->pc) {
        case 0x107c9cu: goto label_107c9c;
        case 0x107ca8u: goto label_107ca8;
        default: break;
    }

    ctx->pc = 0x107c58u;

    // 0x107c58: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107c5c: 0x2463fd90  addiu       $v1, $v1, -0x270
    ctx->pc = 0x107c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966672));
    // 0x107c60: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x107c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x107c64: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107c68: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x107C68u;
    {
        const bool branch_taken_0x107c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x107c68) {
            ctx->pc = 0x107E98u;
            return;
        }
    }
    ctx->pc = 0x107C70u;
    // 0x107c70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107c74: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x107c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x107c78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x107c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107c7c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x107C7Cu;
    {
        const bool branch_taken_0x107c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x107c7c) {
            ctx->pc = 0x107CB0u;
            return;
        }
    }
    ctx->pc = 0x107C84u;
    // 0x107c84: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x107c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x107c88: 0x2a210000  slti        $at, $s1, 0x0
    ctx->pc = 0x107c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107c8c: 0x14200082  bnez        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x107C8Cu;
    {
        const bool branch_taken_0x107c8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x107c8c) {
            ctx->pc = 0x107E98u;
            return;
        }
    }
    ctx->pc = 0x107C94u;
    // 0x107c94: 0xc062d50  jal         func_18B540
    ctx->pc = 0x107C94u;
    SET_GPR_U32(ctx, 31, 0x107C9Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x107C94u, 0x107C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C9Cu;
label_107c9c:
    // 0x107c9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ca0: 0xc062b7c  jal         func_18ADF0
    ctx->pc = 0x107CA0u;
    SET_GPR_U32(ctx, 31, 0x107CA8u);
    ctx->pc = 0x107CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CA0u;
    // 0x107ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADF0u, 0x107CA0u, 0x107CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CA8u;
label_107ca8:
    // 0x107ca8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x107CA8u;
    {
        const bool branch_taken_0x107ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ca8) {
            ctx->pc = 0x107E98u;
            return;
        }
    }
    ctx->pc = 0x107CB0u;
}
