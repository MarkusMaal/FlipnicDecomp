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

// Function: entry_0013c6ac
// Address: 0x13c6ac - 0x13c700
void entry_0013c6ac_0x13c6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c6ac_0x13c6ac");
#endif

    switch (ctx->pc) {
        case 0x13c6c8u: goto label_13c6c8;
        case 0x13c6d4u: goto label_13c6d4;
        default: break;
    }

    ctx->pc = 0x13c6acu;

label_13c6ac:
    // 0x13c6ac: 0x0  nop
    ctx->pc = 0x13c6acu;
    // NOP
label_13c6b0:
    // 0x13c6b0: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x13c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_13c6b4:
    // 0x13c6b4: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x13c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_13c6b8:
    // 0x13c6b8: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x13c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
label_13c6bc:
    // 0x13c6bc: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_13c6c0:
    // 0x13c6c0: 0xc04c558  jal         func_131560
label_13c6c4:
    if (ctx->pc == 0x13C6C4u) {
        ctx->pc = 0x13C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6C0u;
        // 0x13c6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6C8u;
        goto label_13c6c8;
    }
    ctx->pc = 0x13C6C0u;
    SET_GPR_U32(ctx, 31, 0x13C6C8u);
    ctx->pc = 0x13C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6C0u;
    // 0x13c6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x13C6C0u, 0x13C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6C8u;
label_13c6c8:
    // 0x13c6c8: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x13c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_13c6cc:
    // 0x13c6cc: 0xc04d130  jal         func_1344C0
label_13c6d0:
    if (ctx->pc == 0x13C6D0u) {
        ctx->pc = 0x13C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6CCu;
        // 0x13c6d0: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6D4u;
        goto label_13c6d4;
    }
    ctx->pc = 0x13C6CCu;
    SET_GPR_U32(ctx, 31, 0x13C6D4u);
    ctx->pc = 0x13C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6CCu;
    // 0x13c6d0: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344C0u, 0x13C6CCu, 0x13C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6D4u;
label_13c6d4:
    // 0x13c6d4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x13c6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13c6d8:
    // 0x13c6d8: 0x92620188  lbu         $v0, 0x188($s3)
    ctx->pc = 0x13c6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 392)));
label_13c6dc:
    // 0x13c6dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13c6e0:
    if (ctx->pc == 0x13C6E0u) {
        ctx->pc = 0x13C6E4u;
        goto label_13c6e4;
    }
    ctx->pc = 0x13C6DCu;
    {
        const bool branch_taken_0x13c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6dc) {
            ctx->pc = 0x13C700u;
            return;
        }
    }
    ctx->pc = 0x13C6E4u;
label_13c6e4:
    // 0x13c6e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_13c6e8:
    if (ctx->pc == 0x13C6E8u) {
        ctx->pc = 0x13C6ECu;
        goto label_13c6ec;
    }
    ctx->pc = 0x13C6E4u;
    {
        const bool branch_taken_0x13c6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6e4) {
            ctx->pc = 0x13C700u;
            return;
        }
    }
    ctx->pc = 0x13C6ECu;
label_13c6ec:
    // 0x13c6ec: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x13c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_13c6f0:
    // 0x13c6f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13c6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13c6f4:
    // 0x13c6f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13c6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13c6f8:
    // 0x13c6f8: 0x320f809  jalr        $t9
label_13c6fc:
    if (ctx->pc == 0x13C6FCu) {
        ctx->pc = 0x13C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6F8u;
        // 0x13c6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C700u;
        goto label_fallthrough_0x13c6f8;
    }
    ctx->pc = 0x13C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C700u);
        ctx->pc = 0x13C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6F8u;
        // 0x13c6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C6F8u, 0x13C700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13c6f8:
    ctx->pc = 0x13C700u;
}
