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

// Function: entry_0016d028
// Address: 0x16d028 - 0x16d048
void entry_0016d028_0x16d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d028_0x16d028");
#endif

    ctx->pc = 0x16d028u;

label_16d028:
    // 0x16d028: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x16d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_16d02c:
    // 0x16d02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d030:
    // 0x16d030: 0xa44001e8  sh          $zero, 0x1E8($v0)
    ctx->pc = 0x16d030u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 488), (uint16_t)GPR_U32(ctx, 0));
label_16d034:
    // 0x16d034: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x16d034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
label_16d038:
    // 0x16d038: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d03c:
    // 0x16d03c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16d03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16d040:
    // 0x16d040: 0x320f809  jalr        $t9
label_16d044:
    if (ctx->pc == 0x16D044u) {
        ctx->pc = 0x16D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D040u;
        // 0x16d044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D048u;
        goto label_fallthrough_0x16d040;
    }
    ctx->pc = 0x16D040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D048u);
        ctx->pc = 0x16D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D040u;
        // 0x16d044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D040u, 0x16D048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16d040:
    ctx->pc = 0x16D048u;
}
