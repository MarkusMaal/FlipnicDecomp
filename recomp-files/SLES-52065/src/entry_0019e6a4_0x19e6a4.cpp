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

// Function: entry_0019e6a4
// Address: 0x19e6a4 - 0x19e6ec
void entry_0019e6a4_0x19e6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e6a4_0x19e6a4");
#endif

    switch (ctx->pc) {
        case 0x19e6acu: goto label_19e6ac;
        case 0x19e6dcu: goto label_19e6dc;
        default: break;
    }

    ctx->pc = 0x19e6a4u;

label_19e6a4:
    // 0x19e6a4: 0xc04bf44  jal         func_12FD10
label_19e6a8:
    if (ctx->pc == 0x19E6A8u) {
        ctx->pc = 0x19E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A4u;
        // 0x19e6a8: 0x26640974  addiu       $a0, $s3, 0x974 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2420));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6ACu;
        goto label_19e6ac;
    }
    ctx->pc = 0x19E6A4u;
    SET_GPR_U32(ctx, 31, 0x19E6ACu);
    ctx->pc = 0x19E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E6A4u;
    // 0x19e6a8: 0x26640974  addiu       $a0, $s3, 0x974 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x19E6A4u, 0x19E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E6ACu;
label_19e6ac:
    // 0x19e6ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19e6acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e6b0:
    // 0x19e6b0: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
label_19e6b4:
    if (ctx->pc == 0x19E6B4u) {
        ctx->pc = 0x19E6B8u;
        goto label_19e6b8;
    }
    ctx->pc = 0x19E6B0u;
    {
        const bool branch_taken_0x19e6b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e6b0) {
            ctx->pc = 0x19E724u;
            return;
        }
    }
    ctx->pc = 0x19E6B8u;
label_19e6b8:
    // 0x19e6b8: 0x8e620874  lw          $v0, 0x874($s3)
    ctx->pc = 0x19e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2164)));
label_19e6bc:
    // 0x19e6bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19e6c0:
    if (ctx->pc == 0x19E6C0u) {
        ctx->pc = 0x19E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6BCu;
        // 0x19e6c0: 0x26740874  addiu       $s4, $s3, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2164));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6C4u;
        goto label_19e6c4;
    }
    ctx->pc = 0x19E6BCu;
    {
        const bool branch_taken_0x19e6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6BCu;
        // 0x19e6c0: 0x26740874  addiu       $s4, $s3, 0x874 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6bc) {
            ctx->pc = 0x19E6ECu;
            return;
        }
    }
    ctx->pc = 0x19E6C4u;
label_19e6c4:
    // 0x19e6c4: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x19e6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_19e6c8:
    // 0x19e6c8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x19e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19e6cc:
    // 0x19e6cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e6d0:
    // 0x19e6d0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_19e6d4:
    // 0x19e6d4: 0x320f809  jalr        $t9
label_19e6d8:
    if (ctx->pc == 0x19E6D8u) {
        ctx->pc = 0x19E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6D4u;
        // 0x19e6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6DCu;
        goto label_19e6dc;
    }
    ctx->pc = 0x19E6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19E6DCu);
        ctx->pc = 0x19E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6D4u;
        // 0x19e6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6D4u, 0x19E6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E6DCu;
label_19e6dc:
    // 0x19e6dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e6e0:
    // 0x19e6e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19e6e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e6e4:
    // 0x19e6e4: 0x1000000f  b           . + 4 + (0xF << 2)
label_19e6e8:
    if (ctx->pc == 0x19E6E8u) {
        ctx->pc = 0x19E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E4u;
        // 0x19e6e8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E6ECu;
        goto label_fallthrough_0x19e6e4;
    }
    ctx->pc = 0x19E6E4u;
    {
        const bool branch_taken_0x19e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E4u;
        // 0x19e6e8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6e4) {
            ctx->pc = 0x19E724u;
            return;
        }
    }
label_fallthrough_0x19e6e4:
    ctx->pc = 0x19E6ECu;
}
