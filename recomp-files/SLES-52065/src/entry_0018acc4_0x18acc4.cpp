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

// Function: entry_0018acc4
// Address: 0x18acc4 - 0x18acf4
void entry_0018acc4_0x18acc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018acc4_0x18acc4");
#endif

    switch (ctx->pc) {
        case 0x18acecu: goto label_18acec;
        default: break;
    }

    ctx->pc = 0x18acc4u;

    // 0x18acc4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x18acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x18acc8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18accc: 0x24530080  addiu       $s3, $v0, 0x80
    ctx->pc = 0x18acccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x18acd0: 0x80420080  lb          $v0, 0x80($v0)
    ctx->pc = 0x18acd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18acd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18ACD4u;
    {
        const bool branch_taken_0x18acd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACD4u;
        // 0x18acd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acd4) {
            ctx->pc = 0x18ACF4u;
            return;
        }
    }
    ctx->pc = 0x18ACDCu;
    // 0x18acdc: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x18acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x18ace0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18ace4: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18ACE4u;
    SET_GPR_U32(ctx, 31, 0x18ACECu);
    ctx->pc = 0x18ACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACE4u;
    // 0x18ace8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18ACE4u, 0x18ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ACECu;
label_18acec:
    // 0x18acec: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x18acecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18acf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18acf4u;
}
