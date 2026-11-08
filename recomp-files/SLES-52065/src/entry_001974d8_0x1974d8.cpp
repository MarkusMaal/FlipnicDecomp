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

// Function: entry_001974d8
// Address: 0x1974d8 - 0x197508
void entry_001974d8_0x1974d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001974d8_0x1974d8");
#endif

    switch (ctx->pc) {
        case 0x1974f0u: goto label_1974f0;
        case 0x1974fcu: goto label_1974fc;
        default: break;
    }

    ctx->pc = 0x1974d8u;

label_1974d8:
    // 0x1974d8: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_1974dc:
    // 0x1974dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1974e0:
    // 0x1974e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1974e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1974e4:
    // 0x1974e4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1974e8:
    // 0x1974e8: 0x320f809  jalr        $t9
label_1974ec:
    if (ctx->pc == 0x1974ECu) {
        ctx->pc = 0x1974ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974E8u;
        // 0x1974ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974F0u;
        goto label_1974f0;
    }
    ctx->pc = 0x1974E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1974F0u);
        ctx->pc = 0x1974ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974E8u;
        // 0x1974ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1974E8u, 0x1974F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1974F0u;
label_1974f0:
    // 0x1974f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1974f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1974f4:
    // 0x1974f4: 0xc063e08  jal         func_18F820
label_1974f8:
    if (ctx->pc == 0x1974F8u) {
        ctx->pc = 0x1974F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974F4u;
        // 0x1974f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1974FCu;
        goto label_1974fc;
    }
    ctx->pc = 0x1974F4u;
    SET_GPR_U32(ctx, 31, 0x1974FCu);
    ctx->pc = 0x1974F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974F4u;
    // 0x1974f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1974F4u, 0x1974FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974FCu;
label_1974fc:
    // 0x1974fc: 0xaeb306ac  sw          $s3, 0x6AC($s5)
    ctx->pc = 0x1974fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1708), GPR_U32(ctx, 19));
label_197500:
    // 0x197500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197504:
    // 0x197504: 0xaea206a8  sw          $v0, 0x6A8($s5)
    ctx->pc = 0x197504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1704), GPR_U32(ctx, 2));
    ctx->pc = 0x197508u;
}
