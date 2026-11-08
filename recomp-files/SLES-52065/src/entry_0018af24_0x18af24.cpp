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

// Function: entry_0018af24
// Address: 0x18af24 - 0x18af50
void entry_0018af24_0x18af24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018af24_0x18af24");
#endif

    switch (ctx->pc) {
        case 0x18af3cu: goto label_18af3c;
        default: break;
    }

    ctx->pc = 0x18af24u;

    // 0x18af24: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18af28: 0x80420acc  lb          $v0, 0xACC($v0)
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2764)));
    // 0x18af2c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18AF2Cu;
    {
        const bool branch_taken_0x18af2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF2Cu;
        // 0x18af30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af2c) {
            ctx->pc = 0x18AFF8u;
            return;
        }
    }
    ctx->pc = 0x18AF34u;
    // 0x18af34: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x18AF34u;
    SET_GPR_U32(ctx, 31, 0x18AF3Cu);
    ctx->pc = 0x18AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AF34u;
    // 0x18af38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x18AF34u, 0x18AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF3Cu;
label_18af3c:
    // 0x18af3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18af3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18af40: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x18AF40u;
    {
        const bool branch_taken_0x18af40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF40u;
        // 0x18af44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af40) {
            ctx->pc = 0x18AF54u;
            return;
        }
    }
    ctx->pc = 0x18AF48u;
    // 0x18af48: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18AF48u;
    {
        const bool branch_taken_0x18af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF48u;
        // 0x18af4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af48) {
            ctx->pc = 0x18B00Cu;
            return;
        }
    }
    ctx->pc = 0x18AF50u;
}
