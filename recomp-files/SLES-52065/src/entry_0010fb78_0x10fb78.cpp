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

// Function: entry_0010fb78
// Address: 0x10fb78 - 0x10fba0
void entry_0010fb78_0x10fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb78_0x10fb78");
#endif

    switch (ctx->pc) {
        case 0x10fb98u: goto label_10fb98;
        default: break;
    }

    ctx->pc = 0x10fb78u;

    // 0x10fb78: 0x92240224  lbu         $a0, 0x224($s1)
    ctx->pc = 0x10fb78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x10fb7c: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x10fb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x10fb80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FB80u;
    {
        const bool branch_taken_0x10fb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb80) {
            ctx->pc = 0x10FBA0u;
            return;
        }
    }
    ctx->pc = 0x10FB88u;
    // 0x10fb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10fb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb90: 0xc043da0  jal         func_10F680
    ctx->pc = 0x10FB90u;
    SET_GPR_U32(ctx, 31, 0x10FB98u);
    ctx->pc = 0x10FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB90u;
    // 0x10fb94: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x10FB90u, 0x10FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB98u;
label_10fb98:
    // 0x10fb98: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10FB98u;
    {
        const bool branch_taken_0x10fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb98) {
            ctx->pc = 0x10FBECu;
            return;
        }
    }
    ctx->pc = 0x10FBA0u;
}
