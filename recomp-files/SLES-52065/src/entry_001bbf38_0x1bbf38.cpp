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

// Function: entry_001bbf38
// Address: 0x1bbf38 - 0x1bbf9c
void entry_001bbf38_0x1bbf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbf38_0x1bbf38");
#endif

    switch (ctx->pc) {
        case 0x1bbf64u: goto label_1bbf64;
        default: break;
    }

    ctx->pc = 0x1bbf38u;

    // 0x1bbf38: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1bbf38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbf3c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1bbf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1bbf40: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1bbf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf44: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1bbf44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bbf48: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1bbf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bbf4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1bbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bbf50: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1bbf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1bbf54: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1bbf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1bbf58: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x1bbf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1bbf5c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BBF5Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF64u);
    ctx->pc = 0x1BBF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF5Cu;
    // 0x1bbf60: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BBF5Cu, 0x1BBF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF64u;
label_1bbf64:
    // 0x1bbf64: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bbf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bbf68: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1bbf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1bbf6c: 0x90233010  lbu         $v1, 0x3010($at)
    ctx->pc = 0x1bbf6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213010u));
    // 0x1bbf70: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1bbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1bbf74: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1bbf74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbf78: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1bbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1bbf7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbf80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bbf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bbf84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBF84u;
    {
        const bool branch_taken_0x1bbf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf84) {
            ctx->pc = 0x1BBFA4u;
            return;
        }
    }
    ctx->pc = 0x1BBF8Cu;
    // 0x1bbf8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBF8Cu;
    {
        const bool branch_taken_0x1bbf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf8c) {
            ctx->pc = 0x1BBF9Cu;
            return;
        }
    }
    ctx->pc = 0x1BBF94u;
    // 0x1bbf94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBF94u;
    {
        const bool branch_taken_0x1bbf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF94u;
        // 0x1bbf98: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf94) {
            ctx->pc = 0x1BBFA4u;
            return;
        }
    }
    ctx->pc = 0x1BBF9Cu;
}
