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

// Function: FUN_001ebe70
// Address: 0x1ebe70 - 0x1ebf14
void FUN_001ebe70_0x1ebe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebe70_0x1ebe70");
#endif

    switch (ctx->pc) {
        case 0x1ebe80u: goto label_1ebe80;
        default: break;
    }

    ctx->pc = 0x1ebe70u;

    // 0x1ebe70: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1ebe74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ebe74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe78: 0x34e7f000  ori         $a3, $a3, 0xF000
    ctx->pc = 0x1ebe78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)61440);
    // 0x1ebe7c: 0x0  nop
    ctx->pc = 0x1ebe7cu;
    // NOP
label_1ebe80:
    // 0x1ebe80: 0xf  sync
    ctx->pc = 0x1ebe80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebe84: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x1ebe84u;
    // CACHE instruction (ignored)
    // 0x1ebe88: 0xf  sync
    ctx->pc = 0x1ebe88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebe8c: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ebe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ebe90: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ebe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ebe94: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ebe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ebe98: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ebe98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ebe9c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ebe9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ebea0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBEA0u;
    {
        const bool branch_taken_0x1ebea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebea0) {
            ctx->pc = 0x1EBEBCu;
            goto label_1ebebc;
        }
    }
    ctx->pc = 0x1EBEA8u;
    // 0x1ebea8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBEA8u;
    {
        const bool branch_taken_0x1ebea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebea8) {
            ctx->pc = 0x1EBEBCu;
            goto label_1ebebc;
        }
    }
    ctx->pc = 0x1EBEB0u;
    // 0x1ebeb0: 0xf  sync
    ctx->pc = 0x1ebeb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebeb4: 0xbcd40000  cache       0x14, 0x0($a2)
    ctx->pc = 0x1ebeb4u;
    // CACHE instruction (ignored)
    // 0x1ebeb8: 0xf  sync
    ctx->pc = 0x1ebeb8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ebebc:
    // 0x1ebebc: 0xf  sync
    ctx->pc = 0x1ebebcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebec0: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x1ebec0u;
    // CACHE instruction (ignored)
    // 0x1ebec4: 0xf  sync
    ctx->pc = 0x1ebec4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebec8: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x1ebec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x1ebecc: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1ebeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1ebed0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ebed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ebed4: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x1ebed4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ebed8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ebed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ebedc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBEDCu;
    {
        const bool branch_taken_0x1ebedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebedc) {
            ctx->pc = 0x1EBEF8u;
            goto label_1ebef8;
        }
    }
    ctx->pc = 0x1EBEE4u;
    // 0x1ebee4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBEE4u;
    {
        const bool branch_taken_0x1ebee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebee4) {
            ctx->pc = 0x1EBEF8u;
            goto label_1ebef8;
        }
    }
    ctx->pc = 0x1EBEECu;
    // 0x1ebeec: 0xf  sync
    ctx->pc = 0x1ebeecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebef0: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x1ebef0u;
    // CACHE instruction (ignored)
    // 0x1ebef4: 0xf  sync
    ctx->pc = 0x1ebef4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ebef8:
    // 0x1ebef8: 0xf  sync
    ctx->pc = 0x1ebef8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebefc: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x1ebefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1ebf00: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x1ebf00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x1ebf04: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1EBF04u;
    {
        const bool branch_taken_0x1ebf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf04) {
            ctx->pc = 0x1EBE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebe80;
        }
    }
    ctx->pc = 0x1EBF0Cu;
    // 0x1ebf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBF14u;
}
